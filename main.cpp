#include <iostream>

using namespace std;

int* BubbleSort(int data[]){

for(int i=0; i<sizeof(data)/sizeof(data[0])-1; i++){
    for(int j=0; j<sizeof(data)/sizeof(data[0])-1-i; j++){
         if(data[j+1]>data[j]){
            int temp = data[j+1];
            data[j+1]=data[j];
            data[j]=temp;
        }
    }
}
return data;
}

int main()
{
    int data[]={8,4,9,7,6,5,13,11,10};
    int *a=BubbleSort(data);
    for(int i=0; i<sizeof(data)/sizeof(data[0]); i++){
        cout<<a[i];
        if(i==sizeof(data)/sizeof(data[0])-1){
        }else{
        cout<<",";
        }
    }

   return 0;
}
