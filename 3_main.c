// 202610411223
// 宁哲
#include <stdio.h>
struct Window { int buffer[3]; int count; };
struct Window push_data(struct Window win, int val) {
    win.buffer[win.count % 3] = val;
    win.count++;
    return win;
}
int get_average(struct Window win) {
    int sum = 0;
    int size = win.count < 3 ? win.count : 3;
    for (int i = 0; i < size; i++) sum += win.buffer[i];
    return sum / size;
}
int main(void) {
    struct Window win = {{0, 0, 0}, 0};
    int m, val;
    scanf("%d", &m);
    for (int i = 0; i < m; i++) {
        scanf("%d", &val);
        win = push_data(win, val);
        if (i > 0) printf(" ");
        printf("%d", get_average(win));
    }
    printf("\n");
    return 0;
}
