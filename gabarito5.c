#include <stdlib.h>
#include <stdio.h>
int idade;
main(){
	printf("Informe a idade do atleta: ");
	scanf("%d",&idade);
	if (idade<6){
		printf("Participacao nao permitida");
	}else{
			if (idade>=6 && idade<=8){
				printf("Infantil A");
			}else{
					if (idade>=9 && idade<=12){
						printf("Infantil B");
					}else{
							if(idade>=13 && idade<=14){
								printf("Juvenil A");
							}else{
									if(idade>=15 && idade<=18){
										printf("Juvenil B");
									}else{
											printf("Participacao nao permitida");
									}
								 }
					     }
			     }
	     }
}
