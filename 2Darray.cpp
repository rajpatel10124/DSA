/*#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;

    int a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }

    cout<<"this is martix: "<<endl;
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
*/

/*#include<iostream> // search elements
using namespace std;
int main()
{
    int n,m;
    cout<<"enter the size of row and column";
    cin>>n;
    cin>>m;
int target;
 cout<<"enter your target"<<endl;
     cin>>target;

     bool found=false;
    int mat[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>mat[i][j];
        }
    }

    int r=0,c=m-1;

    while(r< n and c >=0){
            if(mat[r][c]==target){
                    found=true;

            }
        if(mat[r][c]>target){
            c--;
        }
        else{
            r++;
        }
    }
    if(found){
        cout<<"Element found";
    }
    else{
        cout<<"Element does not exist";
    }


    return 0;
}
*/

/*#include<iostream>
using namespace std;
int main()
{
    char arr[100]="tulsiii";
    int i=0;

    while(arr[i]!='\0')
    {
        cout<<arr[i]<<endl;
        i++;
    }

    // cheak palindrome
    int n;
    cin>>n;

    char arr[n+1];
    cin>>arr;

    bool cheak=1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=arr[n-1-i])
        {
            cheak=0;
            break;
        }
    }

    if(cheak==true)
    {
        cout<<"word is a palindrome"<<endl;
    }
    else
    {
        cout<<"word is not a palindrome";
    }
    return 0;
}

*/


// #include<iostream>  // transpose matrix
// using namespace std;
// int main()
// {
//    int n,m;
//    cin>>n;
//    cin>>m;

//    int a[n][m];
//    for(int i=0;i<n;i++)
//    {
//     for(int j=0;j<m;j++)
//     {
//        cin>>a[i][j];
//     }
//    }

//    int transpose[m][n];
//    for(int i=0;i<m;i++)
//    {
//     for(int j=0;j<n;j++)
//     {
//         transpose[i][j]=a[j][i];
//     }
//    }

//    for(int i=0;i<m;i++)
//    {
//      for(int j=0;j<n;j++)
//      {
//         cout<<transpose[i][j]<<" ";
//      } 
//      cout<<endl;
//    }
// }