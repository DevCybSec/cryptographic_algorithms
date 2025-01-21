#include <stdio.h>
#include <string.h>
#include "caesar_cipher.h"
int main(void) {
    const int key = 200;
    char strMessage[] = "Hello World!";
    printf("String to be encrypted: %s\n", strMessage);

    // Shifting chars
    for(size_t i = 0; i < strlen(strMessage); i++) {
      *(strMessage + i) = (char)caesarShift(*(strMessage + i), key );
    }

    printf("\nEncrypted string (may contain non-printable characters):\n");
    // We'll show the encrypted string as-is, but be aware some characters might not be visible.
    printf("%s\n", strMessage);

    // Decrypt the string (shifting each character by -key).
    for (size_t i = 0; i < strlen(strMessage); i++) {
        *(strMessage+i) = (char)caesarShift(*(strMessage+i), -key);
    }

    printf("\nDecrypted string:\n");
    printf("%s\n", strMessage);

    return 0;
}