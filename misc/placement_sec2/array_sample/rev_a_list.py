def reverse(arr):
    temp_arr=[]
    length=len(arr)
    for index in range(0,length):
        temp_arr.append(arr[(length-1)-index])
    print_rev_list(temp_arr)   

def print_rev_list(temp_arr):
    print(temp_arr) 

arr = [int(x) for x in input().split()]
print("-----------------------------------")

reverse(arr)

'''
  We could also use arr[::-1]
'''