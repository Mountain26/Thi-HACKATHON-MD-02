#include <stdio.h>

int main(){
	int choose; 
	int n; 
	int arr[100];
	int index1;
	int valueItem;
	int index2;
	int temp;
	int flag = -1;
	int item;
	int size= sizeof(arr)/sizeof(int);
	int check; 
	
	
	 
	do{
		printf("   \nMenu\n");
		printf("1. Nhap so phan tu va gia tri cho mang\n");
		printf("2. In ra gia tri cac phan tu trong mang theo dang(arr[0] = ...)\n");
		printf("3. Dem so luong cac so hoan hao co trong mang\n");
		printf("4. Tim ra gia tri nho thu 2 trong mang\n");
		printf("5. Them mot phan tu vao vi tri ban chi dinh o trong mang\n");
		printf("6. Xoa phan tu tai mot vi tri cu the\n");
		printf("7. Sap xep mang theo thu tu tang dan\n");
		printf("8. Tim kiem xem phan tu co ton tai trong mang hay khong\n");
		printf("9. Hien thi toan bo phan tu co trong mang sao cho toan bo so le dung truoc so chan dung sau\n");
		printf("10. Kiem tra mang co phai mang tang dan hay khong\n");
		printf("11. Thoat chuong trinh\n");
		
		printf("Moi ban nhap so phan tu co trong mang:");
        scanf("%d", &n);
        for(int i = 0; i < n; i++){
            printf("Moi ban nhap tung phan tu vao mang [%d] = ", i); 
            scanf("%d", &arr[i]); 
		
	}
		printf("Moi ban chon chuong trinh ban muon: ");
		scanf("%d", &choose);
		
		switch(choose){
			case 1:
				printf("Moi ban nhap so phan tu co trong mang: ");
        		scanf("%d", &n);
            	for(int i = 0; i < n; i++){
                	printf("Moi ban nhap tung phan tu vao mang [%d] = ", i); 
                	scanf("%d", &arr[i]); 
        }
            	break; 
            case 2:
				printf("Mang hien tai dang chua nhung gia tri la:\n"); 
            	for(int i = 0; i < n; i++){
                    printf("arr[%d] = %d\n", i, arr[i]);
                }
            	break;
            case 3:
        {
				int sum = 0;
				int count=0;
                for (int j = 0; j < n; j++){
                    sum = 0;
                    for (int i = 1; i <= arr[j] / 2; i++) {
                        if (arr[j] % i == 0) {
                            sum += i;
                        }
                    }
                    if (sum == arr[j] && arr[j] != 0) {
                        count++;
                    }
                } 
				printf("Co %d so hoan hao o trong mang", count);
				break;
			}
			case 4:
				break; 
			case 5:
				printf("Moi ban nhap gia tri muon chen:");
				scanf("%d", &valueItem);
				printf("Moi ban nhap vi tri muon chen:");
				scanf("%d", &index1);
				for(int i=n;i>index1;i--){
					arr[i]=arr[i-1]; 
		} 
				arr[index1]=valueItem;
				n++;
				printf("Mang sau khi da chen la: \n"); 
				for(int i=0;i<n;i++){
					printf("%d ",arr[i]); 	 
	}
				break;
			case 6:
				printf("Moi ban nhap vi tri can xoa: ");
				scanf("%d",&index2);
				for(int i=index2;i<n-1;i++){
					arr[i]=arr[i+1];  
	}
				n--; 
				for(int i=0;i<n;i++){
					printf("%d ",arr[i]); 
	}
				break;
			case 7:
				for(int i=0;i<n;i++){
					for(int j=0;j<n-i-1;j++){
						if(arr[j]>arr[j+1]){
							temp = arr[j];
							arr[j] = arr[j+1];
							arr[j+1] = temp; 
			}
		} 
	}
				for(int i=0; i<n;i++){
					printf("arr[%d]=%d\n", i, arr[i]);
	}
	
				break;
			case 8:
				printf("Moi ban nhap vao gia tri can tim o trong mang\n");
				scanf("%d", &item);
				for(int i=0; i<size; i++){
					if(arr[i]==item){
						flag=1;
						printf("Phan tu %d nam o vi tri %d", item, i);
						return 1; 
		} 
	}
				if(flag==-1){
					printf("Phan tu %d khong ton tai trong mang", item);
	}
				break;
			case 9:
				for(int i=0;i<n;i++){
					for(int j=0;j<n-i-1;j++){
						if(arr[j]%2==0 && arr[j+1]%2!=0){
							temp = arr[j];
							arr[j] = arr[j+1];
							arr[j+1] = temp; 
			} 
		} 
	}
				for(int i=0; i<n;i++){
					printf("arr[%d]=%d\n", i, arr[i]); 
		}
				break;
			case 10: 
				check = 1;
                for (int i = 0; i < n - 1; i++) {
                    if (arr[i] > arr[i + 1]) {
                        check = 0;
                        break;
                    }
                }
                if (check == 1) {
                    printf("Mang la mang tang dan\n");
                } else {
                    printf("Mang khong phai mang tang dan\n");
                }
                break;
            case 11:
				printf("Thoat khoi chuong trinh");
				break;
			default:
				printf("Lua chon khong hop le, vui long chon lai");
		}
	}while (choose!=11);
	return 0; 
}
