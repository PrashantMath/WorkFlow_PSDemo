/**
  * Polyspace example.
  *       Copyright 2012-2015 The MathWorks, Inc.
  */

#include "include.h"

static int* current_data;

int tab[MAX_SIZE];
int* arr = tab;

int first_payload = 100;
int second_payload = 200;

/* Internal function         */
/* Needed for MISRA-rule 8.1 */
int return_code(int y);
int degree_computation(int a, int b, int c, int x);


void initialise_current_data(void)
{
    int i;

    current_data = &first_payload;
    for (i = 0; i < MAX_SIZE; i++) {
        tab[i] = 12;
    }
}


void partial_init(int* new_alt)
{

    if (read_bus_status()) {
        *new_alt = true;
    }
}


void compute_new_coordonates(void)
{
    int new_altitude;

    partial_init(&new_altitude);
    if (new_altitude == true) {
        *current_data = 100;
    } else {
        *current_data = 100;
    }
}


int return_code(int y)
{
    return (2 * y);
}


int degree_computation(int a, int b, int c, int x)
{
    /* polyspace<MISRA-C3:15.5:Medium:fix> Fixed added int ret_value */
    int ret_value;
    int y;
    y = a * x * x + b * x + c;

    if ((y < -93) || (y > 63)) {
        ret_value = return_code(y);
    } else {
        ret_value = 2 * x + 1;
    }
    return ret_value;
}


int polynomia(int input)
{
    /* polyspace<MISRA-C3:15.5:Medium:fix> Fixed added int ret_value */

    int y, i;

    for (i = 0; i <= input; i++) {
        y = degree_computation(1, -23, -15, i);
    }

    if ((y >= -5) && (y <= 7)) {
        /*return y;*/
    } else {
        y = return_code(10);
        /* return y;*/
    }
    return y;
}
