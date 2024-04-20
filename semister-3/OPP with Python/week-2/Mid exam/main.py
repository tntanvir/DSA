from datetime import datetime

class Star_Cinema:
    hall_list=[]
    def __init__(self,name,id,row,column):
        self.name=name
        self.id=id
        self.row=row
        self.column=column



class Hall(Star_Cinema):
    entry_show_list=[]
    book_site_list=[]
    all_sites ={
               
            }

    def __init__(self,name,id,row,column):
        super().__init__(name,id,row,column)
        Star_Cinema.hall_list.append(name)
       


    def entry_show(self,showName,id,showStart,row,column):
        self.entry_show_list.append({"Movie Name":showName,"Show id":id,"Time":datetime.now().strftime("%d/%m/%Y"),"Start at":showStart})
        matrix=[]
        for i in range(row):
            rows =[]
            for j in range(column):
                rows.append(0)
            matrix.append(rows)
        self.all_sites[id]=matrix
    
    
    # view show
    @classmethod
    def show_list(cls):
        for i in cls.entry_show_list:
            for key,vaals in i.items():
                print(f"{key}:{vaals} ",end=" ")
            print('')
        print('\n')
        return f"TODAY TOTAL SHOW AVAILABLE :{len(cls.entry_show_list)}"
    
    # show sites

    @classmethod
    def sit(cls,id):
        for key,val in cls.all_sites.items():
            if key==id:
                for i in cls.all_sites[id]:
                    print(i)

    def book_site(self,id,row,column):
        for key,val in self.all_sites.items():
            if key==id:
                self.all_sites[id][row][column]=1

    
Dhaka_hall=Hall("Dhaka_hall",10,10,10)
Dhaka_hall.entry_show("jawan",12,"2021-01-01",10,5)
Dhaka_hall.entry_show("khela",89,"2021-01-01",10,5)


text="""
1.View All Show Today
2.VIEW AVAILABLE SITES
3.BOOK TICKET
4.EXIT
"""
print(text)
num=int(input("Enter the number : "))

while num!=4:
    if num==1:
        print('--------------------------------')
        print(Hall.show_list())
        print('--------------------------------')
    elif num==2:
        id=int(input("Enter the Movie ID : "))
        Dhaka_hall.sit(id)
        # print(a)
    elif num==3:
        l=int(input("Enter the number of tiket?: "))
        id=int(input("Enter the Movie id : "))
        for i in range(l):
            row=int(input("Enter row number : "))
            colume=int(input("Enter colume number : "))
            Dhaka_hall.book_site(id,row,colume)
    elif num==4:
        print('--------------------------------')
        print('\t thanks for visit our project')
        print('--------------------------------')
    
    print(text)
    num=int(input("Enter the number : "))




