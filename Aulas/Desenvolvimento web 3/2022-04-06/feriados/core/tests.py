from abc import ABC

from django.test import TestCase


class NatalTest(TestCase):
    def setUp(self):
        self.resp = self.client.get('/')

    def test_200_response(self):
        self.assertEqual(200, self.resp.status_code)

    def test_texto(self):
        self.assertContains(self.resp, 'Natal')


class TiradentesTest(TestCase):
    def setUp(self):
        self.resp = self.client.get('/tiradentes')

    def test_200_response(self):
        self.assertEqual(200, self.resp.status_code)

    def test_texto(self):
        self.assertContains(self.resp, 'Tiradentes')


class AnoNovoTest(TestCase):
    def setUp(self):
        self.resp = self.client.get('/ano_novo')

    def test_200_response(self):
        self.assertEqual(200, self.resp.status_code)

    def test_texto(self):
        self.assertContains(self.resp, 'Ano novo')


class ProclamacaoDaRepublicaTest(TestCase):
    def setUp(self):
        self.resp = self.client.get('/proclamacao_da_republica')

    def test_200_response(self):
        self.assertEqual(200, self.resp.status_code)

    def test_texto(self):
        self.assertContains(self.resp, 'Proclamação da república')


class DiaDoTrabalhoTest(TestCase):
    def setUp(self):
        self.resp = self.client.get('/dia_do_trabalho')

    def test_200_response(self):
        self.assertEqual(200, self.resp.status_code)

    def test_texto(self):
        self.assertContains(self.resp, 'Dia do trabalho')
