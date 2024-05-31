from django.shortcuts import render,redirect
from . forms import TaskForm
from . import models

# Create your views here.
def AddTask(request):
    if request.method == 'POST':
        form = TaskForm(request.POST)
        if form.is_valid():
            form.save()
            return redirect('home')

    else:
        form = TaskForm()
    return render(request,'AddTask.html',{'form':form})
def TaskEdit(request,id):
    task = models.TaskModel.objects.get(id=id)
    form = TaskForm(instance=task)
    if request.method == 'POST':
        form = TaskForm(request.POST,instance=task)
        if form.is_valid():
            form.save()
            return redirect('home')
        
    return render(request,'AddTask.html',{'form':form})

def TaskDelete(request,id):
    task = models.TaskModel.objects.get(id=id)
    task.delete()
    return redirect('home')

