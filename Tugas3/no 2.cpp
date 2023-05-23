#include <iostream>
using namespace std;

//fungsi bubblesort
void bubble(int arr[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1; j++){
            if(arr[j]<arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
//fungsi insertionsort
void insertion(int arr[], int n){
    for(int i=0; i<n; i++){
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]<key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}

int main(){
    //bubble
    int arr_bubble[]={1,1,2,2,3,4,5};
    int n=sizeof(arr_bubble)/sizeof(arr_bubble[0]);
    bubble(arr_bubble, n);
    cout<<"hasil bubble :\n";
    for(int i=0; i<n; i++){
        cout<<"["<<arr_bubble[i]<<"] ";
    }
    cout<<endl;

    //insertion
    int arr_insertion[]={1,1,2,2,3,4,5};
    n=sizeof(arr_bubble)/sizeof(arr_insertion[0]);
    insertion(arr_insertion, n);
    cout<<"hasil insertion :\n";
    for(int i=0; i<n; i++){
        cout<<"["<<arr_insertion[i]<<"] ";
    }
    cout<<endl;

    return 0;
}

