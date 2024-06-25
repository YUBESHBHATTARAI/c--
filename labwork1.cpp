//Write a program that prompts the user for their name and age, and then outputs
//a message that says "Hello, [name]! You are [age] years old."
#include<iostream>
using namespace std;
 int main()
 {
    int age;
    char name[100];
    cout<<"enter your name and age"<<endl;
    cin.getline(name,100);
    cin>>age;
    cout<<"Hello, "<<name<<"!You are "<<age<<" years old";
    return 0;
 }              