#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define MAX 20
void NhapMang_random(int x[][MAX],int &d,int &c){
	do{
		printf("Nhap vao so dong cua ma tran : ");
		scanf("%d",&d);
		printf("\nNhap vao so cot cua ma tran : ");
		scanf("%d",&c);
	}while(d>20 || d==0  || c>20 || c==0);
	srand(time(NULL));
	for(int i=0;i<d;i++){
		for(int j=0;j<c;j++){
		
		}
		}
}
void NhapMang(int x[][MAX],int &d,int &c){
	do{
		printf("Nhap vao so dong cua ma tran : ");
		scanf("%d",&d);
		printf("\nNhap vao so cot cua ma tran : ");
		scanf("%d",&c);
	}while(d>20 || d==0  || c>20 || c==0);
	for(int i=0;i<d;i++){
		for(int j=0;j<c;j++){
			printf("\n x[%d][%d] = ",i,j);
			scanf("%d",&x[i][j]);
		}
	}
}
void XuatMang(int x[][MAX],int d,int c){
	printf("\nXUAT MANG :");
	printf("\n");
	for(int i=0;i<d;i++){
		for(int j=0;j<c;j++){
			printf(" %4d ",x[i][j]);
		}
		printf("\n");
	}
}
int TongMaTran(int x[][MAX],int d,int c){
	int tong=0;
	for(int i=0;i<d;i++){
		for(int j=0;j<c;j++){
			tong += x[i][j];
	}
}
		return tong;
}
float TBCMaTran(int x[][MAX],int d,int c){
	return float(TongMaTran(x,d,c)/(c*d));
}
float TBCMaTranSoDuong(int x[][MAX],int d,int c){
	int dem =0;
	int tongduong =0;
	for(int i=0;i<d;i++){
		for(int j=0;j<c;j++){
			if(x[i][j]>0){
				tongduong+=x[i][j];
				dem++;
			}
		}
	}return (float)tongduong/dem;
}
void XuatPhanTudongk(int x[][MAX],int d,int c){
	int k;
	do{
		printf("\nNhap vao dong muon xuat ra : ");\
		scanf("%d",&k);
	}while(k<0 || k>=d);
	for(int j=0;j<c;j++){
		printf(" %d ",x[k][j]);
	}
}
//int TinhTongPhantuTrencotK(int x[][MAX],int d,int c){
//	int cot;
//	int tong;
//	do{
//		printf("\nNhap vao cot muon tinh tong : ");
//		scanf("%d",&cot);
//	}while(cot<0 || cot>=c);
//	for(int i=0;i<d;i++){
//		tong += x[i][cot];
//	}
//	return tong;
//}
//int TimMAX(int x[][MAX],int d,int c){
//	int max =x[0][0];
//	for(int i=0;i<d;i++){
//		for(int j=0;j<c;j++){
//			if(max<x[i][j]){
//				max =x[i][j];
//			}
//		}
//	}return max;
//}

//int x[][MAX],int d,int c
//for(int i=0;i<d;i++){
//		for(int j=0;j<c;j++){
//			printf("\n x[%d][%d] = ",i,j);
//			scanf("%d",&x[i][j]);
//		}
//	}
int main(){
	int x[MAX][MAX];
	int d,c;
	NhapMang(x,d,c);
	XuatMang(x,d,c);
	printf("\nTong = %d",TongMaTran(x,d,c));
	printf("\nTrung Binh Cong = %.2f",TBCMaTran(x,d,c));
	printf("\nTrung Binh Cong So Duong = %.2f",TBCMaTranSoDuong(x,d,c));
//	XuatPhanTudongk(x,d,c);
//	printf("\nTong = %d",TinhTongPhantuTrencotK(x,d,c));
//	printf("\nMAX la %d",TimMAX(x,d,c));
}