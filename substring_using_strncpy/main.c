/*
#include <stdio.h>
#include <string.h>

int main() {
    char fullName[] = "Alaa Nairat";

    char firstName[5];  // 4 letters + '\0'
    char lastName[7];   // 6 letters + '\0'

    /* Extract first name */
   // strncpy(firstName, fullName, 4);
  //  firstName[4] = '\0';

    /* Extract last name */
  //  strncpy(lastName, fullName + 5, 6);  //strncpy(lastName, &fullName[5], 6);
  //  lastName[6] = '\0';

  //  printf("Full Name : %s\n", fullName);
  //  printf("First Name: %s\n", firstName);
  //  printf("Last Name : %s\n", lastName);
//
  //  return 0;
//}


#include <stdio.h>
#include <string.h>

int main() {
    char fullName[] = "Alaa Nairat";

    char *firstName = strtok(fullName, " ");
    char *lastName  = strtok(NULL, " ");

    printf("First Name: %s\n", firstName);
    printf("Last Name : %s\n", lastName);

    return 0;
}

