// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
//     char a[100] = "he";
//     char b[100] = "helli";
//     int num;
//     int num2;
//     for (int i = 0;; i++)
//     {
//         if (a[i] == '\0' && b[i] == '\0')
//         {
//             printf("same\n");
//             break;
//         }
//         else if (a[i] == '\0')
//         {
//             printf("a coto\n");
//             break;
//         }
//         else if (b[i] == '\0')
//         {
//             printf("b coto\n");
//             break;
//         }
//         if (a[i] == b[i])
//         {
//             i++;
//         }
//         else if (a[i] < b[i])
//         {
//             printf("a coto\n");
//         }
//         else
//         {
//             printf("b coto");
//             break;
//         }
//     }

//     return 0;
// }
#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    char a[100] = "hellz";
    char b[100] = "helli";
    int valu = strcmp(a, b);
    printf("%d", valu);
    return 0;
}