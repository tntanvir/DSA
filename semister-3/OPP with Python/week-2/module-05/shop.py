class Shop:
    # cart=[]
    def __init__(self, name):
        self.name = name
        self.cart= []
    def add_cart(self,product):
        self.cart.append(product)
tanvir=Shop("tanvir")
tanvir.add_cart("phone")
tanvir.add_cart("Tshirt")
tanvir.add_cart("Pants")
tanvir.add_cart("Fecials")
tanvir.add_cart("grosary")
print (tanvir.cart)

fuad=Shop("fuad")
fuad.add_cart("Fruit")
fuad.add_cart("vegitables")
print (fuad.cart)
import calendar
print(calendar.calendar(theyear=2024))