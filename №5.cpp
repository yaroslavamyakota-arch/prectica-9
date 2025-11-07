#include <iostream>
#include <vector>
#include <string>
#include <set>
using namespace std;

int main(){
    string text;
    getline(cin, text);

    vector<string> words;
    string newWord;

    for (int i; i < text.length(); i++){
        char c = text[i];
        if (isalpha(c) || c == '-'){
            newWord += tolower(c);
        } else if(!newWord.empty()){
            words.push_back(newWord);
            newWord.clear();
        }
    }

    if (!newWord.empty()){
        words.push_back(newWord);
    }

    vector<string> uniqueWords;
    set<string> seen;

    for (int i = 0; i < words.size(); i++){
        string word = words[i];
        if (seen.find(word) == seen.end()){
            uniqueWords.push_back(word);
            seen.insert(word);
        }
    }

    for (int i = 0; i < uniqueWords.size(); i++){
        cout << uniqueWords[i] << endl;
    }
    return 0;
}
