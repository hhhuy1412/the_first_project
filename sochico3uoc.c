#include<stdio.h>
#include<math.h>

int checknt(int n) {
    if(n < 2) return 0;
    for(int i = 2; i <= sqrt(n); i++) {
        if(n % i == 0) { return 0;
        }
    }
    return 1;
}

int main () {
    int t;
    scanf("%d", &t);
    while(t--) {
        long long a, b;
        scanf("%lld %lld", &a, &b);
        int dem = 0;
        for(int i = 2; (long long)i * i <= b; i++) {
            if(checknt(i)) {
                long long n = (long long)i * i;
                if(n >= a && n <= b){
                    dem++;
                }
            }
        }
        printf("%d\n", dem);
    }
    return 0;
}