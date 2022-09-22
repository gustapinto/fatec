import axios from 'axios'

export class GithubApiFetcher {
    baseUrl = 'https://api.github.com'

    async fetchTopRepositories(): Promise<Array<string>> {
        const endpoint = this.baseUrl + "/search/repositories?q=stars:>1&sort=stars"
        const response = await axios.get(endpoint)

        return response.data.items
    }

    async fetchRepositoryLanguages(repositoryFullName: string): Promise<Array<string>> {
        const endpoint = this.baseUrl + "/repos/" + repositoryFullName + "/languages"
        const response = await axios.get(endpoint)

        if (!response.data && !response.data.length) {
            return []
        }

        return Object.keys(response.data)
    }
}
