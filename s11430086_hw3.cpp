//11430086王泳翔
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    double num1, num2, add, sub, mul, div, remainder;
    cout << "輸入使用者名稱:";
    getline(cin, str);
    //cin.ignore();
    cout << "輸入兩個浮點數:";
    cin >> num1 >> num2;
    cout << "input 1:" << str << endl;
    add = num1 + num2;
    sub = num1 - num2;
    mul = num1 * num2;
    div = num1 / num2;
    int R1 = static_cast<int>(num1);
    int R2 = static_cast<int>(num2);
    remainder = R1 % R2;
    
}