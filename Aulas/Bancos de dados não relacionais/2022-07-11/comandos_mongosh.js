// Comandos e operações Mongosh

// Conectando com um banco Mongo
db = new Mongo(...)

// Exibe um documento para verificar suas propriedades
db.collection.findOne()

// Conta a quantidade de documentos em uma coleção
db.collection.countDocuments()

// Obtém todos os tipos distintos de opções em uma propriedade
db.collection.distinct('propriedade')

// Filtra os resultados retornados usando .find()
db.collection.find({chave: 'valor'})

// Retorna uma coleção de resultados ordenados
// -1 -> descendente
// 1  -> ascendente
db.collection.find({}).sort({chave: 1})

// Obtém o maior valor de uma coleção filtrada
db.collection.find({}).sort({chave: -1}).limit(1)

// Realiza uma pipeline de operações de agregação
db.collection.aggregate([
    {$operacao: {...}},
    {$operacao2: {...}},
])

// Pipeline de média com filtro (ex: maior que 10)
db.collection.aggregate([
    {
        $match: {
            'propriedade', {
                $gt: 10
            }
        }
    },
    {
        $group: {
            _id: 'coluna',
            media: {
                $avg: '$coluna'
            }
        }
    }
])
