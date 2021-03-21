#ifndef LIBV1_H
#define LIBV1_H

void push_matrix();
void pop_matrix();

// angle in degrees
void rotate_angle(float);
// dx, dy
void translate_position(int, int);

// x1, x2, y1, y2
void draw_line(int, int, int, int);
// x, y, radius
void draw_circle(int, int, float);


#endif /* LIBV1_H */