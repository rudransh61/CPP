#include <bits/stdc++.h>
#include <conio.h>
#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;

string caesar(string text, int s)
{
    string result = "";
    for (int i = 0; i < text.length(); i++)
    {
        if (isupper(text[i]))
            result += char(int(text[i] + s - 65) % 26 + 65);
        else
            result += char(int(text[i] + s - 97) % 26 + 97);
    }
    return result;
}

int main()
{
    while (true)
    {
        cout << "================Cryptography All ciphers with Encoder and Decoder================= \n";
        cout << "1)Caesar Cipher";
        int ch1;
        cout << "Choose the Cipher >> ";
        cin >> ch1;
        cout<<endl;
        if (ch1 == 1)
        {
            string msg;
            cout << "Enter message : \n >>";
            cin >> msg;
            cout<<"Enter cipher number : \n>>";
            int dis;
            cin>>dis;
            string code = caesar(msg,dis);
            cout << "Your Coded message :>>" << code << endl;
        }
        else
        {
            cout << "Wrong input , Abort !!" << endl;
            return 0;
        }
    }
    return 0;
}