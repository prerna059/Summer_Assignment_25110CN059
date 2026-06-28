#include<stdio.h>
#include<string.h>

int main(){
    char str[300];
    char compressed[600]; 
    int i = 0, j = 0;

    puts("Enter first string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    while(str[i] != '\0'){
        char current= str[i];
        int count= 1;

      while(str[i + count] == current){
            count++;
        }

      compressed[j++] = current;//Store char
      if(count>1){
            int temp=count;
            char digits[10];
            int d=0;
          //extract digits in reverse order
            while(temp>0){
                digits[d++] = (temp%10)+'0';
                temp=temp/10;
            }
            for (int k = d-1; k>=0; k--) {
                compressed[j++] = digits[k];
            }
        }

        i=i+count;//move to next new char group
    }

    compressed[j] = '\0';//terminate

 printf("Compressed string: %s", compressed);

    return 0;
}
