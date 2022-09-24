import { Controller, Get } from "@overnightjs/core";
import { GithubRepository } from "@src/models/githubApi";
import { GithubApiFetcher } from "@src/fetchers/githubApi";
import { GithubApiParser } from "@src/parsers/githubApi";
import { Response } from "express";

@Controller('api/github')
export class GithubApiController {
    /**
     * Endpoint que retorna uma listagem resumida de todos os repositórios no
     * top 30
     */
    @Get('repositories')
    async getAllRepositoriesList(_: any, response: Response): Promise<any> {
        const repositories = await this.getTopRepositoriesAsGithubRepository()

        return response.status(200).json(repositories)
    }

    /**
     * Endpoint que retorna uma listage de mapa de calor das linguagens de
     * programação mais usadas no top 30 repositórios, seguindo o modelo:
     * [{
     *   "linguagem": porcentagem
     * }]
    */
    @Get('repositories/heatmap')
    async getLanguagesHeatmap(_: any, response: Response): Promise<any> {
        const parser = new GithubApiParser()

        const repositories = await this.getTopRepositoriesAsGithubRepository()
        const heatmap = parser.parseBasicRepositoryInfoIntoHeatMap(repositories)

        return response.status(200).json(heatmap)
    }

    private async getTopRepositoriesAsGithubRepository(): Promise<Array<GithubRepository>> {
        const fetcher = new GithubApiFetcher()
        const parser = new GithubApiParser()

        const repositories: Array<any> = await fetcher.fetchTopRepositories(15)
        const repositoriesList = await Promise.all(repositories.map(async (repository: any): Promise<GithubRepository> => {
            return await parser.parseFullRepositoryInfoToOnlyGetBasicInfo(fetcher, repository)
        }))

        return repositoriesList
    }
}


