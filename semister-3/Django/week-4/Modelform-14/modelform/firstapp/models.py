from django.db import models

# Create your models here.

class Student(models.Model):
    name = models.CharField(max_length=100)
    roll= models.IntegerField(primary_key=True)
    area =models.TextField()
    father_name =models.TextField(default='Rahim')
    
    def __str__(self) :
        return f'name:{self.name} -> roll:{self.roll} -> area:{self.area} -> father_name:{self.father_name}'