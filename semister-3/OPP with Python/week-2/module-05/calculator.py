from math import *
class calculator:
    brand="Casio MS990"
    def add(self,a, b):
        return a+b

    def sub(self,a, b):
        return a-b
    
    def mul(self,a, b):
        return a*b
    
    def div(self,a, b):
        return a/b
    
    def mod(self,a, b):
        return a%b
    
    def pow(self,a, b):
        return a**b
    
    def sqrt(self,a):
        return sqrt(a)
    
    
myCalculator = calculator()


print(myCalculator.add(20,30))
print(myCalculator.sub(20,30))
print(myCalculator.mul(20,30))
print(myCalculator.div(20,30))
print(myCalculator.mod(20,30))
print(myCalculator.pow(20,30))
print(myCalculator.sqrt(20))