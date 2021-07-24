def check_for_even_or_odd_index_elem():
    for index in range(0,(len(arr))):
        if(index % 2 == 0):
            print(index)
            compare_even_index_elem_with_predecessor(index)
        elif (index % 2 == 1):
            print(index)          
            compare_odd_index_elem_with_predecessor(index)   

def compare_even_index_elem_with_predecessor(index):
    if(arr[index] < arr[index-1]):
        temp_var = arr[index-1]
        arr[index-1] = arr[index]
        arr[index] = temp_var
    
        
def compare_odd_index_elem_with_predecessor(index):
    if(arr[index] > arr[index-1]):
        temp_var = arr[index-1]
        arr[index-1] = arr[index]
        arr[index] = temp_var
        print_the_resulting_arr()

def print_the_resulting_arr():
    print(arr)
    print("**********************")         


arr = []
arr = [int(x) for x in input().split()]

print("----------------------------------")

check_for_even_or_odd_index_elem()

