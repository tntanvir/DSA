from django.db import models
from categories.models import Categories
from django.contrib.auth.models import User
# from author.models import Author

# Create your models here.
class PostsModel(models.Model):
    title = models.CharField(max_length=200)
    content = models.TextField()
    categories=models.ManyToManyField(Categories)
    author = models.ForeignKey(User,on_delete=models.CASCADE)
    image = models.ImageField(upload_to='post/media/uploads/',blank=True,null=True)
    def __str__(self) -> str: 
        return self.title