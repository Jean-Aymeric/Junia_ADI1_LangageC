#include <stdio.h>

#define WIDTH 80
#define EMPTY ' '       // le terrain vide est représenté par un espace
#define EDGE '|'        // le bord du terrain est représenté par un |
#define BALL_RIGHT '\\' // la balle allant vers la droite est représentée par un \ (qui doit être doublé pour être correctement affiché
#define BALL_LEFT '/'   // la balle allant vers la gauche est représentée par un /

// Fonction d'initialisation du tableau représentant le terrain avec la balle
void initializeField(char field[WIDTH+1]) {
    for (int i = 0; i < WIDTH; i++) {
        if ((i == 0) || (i == (WIDTH - 1))) { // Ce test sert à mettre le caractère Edge (le bord) sur les bords du terrain
            field[i] = EDGE;
        } else {
            field[i] = EMPTY; // Le reste est rempli avec le caractère EMPTY
        }
    }
    field[1] = BALL_RIGHT; // On place la balle juste au bord gauche du terrain avec le caractère BALL_RIGHT
    field[WIDTH] = '\0'; // il s'agit juste d'un caractère spécial permettant l'affichage plus rapidement

}

// Fonction d'affichage du terrain
void displayField(char field[WIDTH+1]) {
    printf("%s\n", field);
}

// Votre fonction !!! Elle devra permettre le déplacement de la balle
void moveBall(char field[WIDTH+1]) {
    // C'est à vous de jouer
}

int main() {
    char field[WIDTH+1]; // Le terrain prend un caractère de plus pour laisser la place au caractère spécial permettant
    // un affichage plus rapide. Considérez que votre tableau fait WIDTH de largeur

    initializeField(field); // On initialise le terrain

    for (;;) { // Une boucle infinie
        displayField(field);    // On affiche le terrain
        moveBall(field);        // On bouge la balle

        printf("Press Enter to Continue");  // Ces deux lignes de code sont là pour vous permettre de voir
        while( getchar() != '\n' );               // ce qu'il se passe plus lentement. À mettre en commentaire pour une
                                                  // version plus rapide
    }

    return 0;
}
