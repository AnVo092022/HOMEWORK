#include <stdio.h>

int main()
{
    //int count = 0;                                khai báo bộ đếm vòng lặp
    for (int tdung = 1; tdung < 20; tdung++)
    {
        for (int tnam = 1; tnam < 34; tnam++)
        {
            // printf("count = %d\n, count==);      xuất bộ đếm vòng lặp
            int tgia = 100 - (tdung + tnam);
            if (15 * tdung + 9 * tnam + tgia == 300) // nhân 3 để dễ tính
            // if ( 5 * tdung + 3 *tnam + tgia / 3 = 100 && tgia % 3 == 0) cách tính khác
            {
                printf("trau dung = %d, trau nam = %d, trau gia = %d\n", tdung, tnam, tgia);
            }
        }
    }
    return 0;
}
