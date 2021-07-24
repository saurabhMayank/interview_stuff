'''
yahan 2 number repeat kar rhe hai poore array mei unhe find karna hai
'''

def find_repeating_elem():
  count=[0]*len(arr)
  print(count)
  repeating_num=[]
  for i in range(0,len(arr)):
    if(count[arr[i]]==1):
      print(arr[i])  
      print("********")  
    else:
      count[arr[i]]=count[arr[i]]+1  

arr = []
arr = [int(x) for x in input().split()]

print("-------------------------------")

find_repeating_elem()