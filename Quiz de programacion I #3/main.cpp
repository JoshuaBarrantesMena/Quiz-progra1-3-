#include <iostream>
#include "Perro.h"
#include "Tucan.h"
#include "string.h"

int main() {

    const int size = 99;

    char tipoCuerpo[size], tipoRespiracion[size], tipoDesplazamiento[size], tipoReproduccion[size],
        tipoAlimentacion[size], tipoPlumas[size], tipoAlas[size], tipoPico[size];
    char habitat[size], alimentoFavorito[size], fuerzaLadrido[size], razaPerro[size], colorPico[size];
    int cantExtremidades = 0, choose1 = 0, bool1 = 2, choose2 = 1;
    bool viajaEnManada;

    while (choose1 < 1 || choose1 > 2) {
        printf("Estos son las opciones que puede elegir: \n0.Ninguno\n1.Perro\n2.Tucan\nIndique la opcion que desea registrar: ");
        scanf("%d", &choose1);
        if (choose1 < 0 || choose1 > 2) {
            printf("\nla opcion elegida no es valida");
        }
    }

    while (choose1 != 0) {

        if (choose1 == 1) {
            fgets(razaPerro, 99, stdin);
            printf("\nCreando: Perro/Mamifero/Vertebrado/ReinoAnimal\n");
            printf("Ingrese la raza: ");
            fgets(razaPerro, 99, stdin);

            printf("Indique el nivel de fuerza del ladrido: ");
            fgets(fuerzaLadrido, 99, stdin);

            printf("Indique el metodo que utiliza el animal para alimentarse: ");
            fgets(tipoAlimentacion, 99, stdin);
        }
        else {
            fgets(tipoPlumas, 99, stdin);
            printf("\nCreando: Tucan/Aves/Vertebrado/ReinoAnimal\n");
            printf("Indique el tipo de plumas: ");
            fgets(tipoPlumas, 99, stdin);

            printf("Indique que tipo de alas tiene el animal: ");
            fgets(tipoAlas, 99, stdin);

            printf("Indique el tipo de pico del animal: ");
            fgets(tipoPico, 99, stdin);

            printf("Indique el color del pico del animal: ");
            fgets(colorPico, 99, stdin);
        }

        printf("Indique la cantidad de extremidades: ");
        scanf("%d", &cantExtremidades);

        fgets(alimentoFavorito, 99, stdin);
        printf("Indique el alimento favorito: ");
        fgets(alimentoFavorito, 99, stdin);

        printf("Indique el tipo de cuerpo del animal: ");
        fgets(tipoCuerpo, 99, stdin);

        printf("Indique la forma de respirar del animal: ");
        fgets(tipoRespiracion, 99, stdin);

        printf("Indique el habitat del animal: ");
        fgets(habitat, 99, stdin);

        printf("Como se desplaza este animal en su habitad natural: ");
        fgets(tipoDesplazamiento, 99, stdin);

        printf("De que forma se reproduce el animal: ");
        fgets(tipoReproduccion, 99, stdin);

        while (bool1 == 2) {
            printf("El animal viaja en manada (SI == 1, NO == 0): ");
            scanf("%d", &bool1);
            if (bool1 == 1) {
                viajaEnManada = true;
            }
            else {
                viajaEnManada = false;
            }
        }
        while (choose2 != 0) {
            if (choose1 == 1) {
                int awa;
                Perro newPerro(tipoCuerpo, tipoRespiracion, cantExtremidades, tipoDesplazamiento, tipoReproduccion,
                    habitat, alimentoFavorito, viajaEnManada, tipoAlimentacion, fuerzaLadrido, razaPerro);
                printf("\nlas acciones de este mamifero son las siguientes:\n\n");
                printf("0.Salir \n1.Ladrar \n2.Caminar \n3.Respirar \n4.Alimentarse \n5.Dormir \n6.Desplazarse \n7.Adiestrarse \n8.Reproducirse \n");
                printf("\nElija una opcion: ");
                scanf("%d", &choose2);

                switch (choose2) {
                default:
                    break;
                case 1:
                    newPerro.ladrar();
                    break;
                case 2:
                    newPerro.caminar();
                    break;
                case 3:
                    newPerro.respirar();
                    break;
                case 4:
                    newPerro.alimentarse();
                    break;
                case 5:
                    newPerro.dormir();
                    break;
                case 6:
                    newPerro.desplazarse();
                    break;
                case 7:
                    newPerro.adiestrarse();
                    break;
                case 8:
                    newPerro.reproducirse();
                    break;
                }
            }
            else {
                Tucan newTucan(tipoCuerpo, tipoRespiracion, cantExtremidades, tipoDesplazamiento, tipoReproduccion,
                    habitat, alimentoFavorito, viajaEnManada, tipoPlumas, tipoAlas, colorPico, tipoPico);
                printf("\nlas acciones de esta ave son las siguientes:\n");
                printf("0.Salir \n1.Picotear \n2.Caminar \n3.Respirar \n4.Alimentarse \n5.Dormir \n6.Desplazarse \n7.Adiestrarse \n8.Reproducirse \n");
                printf("\nElija una opcion: ");
                scanf("%d", &choose2);

                switch (choose2) {
                default:
                    break;
                case 1:
                    newTucan.picotear();
                    break;
                case 2:
                    newTucan.caminar();
                    break;
                case 3:
                    newTucan.respirar();
                    break;
                case 4:
                    newTucan.alimentarse();
                    break;
                case 5:
                    newTucan.dormir();
                    break;
                case 6:
                    newTucan.desplazarse();
                    break;
                case 7:
                    newTucan.adiestrarse();
                    break;
                case 8:
                    newTucan.reproducirse();
                    break;
                }
            }
        }
        printf("Desea seguir registrando animales?\n1.SI\n0.NO\nEscoja su opcion: ");
        scanf("%d", choose1);
    }
    return 0;
}