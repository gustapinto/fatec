from datetime import date

from django.shortcuts import render

from .models import FeriadoModel


def feriado(request):
    hoje = date.today()

    try:
        feriado = FeriadoModel.objects.get(mes=hoje.month, dia=hoje.day)
    except FeriadoModel.DoesNotExist:
        feriado = None

    msg = f'Hoje é {feriado}' if feriado else 'Hoje não é feriado'

    return render(request, 'feriado.html', {'msg': msg, 'title'})
