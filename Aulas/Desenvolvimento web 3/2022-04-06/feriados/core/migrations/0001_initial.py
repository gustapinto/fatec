# Generated by Django 4.0.3 on 2022-04-13 23:43

from django.db import migrations, models


class Migration(migrations.Migration):

    initial = True

    dependencies = [
    ]

    operations = [
        migrations.CreateModel(
            name='FeriadoModel',
            fields=[
                ('id', models.BigAutoField(auto_created=True, primary_key=True, serialize=False, verbose_name='ID')),
                ('nome', models.CharField(max_length=60, verbose_name='feriado')),
                ('dia', models.IntegerField(verbose_name='data')),
                ('mes', models.IntegerField(verbose_name='mes')),
            ],
        ),
    ]
