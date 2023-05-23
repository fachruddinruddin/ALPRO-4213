#include <iostream>
using namespace std;
void mineven(int arr[],int n);
bool isodd(int a);

int main(){
int arr[]={6,7,4,3,2};
int size= sizeof(arr)/sizeof(arr[0]);
mineven(arr,size);
return 0;
}

bool isodd(int a){
return (a % 2 !=0)? true : false;
}

void mineven(int arr[],int n){
int idx =-1;
int temp= arr[0];

    for (int i=0;i<n;i++){
        if(temp>=arr[i] && !isodd(arr[i])){
            idx=i;
            temp=arr[idx];
        }
    }
    if(idx!=-1){
        cout <<"Genap Terkecil adalah : "<<arr[idx]<<endl;
        cout <<"Index ke : "<<idx<<endl;
    }
    else{
        cout <<"Tidak ada angka genap"<<endl;
    }
}
