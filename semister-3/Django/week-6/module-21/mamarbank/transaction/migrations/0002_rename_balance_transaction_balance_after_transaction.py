# Generated by Django 5.0.6 on 2024-06-22 11:36

from django.db import migrations


class Migration(migrations.Migration):

    dependencies = [
        ('transaction', '0001_initial'),
    ]

    operations = [
        migrations.RenameField(
            model_name='transaction',
            old_name='balance',
            new_name='balance_after_transaction',
        ),
    ]
