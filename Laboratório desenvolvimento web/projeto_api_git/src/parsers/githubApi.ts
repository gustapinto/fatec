import { GithubApiFetcher } from "@src/fetchers/githubApi"
import { GithubRepository } from "@src/models/githubApi"

export class GithubApiParser {
    async parseFullRepositoryInfoToOnlyGetBasicInfo(fetcher: GithubApiFetcher, fullRepositoryInfo: any): Promise<GithubRepository> {
        const repositoryLanguages = await fetcher.fetchRepositoryLanguages(fullRepositoryInfo.full_name)
        const mostUsedLanguage = repositoryLanguages.length == 0 ? null : repositoryLanguages[0]

        return {
            name: fullRepositoryInfo.name,
            fullName: fullRepositoryInfo.full_name,
            url: fullRepositoryInfo.html_url,
            languages: repositoryLanguages,
            mostUsedLanguage: mostUsedLanguage
        }
    }
}