import axios from 'axios'

class GithubAPIRepositoryFetcher {
    async getAllRepositories(): Promise<Array<any>> {
        const endpoint = 'https://api.github.com/repositories'
        const response = await axios.get(endpoint)

        return response.data
    }
}
