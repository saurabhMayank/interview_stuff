#include<bits/stdc++.h>
using namespace std;

int sort_elements_by_frequency(vector<int> arr)
   {
       vector <int>::iterator it; 
       sort(arr.begin(),arr.end());
       for(it=arr.begin();it!=arr.end();it++)
         {
             cout<<*it<<endl;
         }
       cout << "***************" << endl;

       int arr[10][10];

       for(it=arr.begin();it!=arr.end();it++)
          {
              int count = 0;

              for()
          }



   }



int main()
   {
       int i,n;
        vector <int> arr;
        vector <int>::iterator it;
        while(true)
        {
            cin >> n;
            if(n==0)
             break; 
            arr.push_back(n);
        }
        cout << "---------------" << endl;  
        sort_elements_by_frequency(arr);
        
        return 0;

   }