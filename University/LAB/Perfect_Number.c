#include<stdio.h>
//Perfect Number
int main() {
  int n;
  printf("Enter the number:");
  scanf("%d", &n);// n = 6
  
  int ans = 0;

  for(int i=1; i<n; i++) { // we wont count n itself
    if(n % i == 0) { 
      ans += i; // ans = 0 + 1 + 2 + 3 = 6
    }
  }

  if(ans == n) { // 6==6
    printf("%d is a perfect number!", n);
  }
  else {
    printf("%d is not a perfect number!", n);
}
return 0;
}