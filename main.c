void subencrypt (char ci[]);
void subdecrypt (char ci[]);

#include<stdio.h>

void main ()
{
  char ci[500];
  int i, funct;


  printf ("Please enter a message to encrypt: ");
  scanf ("%s", &ci);

  printf ("Choose function: ");
  scanf ("%d", &funct);

  switch (funct) {
    case 0:
      subencrypt (ci);
      break;
    case 1:
      subdecrypt (ci);
      break;
    }
}

void
subencrypt (char ci[])
{

  int i, key;

  printf ("Enter key: ");
  scanf ("%d", &key);

  for (i = 0; ci[i] != '\0'; i++) {

      if ((ci[i] > 96) && (ci[i] < 123)) {			

	  ci[i] = ci[i] - 32 + key;

	 
	    if ((ci[i]) > 90) {
	        
	        ci[i] = ci[i] - 26;
	    }
      }
	     else if ((ci[i]))
	    

	}

  printf ("%s", ci);

}

void subdecrypt (char ci[]) {

  int i, key;

  printf ("Enter key: ");
  scanf ("%d", &key);

  for (i = 0; ci[i] != '\0'; i++) {

      if ((ci[i] > 96) && (ci[i] < 123)) {		

	  ci[i] = ci[i] - 32 - key;	

	  if ((ci[i] > 65 && ci[i] < 91)) {	
            ci[i] = ci[i] - key;

	  if ((ci[i]) < 65) {
            ci[i] = ci[i] + 26;
	    }
      }
    }
}
  printf ("%s", ci);
}
