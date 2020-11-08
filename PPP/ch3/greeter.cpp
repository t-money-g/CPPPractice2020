// read and write a first name 
#include "../include/std_lib_facilities.h"

int main() 
{
    //cout << "Please enter your first name (followed by 'enter'):\n";
    cout << "Enter the name of the person you want to write to:\n";
    string first_name; // first_name is a variable of type string 
    cin >> first_name; // read characters into first_name 
    cout << "Dear," << first_name << "\n";
    cout << "How are you?\n";
    cout << "why the hell am I doing this?\n";
    string friend_name;
    cout << "Please tell me the name of your friend:\n";
    cin >> friend_name;
    cout << "Have you seen " << friend_name << " lately?\n";
    char friend_sex = ' ';
    cout << "What is the sex of your friend?" << "Enter m for male , f for female\n"; 
    cin >> friend_sex;

    if(friend_sex == 'm')
        cout << "If you see " << friend_name << ", please ask him to call me.\n";
    else if(friend_sex == 'f')
        cout << "If you see " << friend_name << ", please ask her to call me.\n";
    int age = 0; 
    cout << "How old is your friend?\n";
    cin >> age; 

    if (age < 0 || age > 100) 
        simple_error("you're kidding!");
    
    cout << "I hear you just had a birthday and you are " << age << " years old.\n";
    
    if (age < 12)
        cout << "Next year you will be " << age + 1 << '\n'; 
    if (age == 17)
        cout << "Next year you will be old enough to vote" <<'\n';
    if (age > 70)
        cout << "I hope you are enjoying retirement.\n";

    cout << "Yours sincerly,\n\n Mr. Computer";
}