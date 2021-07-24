def copying_elements_in_diff_arr_till_n(arr,n):
    temp_arr=[]
    for index in range(0,n):     
        temp_arr.append(arr[index])
    shift_arr_forward(arr,n,temp_arr)

def shift_arr_forward(arr,n,temp_arr):
    length=len(arr)
    for index in range(0,length-n):
        arr[index] = arr[n+index]    
    replace_elem_from_temp_arr(arr,temp_arr,n)    

def replace_elem_from_temp_arr(arr,temp_arr,n):
    length = len(arr) 
    for index in range(len(temp_arr)):
        print(index)
        print("********************")
        arr[length-(n-index)] = temp_arr[index]  
    print_the_resulting_arrays(arr,temp_arr)

def print_the_resulting_arrays(arr,temp_arr):
   print(arr)

arr = []
arr = [int(x) for x in input().split()]
n =int(input())

print("-----------------------------------")
copying_elements_in_diff_arr_till_n(arr,n)








