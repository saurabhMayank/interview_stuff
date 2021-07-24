'''
given n-1 integers from the list of 1 to n..No integers are duplicate..find the missing integer
'''


def missing_integer():
    size=len(arr)
    arr.sort()
    temp_arr=[]
    start=arr[0]
    end=arr[-1]
    i=start
    while(i!=(end+1)):
        temp_arr.append(i)
        i=i+1
    print(list(set(temp_arr)-set(arr)))
    
# arr = []
# arr = [int(x) for x in input().split()]
arr=[1,4,2,6,5]
print("-------------------------------")
missing_integer()