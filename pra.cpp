// To know asky value
// #include<iostream>
// using namespace std;
// int main() 
// {    
//     for(int i=0;i<=255;++i)
//     {
//         cout<<i<<"="<<char(i)<<"\t";
//     }  
//     // 65-90 is A to Z
//     // 97-122 is a to z
//     return 0;
// }

// To change the case of char without  using any built in function:
// #include <iostream>
// #include <cstring>
// using namespace std;
// int main()
// {
//     char c[10];
//     int len;
//     cout<<"Enter your name";
//     cin>>c;
//     len = strlen(c);
//     for(int i=0;i<len;i++)
//     {
//         c[i]=c[i]+32;
//     }
//     cout<<"The lowercase name is "<<c;
//     return 0;
// }

// #include <iostream>
//#include <cstring>
// using namespace std;
// int main()
// {
//     char c[10];
//     int len;
//     cout<<"Enter your name";
//     cin>>c;
//     len = strlen(c);
//     for(int i=0;i<len;i++)
//     {
//         c[i]=c[i]-32;
//     }
//     cout<<"The uppercase name is "<<c;
//     return 0;
// }

// W.A.P to toggle  between cases:
// #include <iostream>
// #include <cstring>
// using namespace std;
// int main()
// {
//     char c[10];
//     int len;
//     cout<<"Enter your name"<<"\n";
//     cin>>c;
//     len = strlen(c);
//     for(int i=0;i<len;i++)
//     {
//          if(c[i]>=65 && c[i]<=90)
//          {
//            c[i]=c[i]+32;
//          }
//          else if(c[i]>=97 && c[i]<=122)
//          {
//             c[i]=c[i]-32;
//          }
//     }
//     cout<<"The toggled name is "<<c;
//     return 0;
// }

// toggle case
// reverse string
// pallendrom (ex.NAYAN)

// =========reverse==========

// #include<iostream>
// #include<cstring>
// using namespace std;
// int main()
// {
//     char c[10];
//     int len;
//     cout<<"Enter your name";
//     cin>>c;
//     len = strlen(c);
//        for(int i=len-1;i>=0;--i)
//     {
//         cout<<c[i];
//     }
// }

// ================pallendrom=========

#include <iostream>
#include <cstring>
using namespace std;
int main()
{
 
    char c[10];
    char d[10];
    int len;
    cout<<"Enter your name";
    cin>>c;
    strcpy(d,c);
    strrev(c);
    if(stricmp(c,d)==0)
    {
        cout<<"\nIt is a palindrome number";
    }
    else    
    {
        cout<<"It is not palindrom";
    }
}

W.A.P to display the string in ascending order .

W.A.P to write the string to count the maximum frequency  of any character present in the string .
