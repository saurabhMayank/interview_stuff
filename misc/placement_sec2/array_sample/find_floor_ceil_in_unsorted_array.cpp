#include<bits/stdc++.h>
using namespace std;

/* Floor of n is the largest element which is smaller than or equal to n from the array.*/
/*Ceil of n is the smallest element which is greater than or equal to n from the array. */
//Yahan pe scene hai ki hm sabse closest bigger or smaller elements find karne hai x ke...toh floor element
//wo hoga jo x chota ho aur uski dist x se sabse kam ho
//ceil wo hoga jo x se bada ho and jiski dist x se sabse kam ho


void find_the_floor_and_the_ceil(vector<int> arr,int x)
   {
       int i,findex,fdist,Cindex,Cdist,floor,ceil;
       fdist=INT_MAX,Cdist=INT_MAX; 
       
       for(int i=0;i<arr.size();i++)
        {
            if(arr[i]<= x && fdist >(x-arr[i]))
             {
               
                 findex = i;      
                 fdist=x-arr[i];
                
             }
             else if(arr[i] >= x && Cdist > (arr[i]-x))
             {
                 Cindex = i;
                 Cdist=arr[i]-x;
               
             }
          
        }

       floor=arr[findex];
       ceil=arr[Cindex];
       cout<<floor <<endl;
       cout<<ceil<<endl; 
   }
   
int main()
    {
        // int arr[] = {5, 6, 8,9, 6, 5, 5, 6};
        int x,i,n;  
         vector <int> arr;
         vector <int>::iterator it;
        //  cin >> n >> endl;
       while(true)
        {
            cin >> n;
            if(n==0)
             break; 
            arr.push_back(n);
        }
      cin >> x;
    //   int n = sizeof(arr)/sizeof(int);   //size of the array
     find_the_floor_and_the_ceil(arr,x);
       return 0;
    }