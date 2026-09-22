# print("electricity bill calculator")
# units=int(input("enter the number of units consumed:"))
# if units>0:
#     if(units<=100):
#         bill=units*1.5
#         print("your electricity bill is:₹",bill)
#     elif(units<=200):
#         bill=100*1.5+(units-100)*2
#         print("your electricity bill is:₹",bill)
#     else:
#         bill=100*1.5+100*2+(units-200)*3
#         print("your electricity bill is:₹",bill)
# else:
#     print("invalid input")



# star pattern
# n=int(input("enter number of rows:"))
# for i in range(1,n+1):
#     for j in range(1,i+1):
#         print("*",end="")
#     print()



# # factorial of a number
# num=int(input("enter a number:"))
# fact=1
# for i in range(1,num+1):
#     fact=fact*i
# print("factorial of",num,"is",fact)


# prime number
# num=int(input("enter a number:"))
# if num>1:
#     for i in range(2,num):
#         if(num%i)==0:
#             print(num,"is not a prime number")
#             break
#         else:
#             print(num,"is a prime number")
#             break


# def sort_list(list):
#     return sorted(list)
# data=[5,2,9,1,5,6]

# print(sort_list(data))


# salaryScale = [20000, 21500, 23000, 24500, 26000, 27500, 29000]

# for i in range(len(salaryScale)):
#     salaryScale[i] += salaryScale[i] * 0.03

# print(salaryScale)


# Games=["Cricket", "Hockey", "Football", "Golf", "Tennis"]
# for x in Games:
#  print(x)


# n=int(input("enter the number of elements:"))
# list=[]
# for i in range(n):
#     element=int(input("enter element:"))
#     list.append(element)
# a=list.sort()
# print("sorted list is:",list)


# def is_sorted(lst):
#     for i  in range(len(lst)-1):
#         if(lst[i]>lst[i+1]):
#             return False
#     return True
# lst=[5,2,9,1,5,6]
# lst2=[1,2,3,4,5]
# print(is_sorted(lst))
# print(is_sorted(lst2))


# rows=3
# num=1
# for i in range(1,rows+1):
#     for j in range(1,i+1):
#         print(num,end=" ")
#         num+=1
#     print()

# n=int(input("enter number of rows:"))
# num=1
# for i in range(1,n+1):
#     for j in range(1,i+1):
#         print(num,end=" ")
#         num+=1
#     print()\



# sum of first n natural numbers
# n=int(input("enter a number upto which u want sum:"))
# # sum=n*(n+1)//2
# # print("sum of first",n,"natural numbers is:",sum)
# sum=0
# for i in range(1,n+1):
#     sum+=i
# print("sum of first",n,"natural numbers is:",sum)

# n=int(input("enter a number for factorial:"))
# fac=1
# while n>0:
#     fac=fac*n
#     n=n-1
# print("factorial of",n,"is:",fac)