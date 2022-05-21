#include <stdio.h>
#include <conio.h>
#include <string.h>

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
void StudentIT(Student st[], int n);

int main()
{
    Student dataStudent[MAX];
    SetStudents(dataStudent, 3);
    StudentIT(dataStudent, 3);
    return 0;
}
// Set Date
void SetDate(Date &date){
    printf("Ngay: ");
    scanf("%u", &date.date);
    printf("Thang: ");
    scanf("%u", &date.month);
    printf("Nam: ");
    scanf("%d", &date.year);
}
// Get Date
void GetDate(Date date){
    printf("%d/%d/%d", date.date, date.month, date.year);
}
// Nhap 1 sinh vien
void SetStudent(Student &st){
    //ID Student
    printf("MSSV: ");
    scanf("%s", &st.stId);
    // Name
    printf("Ten: ");
    fflush(stdin);
    gets(st.stName);
    // Birhtday
    SetDate(st.stBirthday);
    // Gender
    do{
        printf("x-Female , y-Male: ");
        st.stGender = getche();
    }while(st.stGender != 'x' && st.stGender != 'y');
    // Class
    printf("\nLop: ");
    scanf("%s", &st.stClass);
    // Score
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
// Xuat DTB SV > index
void StudentScoreThanN(Student st[], int n, int index){
    for(int i = 0; i < n; i++){
        if(st[i].stScore > index)
            GetStudent(st[i]);
    }
}
// Xuat SV IT
void StudentIT(Student st[], int n){
    printf("Sinh vien IT: \n");
    for(int i = 0; i < n; ++i){
        if(st[i].stClass[5] == 'I' && st[i].stClass[6] == 'T'){
            GetStudent(st[i]);
        }
    }
}

int CountFemale(Student st[], int n){
    int res = 0;
    for(int i = 0; i < n; ++i){
        if(st[i].stGender == 'x'){
            res++;
        }
    }
    return res;
}

void StudentMaxScore(Student st[], int n){
    float _maxScore = st[0].stScore;
    for(int i = 1; i < n; ++i){
        if(_maxScore < st[i].stScore){
            _maxScore = st[i].stScore;
        }
    }
    for(int i = 0; i < n; ++i){
        if(st[i].stScore == _maxScore){
            GetStudent(st[i]);
        }
    }
}

void AddStudent(Student st[], int &n){
    ++n;
    SetStudent(st[n]);
}

void DeleteStudent(Student st[], int &n, int index){
    for(int i = index; i < n-1; ++i){
        st[i] = st[i+1];
    }
    n--;
}

void FindAndDelete(Student st[], int &n, char index[]){
    for(int i = 0; i < n; ++i){
        if(strcmp(index, st[i].stId) == 0){
            DeleteStudent(st[], n, i);
        }
    }
    printf("Find and delete successful!\n");
}

void _swapStudent(Student &st1, Student &st2){
    Student tg = st1;
    st1 = st2;
    st2 = tg;
}

void SortStudent(Student st[], int n){
    for(int i = 0; i < n-1; ++i){
        for(int j = i+1; j < n; ++j){
            if(st[i].stScore > st[j].stScore){
                _swapStudent(st[i], st[j]);
            }
        }
    }
}
