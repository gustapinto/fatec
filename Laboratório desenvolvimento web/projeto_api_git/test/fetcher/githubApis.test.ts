import { GithubAPIRepositoryFetcher } from '@src/fetcher/githubApi'

describe('Unit testing for the Github API Fetcher', (): void => {
    it('Test getAllRepositories must not return a null response', async (): Promise<void> => {
        const fetcher = new GithubAPIRepositoryFetcher()
        const repositories = await fetcher.getAllRepositories()

        expect(repositories).not.toBeNull()
    })

    it('Test getAllRepositories must not return a empty Array', async (): Promise<void> => {
        const fetcher = new GithubAPIRepositoryFetcher()
        const repositories = await fetcher.getAllRepositories()

        expect(repositories).not.toBe({})
    })
})
