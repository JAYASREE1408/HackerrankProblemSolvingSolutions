int* reverseArray(int a_count, int* a, int* result_count) {
    *result_count = a_count;
    int i=0,j=a_count-1;
    while(i<j){
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
    }
    return a;

}
