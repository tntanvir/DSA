from django.db import models

# Create your models here.
# First Name
# Last Name
# Email
# Phone number
# Instrument Type

class MusicianForm(models.Model):
    first_name = models.CharField(max_length=50)
    last_name = models.CharField(max_length=50)
    email = models.EmailField()
    phone_number = models.CharField(max_length=50)
    instrument_type =models.CharField(max_length=20)
    def __str__(self) :
        return self.first_name
