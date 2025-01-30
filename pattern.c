# include<stdio.h>

int main() {

    int n1,n2;
    printf("enter number :");
    scanf("%d", &n1);

    printf("enter number :");
    scanf("%d", &n2);

    for (int i=n1; i<=n2; i++) {
        for (int j=2; j<=i; j++){
            if (i%j==0) {
                break;
            }
            else {
                printf("%d\n", i);
            }
        }
    }
}