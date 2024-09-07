// #include <iostream>  // find the number of pairs of which sum equals to the target sum
// using namespace std;
// int main()
// {

//    int array[]={3,4,6,7,1};
//    int tagsum=99,pairs=0;

//    for(int i=0;i<5;i++){
//    for(int j=i+1;j<5;j++){
//         if(array[i]+array[j]==tagsum)
//         {
//             pairs++;
//         }

//    }
//    }

//    cout<<pairs<<endl;
// }

// #include<iostream> // find the number which tripletsum is equal to target sum
// using namespace std;
// int main()
// {
//     int array[] = {3,1,2,4,0,6};
//         int tagsum=5,pairs=0;
//         for(int i=0;i<6;i++)
//         {
//             for(int j=i+1;j<6;j++)
//             {
//                 for(int k=j+1;k<6;k++)
//                 {
//                     if(array[i]+array[j]+array[k]==tagsum)
//                     {
//                         pairs++;
//                     }
//                 }
//             }
//         }
//         cout<<pairs<<endl;
// }

// #include<iostream> // find unique number in dubplicate elemates
// using namespace std;
// int main()
// {

// int a[]={2,3,1,3,2,4,1};
//    int n=7;

//    for(int i=0;i<n;i++)
//    {
//     for(int j=i+1;j<n;j++)
//     {
//         if(a[i]==a[j])
//         {
//             a[i]=a[j]=-1;
//         }
//     }
//    }

//   for(int i=0;i<n;i++)
//   {
//     if(a[i]>0)
//     {
//         cout<<a[i]<<endl;
//     }
//   }

// }

// #include<iostream> //find second largest number
// #include<climits>
// using namespace std;

// int largesteleindex(int arr[],int n)
// {
//     int max=INT_MIN;
//     int maxindex=-1;
//     for(int i=0;i<n;i++)
//     {
//         if(arr[i]>max)
//         {
//             max=arr[i];
//             maxindex=i;
//         }
//     }
// return maxindex;

// }

// int main()
// {

// int n;
// cout<<"enter the size of array: "<<endl;
// cin>>n;

// int arr[n];

// for(int i=0;i<n;i++){
//   cin>>arr[i];
// }


// int indexoflarg=largesteleindex(arr,n);
// cout << "The largest number is: " << arr[indexoflarg] << endl;
// //arr[indexoflarg]=-1;

// int largestelement=arr[indexoflarg];
// for(int i=0;i<n;i++){
//     if(arr[i]==largestelement){
//         arr[i]=-1;
//     }
// }


// int indexofseclarg=largesteleindex(arr,n);
// cout<<"The second largest number is: "<<arr[indexofseclarg]<<endl;




// return 0;
// }

// #include<iostream>
// #include<climits>
// using namespace std;

// int secondlargestele(int arr[],int n)
// {
//     int max=INT_MIN;
//     int second_max=INT_MIN;

//     for(int i=0;i<n;i++){
//         if(arr[i]>max){
//             max=arr[i];
//         }
//     }

//     for(int i=0;i<n;i++){
//         if(arr[i]>second_max && arr[i]!=max){
//             second_max=arr[i];
//         }
//     }

//     return second_max;
// }
// int main()
// {

// int arr[]={2,3,5,7,6,1,7};
// int n=7;
// cout<<secondlargestele(arr,n)<<endl;
// }

#include <iostream>
using namespace std;
int main()
{
    //int arr[] = {1, 7, 5, 9, 11};
    int max;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
    max = arr[0];
    for (int i = 1; i < 5; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    int smax=arr[0];
    for(int i=0;i<5;i++){
        if(arr[i]>smax){
            if(smax=arr[i]);
            }
        }
    }
    //cout << "Largest element is " << max << endl;
    cout<<"the second largest number is "<<smax<<endl;
}
    cout<< "Largest element is " << max << endl;
}
