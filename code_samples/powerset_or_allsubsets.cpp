#include<bits/stdc++.h>
using namespace std;


void generate_power_set(vector<int> arr, vector<int> output, vector<vector<int>> &power_set){
  if(arr.size() == 0){
      power_set.push_back(output);
      return;
  }

  vector<int> output_1;
  output_1 = output;
  output_1.push_back(arr[0]);
//   power_set.push_back(output_1);

  vector<int> output_2;
  output_2 = output;
//   power_set.push_back(output_2);

  arr.erase(arr.begin());

  generate_power_set(arr, output_1, power_set);
  generate_power_set(arr, output_2, power_set);
}


int main() {
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);

    vector<vector<int>> power_set;
    vector<int> output{};
    //input output method
    // input output method dono hi
    // apne function mein pass kar die hain
    generate_power_set(arr, output, power_set);

    for (int i = 0; i < power_set.size(); i++){
        vector<int> temp = power_set[i];
        for(auto item:temp){
            cout << item << " ";
        }
        cout << endl;
    }
    // cout << endl;
}