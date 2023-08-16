#include <stdio.h>
#include <stdint.h>

void read_keypad(uint8_t *key) {
    scanf("%hhu", key);
}

int main(void) {
    uint8_t key_read;
    read_keypad(&key_read);

    switch (key_read) {
        case 1:
            printf("Okay");
            break;
        case 2:
            printf("Yolo!");
            break;
        default:
            printf("Meh");
    }

    return 0;
}

