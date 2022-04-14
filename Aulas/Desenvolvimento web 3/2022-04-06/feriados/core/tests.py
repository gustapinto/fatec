from datetime import datetime

from django.test import TestCase

from .models import FeriadoModel


class FeriadoModelTest(TestCase):
    def setUp(self):
        self.feriado = 'Natal'
        self.mes = 12
        self.dia = 25

        self.cadastro = FeriadoModel(nome=self.feriado, dia=self.dia,
                                     mes=self.mes)
        self.cadastro.save()

    def test_created(self):
        self.assertTrue(FeriadoModel.objects.exists())

    def test_modificado_em(self):
        self.assertIsInstance(self.cadastro.modificado_em, datetime)

    def test_nome_feriado(self):
        self.assertEqual(self.cadastro.nome, self.feriado)

    def test_dia_feriado(self):
        self.assertEqual(self.cadastro.dia, self.dia)
