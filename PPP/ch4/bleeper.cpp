//bleep bad words 
#include "../include/std_lib_facilities.h"

int main()
{

    vector<string> words; 
    cout << "Enter some words to filter\n";
    for(string temp; cin >> temp;)
        words.push_back(temp);
    
    //sort(words);
    
    vector<string> badwords = {"Broccoli", "Brocolini", "Grapefruit", "Eggplant" };
    
    for(string word : words) {
        for(string badword : badwords) {
            if(word == badword)
                word = "BLEEP";
        }

        cout << word << '\n';
    }
}