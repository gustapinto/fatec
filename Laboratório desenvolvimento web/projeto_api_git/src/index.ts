require('module-alias/register')

import { ApiServer } from "@src/server"

const server = new ApiServer()

server.start(3000)
