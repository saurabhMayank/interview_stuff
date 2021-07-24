'''
Maximum difference b/w the two elements such that the larger elem appears after the smaller elem in the array
'''
'''
import operator

def max_diff_of_two_elem():
  dist_dict = dict()
  k=0
  for i in range(k,len(arr)):
    dist = 0
    start_index = 0
    end_index = 0
    for j in range(i+1,len(arr)):
      if((arr[j]-arr[i])>dist):
        dist = arr[j]-arr[i]
        start_index = arr[i]
        end_index = arr[j]      
    dist_dict[dist]=[start_index,end_index]
  print_diff_list(dist_dict)


def print_diff_list(dist_dict):  
  sorted_dict = sorted(dist_dict.items(), key=operator.itemgetter(0))
  print(sorted_dict[-1])

arr = []
arr = [int(x) for x in input().split()]

print("-------------------------------")

max_diff_of_two_elem()

This approach is 0(n^2) approach
'''

'''
Another sol with O(n) approach....Iss approach mei hm kya kar rhe hai ki ek hi loop laga rhe hai aur phir hm kya kar rhe hain ki hm pehle 
arr[0] ko min_elem maan rhe hain aur phir hm min elem aur max_diff ka track rakh rhe hain hm consecutive elem ko min_elem se sub kar
rhe hai aur phir dekh rhe hai ki arr[i] agar min elem se chota hai toh usko min elem bna de rhe hai

'''

def max_diff_of_two_elem():
  max_diff=0
  min_elem = arr[0]
  for i in range(1,len(arr)):
    if((arr[i]-min_elem)>max_diff):
      max_diff=arr[i]-min_elem

    if (arr[i]<min_elem):
      min_elem=arr[i]
  print_diff(max_diff)

def print_diff(max_diff):
  print(max_diff)

arr = []
arr = [int(x) for x in input().split()]

print("-------------------------------")

max_diff_of_two_elem()