// Good morning function whih prints "goodmorning".
//Good Afternoon function which prints "good afternoon"
// Good night function which prints "goodnight".

// main()should call all of these in order 1+2+3

#include <stdio.h>


    void goodmorning();
    void goodafternoon();
    void goodevening();

    void goodmorning(){
        printf("good morning\n");
    }

    void goodafternoon(){
        printf("goodafternoon\n");
    }

    void goodevening(){
        printf("goodevening\n");
    }

    int main(){
        goodmorning();
        goodafternoon();
        goodevening();
    return 0;
    }
    