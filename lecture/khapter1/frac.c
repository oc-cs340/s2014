#include <stdio.h>
#include <string.h>


typedef float GPA;

typedef struct {
   int num;
   int den;
} Fraction;


struct student {
   int id;
   char name[20];
   GPA average;
};
typedef struct student Student;

typedef struct class {
   char dept[4];
   int course;
   char title[32];
   Student students[20];
} Class;


void print_fraction(Fraction);


int main() {
   Fraction f;
   struct student s;
   Class cs340;

   f.num = 1;
   f.den = 2;
   print_fraction(f);
   
   s.id = 100;
   strcpy(s.name, "Noel Kalicharan");
   s.average = 4.0;
   printf("%d: %s (%f)\n", s.id, s.name, s.average);

   strcpy(cs340.dept, "CS");
   cs340.course = 340;
   strcpy(cs340.title, "Data Structures & Algorithms");
   cs340.students[0] = s;

   return 0;
}


void print_fraction(Fraction f) {
   printf("%d/%d\n", f.num, f.den);
}

