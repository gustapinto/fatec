import axios, { AxiosRequestConfig, AxiosResponse } from 'axios'

export class GithubApiFetcher {
    baseUrl = 'https://api.github.com'
    config: AxiosRequestConfig = {
        headers: {
            Authorization: 'Bearer ' + process.env.GITHUB_API_TOKEN as string
        }
    }

    async fetchTopRepositories(limit: number): Promise<Array<string>> {
        const endpoint = this.baseUrl + "/search/repositories?q=stars:>1&sort=stars"

        let response: AxiosResponse<any, any>

        try {
            response = await axios.get(endpoint, this.config)
        } catch (err: any) {
            return []
        }

        return response.data.items.slice(0, limit+1)
    }

    async fetchRepositoryLanguages(repositoryFullName: string): Promise<Array<string>> {
        const endpoint = this.baseUrl + "/repos/" + repositoryFullName + "/languages"

        let response: AxiosResponse<any, any>

        try {
            response = await axios.get(endpoint, this.config)
        } catch (err: any) {
            return []
        }

        if (!response.data && !response.data.length) {
            return []
        }

        return Object.keys(response.data)
    }
}
