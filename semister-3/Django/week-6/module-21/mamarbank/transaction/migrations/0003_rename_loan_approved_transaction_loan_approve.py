# Generated by Django 5.0.6 on 2024-06-22 11:37

from django.db import migrations


class Migration(migrations.Migration):

    dependencies = [
        ('transaction', '0002_rename_balance_transaction_balance_after_transaction'),
    ]

    operations = [
        migrations.RenameField(
            model_name='transaction',
            old_name='loan_approved',
            new_name='loan_approve',
        ),
    ]
