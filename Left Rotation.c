int* rotateLeft(int d, int arr_count, int* arr, int* result_count) {
    *result_count = arr_count;
    int *a=malloc(arr_count * sizeof(int));
    int i;
    for(i=0;i<d;i++){
        int temp=arr[0];
        for(int j=0;j<arr_count;j++){
            arr[j]=arr[j+1];
        }
        arr[arr_count-1]=temp;
    }
    for(i=0;i<arr_count;i++){
        a[i]=arr[i];
    }
    return a;

}
