import { StarwarsController } from './controllers/starwars'
import { Server } from '@overnightjs/core'
import bodyParser from 'body-parser'
import { Application } from 'express'

// Instancia um servidor web express que escuta requisições na porta 3000
export class SetupServer extends Server {
    // constructor(...) é o método construtor de classes em TypeScript
    constructor(private port=3000) {
        super()
    }

    public init(): void {
        // Método que inicializa o servidor
        this.setupExpress()
        this.setupController()
    }

    public getApp(): Application {
        // Método getter que obtém o app do servidor
        return this.app
    }

    private setupExpress(): void {
        // Método que configura o express, usando um parser de JSON
        this.app.use(bodyParser.json())
    }

    private setupController(): void {
        const starwarsController = new StarwarsController()

        // Adiciona controllers no servidor
        this.addControllers(starwarsController)
    }
}

