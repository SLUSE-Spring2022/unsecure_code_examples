#include <stdio.h>
#include <string.h>

int main()
{
    char sys_pass[8] = "Secret";
    bool auth = false;
    char usr_pass[8];

    int attempts = 3;

    //printf("sys_pass address %p\n", (void*)&sys_pass);
    //printf("user_pass address %p\n", (void*)&usr_pass);

    do
    {
      printf("Enter password: ");
      scanf("%s", usr_pass);
      attempts--;

      if (strcmp(sys_pass, usr_pass) == 0) {
           auth = true;
      }
      else
      {
         printf("Wrong password, you have %d attempts left\n", attempts);
      }
    } while (!auth && attempts > 0);

    if (auth)
    {
      printf("Access GRANTED!\n");
    }
    else
    {
      printf("Access DENIED!\n");
    }
}
