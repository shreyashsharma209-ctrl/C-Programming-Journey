#include<stdio.h>
int main(){
/*int i = 0;
while (i<=20){
    if (i>=10){
        printf("The value is %d \n" , i); // mistake
    }
    i++;*/


// do while loop- execute first check later
/*int i = 0;
do{
     printf("The value of i is %d \n" , i);
     i++;
}
while(i<4); */

// print n natiral numbers

/*int n, i=1;
scanf("%d\n" , &n);
do{
    printf("%d\n" , i);
    i++;
}while (i<=n); */

// for loop

/*int n = 12;
for (int i = 1; i<=n; i++){
    printf("%d\n" , i);
}*/

//for(int i=5; i; i--){
//    printf("%d\n" , i);
//}

// breaking in loops
/*for ( int i = 0; i<15; i++){
        if(i==5){
            break; // The loop will break here!
        }
        printf("%d\n", i);

}
printf("for loop is done!");*/


/*for ( int i = 0; i<15; i++){
        if(i==5){
            continue; // The loop will skip 5 and continue printing!
        }
        printf("%d\n", i);

}
printf("for loop is done!");*/





    int n, i;

    printf("Enter n: ");
    scanf("%d", &n);

    // =====================================================
    // 1. for loop
    // =====================================================
    // कब use करें: जब पहले से पता हो कि कितनी बार चलाना है
    // उदाहरण: 1 से 10 तक print करना, array के हर element पर जाना,
    //         पहाड़ा (table) बनाना
    // खास बात: start, condition और step तीनों एक ही लाइन में लिखे जाते हैं
    // condition चेक होती है: हर चक्कर से पहले
    // कम से कम एक बार चलेगा? नहीं (condition शुरू में झूठ हो तो एक बार भी नहीं)

    printf("for loop: ");
    for (i = 1; i <= n; i++) {   // i = 1 (start); i <= n (condition); i++ (step)
        printf("%d ", i);
    }
    printf("\n");

    // =====================================================
    // 2. while loop
    // =====================================================
    // कब use करें: जब गिनती पता न हो, बस शर्त पता हो
    //              ("जब तक ये सच है, तब तक चलाओ")
    // उदाहरण: number के digits गिनना (while (n > 0) { n = n / 10; count++; }),
    //         user के 0 डालने तक input पढ़ते रहना, कोई value ढूँढना
    // खास बात: start (i = 1) loop से पहले लिखते हैं,
    //          और i++ loop के अंदर लिखते हैं
    // ध्यान: i++ भूल गए तो loop कभी नहीं रुकेगा (infinite loop)
    // condition चेक होती है: हर चक्कर से पहले
    // कम से कम एक बार चलेगा? नहीं

    i = 1;                        // start loop से पहले
    printf("while loop: ");
    while (i <= n) {              // condition
        printf("%d ", i);
        i++;                      // step loop के अंदर, हर बार चलना ज़रूरी
    }
    printf("\n");

    // =====================================================
    // 3. do while loop
    // =====================================================
    // कब use करें: जब body को कम से कम एक बार चलाना ज़रूरी हो
    //              ("पहले काम करो, फिर देखो दोबारा करना है या नहीं")
    // उदाहरण: menu दिखाना, गलत input होने पर दोबारा input माँगना,
    //         "दोबारा खेलना चाहते हैं? (y/n)"
    // खास बात: while (...) के बाद semicolon (;) लगाना ज़रूरी है, अक्सर भूल जाते हैं
    // condition चेक होती है: हर चक्कर के बाद
    // कम से कम एक बार चलेगा? हाँ, हमेशा

    i = 1;
    printf("do while loop: ");
    do {
        printf("%d ", i);
        i++;
    } while (i <= n);             // यहाँ ; ज़रूरी है
    printf("\n");

    // =====================================================
    // तीनों में असली फर्क (n = 0 डालकर देखें)
    // =====================================================
    // for और while: कुछ print नहीं करेंगे, क्योंकि 1 <= 0 शुरू में ही झूठ है
    // do while: एक बार 1 print करेगा, क्योंकि पहले body चलती है, फिर condition चेक होती है

    // =====================================================
    // एक नज़र में (याद रखने के लिए)
    // =====================================================
    // गिनती पता है (1 से n तक)              ->  for
    // गिनती नहीं पता, condition पता है       ->  while
    // कम से कम एक बार चलना ही चाहिए          ->  do while
    //
    // आसान trick:
    // for       = "इतनी बार करो"
    // while     = "जब तक ये सच है, करो"
    // do while  = "एक बार कर लो, फिर देखो दोबारा करना है या नहीं"

    // =====================================================
    // do while का सही उदाहरण: positive number माँगना
    // =====================================================
    // गलत (0 या negative) input पर दोबारा माँगता रहेगा,
    // और माँगना कम से कम एक बार तो ज़रूरी है ही

    int num;
    do {
        printf("Enter a positive number: ");
        scanf("%d", &num);
    } while (num <= 0);

    printf("You entered: %d\n", num);




return 0;
}
