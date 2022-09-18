import mockedRepositoryWithoutLanguages from '../mocks/mockedRepositoryWithoutLanguages.json'
import mockedRepositoryWithLanguages from '../mocks/mockedRepositoryWithLanguages.json'
import { GithubApiFetcher } from '@src/fetchers/githubApi'
import { GithubApiParser } from '@src/parsers/githubApi'

describe('Unit testing for the Github API Fetcher', (): void => {
    it('Test parseFullRepositoryInfoToOnlyGetBasicInfo on a repository with empty languages', async (): Promise<void> => {
        const parser = new GithubApiParser()
        const fetcher = new GithubApiFetcher()

        const info = await parser.parseFullRepositoryInfoToOnlyGetBasicInfo(fetcher, mockedRepositoryWithoutLanguages)

        expect(info).toEqual({
            name: 'coding-interview-university',
            fullName: 'jwasham/coding-interview-university',
            url: 'https://github.com/jwasham/coding-interview-university',
            languages: [],
            mostUsedLanguage: null
        })
    })

    it('Test parseFullRepositoryInfoToOnlyGetBasicInfo on a repository with languages', async (): Promise<void> => {
        const parser = new GithubApiParser()
        const fetcher = new GithubApiFetcher()

        const info = await parser.parseFullRepositoryInfoToOnlyGetBasicInfo(fetcher, mockedRepositoryWithLanguages)

        expect(info).toEqual({
            name: 'freeCodeCamp',
            fullName: 'freeCodeCamp/freeCodeCamp',
            url: 'https://github.com/freeCodeCamp/freeCodeCamp',
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
            mostUsedLanguage: 'TypeScript'
        })
    })
})