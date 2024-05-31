from django.db import models
from category.models import CategoryModel

# Create your models here.

class TaskModel(models.Model):
    title = models.CharField(max_length=100)
    description = models.TextField()
    created_at = models.DateField(auto_now_add=True)
    isCompleted=models.BooleanField(default=False)
    category = models.ManyToManyField(CategoryModel)
    
    def __str__(self):
        return self.title
