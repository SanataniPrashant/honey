#include<iostream>
using namespace std;
int main()
{   
//  Q.1. W.A.P to print the address of any variable and to take input from the user ?
    // int a=90;
    // cout<<"Address of a=";
    // cout<<&a;
    // cout<<"\nValue of a=";
    // cout<<a;
    // int age;
    // cout<<"\nEnter the value of age:";
    // cin>>age;
    // cout<<"your age is";
    // cout<<age;

// Q.2. Write a program in C++ that takes two numbers as input from the user, calculates their sum and prints the result ?
// float a,b;
// cout<<"enter first numbers : ";
// cin>>a;
// cout<<"enter second number : ";
// cin>>b;
// cout<<"sum="<<a+b;

//Q3. Write a program in C++ to swap any two no.?
// int a=10,b=20,c;
// cout<<"value of a ="<<a;
// cout<<"\nvalue of b ="<<b;
// c=a;
// a=b;
// b=c;
// cout<<"\na="<<a;
// cout<<"\nb="<<b;

// ----------or----------

// int a=10, b=20;
// cout<<"the values before swapping:";
// cout<<"\na="<<a;
// cout<<"\nb="<<b<<endl;
// swap(a,b);
// cout<<"the values after swapping:";
// cout<<"\na="<<a;
// cout<<"\nb="<<b<<endl;

// ------------ or ---------------

// int a=10, b=20;
// cout<<"the values before swapping:";
// cout<<"\na="<<a;
// cout<<"\nb="<<b<<endl;
// a=a+b;
// b=a-b;
// a=a-b;
// cout<<"the values after swapping:";
// cout<<"\na="<<a;
// cout<<"\nb="<<b<<endl;

// Q.4. Write a program in C++ to find the sum of given three digit no.?
// int a, b, r,c, d;
// cout<<"Enter any thee digit number\n ";
// cin>>a;
// b= a/100;
// r = a%100;
// c = r/10;
// d = r%10;
// cout<<"The sum of three digit number is :" <<b+c+d;

// ------------or-------------

// int a;
// cin>>a;
// cout<<"sum="<<a%100%10+a%100/10+a/100;

// Q.5. Write a C++ program  to convert the given tem. in celcius to fahrenhite?
// int a;
// cout<<"enter the temperature in degree celcius:";
// cin>>a;
// cout<<"the temperature in degree fahrenhite is :";
// cout<<((9*a)/5)+32;

// Q.6. Write a C++ program that will calculate and print the simple intrest?
// int p,r,t;
// cout<<"Enter the value of Principle amount, rate and time period : \n";
// cin>>p>>r>>t;
// cout<<"Simple Interest is : "<<(p*r*t)/100;

// Increment operator ++
// int a=20;
// cout<<++a<<endl;  // output will be 21 and 22 prefix
// cout<<a++<<"\n"; // postfix output 20 and then 
// cout<<a<<"\n";  // here it will print 21


// int a=10, b=2,c;
// c=a++; // c=10, a=11
// b=++c; // b=11, c=11
// a=++b; // a=12, b=12
// cout<<"a="<<a;
// cout<<"\n b="<<b;
// cout<<"\n c="<<c;

// int a=30, b=20, c=19;
// b=c--;
// a=--b;
// c=b--;
// a=c--;
// cout<<"a="<<a<<"\nb="<<b<<"\nc="<<c;

// Q.7 Write a program to find area of rectangle?
// int a, b;
// cout<<"Enter length  of rectangle : ";
// cin>>a;
// cout<<"Enter breadth of rectangle : ";
// cin>>b;
// cout<<"Area of Rectangle = "<<a*b;

// Q.8 Write a program to find square and cube of any number entered by user?

// int a;
// cout<<"Enter an integer : ";
// cin>>a;
// cout<<"Square of "<<a<<" = "<<a*a;
// cout<<"\nCube of "<<a<<" = "<<a*a*a;

// Q.9 Write a program to find the area of circle?

// int a;
// cout<<"Enter radius of Circle : ";
// cin>>a;
// float area=(3.14)*(a*a);
// cout<<"Area of Circle = "<<area;

// Q. Find the output of following problem:
// int a,b;
// a=29<<3;
// b=76>>5;
// a=++b; a=3, b=3
// b=--a;b=2, a=2
// cout<<a; a=2, b=2
// cout<<b;

// Q.10 W.A.P to find out the largest no. between two no.
// int a,b;
// cin>>a;
// cin>>b;
// if(a>b)
// {
//     cout<<a;
// }
// else
// {
//     cout<<b;
// }

// Q.12 W.A.P to print the absolute value.
// int a;
// cin>>a;
// cout<< abs(a);

// -----------or--------------
// int a;
// cout<<"enter the no.\n";
// cin>>a;
// if(a<0)
// {
//     cout<<-a;
// }
// else{
//     cout<<a;
// }

// Q.13 W.A.P to findout the given no. is even or odd.
// int number;
// cin >> number;
// if (number % 2 == 0)
// {
//     cout << "The number is Even";
// }
// else
// {
//     cout << "The number is Odd";
// }

// Q.14 W.A.P to findout the given character is vovel or consonent.
// char ch;
// cin>>ch;
// if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
// {
//     cout << " The given char is Vowel";
// }
// else
// {
//     cout << "The given char is Consonant";
// }

// CONTROL FLOW STATEMENT 
// 1. CONDITIONAL STATEMENT:-
//    A. SINGLE (IF)
//    Syntax : if (condition) statement1 ;
//    B. BI -DIRECTIONAL ( IF...ELSE )
//    Syntax: if ( condition1 ) statement1 ;
//            else statement2 ;
//    C. LADDER MULTIPLE CONDITIONS ( IF... ELSE IF ... ELSE)
   
// Example of IF/ single condition and its limitation.
// int a;
// cout<<"Enter age\n";
// cin>>a;
// if(a<0)
// {
//     cout<<"Age cannot be negative.\n";
// }
// cout<<"your age is="<<a;

// Example of IF-else condition .
// int a;
// cout<<"Enter your age \n";
// cin>>a;
// if(a>18)
// {
//    cout<<"You are eligible for voting.";
// }
// else
// {
//    cout<<"You are not eligible for voting.";
// }

// Example of nested.
// int pwd;
// int otp;
// cout<<"Please enter the password\n";
// cin>>pwd;
// if(pwd==123456)
// {
//    cout<<"\nCorrect Password! Please Enter OTP:\n";
//    cin>>otp;
//    if(otp==987654){
//     cout<<"Logged In Successfully!\n";
//    }
//    else{
//     cout<<"wrong otp";
//    }
// }
// else{
// cout<<"you are fraud";
// }

// Example of ladder 
// int a,b,c;
// cout<<"Enter three numbers : \n";
// cin>>a>>b>>c;
// if(a==b &&  b==c)
// {
//     cout<<"All are equal no.\n";
// }
// else if (a>b && a>c)
// {
//     cout<<"The largest number is " << a << endl;
// }
// else if (b>a && b>c)
// {
//     cout<<"The largest number is " << b << endl;
// }
// else
// {
//     cout<<"The largest number is " << c << endl;
// }

// Q.15 if p=marks, c=marks, and m=marks then total=? per=? if per=below 35 then fail. if per=35-49 then 3rd division pass. if per=50-59 then 2nd year pass. if per=60-100 then 1st division pass.

// int p,c,m;
// cout<<"Enter three subject marks:";
// cin>>p>>c>>m;
// cout<<"total marks="<<p+c+m;
// cout<<"percentage="<<(p+c+m)*100/300;
// if((p+c+m)*100/300<35)
// {
//    cout<<"\nfail\n";
// }
// else if ((p+c+m)*100/300>=35 && (p+c+m)*100/300<=49)
// {
//     cout<<"\ngrade=3rd\n";
// }
// else if ((p+c+m)*100/300>=50 && (p+c+m)*100/300<=64)
// {
//     cout<<"grade=2nd\n";
// }
// else
// {
//     cout<<"grade=1st\n";
// }

// <-----------Goto  Statement------------->
// cout<<"Hello";
// goto h;
// cout<<"World";
// h:
// cout<<"ram"; //exit condition

// cout<<"Hello";
// h:
// cout<<"World";
// goto h;
// cout<<"ram"; // Infinite loop condition

// int a=1;
// prnt:
// cout<<a<<endl;
// a++;
// if(a<=10)
// {
//     goto prnt;
// }

// Q.1 W.A.P to print the table of 5 using goto statement.

// int a=1,b;
// cout<<"enter no.";
// cin>>b;
// start:
// cout<<a<<"x"<<b<<"="<<a*b<<endl;
// if(a++<10)
// {
//     goto start;
// }

// <------switch case statment------
// int a,b,c;
// cout<<"Enter two numbers : \n";
// cin>>a>>b;
// cout<<"select 1 for addition and 2 for multiplication";
// cin>>c;
// switch (c)
// {
// case 1:
//    {
//     cout<<"\nyou selected addition\n";
//     cout<<a<<"+ "<<b<<" = "<<a+b<<endl;
//     break;
//    }

// case 2:
//    { cout<<"\nyou selected multiplication\n";
//     cout<<a<<"*"<<b<<" = "<<a*b<<endl;
//     break;
//    }

// default:
//    {
//      cout<<"\nyou entered wrong choice\n";
//    }

// }

// Q.2 W.A.P 

// int a,b,c;
// cout << "\nEnter two numbers : \n";
// cin >> a >> b;
// cout<<"select 1 for swapping, 2 for larger no., 3 for  smaller no., 4 for area of rectangle, 5 for addition,\n";
// cin>>c;
// switch(c)
// {
//     case 5:
//      {
//     cout<<"sum = "<<a + b ;
//     break;
//       }
//     case 4:
//       {
//         cout<<" \narea of rectangle="<<a*b;
//         break;
//       }
//     case 3:
//       {
//         cout<<"\n smaller no. is";
//         if(a<b)
//         {
//             cout<<a;
//         }
//         else
//         {
//             cout<<b;
//         }
//         break;
//      }
//     case 2:
//       {
//         cout<<"Larger no. is";
//         if(a>b)
//         {
//             cout<<a;
//         }
//         else
//         {
//             cout<<b;
//         }
//         break;
//       }
//       case 1:
//       {
//         swap(a,b);
//         cout<<"After swapping\na= "<< a << "\nb= " << b;
//         break;
//       }
//       default:
//    {
//      cout<<"\nyou entered wrong choice\n";
//    }
// }

// <-----------DO-WHILE  LOOP -------------->
// int a=1;
// do
// {
//     cout<<a<<endl;
//     a++;
// } while (a<=10);

// int n=10;
// do
// {
//    cout<<n<<endl;
//    n--;
// }while(n>=1);

// int a=1,n;
// cout<<"enter the last value\n";
// cin>>n;
// do
// {
//     cout<<a<<"\n";
//     a++;
// } while (a<=n);

// int n;
// cout<<"enter the last value \n";
// cin>>n;
// do
// {
//     if(n%2==0)
//     {
//         cout<<n<<"\n";
//     }
//     n--;
// } while (n>=1);

// int n;
// cout<<"enter the last value \n";
// cin>>n;
// do
// {
//     if(n%2==1)
//     {
//       cout<<n<<"\n";
//     }
//     n--;

// } while (n>=1);

// int a=1,b;
// cout<<"enter the value \n";
// cin>>b;
// do  
// {
//     cout << a<<"x"<<b <<"=" << a*b << endl;
//     a++ ;
// } 
// while (a <= 10);

// int a,b=0;
// cout<<"enter the last value \n";
// cin>>a;
// do
// {
//     b=a+b;
//     a--;
// } while (a>=1);
// cout<<"sum="<<b;

// <-----------while loop -------->
// int a=1;
// while(a<=10)
// {
//     cout<<a<<"\n";
//     a++;
// }

// int a=1;
// while(a<=10)
// {
//     cout<<a*a<<"\n";
//     a++;
// }

// Q. W.A.P to find the square of any given no. by using while loop?
// int a;
// cout<<"Enter a number: ";
// cin>>a;
// while(a>=1)
// {
//     cout<<a*a<<"\n";
//     a--;
// }

// Q. W.A.P to find the factorial of any no. using while loop?
// int a,b=1;
// cout<<"Enter the number : ";
// cin>>a;
// while(a>=1)
// {
//     b=a*b;
//     a--;
// }
// cout<<"factorial="<<b;

// Q. W.A.P to calculate for the given base and power?
// int a,b,c;
// cout<<"enter base= \n";
// cin>>a;
// c=a;
// cout<<"enter power=\n";
// cin>>b;
// while(b>1)
// {
//  a=a*c;
//  b--;
// }
// cout<<"result="<<a;

// Q. W.A.P to findout the given no. is prime or not?
// int a,c=0,k;
// cout<<"Enter the no.\n";
// cin>>a;
// k=a;
// while(k>=1)
// {
//   if(a%k==0)
//   {
//     c++;
//   }
//   k--;
// }
// if(c==2)
// {
//     cout<<"prime no.\n";
// }
// else{
//     cout<<"not prime no.\n";
// }

// Q. W.A.P to count the no. of divisors for a given no.?
// int a,c=0,k;
// cout<<"Enter the no.\n";
// cin>>a;
// k=a;
// while(k>=1)
// {
//   if(a%k==0)
//   {
//     c++;
//   }
//   k--;
// }
// if(c==2)
// {
//     cout<<"prime no.\n";
// }
// else{
//     cout<<"not prime no.\n";
// }
// cout<<"The number of divisors are "<<c<<"\n";

// Q. W.A.P to print the given no. in reverse order?
// int a,b=0,c;
// cout<<"enter the no.:\n";
// cin>>a;
// while(a!=0)
// {
//   c=a%10;
//   b=b*10+c;
//   a=a/10;
// }
// cout<<"the reversed no. is :\n"<<b;

// Q.W.A.P to  print the squareroot of any no. ?
// int a,b,c=0;
// cout<<"enter the no.:\n";
// cin>>a;
// for(b=1;b<=a;b++)
// {
//   if(b*b==a)
//   {
//     c=1;
//     break;
//   }
// }
// if(c==1)
// {
//   cout<<b;
// }
// else
// {
//   cout<<"The no. is not a perfect no.";
// }
return 0;
}


