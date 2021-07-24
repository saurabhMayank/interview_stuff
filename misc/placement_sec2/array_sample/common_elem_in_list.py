
def common_elem_in_arrays():
    temp_arr=list(set(arr1).intersection(arr2))
    temp_arr1=list(set(temp_arr).intersection(arr3))
    print(temp_arr1)


arr1 = [1, 5, 10, 20, 40, 80] 
arr2 = [6, 7, 20, 80, 100] 
arr3 = [3, 4, 15, 20, 30, 70, 80, 120] 

print("-------------------------------")
common_elem_in_arrays()