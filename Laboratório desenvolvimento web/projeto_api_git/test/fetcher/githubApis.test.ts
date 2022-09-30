import { GithubApiFetcher } from '@src/fetchers/githubApi'

describe('Unit testing for the Github API Fetcher', (): void => {
    it('Test fetchTopRepositories must not return a null response', async (): Promise<void> => {
        const fetcher = new GithubApiFetcher()
        const repositories = await fetcher.fetchTopRepositories(1)

        expect(repositories).not.toBeNull()
    })

    it('Test fetchTopRepositories must not return a empty Array', async (): Promise<void> => {
        const fetcher = new GithubApiFetcher()
        const repositories = await fetcher.fetchTopRepositories(1)

        expect(repositories).not.toBe({})
    })

    it('Test fetchRepositoryLanguages must return a empty Array when there is no languages', async (): Promise<void> => {
        const fetcher = new GithubApiFetcher()
        const languages = await fetcher.fetchRepositoryLanguages('ossu/computer-science')

        expect(languages).toEqual([])
    })

    it('Test fetchRepositoryLanguages must return a Array with only the languages names when there is languages', async (): Promise<void> => {
        const fetcher = new GithubApiFetcher()
        const languages = await fetcher.fetchRepositoryLanguages('mojombo/grit')

        expect(languages.length).toEqual(1)
        expect(languages).toEqual(['Ruby'])
    })
})
