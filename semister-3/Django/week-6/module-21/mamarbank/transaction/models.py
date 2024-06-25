from django.db import models
from accounts.models import UserBankAccount

ACCOUNT_TYPES=(
    (1,"DEPOSIT"),
    (2,"WITHDRAWAL"),
    (3,"LOAN"),
    (4,"LOAN PAID"),
    (5,"SENDMONEY"),
)
# Create your models here.
class Transaction(models.Model):
    account = models.ForeignKey(UserBankAccount,on_delete=models.CASCADE ,related_name='transactions')
    amount = models.DecimalField(max_digits=12, decimal_places=2)
    balance_after_transaction = models.DecimalField(decimal_places=2, max_digits = 12)
    transaction_type= models.IntegerField(choices=ACCOUNT_TYPES,null=True)
    timestmp=models.DateTimeField(auto_now_add=True)
    loan_approve=models.BooleanField(default=False)

    class Meta:
        ordering = ['timestmp']