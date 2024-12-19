#include<stdio.h>
#include<string.h>
int main(){
	struct SinhVien {
		char name[100];
		int age;
		char phoneNumber[100];
	};
	struct SinhVien sv1;
	printf("Thong tin sinh vien\n");
	printf("Nhap Fullname: ");
	fgets(sv1.name,sizeof(sv1.name),stdin);
	printf("Nhap Age: ");
	scanf("%d",&sv1.age);
	fflush(stdin);
	printf("Nhap phoneNumber: ");
	fgets(sv1.phoneNumber,sizeof(sv1.phoneNumber),stdin);
	printf("Thong tin sinh vien\n");
    printf("FullName: %s",sv1.name);
    printf("Age: %d\n",sv1.age);
    printf("PhoneNumber: %s\n",sv1.phoneNumber);
    return 0;
}
