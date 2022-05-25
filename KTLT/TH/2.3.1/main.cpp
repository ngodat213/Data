#include<stdio.h>


//==============STRUCT=============
typedef struct Date{
    int _date;
    int _morth;
    int _year;
};


typedef struct PhoneService{
    int ID;
    char Name[20];
    Date DateRigister;
    int PhoneNumber;
    char Type[2];
    int TimeOff; // Minute
    int TimeOnl; // Minute
    int HireMoneyOff;
    int HireMoneyOnl;
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

void ScanDate(Date &date){
    printf("Ngay: ");
    scanf("%d", &date._date);
    printf("Thang: ");
    scanf("%d", &date._morth);
    printf("Nam: ");
    scanf("%d\n", &date._year);
}

void PrintDate(Date date){
    printf("%d/%d/%d\n", date._date, date._morth, date._year);
}

void ScanPS(PhoneService &PS){
    printf("-========================-\n");
    printf("ID: ");
    scanf("%d", &PS.ID);
    printf("Ten dang ki: \n");
    fflush(stdin);
    gets(PS.Name);
    printf("Ngay dang ki: \n");
    ScanDate(PS.DateRigister);
    printf("Loai thue bao: ");
    fflush(stdin);
    scanf("%s", &PS.Type);
    printf("Thoi gian goi noi mang: ");
    scanf("%d", &PS.TimeOff);
    printf("Thoi gian goi ngoai mang: ");
    scanf("%d", &PS.TimeOnl);
    printf("-========================-\n");
}

void PrintPS(PhoneService PS){
    printf("ID: %d\n", PS.ID);
    printf("Ten dang ki: %d\n", PS.ID);
    printf("Ngay dang ki: "); PrintDate(PS.DateRigister);
    printf("So dien thoai: %d\n", PS.PhoneNumber);
    printf("Loai thue bao: %s\n", PS.Type);
    printf("Thoi gian goi noi mang: %d\n", PS.TimeOff);
    printf("Thoi gian goi ngoai mang: %d\n", PS.TimeOnl);
}

void PrintPS_HireMoney(PhoneService PS){
    printf("ID: %d\n", PS.ID);
    printf("Ten dang ki: %d\n", PS.ID);
    printf("Ngay dang ki: "); PrintDate(PS.DateRigister);
    printf("So dien thoai: %d\n", PS.PhoneNumber);
    printf("Loai thue bao: %s\n", PS.Type);
    printf("Thoi gian goi noi mang: %d\n", PS.TimeOff);
    printf("Thoi gian goi ngoai mang: %d\n", PS.TimeOnl);
    printf("Tien cuoc goi noi mang: %d\n", PS.HireMoneyOff);
    printf("Tien cuoc goi ngoai mang: %d\n", PS.HireMoneyOnl);
}

void ScanPS_Array(PhoneService PS[], int &n){
    ScanNum(n);
    for(int i = 0; i < n; ++i){
       ScanPS(PS[i]);
    }
}

void PrintPSArray_HireMoney(PhoneService PS[], int n){
    for(int i = 0; i < n; ++i){
       PrintPS_HireMoney(PS[i]);
    }
}

void PrintPS_Array(PhoneService PS[], int n){
    for(int i = 0; i < n; ++i){
       PrintPS(PS[i]);
    }
}

void AddPS_Array(PhoneService PS[], int &n){
    n++;
    ScanPS(PS[n]);
}

void _swapPS(PhoneService &PS1, PhoneService &PS2){
    PhoneService tg = PS1;
    PS1 = PS2;
    PS2 = tg;
}

void SortID_PS(PhoneService PS[], int n){
    for(int i = 0; i < n-1; ++i){
        for(int j = i+1; j < n; ++j){
            if(PS[i].ID > PS[j].ID) _swapPS(PS[i], PS[j]);
        }
    }
}

void FindName_PS(PhoneService PS[], int n, char index[]){
    for(int i = 0; i < n; ++i){
        if(PS[i].Name == index){
            PrintPS(PS[i]);
        }
    }
}

void FindType_PS(PhoneService PS[], int n, char index[]){
    for(int i = 0; i < n; ++i){
        if(PS[i].Type == index){
            PrintPS(PS[i]);
        }
    }
}

void FindYearRegister_PS(PhoneService PS[], int n, int index){
    for(int i = 0; i < n; ++i){
        if(PS[i].DateRigister._year == index){
            PrintPS(PS[i]);
        }
    }
}

void CalculateHireMoney_PS(PhoneService PS[], int n){
    for(int i = 0; i < n; ++i){
        PS[i].HireMoneyOff = PS[i].TimeOff * 1500;
        PS[i].HireMoneyOnl = PS[i].TimeOnl * 3000;
    }
}

int CountPrepay_PS(PhoneService PS[], int n, char index[]){
    int cnt = 0;
    for(int i = 0; i < n; ++i){
        if(PS[i].Type == index){
            cnt++;
        }
    }
    return cnt;
}

int main()
{
    PhoneService PS[1000];
    int n;
    char c[100];
    // a
    printf("-===========A===========-\n");
    ScanPS_Array(PS, n);
    //b
    printf("-===========B===========-\n");
    PrintPS_Array(PS, n);
    //c
    printf("-===========C===========-\n");
    AddPS_Array(PS, n);
    //d
    printf("-===========D===========-\n");
    SortID_PS(PS, n);
    PrintPS_Array(PS, n);
    //e
    printf("-===========E===========-\n");    printf("Nhap ten can tim: ");
    fflush(stdin);
    gets(c);
    FindName_PS(PS, n, c);
    //f
    printf("-===========F===========-\n");    printf("Nhap loai cuoc can tim: ");
    fflush(stdin);
    gets(c);
    FindType_PS(PS, n, c);
    //g
    printf("-===========G===========-\n");    FindYearRegister_PS(PS, n, 2010);
    //h
    printf("-===========H===========-\n");
    CalculateHireMoney_PS(PS, n);
    PrintPSArray_HireMoney(PS, n);
    //i
    printf("-===========I===========-\n");
    printf("So luong thue bao cuoc: %d", CountPrepay_PS(PS, n, "TT"));
    return 0;
}
