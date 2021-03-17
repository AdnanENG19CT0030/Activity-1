#include<stdio.h>
typedef struct Student
{
  char name[100];
  float scores[50];
  float avg;
  char Grade;
}S;
typedef struct Course
{
  char courseName[100];
  int m;
  int k;
  float weights[50];
  S list[100];
}C;
void get_nofcourses(int *n)
{
  printf("Enter number of courses:\n");
  scanf("%d",n);
}
void input_one_student(S *stu, int k)
{
  int i;
  printf("Enter name of the Student:\n");
  scanf("%s",stu->name);
  printf("Enter scores:\n");
  for(i=0;i<k;i++)
    scanf("%f",&stu->scores[i]);
}
void input_n_students_courses(int n, C *cour)
{
    int j;
    printf("Enter course name:\n");
    scanf("%s",cour->courseName);
    printf("Enter number of students and number of scores:\n");
    scanf("%d%d",&cour->m,&cour->k);
    printf("Enter respective weights:\n");
    for(j=0;j<cour->k;j++)
      scanf("%f",&cour->weights[j]);
    for(j=0;j<cour->m;j++)
      input_one_student(&cour->list[j],cour->k);
    printf("\n");
}
void compute_grade_one_student(S *stu, int k, float wt[])
{
  float navg=0, wavg=0, W=0;
  int i;
  for(i=0;i<k;i++)
  {
    wavg += stu->scores[i]*wt[i];
    W += wt[i];
  }
  navg = wavg/W;
  stu->avg = (wavg+navg)/2;
  switch((int)stu->avg)
  {
    case 90 ... 100:
      stu->Grade = 'A';
      break;
    case 80 ... 89:
      stu->Grade = 'B';
      break;
    case 70 ... 79:
      stu->Grade = 'C';
      break;
    case 60 ... 69:
      stu->Grade = 'D';
      break;
    case 0 ... 59:
      stu->Grade = 'F';
      break;
    default:
      printf("Invalid Grade");
      break;
  }
}
void compute_grade_n_students(C *c)
{
  int a;
  for(a=0;a<c->m;a++)
    compute_grade_one_student(&c->list[a],c->k,c->weights);
}
void print_grade_one_student(S s)
{
  printf("%s",s.name);
  printf("\t\t");
  printf("%f   %c",s.avg,s.Grade);
  printf("\n");
}
void print_grade_n_students(C cs)
{
  int g;
    printf("%s\n",cs.courseName);
  for(g=0;g<cs.m;g++)
    print_grade_one_student(cs.list[g]);
}
int main()
{
  int nc,i;
  C courses[10];
  get_nofcourses(&nc);
  for(i=0;i<nc;i++)
    input_n_students_courses(nc,&courses[i]);
  for(i=0;i<nc;i++)
  {
    compute_grade_n_students(&courses[i]);
    print_grade_n_students(courses[i]);
  }
  return 0;
}
