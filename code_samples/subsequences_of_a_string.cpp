#include<bits/stdc++.h>
using namespace std;


void generate_subsequences_of_a_string(string input, string output, vector<string> &all_subsequences){
    if(input == ""){
        cout << output << endl;
        all_subsequences.push_back(output);
        return;
    }

    string output_1 = output;
    string output_2 = output;

    // string output_3 = output;
    // string output_4 = output;

    output_1 = output_1 + input[0];
    
    input.erase(input.begin() + 0);

    generate_subsequences_of_a_string(input, output_1, all_subsequences);
    generate_subsequences_of_a_string(input, output_2, all_subsequences);

    // generate_subsequences_of_a_string(input.substr(1), output + input[0], all_subsequences);
 
    // output is passed without
    // including the Ist character
    // of Input string
    // generate_subsequences_of_a_string(input.substr(1), output, all_subsequences);
    return;
}


int main() {
    string input = "abc";
    vector<string> all_subsequences;
    string output = "";
    generate_subsequences_of_a_string(input, output, all_subsequences);

    for(auto item:all_subsequences){
        auto s = item;
        for(auto character:s){
            cout << character <<"";
        }
        cout << endl;
    }
}