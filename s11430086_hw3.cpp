//11430086王泳翔
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    double num1, num2;
    cout << "輸入使用者名稱:";
    getline(cin, str);
    cin.ignore();
    cout << "輸入兩個浮點數:";
    cin >> num1 >> num2;
    cout << "input 1:\n" << str;
}