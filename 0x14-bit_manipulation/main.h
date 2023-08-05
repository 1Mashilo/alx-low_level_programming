#ifndef MAIN_H
#define MAIN_H

unsigned int binary_to_uint(const char *binary_number);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int retrieve_index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int get_bit(unsigned long int n, unsigned int index);
#endif
