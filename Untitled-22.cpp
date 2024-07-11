#include<iostream>
using namespace std;
int main()
{
    int n=4;
    int a[n]={1,2,3,4};
    int r=1;
    while(r){
    int i;
    cout<<"Press 1. Insertion \tPress 2. Deletion \nPress 3. Updation \tPress 4. Read \n\t Press 5. Exit \n";
    cin>>i;
    
    if(i==1){
        n++;
        cin>>a[n-1];
    }
    else if(i==2){
        int d;
        cin>>d;
        int count=0;
        for(int i=0;i<n;i++){
        if(a[i]==d){ 
        cout<<"Deleted \n";
        count=1;
        for(int j=i;j<n;j++){
            a[j]=a[j+1];
        }
        n--;
        }
        
    }
    if(count==0)
    cout<<"Not found \n";
    }
    else if(i==3){
        int number,index;
        cin>>number>>index;
        a[index]=number;
    }
    else if(i==4){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<"\n\n";
    }
    else if(i==5) r=0;
    else cout<<"Wrong Choice \n";
    }
} 