/*
** EPITECH PROJECT, 2023
** Memory_Workshop
** File description:
** exo_1
*/

#include <stdlib.h>
#include <string.h>

char *create_str(void)
{
    char *src = "Hello world!";
    size_t len = strlen(src);
    char *dest = malloc(sizeof(char) * (len + 1));

    if (dest == NULL) {
        return NULL;
    }
    for (size_t i = 0; i < len; i++) {
        dest[i] = src[i];
    }
    return dest;
}