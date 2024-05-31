from django.db import models
# from task.models import TaskModel

# Create your models here.
class CategoryModel(models.Model):
    name = models.CharField(max_length=100)
    # relations=models.ManyToManyField(TaskModel)
    def __str__(self):
        return self.name

