 #include<stdio.h>
int main(){
     int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    if(n<0){
        printf("Enter a positive element.");
        return 0;
    }
    int arr[n];//let {1,2,3,4,3}
    for(int i=0; i<n; i++){
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    int sum;//let 6
    printf("Enter the sum: ");
    scanf("%d", &sum);

    int special[2];//for repeated elements whose sum might match, eg/- 3,3

 for(int l=0; l<n; l++){
    if(sum == arr[l]){
        printf("\nThe element %d matches the given sum.\n", arr[l]);
        break;
    } 
            for(int m=0; m<n; m++){
               if(m==l){
                continue;
               }
                if(arr[l]+arr[m]==sum && arr[l]!=arr[m]){
                    printf("%d %d;\n", arr[l], arr[m]);
                }
                else if(arr[l]+arr[m]==sum && arr[l] == arr[m]){
                    special[0]=special[1]=arr[l];
               }
            }
        }
       for(int j=0; j<2; j++){
        printf("%d ", special[j]);
       }
        return 0;
    }