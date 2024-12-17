#include <limits.h> // For INT_MAX, UINT_MAX, etc.
#include "ft_printf.h" // Replace with your header file

int main(void)
{
    int original, custom;

    printf("\n===== Testing %%c (Character) =====\n");
    original = printf("Original: [%c]\n", 'A');
    custom = ft_printf("Custom:   [%c]\n", 'A');
    printf("Return: Original [%d], Custom [%d]\n", original, custom);

    printf("\n===== Testing %%s (String) =====\n");
    original = printf("Original: [%s]\n", "Hello, world!");
    custom = ft_printf("Custom:   [%s]\n", "Hello, world!");
    printf("Return: Original [%d], Custom [%d]\n", original, custom);

    original = printf("Original: [%s]\n", NULL);
    custom = ft_printf("Custom:   [%s]\n", NULL);
    printf("Return: Original [%d], Custom [%d]\n", original, custom);

    printf("\n===== Testing %%p (Pointer) =====\n");
    int a = 42;
    original = printf("Original: [%p]\n", &a);
    custom = ft_printf("Custom:   [%p]\n", &a);
    printf("Return: Original [%d], Custom [%d]\n", original, custom);

    original = printf("Original: [%p]\n", NULL);
    custom = ft_printf("Custom:   [%p]\n", NULL);
    printf("Return: Original [%d], Custom [%d]\n", original, custom);

    printf("\n===== Testing %%d and %%i (Signed Integers) =====\n");
    original = printf("Original: [%d]\n", 42);
    custom = ft_printf("Custom:   [%d]\n", 42);
    printf("Return: Original [%d], Custom [%d]\n", original, custom);

    original = printf("Original: [%d]\n", -42);
    custom = ft_printf("Custom:   [%d]\n", -42);
    printf("Return: Original [%d], Custom [%d]\n", original, custom);

    original = printf("Original: [%d]\n", INT_MIN);
    custom = ft_printf("Custom:   [%d]\n", INT_MIN);
    printf("Return: Original [%d], Custom [%d]\n", original, custom);

    original = printf("Original: [%d]\n", INT_MAX);
    custom = ft_printf("Custom:   [%d]\n", INT_MAX);
    printf("Return: Original [%d], Custom [%d]\n", original, custom);

    printf("\n===== Testing %%u (Unsigned Integers) =====\n");
    original = printf("Original: [%u]\n", 42);
    custom = ft_printf("Custom:   [%u]\n", 42);
    printf("Return: Original [%d], Custom [%d]\n", original, custom);

    original = printf("Original: [%u]\n", UINT_MAX);
    custom = ft_printf("Custom:   [%u]\n", UINT_MAX);
    printf("Return: Original [%d], Custom [%d]\n", original, custom);

    printf("\n===== Testing %%x and %%X (Hexadecimal) =====\n");
    original = printf("Original: [%x]\n", 255);
    custom = ft_printf("Custom:   [%x]\n", 255);
    printf("Return: Original [%d], Custom [%d]\n", original, custom);

    original = printf("Original: [%X]\n", 255);
    custom = ft_printf("Custom:   [%X]\n", 255);
    printf("Return: Original [%d], Custom [%d]\n", original, custom);

    original = printf("Original: [%x]\n", 0);
    custom = ft_printf("Custom:   [%x]\n", 0);
    printf("Return: Original [%d], Custom [%d]\n", original, custom);

    original = printf("Original: [%X]\n", UINT_MAX);
    custom = ft_printf("Custom:   [%X]\n", UINT_MAX);
    printf("Return: Original [%d], Custom [%d]\n", original, custom);

    printf("\n===== Testing %%%% (Percent Sign) =====\n");
    original = printf("Original: [%%]\n");
    custom = ft_printf("Custom:   [%%]\n");
    printf("Return: Original [%d], Custom [%d]\n", original, custom);

    return 0;
}
