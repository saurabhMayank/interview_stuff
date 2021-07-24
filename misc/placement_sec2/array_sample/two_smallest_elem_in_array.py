
def two_smallest_elements():
    temp_arr=list(set(arr))
    temp_arr.sort()
    print(temp_arr[0],temp_arr[1])
  

arr = []
arr = [int(x) for x in input().split()]

print("-------------------------------")

two_smallest_elements()