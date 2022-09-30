export interface GithubRepository {
    id: number,
    name: string,
    fullName: string,
    size: number,
    languages: Array<string>
    languages_url: string
}