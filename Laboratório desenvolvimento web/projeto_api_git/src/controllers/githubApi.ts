import { Controller, Get } from "@overnightjs/core";
import { GithubApiFetcher } from "@src/fetchers/githubApi";
import { GithubRepository } from "@src/models/githubApi";
import { GithubApiParser } from "@src/parsers/githubApi";

@Controller('/api/github')
export class GithubApiController {
    /**
     * Endpoint que retorna uma listagem resumida de todos os repositórios no
     * top 30
     */
    @Get('repositories')
    async getAllRepositoriesList(): Promise<Array<GithubRepository>> {
        const fetcher = new GithubApiFetcher()
        const parser = new GithubApiParser()

        const repositories: Array<any> = await fetcher.fetchTopRepositories()
        const repositoriesList = repositories.map(async (repository: any): Promise<GithubRepository> => {
            return await parser.parseFullRepositoryInfoToOnlyGetBasicInfo(fetcher, repository)
        })

        return repositoriesList
    }

    /**
     * Endpoint que retorna uma listage de mapa de calor das linguagens de
     * programação mais usadas no top 30 repositórios, seguindo o modelo:
     * [{
     *   "linguagem": porcentagem
     * }]
    */
    @Get('repositories/heatmap')
    async getLanguagesHeatmap(): Promise<Array<any>> {
        // TODO
    }
}


