
// Good Explanation => https://www.geeksforgeeks.org/stepping-numbers/

#include<bits/stdc++.h> 
using namespace std;

vector<int> ans;
set <int> tempAns; // stores only unique values

void bfs(int n, int m , int num){
    queue<int> q;
    q.push(num);
    
    while(!q.empty()){
        int stepNum = q.front();
        q.pop();
        
        if(stepNum >= n && stepNum <= m){
            tempAns.insert(stepNum);
        }
        if(stepNum == 0 || stepNum > m){
            continue;
        }
        
        int lastDigit = stepNum % 10;
        
        int stepNumA = stepNum * 10 + lastDigit - 1;
        int stepNumB = stepNum * 10 + lastDigit + 1;
        
        if( lastDigit == 0){
            q.push(stepNumB);
        } else if( lastDigit == 9){
            q.push(stepNumA);
        } else {
            q.push(stepNumA);
            q.push(stepNumB);
        }
    }
}

void displaySteppingNumber(int n, int m){
    for(int i = 0; i<= 9; ++i){
        bfs(n,m,i); // for every i we will do a seperate BFS
    }
}

void stepnum(int n, int m) {
    displaySteppingNumber(n,m);
    
    for(auto x:tempAns){
        // cout << x << " ";
        ans.push_back(x);
    }
    
    for(auto x: ans) {
        cout << x << " ";
    }
    cout << "\n";
}

int main() {
    // int n = 10, m = 100;
    int n = 0, m = 15;
    stepnum(n,m);
	return 0;
}
