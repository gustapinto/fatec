import { resolve, join } from 'path'
import moduleAlias from 'module-alias'

const files = resolve(__dirname, '../..')

moduleAlias.addAliases({
    '@src': join(files, 'src'),
    '@test': join(files, 'test'),
    '@static': join(files, 'static')
})
