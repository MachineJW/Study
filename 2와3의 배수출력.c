//1����100���� �� �߿��� 2�Ǵ� 3�� ��� ��θ� ����ϴ� ���α׷��� while�� �̿��Ͽ� �ۼ��϶�.
//��,���ٿ� 10������ �����͸� ����Ѵ�. 2,3,4,6,8,9,10.....
#include<stdio.h>

void main(){
	int cnt = 1;
	int dnt = 0;
	printf("[While]\n");
	while(1){
		if (cnt%2 == 0){ //2�� ������ �������� ������ 
			printf("[%d]",cnt);
			dnt++;
		}
		else if (cnt%3 == 0){//3���� ������ �������� ������ (�ߺ��� ���ڸ� ���ϱ����� else if) 
			printf("[%d]",cnt);
			dnt++;
		}
        if(dnt == 10){ //�ٹٲ� ����. 
    	printf("\n");
    	dnt = 0;
	    }
    	if(cnt == 100){ // �ݺ����� �����ٰ� cnt�� 100�� �Ǹ� break�� while�� Ż�� 
			break; 
		}
	cnt++;
	}
	
	printf("\n");
	printf("[For]\n");
	dnt=0; //for���� ��Ȱ���ϱ����� �ٽ� 0����.. 
	for(cnt=1;cnt<=100;cnt++){
		if(cnt%2==0){
			printf("[%d]",cnt);
			dnt++;
		}
		else if(cnt%3==0){
			printf("[%d]",cnt);
			dnt++;
		}
		if(dnt==10){
			printf("\n");
			dnt=0;
		}
	}
}  
