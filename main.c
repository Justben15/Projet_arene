# ///| © Created by Etienne Logeais - Julien Benmussa - David Abittan
///| Groupe B promotion 2022
///| Projet 3 : Arène de jeu : PACMAN EFREI

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>


/*
int my_ai_play_1(int **map){
    *(*(map+2)+3) = 'O';
}


int my_ai_play_2(int **map)
{
     *(*(map+2)+6) = 'U';
}
*/
void dessin (int **map)
{
    int i,j;

    for(i=0; i<1;i++ )
    {
        for(j=0; j<70;j++ )
        {
            map[i][j] = '_';
        }
    }

    for(i=1; i<29;i++ )
    {
        for(j=69; j<70;j++ )
        {
            map[i][j] = '|';
        }
    }

    for(i=29; i<30;i++ )
    {
        for(j=0; j<70;j++ )
        {
            map[i][j] = '-';
        }
    }

    for(i=1; i<29;i++ )
    {
        for(j=0; j<1;j++ )
        {
            map[i][j] = '|';
        }
    }


    //debut du E
    for(i=11; i<12;i++ )
    {
        for(j=20; j<25;j++ )
        {
            map[i][j] = '_';
        }
    }

    *(*(map+12)+24) = '|';

    for(i=12; i<19;i++ )
    {
        for(j=20; j<21;j++ )
        {
            map[i][j] = '|';
        }
    }

    for(i=12; i<13;i++ )
    {
        for(j=22; j<24;j++ )
        {
            map[i][j] = '_';
        }
    }

    map[12][21] = ' ';

    map[13][22] = '|';

    map[13][21] = ' ';

    map[14][22] = '|';

    map[14][23] = '_';

    map[14][21] = ' ';

    map[15][23] = '|';

    map[15][21] = ' ';

    map[15][22] = '_';

    map[16][22] = '|';

    map[16][21] = ' ';

    map[17][22] = '|';

    map[17][23] = '_';

    map[17][24] = '_';

    map[17][21] = ' ';

    map[18][24] = '|';

    for(i=18; i<19;i++ )
    {
        for(j=21; j<24;j++ )
        {
            map[i][j] = ' ';
        }
    }

    for(i=19; i<20;i++ )
    {
        for(j=20; j<25;j++ )
        {
            map[i][j] = '-';
        }
    }
    //fin du E

    //debut du F
    for(i=11; i<12;i++ )
    {
        for(j=26; j<31;j++ )
        {
            map[i][j] = '_';
        }
    }

    *(*(map+12)+30) = '|';

    for(i=12; i<19;i++ )
    {
        for(j=26; j<27;j++ )
        {
            map[i][j] = '|';
        }
    }

    for(i=12; i<13;i++ )
    {
        for(j=28; j<30;j++ )
        {
            map[i][j] = '_';
        }
    }

    for(i=12; i<19;i++ )
    {
        for(j=27; j<28;j++ )
        {
            map[i][j] = ' ';
        }
    }

    map[13][28] = '|';

    map[14][28] = '|';

    map[14][29] = '_';

    map[15][29] = '|';

    map[15][28] = '_';

    for(i=16; i<19;i++ )
    {
        for(j=28; j<29;j++ )
        {
            map[i][j] = '|';
        }
    }

    for(i=19; i<20;i++ )
    {
        for(j=26; j<29;j++ )
        {
            map[i][j] = '-';
        }
    }
    //fin du F

    //debut du R
     for(i=11; i<12;i++ )
    {
        for(j=32; j<37;j++ )
        {
            map[i][j] = '_';
        }
    }

    for(i=12; i<19;i++ )
    {
        for(j=32; j<33;j++ )
        {
            map[i][j] = '|';
        }
    }

    for(i=12; i<13;i++ )
    {
        for(j=33; j<36;j++ )
        {
            map[i][j] = '_';
        }
    }

    map[12][36] = '\\';

    map[13][33] = '|';

    map[13][34] = ' ';

    map[13][35] = '|';

    map[13][36] = '|';

    map[14][33] = '|';

    map[14][34] = '_';

    map[14][35] = '/';

    map[14][36] = '/';

    map[15][33] = ' ';

    map[15][34] = ' ';

    map[15][35] = '/';

    for(i=16; i<19;i++ )
    {
        for(j=33; j<34;j++ )
        {
            map[i][j] = '|';
        }
    }

    map[16][34] = '\\';

    map[16][35] = '\\';

    map[17][35] = '\\';

    map[17][36] = '\\';

    map[18][36] = '\\';

    map[18][37] = '\\';

    map[19][32] = '-';

    map[19][33] = '-';

    map[19][36] = '-';

    map[19][37] = '-';
    //fin du R

    //debut du E
    for(i=11; i<12;i++ )
    {
        for(j=39; j<44;j++ )
        {
            map[i][j] = '_';
        }
    }

    map[12][43] = '|';

    for(i=12; i<19;i++ )
    {
        for(j=39; j<40;j++ )
        {
            map[i][j] = '|';
        }
    }

    for(i=12; i<13;i++ )
    {
        for(j=41; j<43;j++ )
        {
            map[i][j] = '_';
        }
    }

    map[12][40] = ' ';

    map[13][41] = '|';

    map[13][40] = ' ';

    map[14][41] = '|';

    map[14][42] = '_';

    map[14][40] = ' ';

    map[15][42] = '|';

    map[15][40] = ' ';

    map[15][41] = '_';

    map[16][41] = '|';

    map[16][40] = ' ';

    map[17][41] = '|';

    map[17][42] = '_';

    map[17][43] = '_';

    map[17][40] = ' ';

    map[18][43] = '|';

    for(i=18; i<19;i++ )
    {
        for(j=40; j<43;j++ )
        {
            map[i][j] = ' ';
        }
    }

    for(i=19; i<20;i++ )
    {
        for(j=39; j<44;j++ )
        {
            map[i][j] = '-';
        }
    }
    //fin du E

    //debut du I
     for(i=11; i<12;i++ )
    {
        for(j=45; j<50;j++ )
        {
            map[i][j] = '_';
        }
    }

    map[12][45] = '|';

    map[12][49] = '|';

    map[13][45] = '-';

    map[13][49] = '-';

    for(i=13; i<18;i++ )
    {
        for(j=46; j<47;j++ )
        {
            map[i][j] = '|';
        }
    }

    for(i=13; i<18;i++ )
    {
        for(j=48; j<49;j++ )
        {
            map[i][j] = '|';
        }
    }

    map[17][45] = '_';

    map[17][49] = '_';

    map[18][45] = '|';

    map[18][49] = '|';

    for(i=12; i<13;i++ )
    {
        for(j=46; j<49;j++ )
        {
            map[i][j] = ' ';
        }
    }

    for(i=13; i<18;i++ )
    {
        for(j=47; j<48;j++ )
        {
            map[i][j] = ' ';
        }
    }

    for(i=18; i<19;i++ )
    {
        for(j=46; j<49;j++ )
        {
            map[i][j] = ' ';
        }
    }

    for(i=19; i<20;i++ )
    {
        for(j=45; j<50;j++ )
        {
            map[i][j] = '-';
        }
    }
    //fin du I

    //debut du Pacman
    for(i=11; i<12;i++ )
    {
        for(j=7; j<14;j++ )
        {
            map[i][j] = '_';
        }
    }

    map[12][14] = '\\';

    map[13][15] = '\\';

    map[13][13] = '0';

    map[14][15] = '/';

    map[15][14] = '/';

    map[16][14] = '\\';

    map[17][15] = '\\';

    map[18][15] = '/';

    map[19][14] = '/';

    map[12][6] = '/';

    map[13][5] = '/';

    map[14][4] = '/';

    map[15][4] = '|';

    map[16][4] = '|';

    map[17][4] = '\\';

    map[18][5] = '\\';

    map[19][6] = '\\';

    for(i=19; i<20;i++ )
    {
        for(j=7; j<14;j++ )
        {
            map[i][j] = '_';
        }
    }

    for(i=12; i<13;i++ )
    {
        for(j=7; j<14;j++ )
        {
            map[i][j] = ' ';
        }
    }

    for(i=13; i<14;i++ )
    {
        for(j=6; j<13;j++ )
        {
            map[i][j] = ' ';
        }
    }

    map[13][14] = ' ';

    for(i=14; i<15;i++ )
    {
        for(j=5; j<15;j++ )
        {
            map[i][j] = ' ';
        }
    }

    for(i=15; i<16;i++ )
    {
        for(j=5; j<14;j++ )
        {
            map[i][j] = ' ';
        }
    }

    for(i=16; i<17;i++ )
    {
        for(j=5; j<14;j++ )
        {
            map[i][j] = ' ';
        }
    }

    for(i=17; i<18;i++ )
    {
        for(j=5; j<15;j++ )
        {
            map[i][j] = ' ';
        }
    }

    for(i=18; i<19;i++ )
    {
        for(j=6; j<15;j++ )
        {
            map[i][j] = ' ';
        }
    }
    //fin du Pacman

    //debut du Monstre
    for(i=12; i<13;i++ )
    {
        for(j=54; j<65;j++ )
        {
            map[i][j] = '_';
        }
    }

    map[13][65] = '\\';
    map[14][66] = '\\';
    map[13][53] = '/';
    map[14][52] = '/';

    map[14][62] = '|';
    map[13][61] = '_';
    map[14][61] = '_';
    map[14][58] = '|';
    map[14][56] = '|';
    map[13][57] = '_';
    map[14][57] = '_';
    map[14][60] = '|';

    for(i=15; i<19;i++ )
    {
        for(j=52; j<53;j++ )
        {
            map[i][j] = '|';
        }
    }

    for(i=15;i<19;i++)
    {
        for(j=66; j<67;j++ )
        {
            map[i][j] = '|';
        }
    }

    map[18][53] = '_';

    map[18][54] = '|';

    map[17][55] = '_';

    map[18][56] = '|';

    map[18][57] = '_';

    map[18][58] = '|';

    map[17][59] = '_';

    map[18][60] = '|';

    map[18][61] = '_';

    map[18][62] = '|';

    map[17][63] = '_';

    map[18][64] = '|';

    map[18][65] = '_';

    for(i=13; i<18;i++ )
    {
        for(j=53; j<66;j++ )
        {
            if (map[i][j] == '.')
            {
                map[i][j] = ' ';
            }
        }
    }
    //fin du Monstre


    //Le L de gauche bas

    map[27][3] = '_';
    map[27][4] = '_';
    map[27][5] = '_';
    map[27][6] = '_';
    map[27][7] = '_';
    map[27][8] = '_';
    map[27][9] = '_';

    map[27][2] = '|';
    map[26][2] = '|';
    map[25][2] = '|';
    map[24][2] = '|';
    map[23][2] = '|';
    map[22][2] = '|';
    map[21][2] = '|';


    map[25][3] = ' ';
    map[24][3] = ' ';
    map[23][3] = ' ';
    map[22][3] = ' ';
    map[21][3] = ' ';


    map[25][4] = ' ';
    map[24][4] = ' ';
    map[23][4] = ' ';
    map[22][4] = ' ';
    map[21][4] = ' ';

    map[26][3] = ' ';
    map[26][4] = ' ';
    map[26][5] = ' ';
    map[26][6] = ' ';
    map[26][7] = ' ';
    map[26][8] = ' ';
    map[26][9] = ' ';


    map[20][3] = '_';
    map[20][4] = '_';


    map[21][5] = '|';
    map[22][5] = '|';
    map[23][5] = '|';
    map[24][5] = '|';
    map[25][5] = '|';

    map[25][6] = '_';
    map[25][7] = '_';
    map[25][8] = '_';
    map[25][9] = '_';

    map[26][10] = '|';
    map[27][10] = '|';

    //Le L a droite

    map[27][66] = '_';
    map[27][65] = '_';
    map[27][64] = '_';
    map[27][63] = '_';
    map[27][62] = '_';
    map[27][61] = '_';
    map[27][60] = '_';

    map[27][67] = '|';
    map[26][67] = '|';
    map[25][67] = '|';
    map[24][67] = '|';
    map[23][67] = '|';
    map[22][67] = '|';
    map[21][67] = '|';

    map[20][66] = '_';
    map[20][65] = '_';


    map[21][64] = '|';
    map[22][64] = '|';
    map[23][64] = '|';
    map[24][64] = '|';
    map[25][64] = '|';

    map[25][63] = '_';
    map[25][62] = '_';
    map[25][61] = '_';
    map[25][60] = '_';

    map[26][59] = '|';
    map[27][59] = '|';

    map[26][60] = ' ';
    map[26][61] = ' ';
    map[26][62] = ' ';
    map[26][63] = ' ';
    map[26][64] = ' ';
    map[26][65] = ' ';
    map[26][66] = ' ';

    map[26][65] = ' ';
    map[25][65] = ' ';
    map[24][65] = ' ';
    map[23][65] = ' ';
    map[22][65] = ' ';
    map[21][65] = ' ';

    map[26][66] = ' ';
    map[25][66] = ' ';
    map[24][66] = ' ';
    map[23][66] = ' ';
    map[22][66] = ' ';
    map[21][66] = ' ';

    //Les 2 rectangles du bas

    map[27][21] = '_';
    map[27][22] = '_';
    map[27][23] = '_';
    map[27][24] = '_';
    map[27][25] = '_';
    map[27][26] = '_';
    map[27][27] = '_';
    map[27][28] = '_';
    map[27][29] = '_';
    map[27][30] = '_';
    map[27][31] = '_';
    map[27][32] = '_';

    map[27][46] = '_';
    map[27][47] = '_';
    map[27][37] = '_';
    map[27][38] = '_';
    map[27][39] = '_';
    map[27][40] = '_';
    map[27][41] = '_';
    map[27][42] = '_';
    map[27][43] = '_';
    map[27][44] = '_';
    map[27][45] = '_';
    map[27][48] = '_';

    map[27][20] = '|';
    map[26][20] = '|';

    map[25][21] = '_';
    map[25][22] = '_';
    map[25][23] = '_';
    map[25][24] = '_';
    map[25][25] = '_';
    map[25][26] = '_';
    map[25][27] = '_';
    map[25][28] = '_';
    map[25][29] = '_';
    map[25][30] = '_';
    map[25][31] = '_';
    map[25][32] = '_';

    map[25][47] = '_';
    map[25][48] = '_';
    map[25][37] = '_';
    map[25][38] = '_';
    map[25][39] = '_';
    map[25][40] = '_';
    map[25][41] = '_';
    map[25][42] = '_';
    map[25][43] = '_';
    map[25][44] = '_';
    map[25][45] = '_';
    map[25][46] = '_';

    map[27][49] = '|';
    map[26][49] = '|';
    map[27][33] = '|';
    map[26][33] = '|';
    map[27][36] = '|';
    map[26][36] = '|';

    map[26][48] = ' ';
    map[26][47] = ' ';
    map[26][46] = ' ';
    map[26][45] = ' ';
    map[26][44] = ' ';
    map[26][43] = ' ';
    map[26][42] = ' ';
    map[26][41] = ' ';
    map[26][40] = ' ';
    map[26][39] = ' ';
    map[26][38] = ' ';
    map[26][37] = ' ';

    map[26][22] = ' ';
    map[26][32] = ' ';
    map[26][31] = ' ';
    map[26][30] = ' ';
    map[26][29] = ' ';
    map[26][28] = ' ';
    map[26][27] = ' ';
    map[26][26] = ' ';
    map[26][25] = ' ';
    map[26][24] = ' ';
    map[26][23] = ' ';
    map[26][21] = ' ';


    //Rectangles au dessus des rectangles de base du bas

    map[23][8] = '_';
    map[23][9] = '_';
    map[23][10] = '_';
    map[23][11] = '_';
    map[23][12] = '_';
    map[23][13] = '_';
    map[23][14] = '_';
    map[23][15] = '_';
    map[23][16] = '_';

    map[23][23] = '_';
    map[23][24] = '_';
    map[23][25] = '_';
    map[23][26] = '_';
    map[23][27] = '_';
    map[23][28] = '_';
    map[23][29] = '_';
    map[23][30] = '_';
    map[23][31] = '_';

    map[23][17] = '|';
    map[23][7] = '|';
    map[22][7] = '|';

    map[21][8] = '_';
    map[21][9] = '_';
    map[21][10] = '_';
    map[21][11] = '_';
    map[21][12] = '_';
    map[21][13] = '_';
    map[21][14] = '_';
    map[21][15] = '_';
    map[21][16] = '_';

    map[21][23] = '_';
    map[21][24] = '_';
    map[21][25] = '_';
    map[21][26] = '_';
    map[21][27] = '_';
    map[21][28] = '_';
    map[21][29] = '_';
    map[21][30] = '_';
    map[21][31] = '_';


    map[23][32] = '|';
    map[22][32] = '|';
    map[22][17] = '|';
    map[23][22] = '|';
    map[22][22] = '|';

    map[23][38] = '_';
    map[23][39] = '_';
    map[23][40] = '_';
    map[23][41] = '_';
    map[23][42] = '_';
    map[23][43] = '_';
    map[23][44] = '_';
    map[23][45] = '_';
    map[23][46] = '_';

    map[23][53] = '_';
    map[23][54] = '_';
    map[23][55] = '_';
    map[23][56] = '_';
    map[23][57] = '_';
    map[23][58] = '_';
    map[23][59] = '_';
    map[23][60] = '_';
    map[23][61] = '_';

    map[23][37] = '|';
    map[22][37] = '|';

    map[21][38] = '_';
    map[21][39] = '_';
    map[21][40] = '_';
    map[21][41] = '_';
    map[21][42] = '_';
    map[21][43] = '_';
    map[21][44] = '_';
    map[21][45] = '_';
    map[21][46] = '_';

    map[21][53] = '_';
    map[21][54] = '_';
    map[21][55] = '_';
    map[21][56] = '_';
    map[21][57] = '_';
    map[21][58] = '_';
    map[21][59] = '_';
    map[21][60] = '_';
    map[21][61] = '_';

    map[23][62] = '|';
    map[22][62] = '|';
    map[23][47] = '|';
    map[22][47] = '|';
    map[23][52] = '|';
    map[22][52] = '|';

    map[22][61] = ' ';
    map[22][60] = ' ';
    map[22][59] = ' ';
    map[22][58] = ' ';
    map[22][57] = ' ';
    map[22][56] = ' ';
    map[22][55] = ' ';
    map[22][54] = ' ';
    map[22][53] = ' ';

    map[22][46] = ' ';
    map[22][45] = ' ';
    map[22][44] = ' ';
    map[22][43] = ' ';
    map[22][42] = ' ';
    map[22][41] = ' ';
    map[22][40] = ' ';
    map[22][39] = ' ';
    map[22][38] = ' ';

    map[22][31] = ' ';
    map[22][30] = ' ';
    map[22][29] = ' ';
    map[22][28] = ' ';
    map[22][27] = ' ';
    map[22][26] = ' ';
    map[22][25] = ' ';
    map[22][24] = ' ';
    map[22][23] = ' ';

    map[22][16] = ' ';
    map[22][15] = ' ';
    map[22][14] = ' ';
    map[22][13] = ' ';
    map[22][12] = ' ';
    map[22][11] = ' ';
    map[22][10] = ' ';
    map[22][9] = ' ';
    map[22][8] = ' ';


    //Le T a gauche bas

    map[27][12] = '_';
    map[27][13] = '_';
    map[27][14] = '_';
    map[27][15] = '_';
    map[27][16] = '_';
    map[27][17] = '_';
    map[27][18] = '_';

    map[27][12] = '|';
    map[27][18] = '|';

    map[26][13] = '_';
    map[26][14] = '_';

    map[26][17] = '_';
    map[26][16] = '_';

    map[26][14] = '|';
    map[26][16] = '|';

    map[25][15] = '_';

    map[26][15] = ' ';

    //Le T a droite

    map[27][56] = '_';
    map[27][55] = '_';
    map[27][54] = '_';
    map[27][53] = '_';
    map[27][52] = '_';

    map[27][57] = '|';
    map[27][51] = '|';

    map[26][56] = '_';

    map[26][53] = '|';
    map[26][52] = '_';

    map[26][55] = '|';

    map[25][54] = '_';

    map[26][54] = ' ';

    //Haut de la map

    //L de gauche

    map[2][3] = '_';
    map[2][4] = '_';
    map[2][5] = '_';
    map[2][6] = '_';
    map[2][7] = '_';
    map[2][8] = '_';
    map[2][9] = '_';

    map[3][2] = '|';
    map[4][2] = '|';
    map[5][2] = '|';
    map[6][2] = '|';
    map[7][2] = '|';
    map[8][2] = '|';
    map[9][2] = '|';


    map[3][5] = ' ';
    map[3][6] = ' ';
    map[3][7] = ' ';
    map[3][8] = ' ';
    map[3][9] = ' ';
    map[4][5] = ' ';


    map[4][3] = ' ';
    map[3][3] = ' ';
    map[8][3] = ' ';
    map[6][3] = ' ';
    map[7][3] = ' ';

    map[4][4] = ' ';
    map[3][4] = ' ';
    map[8][4] = ' ';
    map[6][4] = ' ';
    map[7][4] = ' ';

    map[5][3] = ' ';
    map[5][4] = ' ';


    map[9][3] = '_';
    map[9][4] = '_';



    map[5][5] = '|';
    map[9][5] = '|';
    map[8][5] = '|';
    map[7][5] = '|';
    map[6][5] = '|';

    map[4][6] = '_';
    map[4][7] = '_';
    map[4][8] = '_';
    map[4][9] = '_';

    map[4][10] = '|';
    map[3][10] = '|';

    //L de droite haut


    map[2][66] = '_';
    map[2][65] = '_';
    map[2][64] = '_';
    map[2][63] = '_';
    map[2][62] = '_';
    map[2][61] = '_';
    map[2][60] = '_';

    map[9][67] = '|';
    map[8][67] = '|';
    map[7][67] = '|';
    map[6][67] = '|';
    map[5][67] = '|';
    map[4][67] = '|';
    map[3][67] = '|';

    map[9][66] = '_';
    map[9][65] = '_';

    map[9][64] = '|';
    map[8][64] = '|';
    map[7][64] = '|';
    map[6][64] = '|';
    map[5][64] = '|';

    map[4][63] = '_';
    map[4][62] = '_';
    map[4][61] = '_';
    map[4][60] = '_';

    map[4][59] = '|';
    map[3][59] = '|';

    map[3][66] = ' ';
    map[3][65] = ' ';
    map[3][64] = ' ';
    map[3][63] = ' ';
    map[3][62] = ' ';
    map[3][61] = ' ';
    map[3][60] = ' ';

    map[4][66] = ' ';
    map[4][65] = ' ';
    map[4][64] = ' ';

    map[5][66] = ' ';
    map[6][66] = ' ';
    map[7][66] = ' ';
    map[8][66] = ' ';

    map[5][65] = ' ';
    map[6][65] = ' ';
    map[7][65] = ' ';
    map[8][65] = ' ';

    //Rectangles au dessus des rectangles de base du bas

    map[8][8] = '_';
    map[8][9] = '_';
    map[8][10] = '_';
    map[8][11] = '_';
    map[8][12] = '_';
    map[8][13] = '_';
    map[8][14] = '_';
    map[8][15] = '_';
    map[8][16] = '_';

    map[8][23] = '_';
    map[8][24] = '_';
    map[8][25] = '_';
    map[8][26] = '_';
    map[8][27] = '_';
    map[8][28] = '_';
    map[8][29] = '_';
    map[8][30] = '_';
    map[8][31] = '_';

    map[8][17] = '|';
    map[7][7] = '|';
    map[8][7] = '|';

    map[6][8] = '_';
    map[6][9] = '_';
    map[6][10] = '_';
    map[6][11] = '_';
    map[6][12] = '_';
    map[6][13] = '_';
    map[6][14] = '_';
    map[6][15] = '_';
    map[6][16] = '_';

    map[6][23] = '_';
    map[6][24] = '_';
    map[6][25] = '_';
    map[6][26] = '_';
    map[6][27] = '_';
    map[6][28] = '_';
    map[6][29] = '_';
    map[6][30] = '_';
    map[6][31] = '_';

    map[8][32] = '|';
    map[7][32] = '|';
    map[7][17] = '|';
    map[8][22] = '|';
    map[7][22] = '|';

    map[8][38] = '_';
    map[8][39] = '_';
    map[8][40] = '_';
    map[8][41] = '_';
    map[8][42] = '_';
    map[8][43] = '_';
    map[8][44] = '_';
    map[8][45] = '_';
    map[8][46] = '_';

    map[8][53] = '_';
    map[8][54] = '_';
    map[8][55] = '_';
    map[8][56] = '_';
    map[8][57] = '_';
    map[8][58] = '_';
    map[8][59] = '_';
    map[8][60] = '_';
    map[8][61] = '_';

    map[8][37] = '|';
    map[7][37] = '|';

    map[6][38] = '_';
    map[6][39] = '_';
    map[6][40] = '_';
    map[6][41] = '_';
    map[6][42] = '_';
    map[6][43] = '_';
    map[6][44] = '_';
    map[6][45] = '_';
    map[6][46] = '_';

    map[6][53] = '_';
    map[6][54] = '_';
    map[6][55] = '_';
    map[6][56] = '_';
    map[6][57] = '_';
    map[6][58] = '_';
    map[6][59] = '_';
    map[6][60] = '_';
    map[6][61] = '_';

    map[8][62] = '|';
    map[7][62] = '|';
    map[8][47] = '|';
    map[7][47] = '|';
    map[8][52] = '|';
    map[7][52] = '|';

    map[7][61] = ' ';
    map[7][60] = ' ';
    map[7][59] = ' ';
    map[7][58] = ' ';
    map[7][57] = ' ';
    map[7][56] = ' ';
    map[7][55] = ' ';
    map[7][54] = ' ';
    map[7][53] = ' ';

    map[7][46] = ' ';
    map[7][45] = ' ';
    map[7][44] = ' ';
    map[7][43] = ' ';
    map[7][42] = ' ';
    map[7][41] = ' ';
    map[7][40] = ' ';
    map[7][39] = ' ';
    map[7][38] = ' ';

    map[7][31] = ' ';
    map[7][30] = ' ';
    map[7][29] = ' ';
    map[7][28] = ' ';
    map[7][27] = ' ';
    map[7][26] = ' ';
    map[7][25] = ' ';
    map[7][24] = ' ';
    map[7][23] = ' ';

    map[7][16] = ' ';
    map[7][15] = ' ';
    map[7][14] = ' ';
    map[7][13] = ' ';
    map[7][12] = ' ';
    map[7][11] = ' ';
    map[7][10] = ' ';
    map[7][9] = ' ';
    map[7][8] = ' ';

    //Rectangle de base en haut

    //Les 2 rectangles du bas

    map[4][21] = '_';
    map[4][22] = '_';
    map[4][23] = '_';
    map[4][24] = '_';
    map[4][25] = '_';
    map[4][26] = '_';
    map[4][27] = '_';
    map[4][28] = '_';
    map[4][29] = '_';
    map[4][30] = '_';
    map[4][31] = '_';
    map[4][32] = '_';

    map[4][46] = '_';
    map[4][47] = '_';
    map[4][37] = '_';
    map[4][38] = '_';
    map[4][39] = '_';
    map[4][40] = '_';
    map[4][41] = '_';
    map[4][42] = '_';
    map[4][43] = '_';
    map[4][44] = '_';
    map[4][45] = '_';
    map[4][48] = '_';

    map[4][20] = '|';
    map[3][20] = '|';

    map[2][21] = '_';
    map[2][22] = '_';
    map[2][23] = '_';
    map[2][24] = '_';
    map[2][25] = '_';
    map[2][26] = '_';
    map[2][27] = '_';
    map[2][28] = '_';
    map[2][29] = '_';
    map[2][30] = '_';
    map[2][31] = '_';
    map[2][32] = '_';

    map[2][47] = '_';
    map[2][48] = '_';
    map[2][37] = '_';
    map[2][38] = '_';
    map[2][39] = '_';
    map[2][40] = '_';
    map[2][41] = '_';
    map[2][42] = '_';
    map[2][43] = '_';
    map[2][44] = '_';
    map[2][45] = '_';
    map[2][46] = '_';

    map[4][49] = '|';
    map[3][49] = '|';
    map[4][33] = '|';
    map[3][33] = '|';
    map[4][36] = '|';
    map[3][36] = '|';

    map[3][48] = ' ';
    map[3][47] = ' ';
    map[3][46] = ' ';
    map[3][45] = ' ';
    map[3][44] = ' ';
    map[3][43] = ' ';
    map[3][42] = ' ';
    map[3][41] = ' ';
    map[3][40] = ' ';
    map[3][39] = ' ';
    map[3][38] = ' ';
    map[3][37] = ' ';

    map[3][22] = ' ';
    map[3][32] = ' ';
    map[3][31] = ' ';
    map[3][30] = ' ';
    map[3][29] = ' ';
    map[3][28] = ' ';
    map[3][27] = ' ';
    map[3][26] = ' ';
    map[3][25] = ' ';
    map[3][24] = ' ';
    map[3][23] = ' ';
    map[3][21] = ' ';

    //Le T a gauche en haut

    map[2][13] = '_';
    map[2][14] = '_';
    map[2][15] = '_';
    map[2][16] = '_';
    map[2][17] = '_';

    map[3][12] = '|';
    map[3][18] = '|';

    map[3][13] = '_';

    map[3][17] = '_';

    map[4][14] = '|';
    map[4][15] = '_';
    map[4][16] = '|';

    map[3][14] = ' ';
    map[3][15] = ' ';
    map[3][16] = ' ';

    //Le T en haut a droite

    map[2][52] = '_';
    map[2][53] = '_';
    map[2][54] = '_';
    map[2][55] = '_';
    map[2][56] = '_';

    map[3][51] = '|';
    map[3][57] = '|';

    map[3][52] = '_';
    map[3][56] = '_';

    map[4][53] = '|';
    map[4][54] = '_';
    map[4][55] = '|';

    map[3][55] = ' ';
    map[3][53] = ' ';
    map[3][54] = ' ';

}

void Locate(int x, int y)
{
    #ifdef _WIN32
    HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
    COORD C;
    C.X= (SHORT)x;
    C.Y= (SHORT)y;
    SetConsoleCursorPosition(H, C);
    #endif // _WIN32
}
void display (int **map, int height, int width)
{
    Locate(0, 40);
    int i,j;
    for(i=0; i<width;i++ )
    {
        for(j=0; j<height;j++ )
        {
            printf("%c", *(*(map+i)+j));
        }
        printf("\n");
    }
}

char ia_aleatoire()
{
    int nombre_aleatoire = 0;
    char k;
    nombre_aleatoire = rand()%4;

    if (nombre_aleatoire == 0)
    {
        k = 'Z';
    }
    else if (nombre_aleatoire == 1)
    {
        k = 'S';
    }
    else if (nombre_aleatoire == 2)
    {
        k = 'Q';
    }
    else
    {
        k = 'D';
    }
    return k;
}

int joueur(int **map, int height, int width)
{
    int i = 0,j = 0;
    int droite = 1,gauche = 1,haut = 1,bas = 1,coup = 1;
    int ligne = 20, colonne = 35;
    int pos_ligne, pos_colonne;
    char p;

        for(i=0;i<width;i++)
        {
            for(j=0;j<height;j++)
            {
                while (coup != 120)
                {
                p = ia_aleatoire();
                printf(">> Direction de l'IA : %c\n", p);
                if (p=='Z')
                {
                        pos_ligne = ligne-haut;
                        if (map[pos_ligne][colonne] == '.' || map[pos_ligne][colonne] == ' ')
                        {
                            map[pos_ligne][colonne] = 'X';
                            map[ligne][colonne] = ' ';
                            ligne--;
                        }
                        coup++;
                }
                else if (p=='S')
                {
                        pos_ligne = ligne+bas;
                        if (map[pos_ligne][colonne] == '.' || map[pos_ligne][colonne] == ' ')
                        {
                            map[pos_ligne][colonne] = 'X';
                            map[ligne][colonne] = ' ';
                            ligne++;
                        }
                        coup++;
                }
                else if (p=='Q')
                {
                        pos_colonne = colonne-gauche;
                        if (map[ligne][pos_colonne] == '.' || map[ligne][pos_colonne] == ' ')
                        {
                            map[ligne][pos_colonne] = 'X';
                            map[ligne][colonne] = ' ';
                            colonne--;
                        }
                        coup++;
                }
                else if (p=='D')
                {
                        pos_colonne = colonne+droite;
                        if (map[ligne][pos_colonne] == '.' || map[ligne][pos_colonne] == ' ')
                        {
                            map[ligne][pos_colonne] = 'X';
                            map[ligne][colonne] = ' ';
                            colonne++;
                        }
                        coup++;
                }
              display(map,height, width);
              //system("pause");

              Sleep(1);
            //  system("cls");
            printf(">> Nombre de coups actuels : %d\n", coup);

                }

            }

        }
        printf("\n\nGame Over :(\n\nTu as joue %d coups\n\n",  coup);
}

void Color(int couleurDuTexte,int couleurDeFond) // fonction d'affichage de couleurs
{
        HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(H,couleurDeFond*16+couleurDuTexte);
}

void menu ()
{
    int choix;
    int t = 1;
    int height = 70;
    int width  = 30;
    int **map;
    Color(9,15);

        printf("                      ______________________________________ \n");
        printf("                     |                                      |\n");
        printf("                     |                                      |\n");
        printf("                     |       ETIENNE - DAVID - JULIEN       |\n");
        printf("                     |       BENOIT -  KEVIN - ARMAND       |\n");
        printf("                     |                                      |\n");
        printf("                     |______________________________________|\n\n\n");

    do {

        printf("1.PACMAN EFREI\n");
        printf("2.REGLES DU JEU\n");
        printf("3.QUIT\n");

        scanf("%d", &choix);
        switch (choix)
        {
            case 1:

                map = (int**) malloc(width * sizeof(int*));
                int i,j;
                for(i=0; i<width;i++ )
                {
                    *(map+i) = (int*) malloc(height * sizeof(int));

                    for(j=0; j<height;j++ )
                    {
                        map[i][j] = '.';
                    }
                }
                dessin(map);
                map[20][35] = 'X';
                display(map,height, width);
                joueur(map,height,width);
                /*
                while(t--)
                {

                    printf("\n\tPlayer 1 \n\n");
                    my_ai_play_1(map);
                    display(map,height, width);

                    printf("\n\tPlayer 2 \n\n");
                    my_ai_play_2(map);
                    display(map,height, width);

                }
                */
                for(i=0; i<width;i++ )
                {
                    free (*(map+i));
                }
                free(map);

                break;

            case 2:
                printf("                          Bienvenue dans Pacman EFREI\n\n");
                printf("But du jeu : manger pour la police les voleurs, les voleurs doivent echapper\n\t     a la police.\n");
                printf("Regles : \n\n");
                printf("    * Le labyrinthe est delimite, vous ne pouvez pas sortir de la map.\n");
                printf("    * Le temps du jeu est de 120 tours.\n");
                printf("    * Au bout des 120 tours, le jeu s arrete.\n");
                printf("    * Tu peux faire un deplacement, en haut, a gauche, a droite, et en bas par\n      tour de longueur 1 points.\n");
                printf("    * Si un policier va sur la meme case du voleur, le voleur meurt.\n\n\n\n");

                break;
            }

        } while(choix != 3);
          Color(15,0);
}




int main()
{

    menu();
    srand(time(NULL));


    return 0;
}
