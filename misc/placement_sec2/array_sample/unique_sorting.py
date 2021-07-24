'''
 In this sorting we are inputting an array and rearranging it such that it comes in the order smallest,largest,2nd smallest,2nd largest and so on
'''

def normal_sort():
    arr_sorted_increasing=[]
    arr_sorted_decreasing=[]
    arr.sort()
    arr_sorted_increasing=copy_list(arr)
    arr.sort(reverse=True)
    arr_sorted_decreasing = copy_list(arr)
    rearrange_as_required(arr_sorted_increasing,arr_sorted_decreasing)

def copy_list(arr):
    temp_arr = []
    for index in range(0,len(arr)):
        temp_arr.append(arr[index])
    return temp_arr

def rearrange_as_required(arr_sorted_increasing,arr_sorted_decreasing):
    arr_rearrange=[]
    count_incr=0
    count_decr=0
    length=len(arr_sorted_increasing)
    for i in range(0,length):
        if( i%2 == 0):
            arr_rearrange.append(arr_sorted_increasing[count_incr])
            count_incr=count_incr+1
        elif( i%2 == 1):
            arr_rearrange.append(arr_sorted_decreasing[count_decr])  
            count_decr=count_decr+1 

    print_result(arr_rearrange)

def print_result(arr_rearrange):
    print(arr_rearrange)

arr = []
arr = [int(x) for x in input().split()]

print("-------------------------------")

normal_sort()