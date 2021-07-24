'''
   max sum subsequences with no two adjacent elem
   max_sum_till_here_seq1 isme hm even sequence of elem ko sum kar rhe hai,jis elem se sum kam ho rha hai usko chodd ke aage badhte 
   jaayenge lekin end tak check karenge
   max_sum_till_here_seq2 isme hm odd sequence of elem ko sum kar rhe hai,seq1 waali cheez 2 ke lie bhi apply hogi
'''
def max_sum_with_no_two_adjacent():
    max_sum_till_here_seq1=arr[0]                 
    max_sum_till_here_seq2=0

    for i in range(0,(len(arr))):
        print(i)
        if(i%2==0):
            if((max_sum_till_here_seq1+ arr[i+2]) > max_sum_till_here_seq1):
                max_sum_till_here_seq1=max_sum_till_here_seq1+ arr[i+2]
        print(max_sum_till_here_seq1)
    for i in range(0,(len(arr)-2)):
        if(i%2==1):
            max_sum_till_here_seq2=arr[1]
            print(arr[i+2])
            if((max_sum_till_here_seq2+ arr[i+2]) > max_sum_till_here_seq2):
                max_sum_till_here_seq2=max_sum_till_here_seq2+ arr[i+2]
        print(max_sum_till_here_seq2)
        comapare_both_seq(max_sum_till_here_seq2,max_sum_till_here_seq1)   


def comapare_both_seq(max_sum_till_here_seq2,max_sum_till_here_seq1):
    if(max_sum_till_here_seq1 >max_sum_till_here_seq2):
        max_subseq=max_sum_till_here_seq1
    else:
        max_subseq=max_sum_till_here_seq2


arr = []
arr = [int(x) for x in input().split()]

print("-------------------------------")

max_sum_with_no_two_adjacent()