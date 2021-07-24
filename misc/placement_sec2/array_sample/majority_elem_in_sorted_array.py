import operator
from collections import OrderedDict

def majority_elem_in_sorted_array():
    count_dict = dict()
    for i in range(0,len(arr)):
        count=0
        for j in range(0,len(arr)):
            if(arr[i]==arr[j]):
                count=count+1
        count_dict[arr[i]] = count
    sort_dict_based_on_count(count_dict)

def sort_dict_based_on_count(count_dict):
    sorted_dict=sorted(count_dict.items(),key=lambda kv: kv[1]) 
    print(sorted_dict)
    print(sorted_dict[-1])   
    
arr = []
arr = [int(x) for x in input().split()]

print("-------------------------------")

majority_elem_in_sorted_array()