// ==============pointer=========

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter the size of array \n ";
//     cin >> n;
//     int *p= new int[n];  //dynamic memory allocation for integer type pointer
//     int a[5]={1,2,3,4,5};
//     for (int i = 0; i <n;++i)
//     {
//         cin>>p[i] ;   //input elements in dynamic memory allocated area
//     }
//     cout<<"stored values are :\n";
//     for(int i=0;i<n;i++)
//     {
//        cout<< p[i]<<"\t";     //printing elements using pointer
//     }
//     delete []p;            //deleting dynamically allocated memory
//     for (int i = 0; i < n; ++i)
//     {
//         cout<<p[i]<<"\t";
//     }
//     p=a;
//     cout<<"new memory of pointer \n";
//     for(int i=0;i<5;++i)
//     {
//         cout<<p[i]<<'\t';      //printing elements using normal array after assigning it to pointer
//     }
//     return 0;
// }

// #include <iostream> 
// using namespace std;
// int main()
// {
//     int arr[5] = {1, 2,  3, 4, 5};
//     int *p;             //declaring a pointer of integer type
//     p = &arr[0];             //assigning address of first element of array to the pointer
//     cout << p << "\n"; //printing address of first element of array
//     cout<<arr;                       //printing address of first element of array
//     cout << &arr[0];                 //printing address of first element of array using &array[0]
//     cout << "Value of individual elements:\n";
//     // arr[i] =*(arr+i); and *(arr+i)=arr[i] both are same. they access the value of i-th element of array
//     cout<<0[arr];                //accessing value of first element through array  name [index]
//     cout<<1[arr]<<endl;           //accessing value of second element through array  name [index]
//     cout<<*p;                    //dereferencing the pointer which gives the value stored at that location pointed by the
//     p=p+1;               //increasing the value of p by one , pointing to next element of array
//     cout<<"After incrementing p by  one,\nvalue at p is: ";
//     cout<<*p<<endl;                   //dereferencing p , gives us value at address pointed by p

   
// }

//=============double pointer (pointer to pointer)===============
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a=90;
//     cout<<"value of a ="<<a<<endl;
//     cout<<"address of a="<<&a<<endl;
//     int *ptr=&a;          //declare a pointer of integer type and point it to address of variable 'a'
//     cout<<"value of a="<<ptr<<endl;        //prints address of a
//     cout<<"address of ptr="<<&ptr<<endl; 
//     cou    
//     int **p;            //declare double pointer





// ================use of double pointer ===========

// #include <iostream>
// using namespace std;
// int main()
// {
//   int r;
//   cout<<"Enter the size of array : ";
//   cin>>r;
//   int **arr = new int *[r];
// for(int i=0;i<r;i++)
//        {
//          arr[i]=new int[r];      //create row wise 2D dynamic array
//        }
// cout<<"Elements in 2D Dynamic Array are:\n";
// for(int i=0;i<r;i++)
// {
//  for(int j=0;j<r;j++)
//  {
//    cin>>arr[i][j];
//  }
// }
// cout<<"\nThe entered 2D Dynamic Array is \n";
// for(int i=0;i<r;i++)
// {
//   for(int j=0;j<r;j++)
//   {
//     cout<<arr[i][j]<<"\t";
//   }
//   cout<<endl;
// }
// delete [] arr[*r];
// }

// =====================hhhhhhhhhhhh================
// #include <iostream>
// using namespace std;
// int main()
// {
//   int r,c;
//   cout<<"Enter number of rows\n ";
//   cin >> r;
//   cout<<"Enter number of columns\n ";
//   cin >> c;
  // int** arr = new int* [r];
  // for (int i = 0; i < r; ++i)
  // {
  //   arr[i] = new int[c];
//   }
//   cout << "Enter elements:" << endl;
//   for (int i = 0; i < r; ++i)
//   {
//     for (int j = 0; j < c; ++j){
//       cin >> arr[i][j];
//     }
//   }

//   cout << "\nThe entered matrix is:" << endl;
//   for (int i = 0; i < r; ++i)
//   {
//     for (int j = 0; j < c; ++j){
//       cout<< arr[i][j]<<"\t";
//     }
//     cout<<"\n";
//   }
   
//   delete[] arr[0];
//   arr = NULL; 
// }


// ==================INBUILT- FUNCTIONS============
// IMPORTANT TOPICS:- array, string, function, recursion,  pointer

// #include <iostream>
// #include<cstring>
// using namespace std;
// int main()
// { 
  // char c[]= "Hello World!";
  // cin.getline(c,[10]);
  // cout << c ;
  // cout<<sizeof(c);

  // char d[]= "Hello World!";
  // int e;
  // cout<<"size of  the char: ";  
  // cin>>e;
  // cin.getline(d,e);
  // cout << d ;
  // cout<<sizeof(d);

  //  char f[]= "Hello";
  //  cout<<"length ="<<sizeof(f)<<"\n";
  //  int s= sizeof(f)/sizeof(f[0]);
  //  cout<<strlen(f);
  //  cout<<s<<endl;

  //   char f[15]= "Hello";
  //  cout<<"length ="<<sizeof(f)<<"\n";
  //  int s= sizeof(f)/sizeof(f[0]);
  //  cout<<strlen(f);
  //  cout<<s<<endl;

// char a[20];
// cout<<"Enter your name : \n";
// cin>>a;
// cout<<strlen(a)<<endl;
// =========or=========
// int s=0;
// for(int i=0; a[i]!='\0'; i++)//'!\0' is used to check till null character comes in C++
//  {
//    s++;
//  }
// cout<<"Length = "<<s;



// return 0;
// }



