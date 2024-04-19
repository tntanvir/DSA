# mu=[[1,2],[3,4],[5,6]]
# # for i in mu:
# #     # print(i)
# #     for j in i:
# #         print(j,end=" ")
# #     print('')
    

# for i in range(10):
#     for j in range(10):
#         if [i,j] in mu:
#             print("1",end=" ")
#         else: print("*",end=" ")
#     print('')



# Define the dimensions of the 2D array
# rows = 3
# cols = 4

# # Initialize an empty list to store the 2D array
# matrix = []

# # Create the 2D array using nested for loops
# for i in range(rows):
#     row = []
#     for j in range(cols):
#         row.append(i * cols + j)  
#     matrix.append(row)

# # Print the 2D array
# for row in matrix:
#     print(row)


all_sites ={12:[[0,0,0],[0,0,0],[0,0,0]],
                89:[[0,0,0],[0,0,0],[0,0,0]]
                }
        
all_sites.update(4:[[0,0,0],[0,0,0],[0,0,0]])
print(all_sites)