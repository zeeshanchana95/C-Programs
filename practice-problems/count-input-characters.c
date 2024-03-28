// #include <stdio.h>

/* count characters in input: 1st version */
// int main() {
//     long nc;

//     nc = 0;
//     while (getchar() != EOF) {
//         ++nc;
//         printf("%ld\n", nc);
//     }
// }


#include <stdio.h>
/* count characters in input: 2nd version */
int main() {
    double nc;

    for(nc = 0; getchar(nc) != EOF; ++nc) {
        printf("%.0f\n", nc);
    }
}


