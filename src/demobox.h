/* demobox.h */
// This file contains the image data for the 'demo' box
// shown on the screen while a demo is in progress.
// This is stored seperatly from the rest of the graphics
// because the original keen games did not have a demo and
// so EGALATCH contains no 'DEMO' graphics.

// Created by MAKEDMOH.BAS    03-22-2004 14:57:54

#define DEMOBOX_WIDTH		48
#define DEMOBOX_HEIGHT		16

/*unsigned char demobox_image[768] = { \
   15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15, \
   15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15, \
   15,15,15,12,12,12,12,12,12,15,15,15,15,12,12,12,12,12,12,12,15,15,12,15,15,15,15,15,15,15,12,15,15,15,15,12,12,12,12,15,15,15,15,15,15,15,15,15,15, \
   15,15,12,12,15,15,15,12,12,15,15,15,12,12,15,15,15,15,15,15,15,12,12,15,15,15,15,15,12,12,15,15,15,12,12,15,15,12,12,15,15,15,15,15,15,15,15,15,15, \
   15,12,12,15,15,15,15,12,12,15,15,12,12,15,15,15,15,15,15,15,12,12,12,15,15,15,12,12,12,15,15,12,12,15,15,15,15,12,12,15,15,15,15,15,15,15,15,15,15, \
   12,12,15,15,15,15,12,12,15,15,12,12,12,12,12,12,15,15,15,12,12,15,12,15,12,15,12,12,15,15,12,12,15,15,15,15,12,12,15,15,15,15,15,15,15,15,15,15,12, \
   12,15,15,15,15,12,12,15,15,12,12,15,15,15,15,15,15,15,12,12,15,15,12,15,15,12,12,15,15,12,12,15,15,15,15,12,12,15,15,15,15,15,15,15,15,15,15,12,12, \
   15,15,15,15,12,12,15,15,12,12,15,15,15,15,15,15,15,12,12,15,15,12,15,15,12,12,15,15,12,12,15,15,15,15,12,12,15,15,15,15,15,15,15,15,15,15,12,12,15, \
   15,15,12,12,15,15,15,12,12,15,15,15,15,15,15,15,12,12,15,15,15,15,15,12,12,15,15,15,12,12,15,15,12,12,15,15,15,15,15,15,15,15,15,15,15,12,12,12,12, \
   12,12,15,15,15,15,12,12,12,12,12,12,12,15,15,12,12,15,15,15,15,15,12,12,15,15,15,15,12,12,12,12,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15, \
   15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,4 ,4 ,4 ,4 ,4 ,4 ,4 ,4 ,4 ,4, \
   4 ,4 ,4 ,4 ,4 ,4 ,4 ,4 ,4 ,4 ,4 ,4 ,4 ,4 ,4 ,4 ,4 ,4 ,4 ,4 ,4 ,4 ,4 ,4 ,4 ,4 ,4 ,4 ,4 ,4 ,4 ,4 ,4 ,4 ,4 ,4 ,15,4 ,4 ,12,12,12,12,12,12,12,12,12,12, \
   12,12,12,12,12,12,15,12,12,15,15,15,15,15,15,12,12,15,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,4 ,4 ,15,4 ,4 ,4 ,4 ,4 ,4 ,4 ,4 ,4 ,4 ,4 ,4, \
   4 ,4 ,4 ,4 ,4 ,4 ,4 ,4 ,4 ,4 ,4 ,4 ,4 ,4 ,4 ,4 ,4 ,4 ,4 ,4 ,4 ,4 ,4 ,4 ,4 ,4 ,4 ,4 ,4 ,4 ,4 ,4 ,4 ,4 ,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15, \
   15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15, \
   15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15, \
};*/

unsigned char demobox_image[768] = { \
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, \
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, \
    0, 0, 0,12,12,12,12,12,12, 0, 0, 0, 0,12,12,12,12,12,12,12, 0, 0,12, 0, 0, 0, 0, 0, 0, 0,12, 0, 0, 0, 0,12,12,12,12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, \
    0, 0,12,12, 0, 0, 0,12,12, 0, 0, 0,12,12, 0, 0, 0, 0, 0, 0, 0,12,12, 0, 0, 0, 0, 0,12,12, 0, 0, 0,12,12, 0, 0,12,12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, \
    0,12,12, 0, 0, 0, 0,12,12, 0, 0,12,12, 0, 0, 0, 0, 0, 0, 0,12,12,12, 0, 0, 0,12,12,12, 0, 0,12,12, 0, 0, 0, 0,12,12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, \
   12,12, 0, 0, 0, 0,12,12, 0, 0,12,12,12,12,12,12, 0, 0, 0,12,12, 0,12, 0,12, 0,12,12, 0, 0,12,12, 0, 0, 0, 0,12,12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,12, \
   12, 0, 0, 0, 0,12,12, 0, 0,12,12, 0, 0, 0, 0, 0, 0, 0,12,12, 0, 0,12, 0, 0,12,12, 0, 0,12,12, 0, 0, 0, 0,12,12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,12,12, \
    0, 0, 0, 0,12,12, 0, 0,12,12, 0, 0, 0, 0, 0, 0, 0,12,12, 0, 0,12, 0, 0,12,12, 0, 0,12,12, 0, 0, 0, 0,12,12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,12,12, 0, \
    0, 0,12,12, 0, 0, 0,12,12, 0, 0, 0, 0, 0, 0, 0,12,12, 0, 0, 0, 0, 0,12,12, 0, 0, 0,12,12, 0, 0,12,12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,12,12,12,12, \
   12,12, 0, 0, 0, 0,12,12,12,12,12,12,12, 0, 0,12,12, 0, 0, 0, 0, 0,12,12, 0, 0, 0, 0,12,12,12,12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, \
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,4 ,4 ,4 ,4 ,4 ,4 ,4 ,4 ,4 ,4, \
   4 ,4 ,4 ,4 ,4 ,4 ,4 ,4 ,4 ,4 ,4 ,4 ,4 ,4 ,4 ,4 ,4 ,4 ,4 ,4 ,4 ,4 ,4 ,4 ,4 ,4 ,4 ,4 ,4 ,4 ,4 ,4 ,4 ,4 ,4 ,4 , 0,4 ,4 ,12,12,12,12,12,12,12,12,12,12, \
   12,12,12,12,12,12,15,12,12,15,15,15,15,15,15,12,12,15,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,4 ,4 , 0,4 ,4 ,4 ,4 ,4 ,4 ,4 ,4 ,4 ,4 ,4 ,4, \
   4 ,4 ,4 ,4 ,4 ,4 ,4 ,4 ,4 ,4 ,4 ,4 ,4 ,4 ,4 ,4 ,4 ,4 ,4 ,4 ,4 ,4 ,4 ,4 ,4 ,4 ,4 ,4 ,4 ,4 ,4 ,4 ,4 ,4 , 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, \
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, \
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, \
};

char demobox_mask[768] = { \
   0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 , \
   0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 , \
   0 ,0 ,0 ,0 ,0 ,15,15,15,15,15,15,0 ,0 ,0 ,0 ,15,15,15,15,15,15,15,0 ,0 ,15,0 ,0 ,0 ,0 ,0 ,0 ,0 ,15,0 ,0 ,0 ,0 ,15,15,15,15,0 ,0 ,0 ,0 ,0 ,0 ,0 , \
   0 ,0 ,0 ,0 ,0 ,15,15,0 ,0 ,0 ,15,15,0 ,0 ,0 ,15,15,0 ,0 ,0 ,0 ,0 ,0 ,0 ,15,15,0 ,0 ,0 ,0 ,0 ,15,15,0 ,0 ,0 ,15,15,0 ,0 ,15,15,0 ,0 ,0 ,0 ,0 ,0 , \
   0 ,0 ,0 ,0 ,0 ,15,15,0 ,0 ,0 ,0 ,15,15,0 ,0 ,15,15,0 ,0 ,0 ,0 ,0 ,0 ,0 ,15,15,15,0 ,0 ,0 ,15,15,15,0 ,0 ,15,15,0 ,0 ,0 ,0 ,15,15,0 ,0 ,0 ,0 ,0 , \
   0 ,0 ,0 ,0 ,0 ,15,15,0 ,0 ,0 ,0 ,15,15,0 ,0 ,15,15,15,15,15,15,0 ,0 ,0 ,15,15,0 ,15,0 ,15,0 ,15,15,0 ,0 ,15,15,0 ,0 ,0 ,0 ,15,15,0 ,0 ,0 ,0 ,0 , \
   0 ,0 ,0 ,0 ,0 ,15,15,0 ,0 ,0 ,0 ,15,15,0 ,0 ,15,15,0 ,0 ,0 ,0 ,0 ,0 ,0 ,15,15,0 ,0 ,15,0 ,0 ,15,15,0 ,0 ,15,15,0 ,0 ,0 ,0 ,15,15,0 ,0 ,0 ,0 ,0 , \
   0 ,0 ,0 ,0 ,0 ,15,15,0 ,0 ,0 ,0 ,15,15,0 ,0 ,15,15,0 ,0 ,0 ,0 ,0 ,0 ,0 ,15,15,0 ,0 ,15,0 ,0 ,15,15,0 ,0 ,15,15,0 ,0 ,0 ,0 ,15,15,0 ,0 ,0 ,0 ,0 , \
   0 ,0 ,0 ,0 ,0 ,15,15,0 ,0 ,0 ,15,15,0 ,0 ,0 ,15,15,0 ,0 ,0 ,0 ,0 ,0 ,0 ,15,15,0 ,0 ,0 ,0 ,0 ,15,15,0 ,0 ,0 ,15,15,0 ,0 ,15,15,0 ,0 ,0 ,0 ,0 ,0 , \
   0 ,0 ,0 ,0 ,0 ,15,15,15,15,15,15,0 ,0 ,0 ,0 ,15,15,15,15,15,15,15,0 ,0 ,15,15,0 ,0 ,0 ,0 ,0 ,15,15,0 ,0 ,0 ,0 ,15,15,15,15,0 ,0 ,0 ,0 ,0 ,0 ,0 , \
   0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 , \
   0 ,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,0 , \
   15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15, \
   0 ,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,0 , \
   0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 , \
   0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 , \
};
