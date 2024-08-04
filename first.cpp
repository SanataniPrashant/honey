  
//  Q.1. W.A.P to print the address of any variable and to take input from the user ?
// #include<iostream>
// using namespace std;
// int main()
// {  
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
    // return 0;
    // }

 
// Q.2. Write a program in C++ that takes two numbers as input from the user, calculates their sum and prints the result ?
// #include<iostream>
// using namespace std;
// int main()
// {  
// float a,b;
// cout<<"enter first numbers : ";
// cin>>a;
// cout<<"enter second number : ";
// cin>>b;
// cout<<"sum="<<a+b; 
// return 0;
// }


//Q3. Write a program in C++ to swap any two no.?
// #include<iostream>
// using namespace std;
// int main()
// {  
// int a=10,b=20,c;
// cout<<"value of a ="<<a;
// cout<<"\nvalue of b ="<<b;
// c=a;
// a=b;
// b=c;
// cout<<"\na="<<a;
// cout<<"\nb="<<b;
// return 0;
// }

// ----------or----------

// #include<iostream>
// using namespace std;
// int main()
// {  
// int a=10, b=20;
// cout<<"the values before swapping:";
// cout<<"\na="<<a;
// cout<<"\nb="<<b<<endl;
// swap(a,b);
// cout<<"the values after swapping:";
// cout<<"\na="<<a;
// cout<<"\nb="<<b<<endl;
// return 0;
// }

// ------------ or ---------------

// #include<iostream>
// using namespace std;
// int main()
// {  
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
// return 0;
// }

  
// Q.4. Write a program in C++ to find the sum of given three digit no.?
// #include<iostream>
// using namespace std;
// int main()
// {  
// int a, b, r,c, d;
// cout<<"Enter any thee digit number\n ";
// cin>>a;
// b= a/100;
// r = a%100;
// c = r/10;
// d = r%10;
// cout<<"The sum of three digit number is :" <<b+c+d;
// return 0;
// }

// ------------or-------------
// #include<iostream>
// using namespace std;
// int main()
// {  
// int a;
// cin>>a;
// cout<<"sum="<<a%100%10+a%100/10+a/100;
// return 0;
// }

// Q.5. Write a C++ program  to convert the given tem. in celcius to fahrenhite?
// #include<iostream>
// using namespace std;
// int main()
// {  
// int a;
// cout<<"enter the temperature in degree celcius:";
// cin>>a;
// cout<<"the temperature in degree fahrenhite is :";
// cout<<((9*a)/5)+32;
// return 0;
// }

// Q.6. Write a C++ program that will calculate and print the simple intrest?
// #include<iostream>
// using namespace std;
// int main()
// {  
// int p,r,t;
// cout<<"Enter the value of Principle amount, rate and time period : \n";
// cin>>p>>r>>t;
// cout<<"Simple Interest is : "<<(p*r*t)/100;
// return 0;
// }

// Increment operator ++
// int a=20;
// cout<<++a<<endl;  // output will be 21 and 22 prefix
// cout<<a++<<"\n"; // postfix output 20 and then 
// cout<<a<<"\n";  // here it will print 21

// #include<iostream>
// using namespace std;
// int main()
// {  
// int a=10, b=2,c;
// c=a++; // c=10, a=11
// b=++c; // b=11, c=11
// a=++b; // a=12, b=12
// cout<<"a="<<a;
// cout<<"\n b="<<b;
// cout<<"\n c="<<c;
// return 0;
// }

// #include<iostream>
// using namespace std;
// int main()
// {  
// int a=30, b=20, c=19;
// b=c--;
// a=--b;
// c=b--;
// a=c--;
// cout<<"a="<<a<<"\nb="<<b<<"\nc="<<c;
// return 0;
// }

// Q.7 Write a program to find area of rectangle?
// #include<iostream>
// using namespace std;
// int main()
// {  
// int a, b;
// cout<<"Enter length  of rectangle : ";
// cin>>a;
// cout<<"Enter breadth of rectangle : ";
// cin>>b;
// cout<<"Area of Rectangle = "<<a*b;
// return 0;
// }

// Q.8 Write a program to find square and cube of any number entered by user?
// #include<iostream>
// using namespace std;
// int main()
// {  
// int a;
// cout<<"Enter an integer : ";
// cin>>a;
// cout<<"Square of "<<a<<" = "<<a*a;
// cout<<"\nCube of "<<a<<" = "<<a*a*a;
// return 0;
// }

// Q.9 Write a program to find the area of circle?
// #include<iostream>
// using namespace std;
// int main()
// {  
// int a;
// cout<<"Enter radius of Circle : ";
// cin>>a;
// float area=(3.14)*(a*a);
// cout<<"Area of Circle = "<<area;
// return 0;
// }

// Q. Find the output of following problem:
// #include<iostream>
// using namespace std;
// int main()
// {  
// int a,b;
// a=29<<3;
// b=76>>5;
// a=++b; a=3, b=3
// b=--a;b=2, a=2
// cout<<a; a=2, b=2
// cout<<b;
// return 0;
// }

// Q.10 W.A.P to find out the largest no. between two no.
// #include<iostream>
// using namespace std;
// int main()
// {  
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
// return 0;
// }

// Q.12 W.A.P to print the absolute value.
// #include<iostream>
// using namespace std;
// int main()
// {  
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
// return 0;
// }

// Q.13 W.A.P to findout the given no. is even or odd.
// #include<iostream>
// using namespace std;
// int main()
// {  
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
// return 0;
// }

// Q.14 W.A.P to findout the given character is vovel or consonent.
// #include<iostream>
// using namespace std;
// int main()
// {  
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
// return 0;
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
// #include<iostream>
// using namespace std;
// int main()
// {  
// int a;
// cout<<"Enter age\n";
// cin>>a;
// if(a<0)
// {
//     cout<<"Age cannot be negative.\n";
// }
// cout<<"your age is="<<a;
// return 0;
// }

// Example of IF-else condition .
// #include<iostream>
// using namespace std;
// int main()
// {  
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
// return 0;
// }

// Example of nested.
// #include<iostream>
// using namespace std;
// int main()
// {  
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
// return 0;
// }

// Example of ladder 
// #include<iostream>
// using namespace std;
// int main()
// {  
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
// return 0;
// }

// Q.15 if p=marks, c=marks, and m=marks then total=? per=? if per=below 35 then fail. if per=35-49 then 3rd division pass. if per=50-59 then 2nd year pass. if per=60-100 then 1st division pass.
// #include<iostream>
// using namespace std;
// int main()
// {  
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
// return 0;
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

// #include<iostream>
// using namespace std;
// int main()
// {  
// int a=1;
// prnt:
// cout<<a<<endl;
// a++;
// if(a<=10)
// {
//     goto prnt;
// }
// return 0;
// }

// Q.1 W.A.P to print the table of 5 using goto statement.
// #include<iostream>
// using namespace std;
// int main()
// {  
// int a=1,b;
// cout<<"enter no.";
// cin>>b;
// start:
// cout<<a<<"x"<<b<<"="<<a*b<<endl;
// if(a++<10)
// {
//     goto start;
// }
// return 0;
// }

// <------switch case statment------
// #include<iostream>
// using namespace std;
// int main()
// {  
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
// return 0;
// }

// Q.2 W.A.P 
// #include<iostream>
// using namespace std;
// int main()
// {  
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
// return 0;
//}

// <-----------DO-WHILE  LOOP -------------->
// #include<iostream>
// using namespace std;
// int main()
// {  
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
// return 0;
// }


// #include<iostream>
// using namespace std;
// int main()
// {  
// int a=1,n;
// cout<<"enter the last value\n";
// cin>>n;
// do
// {
//     cout<<a<<"\n";
//     a++;
// } while (a<=n);
// return 0;
// }

// #include<iostream>
// using namespace std;
// int main()
// {  
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
// return 0;
// }

// #include<iostream>
// using namespace std;
// int main()
// {  
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
//return 0;
//}

// #include<iostream>
// using namespace std;
// int main()
// {  
// int a=1,b;
// cout<<"enter the value \n";
// cin>>b;
// do  
// {
//     cout << a<<"x"<<b <<"=" << a*b << endl;
//     a++ ;
// } 
// while (a <= 10);
// return 0;
//}

// #include<iostream>
// using namespace std;
// int main()
// {  
// int a,b=0;
// cout<<"enter the last value \n";
// cin>>a;
// do
// {
//     b=a+b;
//     a--;
// } while (a>=1);
// cout<<"sum="<<b;
//return 0;
//}

// <-----------while loop -------->
// #include<iostream>
// using namespace std;
// int main()
// {  
// int a=1;
// while(a<=10)
// {
//     cout<<a<<"\n";
//     a++;
// }
//return 0;
//}

// #include<iostream>
// using namespace std;
// int main()
// {  
// int a=1;
// while(a<=10)
// {
//     cout<<a*a<<"\n";
//     a++;
// }
// return 0;
//}

// Q. W.A.P to find the square of any given no. by using while loop?
// #include<iostream>
// using namespace std;
// int main()
// {  
// int a;
// cout<<"Enter a number: ";
// cin>>a;
// while(a>=1)
// {
//     cout<<a*a<<"\n";
//     a--;
// }
// return 0;
// }

// Q. W.A.P to find the factorial of any no. using while loop?
// #include<iostream>
// using namespace std;
// int main()
// {  
// int a,b=1;
// cout<<"Enter the number : ";
// cin>>a;
// while(a>=1)
// {
//     b=a*b;
//     a--;
// }
// cout<<"factorial="<<b;
// return 0;
//}

// Q. W.A.P to calculate for the given base and power?
// #include<iostream>
// using namespace std;
// int main()
// {  
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
// return 0;
//}

// Q. W.A.P to findout the given no. is prime or not?
// #include<iostream>
// using namespace std;
// int main()
// {  
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
// return 0;
// }

// Q. W.A.P to count the no. of divisors for a given no.?
// #include<iostream>
// using namespace std;
// int main()
// {  
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
// return 0;
//}

// Q. W.A.P to print the given no. in reverse order?
// #include<iostream>
// using namespace std;
// int main()
// {  
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
// return 0;
//}

// Q.W.A.P to  print the squareroot of any no. ?
// #include<iostream>
// using namespace std;
// int main()
// {  
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
// return 0;
//}

// ----------nested loop concepts-------

// #include<iostream>
// using namespace std;
// int main()
// {  
// for(int r=1; r<=3; r++)
// {
//     for(int c=1;c<=r; c++)
//     {
//         cout<<"*"<<"\t";
//     }
//     cout<<"\n";
// }
// return 0;
// }

// #include<iostream>
// using namespace std;
// int main()
// {  
// for(int r=3; r>=1; r--)
// {
//     for(int c=1; c<=r; c++)
//     {
//         cout<<"*"<<"\t";
//     }
//     cout<<"\n";
// }
// return 0;
//}

// #include<iostream>
// using namespace std;
// int main()
// {  
// for(int r=1; r<=3; r++)
// {
//     for(int c=1; c<=r; c++)
//     {
//         cout<<r<<"\t";
//     }
//     cout<<"\n";
// }
// return 0;
// }


// #include<iostream>
// using namespace std;
// int main()
// {  
// for(char r='A'; r<='C'; r++)
// {
//     for(char c='A'; c<=r; c++)
//     {
//         cout<<r<<"\t";
//     }
//     cout<<"\n";
// }
// return 0;
//}


// #include<iostream>
// using namespace std;
// int main()
// {  
// for(int r=1; r<=3; r++)
// {
//     for(int c=1; c<=r; c++)
//     {
//         cout<<r<<"\t";
//     }
//     cout<<"\n";
// }
//return 0;
//}

// #include<iostream>
// using namespace std;
// int main()
// {  
// int k=0;
// for(int r=1; r<=3; r++)
// {
//     for(int c=1; c<=r; c++)
//     {
//         k++;
//         cout<<k<<"\t";
//     }
//     cout<<"\n";
// }
//return 0;
//}

// #include<iostream>
// using namespace std;
// int main()
// {  
// char s='a';
// for(char r='a'; r<='c'; r++)
// {
//     for(char c='a'; c<=r; c++)
//     {
//         cout<<s<<"\t";
//         s++;
//     }
//     cout<<"\n";
// }
// return 0;
//}


// #include<iostream>
// using namespace std;
// int main()
// {  
// for(int r=3; r>=1; --r)
// {
//     for(int c=1; c<=r; c++)
//     {
       
//         cout<<r<<"\t";
//     }
//     cout<<"\n";
// }
//return 0;
//}

// #include<iostream>
// using namespace std;
// int main()
// {  
// int x=11;  int y=22;
// if(++x==11 && ++y==23)
// {
//     cout<<x<<" "<<y;
// }
// else if(x++==12 && y--==23){
//     cout<<x<<" "<<y;
// }
// else{
// cout<<x<<" "<<y;
// }
// return 0;
// }

// #include<iostream>
// using namespace std;
// int main()
// {  
// int a,b,k,g;
// cout<<"enter the values of a and b";
// cin>>a;
// cin>>b;
// if(a<b)
// {
// k=a;
// }
// else{
// k=b;
// }
// for(int i=1; i<k; i++)
// {
//     if (a%k ==0 && b%k == 0)
//     g=k;
// }
// cout<<g;
//return 0;
//}

// #include<iostream>
// using namespace std;
// int main()
// {  
// int a=18;
// int b=12;
// int k;
// for(int i=1; i<a && i<b ;i++)
// {
//     if(a%i==0 && b%i==0 )
//     k=i;
// }
// cout<<k;
//return 0;
//}


// #include<iostream>
// using namespace std;
// int main()
// {  
// int a[]={10,2,3,4,1};
// int t,n;
// n=sizeof(a)/sizeof(a[0]);
// for(int i=0; i<n;++i )
// {
//     for(int j=0; j<n-i-1;++j)
//     {
//         if(a[j]>a[j+1])
//         {
//             t= a[j+1];
//             a[j+1]=a[j];
//             a[j]=t;
//         }
//     }
// }
// for(int k=0;k<n;++k)
// {
//     cout<<a[k]<<"\n";
// }
//return 0;
//}


// #include<iostream>
// using namespace std;
// int main()
// {  
// int a[]={10,2,3,4,1};
// int t,n;
// n=sizeof(a)/sizeof(a[0]);
// for(int i=0; i<n;++i )
// {
//     for(int j=0; j<n-i-1;++j)
//     {
//         if(a[j]<a[j+1])
//         {
//             t= a[j+1];
//             a[j+1]=a[j];
//             a[j]=t;
//         }
//     }
// }
// for(int k=0;k<n;++k)
// {
//     cout<<a[k]<<"\n";
// }

// for(int t=2;t<=10;++t)
// {
//     for(int i=1;i<=10;++i)
//     {
//         cout<<t*i<<"\t";
//     }
//     cout<<"\n";
// }
// return 0;
// }


// ==============TWO--D array===========
// #include<iostream>
// using namespace std;
// int main()
// {  
// int arr[3][2]={1,2,3,4,5,6};
// for(int r=0; r<=2;++r)
// {
//    for(int c=0;c<2;++c)
//    {
//     cout<<arr[r][c]<<"\t";
//    }
//    cout<<"\n";
// }
// return 0;
// }


// #include<iostream>
// using namespace std;
// int main()
// {  
// int sum=0;
// int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
// for(int r=0;r<=2;++r)
// {
//     for(int c=0;c<=2;++c)
//     {
//       sum = sum+a[r][c];
//     }
// }
// cout<<"sum="<<sum;
// return 0;
// }


// #include<iostream>
// using namespace std;
// int main()
// {  
// int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
// for(int r=0;r<=2;++r)
// {
//     for(int c=0;c<=2;++c)
//     {
//     cout<<a[r][c]*a[r][c]<<"\t";
//    }
// cout<<"\n";
// }
// return 0;
// }


// #include<iostream>
// using namespace std;
// int main()
// {  
// int s=0;
// int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
// for(int r=0;r<=2;++r)
// {
//     for(int c=0;c<=2;++c)
//     {
//     if((a[r][c]%2)!=0)
//      s=s+a[r][c];
//    }
// }
//  cout<<"sum="<<s;
// return 0;
// }

// ===========transpose of matrix==========
// Q.W.A.P to transpose the matrix of  order n*n:
// #include<iostream>
// using namespace std;
// int main()
// {  
// int a[3][3]={1,2,3,4,5,6,7,8,9};
// cout<<"original matrix is \n";
// for(int r=0;r<3;r++)
// {
//     for(int c=0;c<3;c++)
//     {
//         cout<<a[r][c]<<"\t";
//     }
//     cout<<"\n";
// }
// cout<<"\n\ntransposed matrix is \n";
// for(int c=0;c<3;c++)
// {
//     for(int r=0;r<3;r++)
//     {
//        cout<<a[r][c]<<"\t";
//     }
//     cout<<"\n";
// }
// return 0;
// }

// Q.W.A.P to transpose the matrix of  order n*m:
// #include<iostream>
// using namespace std;
// int main()
// {  
// int a[3][2]={1,2,3,4,5,6};
// cout<<"original matrix is \n";
// for(int r=0;r<3;r++)
// {
//     for(int c=0;c<2;c++)
//     {
//         cout<<a[r][c]<<"\t";
//     }
//     cout<<"\n";
// }
// cout<<"\n\ntransposed matrix is \n";
// for(int r=0;r<2;r++)
// {
//     for(int c=0;c<3;c++)
//     {
//        cout<<a[c][r]<<"\t";
//     }
//     cout<<"\n";
// }
// return 0;
// }


//=======================matrix multiplication=====================================

// #include<iostream>
// using namespace std;
// int main()
// {  
//     int m1[3][2]= {{1,2},{3,4},{5,6}};
//     int m2[3][2] ={{7,8},{9,10},{11,12}};
//     for (int r = 0; r<3; r++)
//     {
//     for (int c = 0; c <2; c++)
//      {
//        cout<<m1[r][c]+m2[r][c]<<'\t';
//      }
//     cout<<endl;
//     }              
// return 0;
// }


// =============three-D array=============
// #include<iostream>
// using namespace std;
// int main()
// {  
// int a[2][2][3]={1,2,3,4,5,6,8,9,10,11,12,13};
// for(int t=0;t<2; ++t)
// {
//     for (int r=0; r<2; ++r)
//     {
//         for(int c=0; c<3; ++c)
//         {
//             cout<<a[t][r][c]<<"\t";
//         }
//      cout<<"\n";
//     }
// cout<<"\n";
// }
// return 0;
// }


