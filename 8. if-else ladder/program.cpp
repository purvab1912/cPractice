#include <stdio.h>

 int main(int argc, char *argv[])
{
    int marks;
    printf ("Enter your marks.\n");
    scanf ("%d", &marks);
    printf ("\n");

    if (marks <=25) {

        printf ("You have scored %d that is less than 25 in exams.\n You are failed!\n You need to improve yourself", marks);

    }
    else if ((marks>=26) && (marks <=40)){

        printf ("You have scored %d that is between 26 to 40 in exams.\n You got Grade F.\n You need to study hard", marks);
    }
    else if ((marks >=41) && (marks <=50)){

        printf ("You have scored %d that is between 41 to 50 in exams.\n You got Grade E.\n You need to study hard", marks);

    }
    else if ((marks >=51) && (marks <=60)){

        printf ("You have scored %d that is between 51 to 60 in exams.\n You got Grade D.\n You need to study", marks);

    }
    else if ((marks >=61) && (marks <=70)){

        printf ("You have scored %d that is between 61 to 70 in exam.\n You got Grade C.\n Study more efficiently", marks);

    }
    else if ((marks >=71) && (marks <=80)){

        printf ("You have scored %d that is between 71 to 80 in exams.\n You got Grade B.\n Good! study more", marks);
    
    }
    else  if ((marks >=81) && (marks <=90)){

        printf ("You have scored %d that is  between 81 to 90 in exams.\n You got Grade A.\n Good! Keep studying", marks);

    }
    else if((marks >=91) && (marks <=100)){

        printf ("You have scored %d that is between 91 to 100 in exams.\n You got Grade A+.\n Excellent! keep studying", marks);
    }
    else {

        printf ("You have entered invalid marks.\n Check it again");

    }

}