#include<stdio.h>
#include<string.h>
int main(){
	struct SinhVien{
		int id;
		char name[50];
		int age;
		char phoneNumber[50];
	};
	struct SinhVien sv[5];
	int count=0;
	for(int i=0;i<5; i++){
		count++;
		printf("Nhap thong tin sinh vien %d\n",i+1);
		printf("ID: %d\n",count);
	    printf("Nhap FullName: ");
	    fgets(sv[i].name,sizeof(sv[i].name),stdin);
	    printf("Nhap Age: ");
	    scanf("%d",&sv[i].age);
	    fflush(stdin);
	    printf("Nhap PhoneNumber: ");
	    fgets(sv[i].phoneNumber,sizeof(sv[i].phoneNumber),stdin);
	    printf("Thong tin sinh vien\n");
	    printf("FullName: %s",sv[i].name);
	    printf("Age: %d\n",sv[i].age);
        printf("PhoneNumber: %s\n",sv[i].phoneNumber);
	}
}
