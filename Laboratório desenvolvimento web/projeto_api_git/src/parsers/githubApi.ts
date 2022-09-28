import { GithubApiFetcher } from "@src/fetchers/githubApi"
import { GithubRepository } from "@src/models/githubApi"
import { stringify } from "querystring"

export class GithubApiParser {
    async parseRepository(fetcher: GithubApiFetcher, fullRepositoryInfo: any): Promise<GithubRepository> {
        const repositoryLanguages = await fetcher.fetchRepositoryLanguages(fullRepositoryInfo.full_name)
        const mostUsedLanguage = repositoryLanguages.length == 0 ? null : repositoryLanguages[0]

        return {
            id: fullRepositoryInfo.id,
            name: fullRepositoryInfo.name,
            fullName: fullRepositoryInfo.full_name,
            size: fullRepositoryInfo.size,
            languages: repositoryLanguages,
            languages_url: fullRepositoryInfo.languages_url
        }
    }
}