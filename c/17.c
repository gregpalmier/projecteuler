/*If the numbers 1 to 5 are written out in words: one, two, three, 
four, five, then there are 3 + 3 + 5 + 4 + 4 = 19 letters used in total.

If all the numbers from 1 to 1000 (one thousand) inclusive were 
written out in words, how many letters would be used?

NOTE: Do not count spaces or hyphens. For example, 342 (three 
hundred and forty-two) contains 23 letters and 115 (one 
hundred and fifteen) contains 20 letters. The use of "and" 
when writing out numbers is in compliance with British usage.*/
#include<stdio.h>

int singles[10] = {0, 3, 3, 5, 4, 4, 3, 5, 5, 4};
// one two three four five six seven eight nine
int teens[10] = {3, 6, 6, 8, 8, 7, 7, 9, 8, 8};
// ten eleven twelve thirteen fourteen fifteen sixteen seventeen eighteen nineteen
int doubles[10] = {0, 0, 6, 6, 5, 5, 5, 7, 6, 6};
// 0, 0, twenty thirty forty fifty sixty seventy eighty ninety

int main() {
    int ans = 0;
    int hundreds = 0;
    int tens = 0;
    int ones = 0;
    int thousands = 0;
    for(int i = 1; i <= 1000; i++){
        thousands = i / 1000;
        printf("num: %d ", i);
        if (thousands > 0){
            ans = ans + singles[thousands] + 8;
        }
        hundreds = (i % 1000) / 100;
        if (hundreds > 0){
            ans = ans + singles[hundreds];
            ans = ans + 7; // hundred
            printf("hundreds: %d(%d) ", singles[hundreds], hundreds);
        }
        tens = (i % 100);
        if (tens / 10 == 1){
            printf("tens: %d(%d) ", teens[tens - 10], tens);
            ans = ans + teens[tens - 10];
        }
        if (tens / 10 > 1){
            printf("tens: %d(%d) ", doubles[tens / 10], tens);
            ans = ans + doubles[tens / 10];
        }
        ones = i % 10;

        if ((tens / 10 != 1) && (ones >= 1)) {
            printf("ones: %d(%d) ", singles[ones], ones);
            ans = ans + singles[ones];
        }
        if ((hundreds > 0) && ((tens > 0) || (ones > 0))) {
            ans = ans + 3; // and
        }
        printf("total: %d\n", ans);
    }
}
