from django.urls import path
from . import views


urlpatterns = [
    path('', views.natal),
    path('tiradentes', views.tiradentes),
    path('ano_novo', views.ano_novo),
    path('proclamacao_da_republica', views.proclamacao_da_republica),
    path('dia_do_trabalho', views.dia_do_trabalho)
]
