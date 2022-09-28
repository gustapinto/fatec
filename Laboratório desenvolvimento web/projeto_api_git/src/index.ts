require('module-alias/register')

import { GithubApiController } from "@src/controllers/githubApi"

// Usa um wrapper async para possibilitar o uso nativo de awaits em top-level
(async () => {
    const controller = new GithubApiController()
    const repositories = await controller.getTopRepositoriesAsGithubRepository()

    console.log(repositories)
})()

