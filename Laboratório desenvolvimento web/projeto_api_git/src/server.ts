import * as bodyParser from 'body-parser'

import { Server } from '@overnightjs/core'
import { GithubApiController } from '@src/controllers/githubApi'

export class ApiServer extends Server {
    constructor() {
        super()

        this.app.use(bodyParser.json())
        this.setupControllers()
    }

    public start(port: number): void {
        this.app.listen(port, () => {
            console.log('Server aberto na porta: ' + port)
        })
    }

    private setupControllers(): void {
        const githubApiController = new GithubApiController()

        super.addControllers([
            githubApiController,
        ])
    }
}
