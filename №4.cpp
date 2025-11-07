#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(){
    string message;
    getline(cin, message);

    stack<char> brackets;

    for(int i = 0; i < message.length();i++){
        char c = message[i];
        if(c == '('){
            brackets.push(c);
        } else if (c == ')'){
            if (brackets.empty()){
                cout << "no" << endl;
                return 0;
            }
            brackets.pop();
        }
    }
    
    if (brackets.empty()){
        cout << "yes" << endl;
    }
    return 0;
}
