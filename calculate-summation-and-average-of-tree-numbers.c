/*
Welcome to the world of coding!
File: [File Name]
Author: Sadi Mahmud Sajid & Devildon

Description: [Brief description of the file's purpose]

We're thrilled to have you here! Whether you're a seasoned programmer or just starting your journey, this code is a testament to your curiosity and ambition. Let's dive in together and explore the endless possibilities of C programming.

Happy coding!
Sadi Mahmud Sajid & Devildon
*/

#include <stdio.h>
#include <stdarg.h>
#include <sys/ioctl.h>
#include <unistd.h>
#include <string.h>

void print_centered(const char *fmt, ...) {

    struct winsize w;
    ioctl(STDOUT_FILENO, TIOCGWINSZ, &w);
    int term_width = w.ws_col;
    int padding = (term_width - strlen(fmt)) / 2;

    for (int i = 0; i < padding; ++i) {
        putchar(' ');
    }

    va_list args;
    va_start(args, fmt);
    vprintf(fmt, args);
    va_end(args);
}

int main() {
    printf("\033[1m");
    printf("\033[36m");
    printf("\033[1;36m");
    print_centered("**************************************************\n");
    print_centered("*                                                *\n");
    print_centered("*          Welcome to the Coding World!          *\n");
    print_centered("*                                                *\n");
    print_centered("**************************************************\n");
    printf("\n");

    printf("\033[1;31m");
    print_centered("Presented by:\n");
    print_centered(">>>Sadi Mahmud Sajid/Devildon<<<\n");
    print_centered("(devil㉿kali)\n");
    print_centered("Contact Number:01890731620\n");
    print_centered("Gmail:sadimahmudsajid@gmail.com\n");
    printf("\033[0m");   
    printf("\033[0m");
    printf("\033[0;0;0m");
    printf("\n");

    print_centered("\033[1;33m        >>>C program to calculate summation and average of tree numbers<<<\n");

    char choice;

    do {
        float a, b, c;
        float sum, avg;

        while (1) {
        printf("\n");
        print_centered("\033[1;32m Enter the values of three numbers-> ");
        if (scanf("%f %f %f", &a, &b, &c) == 3) {
            break;
        } else {
            while (getchar() != '\n');
            printf("\n");
            print_centered("\033[1;31m        Invalid input! Please enter valid numbers.\n");
        }
        }

        sum = a + b + c;
        avg = sum / 3.0;
        printf("\n");
        print_centered("\033[1;32m   Sum-> %.2f\n", sum);
        print_centered("\033[1;32m   Avg-> %.2f\n", avg);


        printf("\n");
        print_centered("\033[1;35m         Do you want to calculate another area? (y/n): ");
        scanf(" %c", &choice);

        while (choice != 'y' && choice != 'n') {
        printf("\n");
        print_centered("\033[1;31m       Please enter 'y' or 'n': ");
            scanf(" %c", &choice);
        }

        } while (choice == 'y');

        return 0;
}
