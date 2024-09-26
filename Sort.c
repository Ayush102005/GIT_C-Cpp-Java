#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAMES 54

typedef struct {
    char name[60];
    int number;
} Person;

Person data[MAX_NAMES] = {
    {"Asmit", 44},
    {"Bibek", 58},
    {"Archana", 35},
    {"Amrutha", 23},
    {"chinmayi", 61},
    {"Amrutha V R", 24},
    {"Akshitha S", 18},
    {"Amrutha b k", 22},
    {"Adithya sajikumar", 9},
    {"Anusha.Humnabadkar", 33},
    {"Anushka Rai", 34},
    {"Animi Kavya", 26},
    {"Anirban Mukherjee", 27},
    {"Aryan Mishra", 39},
    {"Anugrah Singh", 31},
    {"Abhishek M", 6},
    {"Abhishek S", 7},
    {"Abhishek", 5},
    {"Adarsh", 8},
    {"Amith Gowda", 20},
    {"Aditya", 11},
    {"Ashwin Biju", 42},
    {"AnirudhSGopal", 28},
    {"Aritray Das", 36},
    {"Avinash Sagar", 46},
    {"Ashitosh", 41},
    {"Bharath H M", 54},
    {"Basan gowda", 52},
    {"Chirantana", 62},
    {"Adithyan anilkumar", 10},
    {"Arun das", 37},
    {"Aryan keshri", 38},
    {"Aditya ranjan", 13},
    {"Akshit", 17},
    {"Ajjesh N", 15},
    {"Banu prasad V", 51},
    {"Advith gowda", 14},
    {"Abhay surya", 3},
    {"Banadesh Rathod", 50},
    {"Ashwin Kumar", 43},
    {"Ayush Kumar Singh", 48},
    {"Aditya Kumar", 12},
    {"Akash kumar", 16},
    {"Aman yadav", 19},
    {"Atul Raj", 45},
    {"Bhavana M V", 55},
    {"Bhavya", 56},
    {"Bhoomika Narayan", 57},
    {"Bhagyashree Chandakavate", 53},
    {"Anshika kumaru", 30},
    {"Aayesha zabi", 1},
    {"Ananya.N", 25},
    {"Anusha govind", 32}
};

int compare(const void *a, const void *b) {
    Person *pa = (Person *)a;
    Person *pb = (Person *)b;
    return strcmp(pa->name, pb->name);
}

int main() {
    qsort(data, MAX_NAMES, sizeof(Person), compare);

    for (int i = 0; i < MAX_NAMES; i++) {
        printf("%s (%d)\n", data[i].name, data[i].number);
    }

    return 0;
}