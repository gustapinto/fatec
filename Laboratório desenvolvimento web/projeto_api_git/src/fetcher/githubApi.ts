import axios, { AxiosResponse } from 'axios'

export class GithubAPIRepositoryFetcher {
    endpoint: str = 'https://api.github.com/repositories'

    async getAllRepositories(): Promise<AxiosResponse<any, any>> {
        const response = await axios.get(this.endpoint)

        return response.data
    }
}
