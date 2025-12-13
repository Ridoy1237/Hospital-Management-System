#include <stdio.h>
#include "../include/utils.h"
#include <stdbool.h>

int test_validate_validphone() {
    char phone[]="01312381636";
    int expected=1;
    int actual=utils_is_valid_phone(phone);
    int succes= actual==expected;
    printf("\n\nValid phone number: \n");
    printf("actual: %d, expected: %d,succes:%d\n",actual,expected,actual==expected);

}
int test_validate_invalidphone() {
    char phone[]="01112381636";
    int expected=0;
    int actual=utils_is_valid_phone(phone);
    int succes= actual==expected;
    printf("\nInvalid phone number: \n");
    printf("actual: %d, expected: %d,succes:%d\n",actual,expected,actual==expected);

}

int test_validate_validphone_by_fahad() {
    char phone[]="01589898989";
    int expected=1;
    int actual=utils_is_valid_phone(phone);
    int succes= actual==expected;
    printf("\n\nValid phone number: \n");
    printf("actual: %d, expected: %d,succes:%d\n",actual,expected,actual==expected);

}

int test_validate_invalidphone_by_fahad() {
    char phone[]="0123456";
    int expected=0;
    int actual=utils_is_valid_phone(phone);
    int succes= actual==expected;
    printf("\nInvalid phone number: \n");
    printf("actual: %d, expected: %d,succes:%d\n",actual,expected,actual==expected);

}

int main()
{
    test_validate_validphone();
    test_validate_invalidphone();
    test_validate_validphone_by_fahad();
    test_validate_invalidphone_by_fahad();
}