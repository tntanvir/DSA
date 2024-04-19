
import math
import random
class Bank:
    def __init__(self,name,amount):
        self.name = name
        self.amount =amount
        self.user_id=math.ceil(random.random()*1200000000000000)
        self.min_withdraw=100
        self.max_withdraw=100000

    def get_amout(self):
        print(f"{self.name} Your current amount : " , self.amount,"tk")
    def diposit(self,amount):
        self.amount += amount
    def withdraw(self,amount):
        if amount <= self.min_withdraw:
            print("Sorry! You can't withdraw less than or equal" , self.min_withdraw,"tk")
        elif amount >= self.max_withdraw:
            print("Sorry! You can't withdraw more than or equal" , self.max_withdraw,"tk")
        else:
            self.amount -= amount
            print("Your current amount is: ", self.amount," tk")



tanvir=Bank("tanvir",100000)
tanvir.get_amout()
tanvir.withdraw(100)
tanvir.withdraw(100999993)
tanvir.withdraw(1000)
tanvir.diposit(1000)
tanvir.get_amout()
print(tanvir.user_id)

fuad=Bank("fuad",5000)
fuad.get_amout()