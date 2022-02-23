

#include<stdio.h>

struct student {
  int sub1;
  int sub2;
  int sub3;
  int sub4;
  int sub5;
  int sub6;
};
void main() {
  struct student s[10];
  int i, total = 0;

  for (i = 0; i < 2; i++) {
    printf("\nEnter Marks in Six Subjects = ");
    scanf("%d %d %d %d %d %d", & s[i].sub1, & s[i].sub2, & s[i].sub3, & s[i].sub4, & s[i].sub5, & s[i].sub6);
    total = s[i].sub1 + s[i].sub2 + s[i].sub3 + s[i].sub4 + s[i].sub5 + s[i].sub6;
    total = total / 6;
    printf("\nTotal marks of s[%d] Student= %d", i, total);
  }

  if (total >= 90) {
    printf("Grade A");
  } else if (total >= 80) {
    printf("Grade B");
  } else if (total >= 70) {
    printf("Grade C");
  } else if (total >= 60) {
    printf("Grade D");
  } else if (total >= 40) {
    printf("Grade E");
  } else {
    printf("\nGrade F");
  }

}