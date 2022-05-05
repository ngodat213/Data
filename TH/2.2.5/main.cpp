#include <stdio.h>
#include <conio.h>

#define MAX 100
using ll = long long;

struct Date{
    unsigned char date;
    unsigned char month;
    int year;
};

typedef struct Student{
    char stId[11];
    char stName[31];
    Date stBirthday;
    char stGender;
    char stClass[7];
    float stScore;
};

// Call function
void SetDate(Date &date);
void GetDate(Date date);
void SetStudent(Student &st);
void SetStudents(Student st[], int n);
void GetStudent(Student st);
void GetStudents(Student st[], int n);

int main()
{
    Student dataStudent[MAX];
    Date date;
    SetDate(date);
    GetDate(date);
    return 0;
}

void SetDate(Date &date){
    printf("Ngay: ");
    scanf("%u", &date.date);
    printf("Thang: ");
    scanf("%u", &date.month);
    printf("Nam: ");
    scanf("%d", &date.year);
}

void GetDate(Date date){
    printf("%d/%d/%d", date.date, date.month, date.year);
}
// Nhap 1 sinh vien
void SetStudent(Student &st){
    printf("MSSV: ");
    scanf("%s", &st.stId); fflush(stdin);
    printf("Ten: ");
    gets(st.stName);
    printf("Ngay sinh: \n");
    SetDate(st.stBirthday);
    // Gender
    do{
        printf("x-Female , y-Male: ");
        st.stGender = getch();
    }while(st.stGender != 'x' || st.stGender != 'y');

    printf("Lop: ");
    scanf("%s", &st.stClass);
    printf("Diem trung binh: ");
    scanf("%f", &st.stScore);
}
// Nhap N sinh vien
void SetStudents(Student st[], int n){
    for(int i = 0; i < n; ++i){
        SetStudent(st[i]);
    }
}
// Xuat 1 sinh vien
void GetStudent(Student st){
    printf("\n%-11s\t%-31s\n", st.stId, st.stName);
    if(st.stGender == 'x') printf("Female\n");
    else printf("Male\n");
    GetDate(st.stBirthday);
    printf("Class: %-8s\nScore: %.1f\n\n", st.stClass, st.stScore);
}
// Xuat N sinh vien
void GetStudents(Student st[], int n){
    for(int i = 0; i < n; ++i){
        GetStudent(st[i]);
    }
}

void StudentScoreThanN(Student st[], int n, int index){
    for(int i = 0; i < n; i++){
        if(st[i].stScore >= index)
            GetStudent(st[i]);
    }
}

void StudentIT(Student st[], int n){
    for(int i = 0; i < n; ++i){

    }
}
