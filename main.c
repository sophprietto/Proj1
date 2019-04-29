/* 
 
 */


void rotencrypt (char ci[]); //this funcion will be called to encrypt a rotation cipher
void rotdecrypt (char ci[]); //this function will be called to decrypt a rotation cipher
void subencrypt (void); //this function when called will encrypt a substitution cipher
void subdecrypt (void); //this function when called will decrypt a substitution cipher

#include<stdio.h>

int main (void) {
  char ci[500];
  int funct; 
  
  printf("Choose 0 for a rotation encryption, and 1 for decryption.\nChoose 2 for a substitution encryption, and 3 for a decryption.\n");
  printf("Please choose a function to execute: "); // prompts choice of function to use after input of text
  scanf("%d\n", &funct); //scans input for function choice

/* the switch case calls the function which will be used to encrypt of decrypt the message inputted by the user */

  switch (funct) { 
    case 0: // when 0 is inputted it will call this function
       printf("\nPlease enter message: "); // prompts entry of the message 
    scanf("%[^\n]s", ci); // scans the message
    rotencrypt (ci); // calls the function which will encrypt a rotation cipher
      break; // code exits after execution of function 0
    case 1: // when 1 is inputted it will call this function
      printf("\nPlease enter message: "); // prompts entry of the message 
    scanf("%[^\n]s", ci); // scans the message
    rotdecrypt (ci); // calls the function which decrypts
      break; // code exits after exectution of function 1
    case 2: //calls the function which will encrypt a substitution cipher
      subencrypt ();
      break;// code exits after execution of function
    case 3: //calls the function which will decrypt a substitution cipher
      subdecrypt ();
      break; // code exits after execution of function
    }
}

void rotencrypt (char ci[]) {

  int i, key;

  printf ("\nEnter key: "); //decides the amount the cipher will rotate by
  scanf ("%d", &key);

  for (i = 0; ci[i] != '\0'; i++) {

    if (ci[i] >= 97 && ci[i] <= 122) { //identifies lowercase ASCII charcters	
        ci[i] = ci[i] + key - 32 ; // changes lowercase ASCII characters to uppercase and rotates

	   if (ci[i] > 90) {
            ci[i] = ci[i] - 26; //if characters exceed 90 (Z) the code will minus 26 to bring it back to an uppercase letter
        }
      }
    else if(ci[i] >= 65 && ci[i] <= 90) {
          ci[i] = ci[i] + key; //when the character is uppercase the key will be added to rotate the message 

        if(ci[i] > 90) {
            ci[i] = ci[i] - 26; //if code exceeds 90 (Z) the code will minus 26 bringing it back to an uppercase letter
        }
      }
    }
  printf ("\nEncrypted text: %s", ci);
}

void rotdecrypt (char ci[]) {

  int i, key;

  printf ("\nEnter key: "); //decides the amount the cipher will rotate by
  scanf ("%d", &key);

  for (i = 0; ci[i] != '\0'; i++) {

    if (ci[i] >= 97 && ci[i] <= 122) {	
        ci[i] = ci[i] - key - 32 ;	//converts lowercase ASCII to uppercase	and rotates 

        if (ci[i] < 65) {
            ci[i] = ci[i] + 26; //adds 26 if character exceeds 65 (A), bring back into uppercase ASCII
	    }
      }
  else if(ci[i] >= 65 && ci[i] <= 90) {
          ci[i] = ci[i] - key; //minuses key to rotate cipher

    if(ci[i] < 65) {
        ci[i] = ci[i] + 26;
        }
      }  
    }
  printf ("\nDecrypted text: %s", ci);
}
  void subencrypt () {
      
      char ci[500]; 
      int i, n;
      char cipheralphabet[26] = {"QWERTYUIOPASDFGHJKLZXCVBNM"};
      
    printf("\nPlease enter message: "); // prompts entry of the message 
    scanf("%[^\n]s", ci); // scans the message
    
      for (i = 0; ci[i] != 0; i++) {
          if (ci[i] >= 97 && ci[i] <= 122) { // 
              ci[i] = ci[i] - 32;
          }
          if (ci[i] >= 65 && ci[i] <= 90) {
              ci[i] = ci[i] - 65;
              n = ci[i];
              ci[i] = cipheralphabet[n];   
          }
              printf("%c", ci[i]);
          }
        }
        
    void subdecrypt () {
      
      int i;
      char ci[500];
      char cipheralphabet[26] = {"QWERTYUIOPASDFGHJKLZXCVBNM"};
    
      printf("\nPlease enter message: "); // prompts entry of the message 
      scanf("%[^\n]s", ci); // scans the message
    
      for (i = 0; ci[i] != 0; i++) {
          if (ci[i] >= 97 && ci[i] <= 122) {
               ci[i] = ci[i] - 32;
           }
         if (ci[i] >= 65 && ci[i] <= 90) {
             int n = 0;
             
             while (ci[i] != cipheralphabet[i]) {
              n = n + 1;
           }
           n = n + 65;
           ci[i] = n; 
         }
printf("%c", ci[i]);

    }
  } 

  
