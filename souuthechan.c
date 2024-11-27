#include<stdio.h>
#include<math.h>


int checkchan(long long n) {
    return n % 2 != 0;
}

int main () {
    int t;
    scanf("%d", &t);
    while(t--) {
        long long n;
        scanf("%lld", &n);
        int dem1 = 0, dem2 = 0;
        long long tmp = n;
        while(tmp != 0) {
            int r = tmp % 10;
            if(r % 2 !2= 0) {
                dem1++;
            } else{dem2++;}
            tmp /= 10;
        }
        if(dem1 > dem2 && checkchan(n)) {
            printf("YES\n");
        } else {printf("NO\n");}
    }
    return 0;
}