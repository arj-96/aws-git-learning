#include <stdio.h>
int main() {

    int number1, number2, sum;

    printf("Enter two integers: ");
    scanf("%d %d", &number1, &number2);

<<<<<<< HEAD
<<<<<<< HEAD
    // calculate the sum - "This is First code uploaded to git repository"
=======
    // calculate the sum
>>>>>>> 54f3bd2 (Added the add.c)
=======
    // calculate the sum
>>>>>>> 54f3bd2 (Added the add.c)
    sum = number1 + number2;

    printf("%d + %d = %d", number1, number2, sum);
    return 0;


===============================================================
  

[ec2-user@ip-172-31-2-205 git]$ git branch -a | shows up the branches 
[ec2-user@ip-172-31-2-205 git]$ git pull origin | to pul the files from main repository. 
[ec2-user@ip-172-31-2-205 git]$ git fetchh --prune | will prune the file remotely. 
[ec2-user@ip-172-31-2-205 git]$ git branch -delete branchname| delete the branch 

[ec2-user@ip-172-31-2-205 git]$ git switch main | used to switch to main branch

[ec2-user@ip-172-31-2-205 git]$ git branch -delete branchname -D | 
#git branch -D branchname | Force the delete the branch. 
