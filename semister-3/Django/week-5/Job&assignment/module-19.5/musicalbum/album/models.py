from django.db import models

# Create your models here.

# Album Name
# One-to-Many Relationships with musician model
# Album release date
# Rating between 1-5


class Album(models.Model):
    albumName = models.CharField(max_length=100)
    artist = models.ForeignKey('musician.MusicianForm', on_delete=models.CASCADE)
    release_date = models.DateField()
    RATING_CHOICES = ( 
    (1, "1"), 
    (2, "2"), 
    (3, "3"), 
    (4, "4"), 
    (5, "5"), 
  
    ) 
    num_stars = models.IntegerField(choices = RATING_CHOICES,default=None)
    

    def __str__(self) :
        return self.albumName