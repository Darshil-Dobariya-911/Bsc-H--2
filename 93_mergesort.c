#include<stdio.h>
#include<stdlib.h>

int* divide(int* arr,int start,int end){
    int size=end-start;
    int* temparr = (int*)malloc(size * sizeof(int));

    for (int i = 0; i < size; i++) {
    temparr[i] = arr[start + i];
    }

    return temparr;
}

int* merge(int* left,int* right,int leftlength,int rightlength){
    int i=0,j=0,k=0;
    int size =leftlength+rightlength;
    int* mix = (int*)malloc(size * sizeof(int));

    while(i<leftlength && j<rightlength){
        if(left[i]<right[j]){
            mix[k]=left[i];
            i++;
            k++;
        }
        if(left[i]>right[j]){
            mix[k]=right[j];
            j++;
            k++;
        }
    }
    while(i<leftlength){
        mix[k]=left[i];
        i++;
        k++;
    }
    while(j<rightlength){
        mix[k]=right[j];
        j++;
        k++;
    }
    return mix;
}

int* mergesort(int *arr,int length){
    if(length<=1){
        int* single = (int*)malloc(length * sizeof(int));
        if (length == 1) single[0] = arr[0];
        return single;
    }

    int mid = length/2;

    int* templeft = divide(arr,0,mid);
    int* tempright = divide(arr,mid,length);

    int leftlength = mid-0;
    int rightlength = length-mid;

    int* left = mergesort(templeft,mid);
    int* right = mergesort(tempright, length - mid);


    int* merged = merge(left, right, leftlength, rightlength);
    free(left); 
    free(right);
    return merged;

}

int main(){
    int arr[]={43,32,12,76,99,1,34,6};
    int* ans = mergesort(arr,7);
    
    for(int i=0;i<7;i++){
        printf("%d, ",ans[i]);
    }
}