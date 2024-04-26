class Product:
    def __init__(self, name, price,quantity):
        self.name = name
        self.price = price
        self.quantity = quantity

class User:
    def __init__(self,name,email):
        self.name = name
        self.email = email

class Shop:
    products = []
    def __init__(self,name):
        self.name = name
        self.seller=[]
        self.customer=[]
    # def add_product(self,product):
    #     products.append(product)
    def show_products(self):
        for product in Shop.products:
            print(product.name,product.price,product.quantity)
    def add_seller(self,name,email):
        user=User(name,email)
        self.seller.append(user)
    def add_customer(self,name,email):
        user=User(name,email)

        self.customer.append(user)
    def show_seller(self):
        for user in self.seller:
            print(user.name,user.email)
    def show_customer(self):
        for user in self.customer:
            print(user.name,user.email)

class Seller(User,Shop):
    def __init__(self,shop_name,name,email):
        super().__init__(name,email)
        self.shop = Shop(shop_name)
        self.products = []
    def add_product(self,product):
        product = Product(product.name,product.price,product.quantity)
        # self.shop.add_product(product)
        Shop.products.append(product)
        self.products.append(product)


    def show_products(self):
        print("Name\tPrice\tQuantity")
        for product in self.products:
            print(product.name,product.price,product.quantity)
class Customer(User):
    def __init__(self,shop_name,name,email):
        super().__init__(name,email)
        self.shop = Shop(shop_name)
        self.cart = []
    def show_products(self):
        for product in Shop.products:
            print(product.name,product.price,product.quantity)
    def add_to_cart(self,name):
        pro={name,quantity}
        for product in Shop.products:
            if product.name==name :
                self.cart.append(product)
                print("Product added to cart")
                # print(product.name,product.price,product.quantity)
            else:
                print("Product not found")
    def show_cart(self):
        sum=0
        for product in self.cart:
            print(product.name,product.price,product.quantity)
            sum=sum+(int(product.price)*int(product.quantity))
        print("Total sum: ",sum)
    
# my_shop.add_seller("Fuad","f@gmail.com")
# my_shop.add_seller("Forid","fo@gmail.com")
# my_shop.show_seller()

# my_shop.add_customer("Tan","tan@gmail.com")
# my_shop.add_customer("vir","vir@gmail.com")
# my_shop.show_customer()


# # ---------
# # my_shop.add_product

# # ----------

# seler=Seller(my_shop,"Tanvir","tan@gmail.com")
# poduct=Product("Apple",30,100)
# poduct2=Product("Orange",40,200)

# seler.add_product(poduct)
# seler.add_product(poduct2)

# my_shop.show_products()

print("--------------Start------------------")
shop_name=input("Enter Shop Name : ")
my_shop = Shop(shop_name)

while True:
    print(f"---------------wellcome to our {shop_name} shop-----------------")
    log=-1
    print("1. Seller Login: ")
    print("2. Customer Login: ")
    print("3. Exit  ") 
    log=int(input("Enter Number "))
    if log==1:
        name=input("Enter Name : ")
        password=input("Enter Password :")
        seler=Seller(shop_name,name,password)
        while True:
            print(f"---------------Wellcome {seler.name}-----------------")
            print("1. Add Product ")
            print("2. Exit and LogOut")
            num=int(input("Enter Number"))
            if num==1:
                itm_name=input("Enter Product Name :")
                price=input("Enter Price : ")
                quantity=input("Enter Quantity")
                por=Product(itm_name,price,quantity)
                seler.add_product(por)
            elif num==2:
               break
            else:
                print("Invalid Input")
        
    elif log ==2:
        name=input("Enter Name : ")
        email=input("Enter Email : ")
        customer=Customer(shop_name,name,email)
        while True:
            print(f"---------------Wellcome {customer.name}-----------------")
            print("1. Show All Products")
            print("2. Add to Cart ")
            print("3. Show Cart")
            print("4. Exit and log out")
            num=int(input("Enter Number : "))
            if num == 1:
                my_shop.show_products()
            elif num == 2:
                # por=Product()
                name=input("Enter Name : ")
                # quantity=int(input("Enter Quantity : "))
                customer.add_to_cart(name)
            elif num == 3:
                customer.show_cart()
            elif num == 4:
                break
            else:
                print("Invalid Input")
    elif log==3:
        break
    else:
        print("Invalid Input")


