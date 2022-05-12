// from video 1 to 2
#include <iostream>
// #
//
using namespace std;
// the pointer holds the memory address of a variable
// & => return the address, always there is a value after it
// * => return the value, always there is a pointer after it
///A name of an array is actually a pointer to the first element in the array ///

// Array as a fun. parameters
// (sorting arr)
void sort(int a[] ,int size) // a => is a pointer to the first element of Array
{
    int temp=0;
    for (size_t i = 0; i < size; i++) // if i=1
    {   for (size_t j = i+1; j < size; j++) // then j= 2 then 3 then 4 then 5
        {   if (a[i]>a[j])
            {  temp=a[i];  a[i]=a[j];  a[j]=temp;  }
        }
    }
    for (size_t i = 0; i <= size; i++)
    {  cout << a[i] << endl;  }
}

// Copying Arrays using Pointers
   // ...
// References variable
// -> are generally used as function parameters so that the passed object/variable is not the copy but
// -> the object itself.
int cal (int num, int &squar)
{
    squar = num * num;
    return num%10;
}


// exercise on structure
struct car
{
    char brand[15];
    char model[15];
    int yearom;
};
// Dynamic array

/////////////////////////////////////////// The main ////////////////////////////////////////
int main()
{
    int q[]={44,33,11,22,55};
    sort(q,4);
    // Copying Arrays using Pointers ( it's just using the pointer to point to the existing array )
    int* Arr=q;
    cout<<"without Loop: "<<Arr[0]<<" "<<Arr[1]<<" "<<Arr[2]<<" "<<Arr[3]<<" "<<*(Arr+4)<<endl;
    // Dynamic array => 1- declare a pointer , 2- allocate the memory
    int *w,size;
    cin>>size;
    w=new int [size];
    for(int i=0;i<3;i++)
        cout << w[i] << endl;
    delete []w; // to free the memory
    // Arr[i]= x[i];
    // instead of
    // int x[]={1,2,3};
    // int Arr[3];

}
/*
{
    int a=2; car newest[a];
    for (size_t i = 0; i < a; i++)
    {
        cout << "enter the " << i+1 << "car data";
        cout << "the brand:"; cin >> newest[i].brand;
        cout << "the model:"; cin >> newest[i].model;
        cout << "the model year:"; cin >> newest[i].yearom;
    }
    int temp=0;
    for (size_t i = 0; i < a; i++)
    {

       if (newest[i+1].yearom>newest[i].yearom)
       {
           temp=newest[i+1].yearom;
       }
    }
    cout << temp << endl;
}
{
    string name;
    int age,grade;
    cin >> age;
    cin.ignore(); // to avoid getline errors use cin.ignore befor it
    getline (cin,name);

    cin >> grade;
    cout << "/////////////" << endl << age << endl << name << endl << grade << endl;
}
{
    int val;
    cout << cal (87,val) << endl;
    cout << val << endl;
}
{
    int x=10;
    int &y = x; //the reference variable is like creating a new name for an existed variable
    cout << y;
}
{
    char arr[10];//={'a','b','c','d'};
    //cin >> arr;
    //cout << arr << endl;
    int size, *x;
    cin >> size;
    x = new int[size];// dynamic array
    for (size_t i = 0; i < size; i++)
        cout << x[i] << endl;
}*/

