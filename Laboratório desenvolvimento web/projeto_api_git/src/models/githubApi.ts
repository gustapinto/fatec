export interface GithubRepository {
    name: string,
    fullName: string,
    url: string,
    languages: Array<string>
    mostUsedLanguage: string|null
}