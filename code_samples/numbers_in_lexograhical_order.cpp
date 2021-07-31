#include<bits/stdc++.h>
using namespace std;


void generate_numbers_in_lexographical_order(int &n, int temp, vector<int>&numbers_in_lexographical_form) {

    if(temp > n){
        return;
    }
    numbers_in_lexographical_form.push_back(temp);
    generate_numbers_in_lexographical_order(n, temp * 10, numbers_in_lexographical_form);
    if (temp % 10 != 9){
        generate_numbers_in_lexographical_order(n, temp + 1, numbers_in_lexographical_form); 
    }
    return;
}



int main() {
  int n = 15;
  int temp = 1;
  vector<int>numbers_in_lexographical_form;
  generate_numbers_in_lexographical_order(n, temp, numbers_in_lexographical_form);

  for(int i=0;i<numbers_in_lexographical_form.size(); ++i){
      cout << numbers_in_lexographical_form[i] << " ";
  }
  cout << endl;
}