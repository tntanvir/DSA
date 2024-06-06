from django.db import models

# Create your models here.
class Categories(models.Model):
    name = models.CharField(max_length=100)
    slug = models.CharField(max_length=100,unique=True,blank=True,null=True)
    def __str__(self) -> str:
        return self.name