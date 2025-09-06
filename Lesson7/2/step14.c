#include <stdio.h>

int main(void) {
    int a = 0, k = 0;
    int res = 1;

    scanf("%d %d", &a, &k);
    if (k%2 == 0){   
        k = k/2;
        for (int i = 1;i<=k;i++){
            res *= a;
        }
        res = res*res;
    }else {
      k = k;
      for (int i = 1;i<=k;i++){
        res *= a;
      }
   }
  printf("%d\n", res);

  return 0;
}