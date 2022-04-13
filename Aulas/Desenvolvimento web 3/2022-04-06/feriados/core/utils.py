from datetime import date


def contexto_feriado(feriado: str, dia: int, mes: int) -> dict:
    hoje = date.today()
    valor = (hoje.day == dia and hoje.month == mes)

    return {'feriado': feriado, 'valor': valor}
