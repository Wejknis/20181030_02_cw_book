#include <stdio.h>

#define LOWER 0 /* dolna granica temperatur */
#define UPPER 300 /* górna granica temperatur */
#define STEP 20 /* rozmiar kroku */

main() /* zestawienie temperatur Farenheita - Celsjusza */
{
int fahr;

    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
    printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
    }