from .utils import contexto_feriado

from django.shortcuts import render


def natal(request):
    ctx = contexto_feriado('Natal', 25, 12)
    return render(request, 'feriado.html', ctx)


def tiradentes(request):
    ctx = contexto_feriado('Tiradentes', 21, 4)
    return render(request, 'feriado.html', ctx)


def ano_novo(request):
    ctx = contexto_feriado('Ano novo', 31, 1)
    return render(request, 'feriado.html', ctx)


def proclamacao_da_republica(request):
    ctx = contexto_feriado('Proclamação da república', 15, 11)
    return render(request, 'feriado.html', ctx)


def dia_do_trabalho(request):
    ctx = contexto_feriado('Dia do trabalho', 1, 5)
    return render(request, 'feriado.html', ctx)
