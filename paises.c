#include <locale.h>

int main(){
    
    setlocale(LC_ALL, "pt_BR.UTF-8");
    
    char *estado1 = "Bahia";
    char codigo1[] = "C07";
    char cidade1[] = "Diamantina";
    int populacao1 = 372242;
    float area1= 3891.666;
    float PIB1 = 20537.920;
    int pontos1 = 360;
    
    printf("Estado 1: %s\n", estado1);
    printf("Código 1: %s\n", codigo1);
    printf("Cidade 1: %s\n", cidade1);
    printf("População: %'d\n", populacao1);
    printf("Área: %'.2f km²\n", area1);
    printf("PIB: %'.2f\n", PIB1);
    printf("Pontos: %d\n", pontos1);

    printf("\n");


//-----------------------------------------------------------------------------------------------------------------

    char *estado = "Minas Gerais";
    char codigo[] = "C02";
    char cidade[] = "Cambuí";
    int populacao = 30068;
    float area= 244.600;
    float PIB = 62049.999;
    int pontos = 30;

    printf("Estado 2: %s\n", estado);
    printf("Código 2: %s\n", codigo);
    printf("Cidade 2: %s\n", cidade);
    printf("População: %'d\n", populacao);
    printf("Área: %'.2f km²\n", area);
    printf("PIB: %'.2f\n", PIB);
    printf("Pontos: %d\n", pontos);

    return 0;
}
