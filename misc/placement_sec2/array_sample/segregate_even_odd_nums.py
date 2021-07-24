def seg_even_odd_nums():
    even_list=[]
    odd_list=[]
    for i in range(0,len(arr)):
        if(arr[i]%2==0):
            even_list.append(arr[i])
        elif(arr[i]%2 ==1):
            odd_list.append(arr[i])
    concat_list(even_list,odd_list)

def concat_list(even_list,odd_list):
    merged_list=[]
    merged_list=even_list+odd_list
    print(merged_list)


arr = []
arr = [int(x) for x in input().split()]

print("-------------------------------")

seg_even_odd_nums()