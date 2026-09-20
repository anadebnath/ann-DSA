#include <stdio.h>

void merge(int arr[], int p, int q, int r) {
    int n1 = q - p + 1;
    int n2 = r - q;
    
    int L[n1], M[n2];
    
    for (int i = 0; i < n1; i++) {
        L[i] = arr[p + i];
    }
        
    for (int j = 0; j < n2; j++) {
        M[j] = arr[q + 1 + j];
    }

    printf("Left Subarray (L): ");
    for (int x = 0; x < n1; x++) printf("%d ", L[x]);
    printf("\nRight Subarray (M): ");
    for (int x = 0; x < n2; x++) printf("%d ", M[x]);
    printf("\n\n");
        
    int i = 0;
    int j = 0;
    int k = p;
    
    while (i < n1 && j < n2) {
        printf("Comparing L[%d]=%d and M[%d]=%d -> ", i, L[i], j, M[j]);
        if (L[i] <= M[j]) {
            printf("Taking %d from L\n", L[i]);
            arr[k] = L[i];
            i++;
        } else {
            printf("Taking %d from M\n", M[j]);
            arr[k] = M[j];
            j++;
        }
        k++;
    }
    
    while (i < n1) {
        printf("Copying remaining %d from L\n", L[i]);
        arr[k] = L[i];
        i++;
        k++;
    }
    
    while (j < n2) {
        printf("Copying remaining %d from M\n", M[j]);
        arr[k] = M[j];
        j++;
        k++;
    }
}

int main() {
    int arr[] = {2, 5, 8, 3, 6, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int p = 0;
    int q = 2;
    int r = 5;
    
    printf("Original array:\n");
    for (int x = 0; x < size; x++) {
        printf("%d ", arr[x]);
    }
    printf("\n\n");
    
    merge(arr, p, q, r);
    
    printf("\nArray after merging:\n");
    for (int x = 0; x < size; x++) {
        printf("%d ", arr[x]);
    }
    printf("\n");
    
    return 0;
}