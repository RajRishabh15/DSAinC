# import pandas as pd
# # a=pd.Series([1,2,3,4,5])
# # print(a)
# # b=pd.DataFrame({'name':['hello','hi',"hey"],'age':[20,21,22]},index=['pehla','doosra','teesra'])
# # print(b)
# emp={"name":["rish","raj","harsh"],
#      "age":[12,23,34]}
# df=pd.DataFrame(emp,index=['emp1','emp2','emp3'])
# df['class']=[11,12,9]
# print(df)
# df.loc['emp4']=['rohan',45,10]
# print(df)



# from operator import index

# import pandas as pd
# D= {"Arun":65,"Bala": 91,"Chayan": 74,"Dinesh": 80,"Usha": 85}
# S = pd.Series(D)
# print(S[S>75])


# import pandas as pd
# Budgets = pd.Series (50000, index=['Qtr1', 'Qtr2', 'Qtr3','Qtr4'])
# print(Budgets)


# import pandas as pd
# S1=pd.Series([10,20,30], index=['A', 'B', 'C'])
# S2=pd.Series([2,5], index=['A', 'B'])
# print("the addition of two series objects is:")
# print(S1+S2)
# print("the subtraction of two series objects is:")
# print(S1-S2)
# print("the multiplication of two series objects is:")
# print(S1*S2)
# print("the division of two series objects is :")
# print(S1/S2)



# import pandas as pd
# L=[10,45,67,3,43]
# S= pd.Series (L, index=['a', 'b', 'c', 'd', 'e'])
# print("The index of the series is:", S.index)
# print("The datatype of the series is:", S.dtype)
# print("The size of the series is:", S.size)
# print("The shape of the series is:", S.shape)
# print("The NaN values in the series are:", S.hasnans)




# import pandas as pd
# Marks= [67, 89,90, 86, 100, 45,83, 43, 66,55]
# S= pd.Series (Marks, index= ['stu1','stu2','stu3', 'stu4','stu5', 'stu6', 'stu7','stu8','stu9', 'stu10'])
# print("The first five students marks are:")
# print(S.head(5))
# print("\n")
# print("The last two students marks are:")
# print(S.tail(2))




# import pandas as pd
# L= [["Arun", 217], ["Bala",23], ["Charan", 22]]
# d= pd.DataFrame(L, index=["stu1", "stu2", "stu3"], columns=["NAME", "AGE"])
# print(d)


# import pandas as pd
# D= {'Toys': [7916, 8508, 7226, 7617],
#     'Books': [61896, 8208, 6149, 6157],
#     'Uniforms': [610, 508, 611, 457],
#     'Shoes': [8810, 6798, 9611, 6457]}
# DF= pd.DataFrame(D, index=['AP', 'OD', 'MP', 'UP'])
# print("The details of toys are :")
# print(DF.loc[:, 'Toys'])
# print("\n")
# print("The details of AP and OD are :")
# print(DF.loc['AP':'OD'])
# print("\n")
# print("The details of MP and UP are :")
# print(DF.loc['MP':'UP','Books':'Uniforms'])
# print("\n")
# print("consecutive 3 rows and 3 columns are :")
# print(DF.iloc[0:3, 0:3])


# import pandas as pd
# D={'Toys': [7916, 8508, 7226, 7617],
#    'Books': [61896, 8208, 6149, 6157],
#    'Uniforms': [610, 508, 611, 4577],
#    'Shoes': [8810, 6798, 9111, 6457]}
# DF = pd.DataFrame(D, index=['AP', 'OD', 'MP', 'UP'])
# DF['Bags'] = [5891, 8628, 9785, 4475]
# # Adding a new column Bags
# print ("After Adding a new column:")
# print (DF)
# print("\n")
# S=DF.drop ("MP")    # Deleting MP details
# print ("After deleting MP details:")
# print(S)


# import pandas as pd
# D= {'stu_name':['Anu', 'Arun', 'Bala', 'Charan', 'Mano'],
#     'Degree': ['MBA', 'MCA', 'ME', 'M.Sc','MCA'],
#     'percentage': [90, 85, 91,76, 84]}
# DF= pd.DataFrame(D, index=['51', '52', '53', '54', '55'])
# print(DF[DF['percentage'] > 85])\




# import matplotlib.pyplot as plt
# Weeks= [1,2,3,4]
# Onion= [45,25, 32, 80]
# Brinjal = [16,18,45,56]
# plt.title("Price Analysis")
# plt.xlabel("Weeks")
# plt.ylabel("Prices")
# plt.plot (Weeks, Onion, marker= 'o', markersize= 15, markeredgecolor='r')
# plt.plot (Weeks,Brinjal)
# plt.show()


# import matplotlib.pyplot as plt
# states = ['Delhi', 'TN', 'AP', 'KA']
# players = [5, 11, 10, 7]
# plt.title ('Barchart')
# plt.xlabel ('States')
# plt.ylabel ('Players')
# plt.bar(states, players, width = 0.25, color=['r', 'b', 'g', 'c'])
# plt.show()



# import numpy as np
# import matplotlib.pyplot as plt
# N=3
# ind=np.arange(N)
# width =0.25
# xvals=[80,59,59]
# bar1= plt.bar(ind, xvals, width, color='r')
# yvals = [45,45,46]
# bar2= plt.bar(ind + width, yvals, width, color='g')
# zvals = [26,30,20]
# bar3= plt.bar(ind + width*2, zvals, width, color='b')
# plt.xlabel('Medals')
# plt.ylabel('No. of Medals')
# plt.title('Medal Count Analysis')
# plt.xticks(ind + width , ['Gold', 'Silver', 'Bronze'])
# plt.legend((bar1, bar2, bar3), ('AUS', 'IND', 'ENG'))
# plt.show()


# import matplotlib.pyplot as plt
# Marks= [40, 60, 55, 20, 35, 70, 60, 89, 20, 33]
# plt. title ('Maths Marks Histogram of Class XII')
# plt. xlabel ('Mark Ranges')
# plt. ylabel ('No. of Students')
# plt. hist (Marks, bins=[0, 33, 45, 60, 100], edgecolor='red')
# plt.show()


# import pandas as pd
# import numpy as np
# a1= ['asha', 'radha', 'kamal', 'divya', 'anjali']
# df= pd.DataFrame(a1)
# df.columns=['name']
# df ['height']= pd.Series([5.5, 5, np.nan, 5.9, np.nan])
# df ['age'] = pd.Series([11,23,22,33,32])
# print (df[df['height'].isnull()])



# 

    

import pandas as pd
student = pd.read_csv("students.csv")
student.index = ['A10', 'A11', 'A12','A13','A14']

print("\n\nStudent DataFrame........\n\n",student)

student.loc['BO5']- ['Prashanth' , 85, 89,92]
student.loc['BO5']- [' Rajeev', 80, 91, 93]

print("\n\nStudent DataFrame after update........\n\n", student)
student.to_csv("updated-student.csv")