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
char upper_case[]={'Z', 'Y', 'X', 'W', 'V', 'U',
 				   'T', 'S', 'R', 'Q', 'P', 'O',
				   'N', 'M', 'L', 'K', 'J', 'I', 
				   'H', 'G', 'F', 'E', 'D', 'C', 'B', 'A'};

// Creating a array of lower case alphabets				   
 char lower_case[]={'z', 'y', 'x', 'w', 'v', 'u',
  					't', 's', 'r', 'q', 'p', 'o',
					'n', 'm', 'l', 'k', 'j', 'i',
					'h', 'g', 'f', 'e', 'd', 'c', 'b', 'a'};     

// Encryption and Decryption function
string atbash(string message)
{
	int len = message.size();                   // Calculating lenght of the string
	string cipher;
	int ascii_char;
	for(int i=0;i<len;i++)
	{
		
		ascii_char = message[i];                         // Storing ASCII value of alphabet
		if(ascii_char>='A' && ascii_char<='Z')
		cipher = cipher + upper_case[ascii_char-65];    // If character is in upper case(minus 65 from its ASCII value to get reversed character)
		else
		cipher = cipher + lower_case[ascii_char-97];    // If character is in upper case(minus 97 from its ASCII value to get reversed character)
			
	}
	return cipher;
}

int main()
{
    while (true)
    {
        system("cls");
        cout << "================Cryptography All ciphers with Encoder and Decoder================= \n";
        cout << "1)Caesar Cipher"<<endl;
        cout << "2)Atbash Cipher"<<endl;;
        int ch1;
        cout << "Choose the Cipher >> ";
        cin >> ch1;

        if (ch1 == 1)
        {
                    cout<<endl;
            string msg;
            cout << "Enter message : \n >>";
            cin >> msg;
            cout<<"Enter cipher number : \n>>";
            int dis;
            cin>>dis;
            string code = caesar(msg,dis);
            cout << "Your Coded message :>>" << code << endl;
        }
        else if (ch1 == 2)
        {
                    cout<<endl;
            string msg;
            cout << "Enter message : \n >>";
            cin >> msg;
            string code = atbash(msg);
            cout << "Your Coded message :>>" << code << endl;
        }
        else
        {
            cout << "Wrong input , Abort !!" << endl;
            return 0;
        }
        int chh;
        cin>>chh;
    }
    return 0;
}