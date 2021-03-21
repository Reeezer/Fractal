#ifndef LIBV2_H
#define LIBV2_H

// noms de fonctions inspirés d'OpenGL et GLUT

void glPushMatrix();
void glPopMatrix();

// angle in radians
void glutRotate2D(float);
// dx, dy
void glutTranslate2D(int, int);

// x1, y1, x2, y2
void glutDrawLine(int, int, int, int);
// x, y, radius
void glutDrawCircle(int, int, int);


#endif /* LIBV2_H */