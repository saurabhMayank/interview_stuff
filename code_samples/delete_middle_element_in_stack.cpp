#include<stdlib.h>
#include<bits/stdc++.h>
using namespace std;


void deleteMiddleElementOfStack(vector<int>&st, int count,int n){
    if(st.size() == 0){
        return;
    }

    int x = st[st.size()-1];
    st.pop_back();
    deleteMiddleElementOfStack(st, count+1, n);

    if(count!=n/2){
        // cout << count << " ";
        st.push_back(x);
    }
}


int main() {
    vector<int> st;
    st.push_back(1);
    st.push_back(2);
    st.push_back(3);
    st.push_back(4);
    st.push_back(5);
    st.push_back(6);
    st.push_back(7);
    int n = st.size();
    // cout << n/2 << endl;
    deleteMiddleElementOfStack(st, 0,n);
    
    while(st.size() > 0){
        cout << st[st.size()-1] << " ";
        st.pop_back();
    }
    cout << endl;
}