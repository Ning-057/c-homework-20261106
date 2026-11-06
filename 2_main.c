// 202610411223
// 宁哲
#include <stdio.h>
struct Sensor { int temp; int humi; int valid; };
struct Sensor pack_sensor(int t, int h) {
    struct Sensor s;
    s.temp = t;
    s.humi = h;
    s.valid = t >= -20 && t <= 50 && h >= 0 && h <= 100;
    return s;
}
int main(void) {
    int t, h;
    scanf("%d %d", &t, &h);
    struct Sensor result = pack_sensor(t, h);
    if (result.valid) printf("TEMP=%d HUMI=%d\n", result.temp, result.humi);
    else printf("ERROR: Out of Range\n");
    return 0;
}
