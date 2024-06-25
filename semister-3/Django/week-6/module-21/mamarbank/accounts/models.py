from django.db import models
from django.contrib.auth.models import User

# Create your models here.
ACCOUNT_TYPE=(('Savings', 'Savings'),('Current', 'Current'))
GENDER_TYPES=(('Male', 'Male'),('Female', 'Female'))
class UserBankAccount(models.Model):
    user = models.OneToOneField(User, related_name='account', on_delete=models.CASCADE)
    account_number = models.CharField(max_length=100)
    account_type= models.CharField(max_length=100,choices=ACCOUNT_TYPE)
    birthday = models.DateTimeField(null=True, blank=True)
    gender = models.CharField(max_length=100 ,choices=GENDER_TYPES)
    initial_deposite_date = models.DateField(auto_now_add=True)

    balance = models.DecimalField(default=0,max_digits=12,decimal_places=2) 
    

    def __str__(self) :
        return f'{self.user}--{self.account_number}'


class UserAddress(models.Model):
    user = models.OneToOneField(User, on_delete=models.CASCADE,related_name='address')
    street_address = models.CharField(max_length=100)
    city = models.CharField(max_length=100)
    postal_code = models.IntegerField()
    country = models.CharField(max_length=100)
    def __str__(self) :
        return f'{self.user}--{self.city}'