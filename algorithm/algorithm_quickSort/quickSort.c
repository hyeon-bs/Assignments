void quickSort(int left,int right, int* data) {
    int pivot = left;
    int j = pivot;
    int i = left+1;
 
    if (left < right) {
        for (; i <= right; i++) {
            if (data[i] < data[pivot]) {
                j++;
                swap(&data[j], &data[i]);
            }
        }
        swap(&data[left],&data[j]);
        pivot = j;
 
        quickSort(left, pivot-1,data);
        quickSort(pivot+1, right, data);
    }
 
}
