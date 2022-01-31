#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int hp_ryu, hp_ken, golpe, qtd_golpes_ryu = 0, qtd_golpes_ken = 0;

    scanf("%d", &hp_ryu);
    scanf("%d", &hp_ken);

    while ((hp_ryu && hp_ken) > 0) {
        scanf("%d", &golpe);
        if (golpe > 0) { // Golpe de Ryu
            printf("RYU APLICOU UM GOLPE: %d\n", golpe);
            qtd_golpes_ryu++;
            hp_ken -= golpe;
            if (hp_ken < 0) // Se o golpe do adversário for mais forte que o HP de Ken
                hp_ken = 0;
            printf("HP RYU = %d\n", hp_ryu);
            printf("HP KEN = %d\n", hp_ken);
        } else if (golpe < 0) { // Golpe de Ken
            printf("KEN APLICOU UM GOLPE: %d\n", abs(golpe));
            qtd_golpes_ken++;
            hp_ryu += golpe;
            if (hp_ryu < 0) // Se o golpe do adversário for mais forte que o HP de Ryu
                hp_ryu = 0;
            printf("HP RYU = %d\n", hp_ryu);
            printf("HP KEN = %d\n", hp_ken);
        }
    }

    if (hp_ryu > 0)
        printf("LUTADOR VENCEDOR: RYU\n");
    else
        printf("LUTADOR VENCEDOR: KEN\n");

    printf("GOLPES RYU = %d\n", qtd_golpes_ryu);
    printf("GOLPES KEN = %d\n", qtd_golpes_ken);
    return 0;
}