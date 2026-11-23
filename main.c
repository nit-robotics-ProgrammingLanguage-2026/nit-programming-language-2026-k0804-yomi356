#include <stdio.h>

void g(int *p, int *q)
{
    int t = *p;
    int r = 0;

    // ビットを順番に取り出して処理する
    while (t > 0) {
        r = (r << 1) | (t & 1);
        t >>= 1;
    }

    // 処理結果をポインタを通して返す
    *q = r;
}

int main(void)
{
    int n, m;

    scanf("%d", &n);

    // 0以下の場合はNGを表示して終了する
    if (n <= 0) {
        printf("NG");
        return 0;
    }

    g(&n, &m);

    printf("%d,%d\n", n, m);

    return 0;
}