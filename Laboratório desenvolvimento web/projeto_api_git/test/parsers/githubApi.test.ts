import mockedRepositoryWithoutLanguages from '../mocks/mockedRepositoryWithoutLanguages.json'
import mockedRepositoryWithLanguages from '../mocks/mockedRepositoryWithLanguages.json'
import mockedRepositoryInfo from '../mocks/mockedRepositoryInfo.json'
import { GithubApiFetcher } from '@src/fetchers/githubApi'
import { GithubApiParser } from '@src/parsers/githubApi'

describe('Unit testing for the Github API Fetcher', (): void => {
    it('Test parseRepository on a repository with empty languages', async (): Promise<void> => {
        const parser = new GithubApiParser()
        const fetcher = new GithubApiFetcher()

        const info = await parser.parseRepository(fetcher, mockedRepositoryWithoutLanguages)

        expect(info).toEqual({
            id: 60493101,
            name: 'coding-interview-university',
            fullName: 'jwasham/coding-interview-university',
            size: 17913,
            languages: [],
            languages_url: 'https://api.github.com/repos/jwasham/coding-interview-university/languages',
        })
    })

    it('Test parseRepository on a repository with languages', async (): Promise<void> => {
        const parser = new GithubApiParser()
        const fetcher = new GithubApiFetcher()

        const info = await parser.parseRepository(fetcher, mockedRepositoryWithLanguages)

        expect(info).toEqual({
            id: 28457823,
            name: 'freeCodeCamp',
            fullName: 'freeCodeCamp/freeCodeCamp',
            size: 344581,
            languages: [
                'TypeScript',
                'JavaScript',
                'CSS',
                'Shell',
                'Dockerfile',
                'EJS',
                'HTML',
                'Less',
            ],
            languages_url: "https://api.github.com/repos/freeCodeCamp/freeCodeCamp/languages",

        })
    })
})