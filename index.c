#include "stdlib.h"
#include "string.h"

#export= upper

char *upper (char *s) {
    size_t l = strlen(s);
    char *r = (char *) malloc(l + 1);
    for (size_t i = 0; i < l; ++i) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            r[i] = s[i] - 32;
        }
        else r[i] = s[i];
    }
    return r;
}
