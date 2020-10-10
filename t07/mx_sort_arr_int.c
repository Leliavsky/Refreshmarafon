// #include <stdio.h>

void mx_sort_arr_int(int *arr, int size){
    for (int i = 0; i < size; ++i){
        for (int j = i + 1; j < size; ++j){
            if (arr[i] > arr[j]){
                int a =  arr[i];
                arr[i] = arr[j];
                arr[j] = a;
            }
        }
    }
}

// int main() {
//    int arr[] = {3, 55, -11, 1, 0, 4, 22};
//    mx_sort_arr_int(arr, 7);
//    printf("%d", *arr);
// }
