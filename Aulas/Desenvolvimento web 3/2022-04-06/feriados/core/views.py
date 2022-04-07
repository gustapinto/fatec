from datetime import date

from django.shortcuts import render


def natal(request):
    data_hoje = date.today()
    hoje_e_natal = (data_hoje.day == 25 and data_hoje.month == 12)

    contexto = {'natal': hoje_e_natal}

    return render(request, 'natal.html', contexto)
