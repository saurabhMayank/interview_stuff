'''
 zig zag arrangement is if a,b,c,d,e,f are the elements of the array then a < b > c < d > e < f
'''
def zig_zag_arrangement():
    for index in range(0,len(arr)):
        if(index % 2 == 1):
       
            make_elem_greater_than_its_left_neighbour(index)
            make_elem_greater_than_its_right_neighbour(index)

def make_elem_greater_than_its_left_neighbour(index):
    if(arr[index]<arr[index-1]):
         temp_var = arr[index-1]
         arr[index-1] = arr[index]
         arr[index] = temp_var
         print_the_resulting_arr()
         return arr

def make_elem_greater_than_its_right_neighbour(index):
    if(arr[index]<arr[index+1]):
        temp_var = arr[index+1]
        arr[index+1] = arr[index]
        arr[index] = temp_var 
        print_the_resulting_arr()
        return arr

def print_the_resulting_arr():
    print(arr)              


arr = []
arr = [int(x) for x in input().split()]

print("----------------------------------")

zig_zag_arrangement()
