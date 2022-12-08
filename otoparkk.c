#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int sure,ucret;
	printf("***OTOPARK UCRETLERI*** \n");
	printf("\n");
	printf("1 saat 1---> 5tl \n");
	printf("2 saat 2---> 15tl \n");
	printf("3 saat 3---> 25tl \n");
	printf("4 saat 4---> 50tl \n");
	printf("\n");
	
	printf("arabanizin otoparkta kalama suresi :");
	scanf("%d",&ucret);
	
	switch(ucret)
	{
		case 1:
		    ucret=5*sure;
		    printf(" ucret= %d \n",ucret);
		    break;
		
		case 2:
			ucret=15*sure;
			printf("ucret= %d \n",ucret);
			break;
			
		case 3:
		    ucret=25*sure;
			printf("ucret= %d \n",ucret);
			break;
		
			
		case 4:
		    ucret=50*sure;
			printf("ucret= %d \n",ucret);
			break;
			
		default :
	     	printf("arabaniz otoparkta degil !! \n");
			break;	
			
			
	}
	printf("\n\n\n");
	
	int sec,para,sifre;
	char cevap;
	printf("****ODEME SECENEKLERÝ**** \n");
	printf("1---> nakit \n");
	printf("2---> kart  \n");
	printf("3---> temazsiz kart \n");
	printf("\n");
	printf("odeme turu sec:");
	scanf("%d",&sec);
	
	switch(sec)
	{
		case 1:
			printf("nakit odeme yapicaksiniz \n");
			printf("odenecek tutar : %d \n",ucret);
			printf("alinan para:  ");
			scanf("%d",&para);
			if(para<ucret)
			{
				printf("eksik  miktar!! \n");
				ucret-=para;
				printf("%dTL daha ucret vermelisiniz \n",ucret);
				printf("ucreti odiyecek misiniz ? (EVET ise=E / HAYÝR ise=H) : ");
				scanf("%s",&cevap);
				if(cevap == 'E')
				{
					printf("%dTL daha ucret vermelisiniz \n",ucret);
					printf("islem tamam ,iyi gunler...");
				}
				else if(cevap=='H')
				{
					printf("ceza kesilmistir ");
					printf("bilgi için 1234 arayabilirsiniz");
					printf("iyi gunler...");
				}

				else
				{
					printf("hatali secim");
				}
				
				
			}
			
			else
			{
				para-=ucret;
			    printf("para ustu : %d \n",para);
			    printf("iyi gunler ... \n");
				
			}
			break;
			
			
		case 2:
			printf("kart ile odeme yapicaksiniz \n");
			printf("odenecek tutar: %d \n",ucret);
			printf("kartinizi okutunuz \n");
			printf("sifrenizi giriniz: ");
			scanf("%d",&sifre);
			printf("islem tamam ,iyi gunler... \n");
			break;
			
		case 3:
			printf("temasiz kart ile odeme yapicaksiniz \n");
			printf("odenecek tutar: %d \n",ucret);
			printf("kartinizi okutunuz \n");
			printf("islem tamam ,iyi gunler... \n");
			break;
				
	}
	return 0;
}
