# Generated by Django 5.0.6 on 2024-05-28 06:06

from django.db import migrations, models


class Migration(migrations.Migration):

    initial = True

    dependencies = [
    ]

    operations = [
        migrations.CreateModel(
            name='Student',
            fields=[
                ('name', models.CharField(max_length=100)),
                ('roll', models.IntegerField(primary_key=True, serialize=False)),
                ('area', models.TextField()),
            ],
        ),
    ]
