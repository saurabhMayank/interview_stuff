#include<bits/stdc++.h>
using namespace std;


void toh(int n,int source,int dest,int helper,int &steps){
    if(n == 1) {
        steps++;
        cout << "Plate moved from " << source << " to " << dest << endl;
        return;
    }


    toh(n-1, source, helper, dest, steps);

    // cout << "Plate moved from source to destination" << endl;
    toh(1, source, dest, helper, steps);

    toh(n-1, helper, dest, source, steps);
}

int main() {
    int n = 3;
    int source = 1;
    int dest = 2;
    int helper = 3;
    int steps = 0;

    toh(n, source, dest, helper, steps);
    cout << "------steps--------" << steps << endl;
}