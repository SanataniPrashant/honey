// ==================Functions=============
// 1.In-built function.
// 2.User-defined function.


// without parameter  and without return type  and with parameter and without return type example :
// #include<iostream>
// using namespace std; 
// void sum()
// {
//     cout<<"example of non return function";
// }
// void add(int a, int b) //parameter , formal parameter.
// {
//     cout<<a+b;
// }
// int main()
// {
//   sum( ); 

//   for( int i=1;i<6;++i)
//   {
//     sum();
//   }

//   cout<<"\n";
//   add(45,45);

//   int a1, b1 ;
//   cout << "Enter two numbers: ";
//   cin >> a1 >> b1;
//   add(a1,b1);   //call by value   (argument, actual parameter)
// return 0;
// }


// without parameter  and with return type example :
// #include <iostream>
// using namespace std;
// int sqr()
// {
//     int  x = 9;
//     return x * x;
// }
// int main()
// {
//     cout<<sqr();
//     cout<<sqr()+1;
//     return 0;
// }

// with parameter and  with return type example :
// #include <iostream>
// using namespace std;
// int sum(int a,int b)
// {
//    return a+b; 
// }
// int main()
// {
//     int p;
//     p=sum(3,6);
//     cout<<p;
//     return 0;
// }


// Q.1 W.A.P to calculate the petrol price in mp and mh by using the function.
// #include<iostream>
// using namespace std;
// int mp(int p)
// {
//     int m = 108;
//     return m*p;
// }
// int mh(int p)
// {
//     int h = 90;
//     return h*p;
// }
// int main()
// {
//     int p;
//     cin>>p;
//     cout<<mp(p)<<"\n";
//     cout<<mp(p)+(p*20)<<"\n";
//     cout<<mh(p)<<"\n";
//     cout<<mh(p)+(p*20);
//     return 0;
// }

// ============OR=============

// #include<iostream>
// using namespace std;
// void mp(int ltr)
// {
//    cout<<108*ltr;
// }
// void mh(int ltr)
// {
//    cout<<90*ltr;
// }
// int main()
// {
//     mp(45);
//     cout<<'\n';
//     mh(45);
//     return 0;
// }

// Q.2 W.A.P to calculate the factorialof any no. by using the function.

// #include <iostream>
// using namespace std;
// int fact()
// {
//     int a,b=1;
//     cout<<"enter the value of a \n";
//     cin>>a;
//     while(a>=1)
//     {
//         b=a*b;
//         --a;
//     }
//     cout<<"the factorial of the given no. is\n"<<b;
// }
// int main()
// {
//  fact();
//  return 0;
// }

// ===============or===============

// #include <iostream>
// using namespace std;
// void fact(int k)
// {
//   int j=k-1;
//   for(j; j>=1 ; --j)
//   {
//     k=k*j;
//   }
//   cout << "Factorial is " << k  << endl;
// }
// int main()
// {
//     int k;
//     cout << "Enter the number: ";
//     cin >> k;
//     if (k <= 0)
//     {
//         cout << "\ninvalid ";
//     }
//     else
//     {
//       fact(k);
//     }
// }
// Q.3 W.A.P to calculate the table of any no. by using the function.
// #include <iostream>
// using namespace std;
// int fact()
// {
//     int a,c;
//     cout<<"enter the no.\n";
//     cin>>a;
//     for(int b=1;b<=10;++b){
//         c=a*b;
//         cout<<a<<"x"<<b<<"="<<c<<"\n";
//     }
//     return 0;
// }
// int main()
// {
//     fact();
// }

// Q.4 W.A.P to print the even no. from the given range by using the function.
// #include <iostream>
// using namespace std;
// int fact()
// {
//     int n,i;
//     cout << "Enter the range of the no.\n";
//     cin >> n;
//     for (int i=n;i>=1;--i)
//     {
//         if (i % 2 ==  0)
//             cout << i << "\t";
//     }
// }
// int main()
// {
//     fact();
//     return 0;
// }

// ===========or=========

// #include <iostream>
// using namespace std;
// int fact(int s, int e)
// {
//     for(s;s<=e;++s)
//     if(s%2!=0)
//     {
//         cout<<s;
//         if(s<e-1){
//         cout<<",";
//         }
//     }
// }
// int main()
// {
//     int s, e;
//     cout << "Enter start range: ";
//     cin >> s;
//     cout << "Enter end range: ";
//     cin >> e;
//     fact(s,e);
//     return 0;
// }

// ============== call by value ===================
 
// ============== call by reference (&)===================

// #include <iostream>
// using namespace std;
// void swap(int &x, int &y)
// {
//     int temp;
//     temp = x;
//     x = y;
//     y = temp;
//     cout << "\nafter swapping:\nx= " << x << ", y= " << y;
// }
// int main()
// {
//     int x,y;
//     cout << "Enter two numbers: \nFirst number: ";
//     cin >> x;
//     cout << "\nSecond number: ";
//     cin >> y;
//     cout << "\nBefore swapping:\nx= " << x << ", y= " << y;
//     swap(x,y);
//     cout << "\nafter swapping:\nx= " << x << ", y= " << y;
//     return 0;
// }

// => RECURSION: A function calling itself is called as recursion. 
// There are two types of recursion:
// 1. Tail recursion. In tail recursion, the recursive call is the last
// 2. Head /direct recursion. In head recursion, the recursive call is not the last statement in the function.
// 3. Recusive tree.

// => Examples of tail recursion:
// #include<iostream>
// using namespace std;
// void recur(int n)
// {
//     if (n == 0)
//     {
//     return ; // base case or stopping condition
//     }
//     recur(n-1);
//     cout<<n<<"\n";
// }
// int main()
// {   
//     int n;
//     cout <<  "enter the no.\n";
//     cin>>n;
//     recur(n);
//     return 0;   
// }

// => Example of non-tail/ Head recursion:

// #include<iostream>
// using namespace std;
// void recur(int n)
// {
//     if (n == 0)
//     {
//     return ; // base case or stopping condition
//     }
//     cout<<n<<"\n";
//     recur(n-1);
// }
// int main()
// {   
//     int n;
//     cout <<  "enter the no.\n";
//     cin>>n;
//     recur(n);
//     return 0;   
// }

// => Example of recursion :
// #include<iostream>
// using namespace std;
// void fact(int n)
// {
//     int t=n-1;
//     if (n == 1)
//     {
//         return ; // base case or stopping condition
//     } 
// }
// int main()
// {   
//     int n;
//     cout <<  "enter the no.\n";
//     cin>>n;
//     fact(n);
//     return 0;   
// }

// ***********factorial by using recursion**************
// #include<iostream>
// using namespace std;
// int fact(int n)
// {
//     if (n==0 || n == 1)
//     return n; // base case or stopping condition
//     int t = n*fact(n-1);
//     return t;
// }
// int main()
// {   
//     int n;
//     cout <<  "enter the no.\n";
//     cin>>n;
//     cout<<fact(n);
//     return 0;   
// }


// ********************Fibonacci series using recursion********************** jis position ke no. ki value chahiye ho
// #include <iostream>
// using namespace std;
// int fibo(int n)
// {
//    if (n == 0)
//    {
//     return 0;
//    }
//    if(n == 1)
//    {
//       return 1;
//    }
//    int ans = fibo(n-1)+ fibo(n-2);
//    return ans;
// }
// int main()
// {
//  int n;
//  cout << "Enter number : ";
//  cin >> n;
//  cout<<fibo(n)<<endl;
//  return 0;
// }



// Q.5 W.A.P to print the array by using the function.
// #include <iostream>
// using namespace std;
// int fact(int a[], int n)
// {
//     for(int i=0;i<n;++i)
//     {
//         cout<<a[i]<<"\t";
//     }

// }
// int main()
// {
//     int a[]= {16,24,36,48,60};
//     fact(a,5);
//     return 0;
// }

// Q.6 W.A.P to print the smallest value from the array by using the function.

// #include <iostream>
// using namespace std;


// Q.7 W.A.P to print  the array in acending order by using the function.

// Q.8 W.A.P to print  the array in decending order by using the function.

    