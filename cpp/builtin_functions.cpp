#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<string>
#include<conio.h>

using namespace std;

int main()
{
    // putchar() function..............
    // char ch;
    // cout<<"Enter charactetr: ";
    // cin>>ch;
    // putchar(ch);
    // putchar('*');
//---------------------------------------------------------------------------------------
    // gotoxy() function [Not Working]..............
    // gotoxy(10,10);
    // cout<<"HY...";
    // gotoxy(20,20);
    // cout<<"HELLO....";
//----------------------------------------------------------------------------------------
    // kbhit() function  {KeyBoard Hit Function}..............
    // while (!kbhit())
    // {
    //     cout<<"I  am kashmiri...";
    // }
//-----------------------------------------------------------------------------------------    
    // clrscr();   FUNCTION not working..............
//-----------------------------------------------------------------------------------------    
    // char string[] = "This is an example string...";
    // puts(string);   
    // this works like (cout<<"";)
//----------------------------------------------------------------------------------------- 
                // <cmath> library functions  
//-----------------------------------------------------------------------------------------    
    // abs() function used to find absolute value of integer
    // and fabs() function used to find absolute value of floating point number.......
    // int a = 965675;
    // float c = 2.3;
    // cout<<"Absolute value of integer "<<a<<" is "<<abs(a)<<endl;
    // cout<<"Absolute value of float "<<c<<" is "<<fabs(c)<<endl; // NoT Working..
//-----------------------------------------------------------------------------------------    
    // ceil() function used to round off float to its next integer
    // floor() function is used to round off float to its previous integer
    // float f = 3.5;
    // cout<<"Rounded value with ceil() is "<<ceil(f)<<endl;
    // cout<<"Rounded value with floor() is "<<floor(f)<<endl;
//-----------------------------------------------------------------------------------------    
    // some math functions eg. sin, cos, tan, log [natural log], log10 [base 10 log]...
    // float f = 7.8;
    // cout<<"Sine: "<<sin(f)<<endl;
    // cout<<"Cos: "<<cos(f)<<endl;
    // cout<<"Tan: "<<tan(f)<<endl;
    // cout<<"Natural Log: "<<log(f)<<endl;
    // cout<<"Base 10 log: "<<log10(f)<<endl;
//-----------------------------------------------------------------------------------------   
    // Power, square root and remainder functions....
    // int x = pow(3, 3);
    // cout<<"Exponent: "<<x<<endl;
    // float y = fmod(25, 2);
    // cout<<"Remainder: "<<y<<endl;
    // float  z = sqrt(11);
    // cout<<"Square Root: "<<z<<endl;
//-----------------------------------------------------------------------------------------  
                    // STRING FUNCTIONS.............
//-----------------------------------------------------------------------------------------   
    // nEW Methods of writing strings in arrays...
    // char name[] = "Awais";
    // cout<<"Name is "<<name<<endl;
    // char a[30];
    // cin.getline(a, 30);
    // char b;
    // cin.get(b);
    // cout<<a<<" "<<b<<endl;
//-----------------------------------------------------------------------------------------  
    // reading multiple lines.....
    // char str[1000];
    // cin.get(str, 1000, '!');    // The sign in single quotions deonote, 
    // when we inset this character in input and then press enter, our input then completes.
    //we can insert any sign, any character in quotions.
    // cout<<endl<<"You Entered: "<<endl<<str<<endl;
//-----------------------------------------------------------------------------------------  
    // copy a string to another string.....
    // char str1[] = "Hi !!! How are you???\n"
    //               "What are you doing???";
    // char str2[200];
    // strcpy(str2, str1);
    // cout<<str2<<endl;
//-----------------------------------------------------------------------------------------  
                    // STANDARD C++ STRING CLASS
//-----------------------------------------------------------------------------------------  
    // determining how to copy and add string...
    // string s1("Awais");
    // string s2 = "Alima";
    // string s3 = s1;
    // cout<<"s3 = "<<s3<<endl;
    // s3 = "neither " + s1 + " nor ";
    // s3 += s2;
    // cout<<"s3 = "<<s3<<endl;
    // s1.swap(s2);
    // cout<<"s1 = "<<s1<<endl;
    // cout<<"s2 = "<<s2<<endl;
//-----------------------------------------------------------------------------------------  
    // determining how to see spaces and new lines in input...
    // string full_name, nickname, address;
    // string greeting("Hello, ");
    // cout << "Enter your full name: ";
    // getline(cin, full_name); //reads embedded blanks

    // cout << "Your full name is: " << full_name << endl;
    // cout << "Enter your nickname: ";
    // cin >> nickname; //input to string object
    // greeting += nickname; //append name to greeting
    // cout << greeting << endl; //output: “Hello, Jim”

    // cout << "Enter your address on separate lines\n";
    // cout << "Terminate with \"$\"\n";
    // cin.ignore();
    // getline(cin, address, '$'); //reads multiple lines
    // cout << "Your address is: " << address << endl;
//-----------------------------------------------------------------------------------------  
    // string functions........
    // string s1("Quick! Send for Count Graystone.");
    // string s2("Lord");
    // string s3("Don't ");
    // s1.erase(0, 7); //remove “Quick! “
    // s1.replace(9, 5, s2); //replace “Count” with “Lord”
    // s1.replace(0, 1, "s"); //replace ‘S’ with ‘s’
    // s1.insert(0, s3); //insert “Don’t “ at beginning
    // s1.erase(s1.size()-1, 1); //remove ‘.’
    // s1.append(3, '!'); //append “!!!”
    // int x = s1.find(' '); //find a space
    // while( x < s1.size() ) //loop while spaces remain
    // {
    // s1.replace(x, 1, "/"); //replace with slash
    // x = s1.find(' '); //find next space
    // }
    // cout << "s1: " << s1 << endl;
//----------------------------------------------------------------------------------------- 
    

    return 0;
}