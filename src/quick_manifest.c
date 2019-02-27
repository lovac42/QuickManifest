/**
Copyright: (C) 2019 Lovac42
Support: https://github.com/lovac42/QuickManifest
License: GNU GPL, version 3 or later; http://www.gnu.org/copyleft/gpl.html
Version: 0.0.1
*/


#include <stdio.h>
#include <time.h>

int main(int argc, char **argv){

    printf("{\n");
    printf("    \"name\": \"%s\",\n",argv[1]);
    printf("    \"package\": \"%s\",\n",argv[2]);
    printf("    \"mod\": %d\n",(int)time(NULL));
//TODO: Add conflict field
    printf("}");

    return 0;
}
