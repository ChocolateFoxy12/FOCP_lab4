#include <iostream>
#include <vector>
#include <map>
#include <fstream>
#include <string>
using namespace std;


int main()
{
    map<string, int> dictionary;

    ifstream input("txt.txt");

    if (input.is_open()){
        string word;

        while (getline(input, word)){
           if (dictionary.find(word)==dictionary.end()){
            dictionary.insert({word, 1});
           }
           else{
            dictionary[word]++;
           }
        }
    }

 string tmp;

 cout<<"choose a word: "<<endl;
 cin>>tmp;

 cout<<"the word "<<tmp<<" appears "<<dictionary[tmp]<<" times."<<endl;

 return 0;
}
