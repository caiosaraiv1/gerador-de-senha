#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>

bool verify_lenght(int lenght) {
    if(lenght < 12) {
        printf("Senha pequena\n");
        return false;
    }
    return true;
}

void create_password(char password[], int password_lenght, char special_chars[], char uppercase[], char lowercase[]) {

    char *arrays[] = {special_chars, uppercase, lowercase};
    int size[] = {6, 26, 26};

    int iterations = 0;

    srand(time(NULL));

    while(iterations < password_lenght) {

        int selected = rand() % 3;
        char *selected_array = arrays[selected];
        int size_array = size[selected];

        int index_array = rand() % size_array;

        password[iterations] = selected_array[index_array]; 

        iterations++;
    }

    password[password_lenght] = '\0';
}

int main() {

    int password_lenght;
    bool flag = false;

    char special_chars[6] = {'!', '@', '#', '$', '&', '*'};
    char lowercase_letters[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    char uppercase_letters[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

    while(!flag) {
        printf("Digite o tamanho da senha: ");
        scanf("%d", &password_lenght);  
        flag = verify_lenght(password_lenght);
    }

    char strong_password[password_lenght + 1];

    create_password(strong_password, password_lenght, special_chars, uppercase_letters, lowercase_letters);

    for(int i = 0; i < password_lenght; i++) {
        printf("%c", strong_password[i]);
    }
    printf("\n");

    return 0;

}