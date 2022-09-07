import { Controller, Get } from "@overnightjs/core"
import { Request, Response } from "express"
// Lê um arquivo JSON utilizando importações ES6, configuradas a partir de
// module-aliases e typescript
import planetsDataset from '@static/planets_dataset.json'

// @Controller expõe os endpoints da API para o caminho, permitindo que as
// routes sejam representadas como classes
@Controller('planets')
export class StarwarsController {
    // @Get declara uma route com método Get, atuando como o método
    // app.get(...) do express
    @Get('')
    public getStarwarsPlanet(_: Request, response: Response): void {
        // Envia uma resposta usando o objeto de Response
        response.send(planetsDataset)
    }
}
