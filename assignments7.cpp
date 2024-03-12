// Q1. Calculate the product of all the elements in the given array.
#include<iostream>
using namespace std;
int main(){
   int x;
   cout<<"enter size of array ";
   cin>>x;
   int arr[x]; 
    cout<<"enter the values of array : ";
    for(int i = 0;i<=(x-1);i++){
        cin>>arr[i];
    }
    int product =1;
      for(int i = 0;i<=(x-1);i++){
        product *=arr[i]; 
      }
    cout<<product;
    }

//Q2. Find the second largest element in the given Array in one pass.
 #include<iostream>
using namespace std;
int main(){
   int x;
   cout<<"enter size of array ";
   cin>>x;
   int arr[x]; 
    cout<<"enter the values of array : ";
    for(int i = 0;i<=(x-1);i++){
        cin>>arr[i];
    }
    int max = arr[0];
    for(int i = 1;i<=(x-1);i++){
    if(max<arr[i]) max=arr[i];
    }
    cout<<max<<"\n";
    int second_max = arr[0];
    for(int i = 1;i<=(x-1);i++){
        if((second_max<arr[i]) && (arr[i]!= max)) second_max= arr[i];
    }
    cout<<second_max;
}

//Q3. Find the minimum value out of all elements in the array.
#include<iostream>
using namespace std;
int main(){
   int x;
   cout<<"enter size of array ";
   cin>>x;
   int arr[x]; 
    cout<<"enter the values of array : ";
    for(int i = 0;i<=(x-1);i++){
        cin>>arr[i];
    }
    int min = arr[0];
    for(int i = 1;i<=(x-1);i++){
    if(min>arr[i]) min=arr[i];
    }
    cout<<min;
}

// //Q4. Given an array, predict if the array contains duplicates or not.
#include <iostream>
using namespace std;
int main() {
    int x;
    cout << "Enter size of array: ";
    cin >> x;
    int arr[x];
    cout << "Enter the values of array: ";
    for(int i = 0; i < x; i++) {
        cin >> arr[i];
    }
    bool Duplicate = false;
    for(int i = 0; i < x - 1; i++) {
        for(int j = i + 1; j < x; j++) {
            if(arr[i] == arr[j]){  
            Duplicate = true;
            break;}
        }
      }
    if(Duplicate == true ) {
        cout << "Yes, the array contains duplicates." << endl;
    } else {
        cout << "No, the array does not contain duplicates." << endl;
    }
}

//Q5. WAP to find the smallest missing positive element in the sorted Array that contains only positive elements.
#include<iostream>
using namespace std;
int main() {
    int x;
    cout << "Enter size of array: ";
    cin >> x;
    int arr[x];
    cout << "Enter the values of array: ";
    for(int i = 0; i < x; i++) {
         cin >> arr[i];}
    int y = 1;
    for(int i=0;i<=x;i++){
        if(arr[i]==y) y+=1;
        else if (arr[i]>y)
        {
            y;
        }
         
        }
    cout<<y;
    }    

// Q6: Predict the output.
// Ans) 0 to 48. 

