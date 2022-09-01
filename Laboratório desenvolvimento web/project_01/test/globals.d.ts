declare global {
    //eslint-disable-next-line no-var
    var testRequest: import('supertest').SuperTest<import('supertest').Test>
}

export{}