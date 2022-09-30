import { GithubRepository } from "@src/models/githubApi";
import { GithubApiFetcher } from "@src/fetchers/githubApi";
import { GithubApiParser } from "@src/parsers/githubApi";

export class GithubApiController {
    async getTopRepositories(): Promise<Array<GithubRepository>> {
        const fetcher = new GithubApiFetcher()
        const parser = new GithubApiParser()

        const repositories: Array<any> = await fetcher.fetchTopRepositories(15)
        const repositoriesList = await Promise.all(repositories.map(async (repository: any): Promise<GithubRepository> => {
            return await parser.parseRepository(fetcher, repository)
        }))

        return repositoriesList
    }
}


