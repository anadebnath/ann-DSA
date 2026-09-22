void merge(int arr[], int p, int q, int r)
int n1= q-p+1;
int n2= r-q;
int l [n1], m[n2];
for (int i=0; i<n1; i++)
l[i]= arr[p+i];
for (int j=0; j<n2; j++)
m[j]= arr[q+1+j];
int i,j,k;
i=0, j=0, k=p;

while (i,n1 && j<n2){
    if(l[i]<= m[j]){
        arr[k]= l[i];
        i++;
    }
    else{
        arr[k]= m[j];
        j++;
    }
    k++;
    while(i<n1){
        arr[k]= l[i];
        i++;
        k++;
    }
    while (j<n2){
        arr[k]= m[j];
        j++;
        k++;
    }
}
merge(arr, l, m, r)

int main(){
    int data= {6,4,7,8,1,9,5}
    int size= size of (data)/size of data[0];
    mergeSort(arr0.size-1);
    printf("Sorted array\n");
    for(i=0; i<size; ++i){
        printf("%d,"data[i]);
    }
    void mergeSort(int arr, int l,int r){
        if(l<r){
            int m= l+(n-l)/2;
            mergeSort(arr, l, m);
            mergeSort(arr, m+1);
            merge(arr, l, m, r);
        }
    }
}
