#include <stdio.h>
#include <stdlib.h>

//float array_loop(n,argv) {
//    int arraySize = strtol(argv[1], NULL, 10);
//    float array[arraySize];
//
//    for(int index = 0,start = 2 ;start <= arraySize+1 ;start++,index++){
//        array[index] = strtol(argv[start], NULL, 10);
//    }
//    return array; "Doing that in std C is not possible." =)
//}


int main(int argc, char *argv[]) {


    int arraySize = atoi(argv[1]);
    float array[arraySize];

    float min = atoi(argv[2]);
    float max = atoi(argv[2]);


    if (arraySize < 1 || (argc - 2 != atoi(argv[1]))) {
        printf("%s\n", "array size not specified / array size != values given");
    } else {
        for (int index = 0, start = 2; start <= arraySize + 1; start++, index++) {
            array[index] = atoi(argv[start]);
            printf("%s %f\n","value: ", array[index]);
            if (array[index] < min) {
                min = array[index];
            } else if (array[index] > max) {
                max = array[index];
            }
        }
        for ( int index1 = 0; index1 <= arraySize - 1; index1++) {
            if (array[index1] == min) {
                printf("%s %f\n","max_result_value: ", max);
            } else if (array[index1] == max) {
                printf("%s %f\n","min_result_value: ", min);
            } else {
                printf("%s %f\n","result_value: ", array[index1]);
            }
        }
    }

    return 0;
}