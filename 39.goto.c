// Goto
#include <stdio.h>
int main() {
int i = 0;
loop:
printf("%d\n", i);
i++;
if (i < 5) {
goto loop;
}
return 0;
}
