#include<stdio.h>


//==============STRUCT=============
typedef struct Date{
    int _date;
    int _morth;
    int _year;
};


typedef struct PhoneService{
    int ID;
    char Name[];
    Date DateRigister;
    int PhoneNumber;
    char Type[];
    int TimeOff; // Minute
    int TimeOnl; // Minute
};

//==============FUNCTION==============

void ScanNum(int &n){
    printf("Nhap so luong san phan: 0 < n <= 100: ");
    do{
        scanf("%d", &n);
        if(n <= 0 || n > 100){
            printf("Qua so luong quy dinh!\n");
        }
    }while(n <= 0 || n > 100);
}

void ScanNum(int &n){
    printf("Nhap so luong san phan: 0 < n <= 100: ");
    do{
        scanf("%d", &n);
        if(n <= 0 || n > 100){
            printf("Qua so luong quy dinh!\n");
        }
    }while(n <= 0 || n > 100);
}

void PrintDate(Date date){
    printf("%d/%d/%d\n", date._date, date._morth, date._year);
}

int main()
{

    return 0;
}
