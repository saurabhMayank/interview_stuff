# cook your dish here


def check_for_fancy_type(str1):
   words=[]
   words=str1.split(" ")
   flag=0
   for word in words:
       if(word=="not"):
           flag=1
           break
       else:
           flag=0

   if(flag == 1):
        print("Real Fancy")
   else:
        print("regularly fancy")
    
test_cases=int(input(""))

while(test_cases>0):
    test_cases=test_cases-1
    str1=input("")
    
    check_for_fancy_type(str1)