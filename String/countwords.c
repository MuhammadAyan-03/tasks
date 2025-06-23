#include <stdio.h>
#include <string.h>

int count_words(const char *sentence)
{ 
    int length = strlen(sentence);
    int words = 0;
    int count = 0;
    while (sentence[count] != '\0') /*Loop will continue until the sentence has ended*/
    {
        if (sentence[count] == ' ') /*To detect when words end and there is a space after*/
        {
            words++;
        }
        else if (sentence[count] == '.') /*To detect if the word at the end of the
                                           sentence since there is no space and no
                                           other way to detect*/
        {
            words++;
        }
        count++; //increments to the next letter or space
    }
    
    printf("The sentence: %s\nhas %d words", sentence, words); //prints sentence and word count
}

