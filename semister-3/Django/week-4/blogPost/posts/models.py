from django.db import models
from categories.models import Categories
from author.models import Author
# Create your models here.
class PostsModel(models.Model):
    title = models.CharField(max_length=200)
    content = models.TextField()
    categories=models.ManyToManyField(Categories)
    author = models.ForeignKey(Author,on_delete=models.CASCADE)
    def __str__(self) -> str:
        return self.title