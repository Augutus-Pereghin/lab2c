// Author: Augustus Perseghin agp5191
//Collaborator: Kieran Murdocca kkm5754@psu.edu
//Collaborator: Reuben Lee wzl128@psu.edu
//Collaborator: Krish Choudhary ksc5496@psu.edu
// Section: 4
// Breakout: 18

#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>


int main(void) {
  //variable definitions
  char* letterGrade;
  char* input;
  float Grade; 
  
  input = readline("Enter your CMPSC 131 grade: ");
  Grade = atof(input);

  if (Grade >= 93){
      letterGrade = "A";
  }
  else if (Grade >= 90){
    letterGrade = "A-";
  }
  else if (Grade >= 87){
    letterGrade = "B+";
  }
  else if (Grade >= 83){
    letterGrade = "B";
  }
  else if (Grade >= 80){
    letterGrade = "B-";
  }
  else if (Grade >= 77){
    letterGrade = "C+";
  }
  else if (Grade >= 70){
    letterGrade = "C";
  }
  else if (Grade >= 60){
    letterGrade = "D";
  }
  else {
    letterGrade = "F";
  }

  printf("Your letter grade for CMPSC 131 is %s.\n", letterGrade);
  return 0;
}