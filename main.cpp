// author: Jonathan Kuldip
// collaborator: Tishe Olaleye ofo5073@psu.edu
// collaborator: Quan Shi
// collaborator: Sonvi harbanda snk5287@psu.edu
// Section: 1
// Breakout: 12
#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>
int main(void) {
 double grade = readline("Enter your CMPSC 131 grade: ");

  
   
  if (grade >=93) { 
  readline("A");
  }
  if (grade >= 90) {
    readline("A-");
  }
  if(grade >= 87) {
    readline("B+");
  if(grade >= 83) {
  readline("B");
  }
  if(grade >= 80) {
    readline("B-");
  }
  if(grade >= 77) {
    readline("C+"); 
  }
  if(grade >= 70) {
    readline("C");
  }
  if(grade >= 60) {}
    readline("D");
  }
  if(grade < 60) {
    readline("F");
  }