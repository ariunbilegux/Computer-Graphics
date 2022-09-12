/*
 * GLUT Shapes Demo Updated
 */

#ifdef _APPLE_
#include <GLUT/glut.h>
#include <window.h>
#else
#include <GL/glut.h>
#include <cmath>
#endif

#include <stdlib.h>

/* GLUT callback Handlers */

static void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3d(0, 0, 1);

    // glPointSize(10.0);
    glLineWidth(10);
    glBegin(GL_LINE_LOOP);

    glVertex2f(-0.9, -0.8);
    glVertex2f(-0.9, -0.5);
    glVertex2f(-0.8, -0.58);
    glVertex2f(-0.8, -0.4);
    glVertex2f(-0.7, -0.48);
    glVertex2f(-0.7, -0.28);
    glVertex2f(-0.4, -0.45); // middle
    glVertex2f(-0.1, -0.28);
    glVertex2f(-0.1, -0.48);
    glVertex2f(0.0, -0.4);
    glVertex2f(0.0, -0.58);
    glVertex2f(0.1, -0.5);
    glVertex2f(0.1, -0.8);
    glEnd();


    glPointSize(6);
    glBegin(GL_POINTS);
    float twoPI = 2 * M_PI;

    for (float i = M_PI; i <= twoPI; i += 0.001)
        glVertex2f((cos(i) * -0.15 - 0.4), (sin(i) * -0.15 - 0.365));

    glEnd();

    glLineWidth(10);
    glBegin(GL_LINE_STRIP);
    glVertex2f(-0.4, -0.215);
    glVertex2f(-0.4, -0.0);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(-0.4, -0.0);
    glVertex2f(-0.4, -0.110);
    glVertex2f(-0.25, -0.13);
    glVertex2f(-0.25, -0.02);

    glEnd();

    glLineWidth(10);
    glBegin(GL_LINE_STRIP);
    glVertex2f(-0.8, -0.8);
    glVertex2f(-0.8, -0.58);
    glEnd();
    glLineWidth(10);
    glBegin(GL_LINE_STRIP);
    glVertex2f(-0.7, -0.48);
    glVertex2f(-0.7, -0.8);
    glEnd();
    glLineWidth(10);
    glBegin(GL_LINE_STRIP);
    glVertex2f(0.0, -0.58);
    glVertex2f(0.0, -0.8);
    glEnd();
    glLineWidth(10);
    glBegin(GL_LINE_STRIP);
    glVertex2f(-0.1, -0.48);
    glVertex2f(-0.1, -0.8);
    glEnd();

    // thick M

    glLineWidth(50);
    // baruun hundlun
    glBegin(GL_QUADS);
    glVertex2f(-0.4, -0.53);
    glVertex2f(-0.15, -0.41);
    glVertex2f(-0.18, -0.54);
    glVertex2f(-0.4, -0.66);
    glEnd();

    // zuun bagana bagana
    glBegin(GL_QUADS);
    glVertex2f(-0.65, -0.8);
    glVertex2f(-0.65, -0.41);
    glVertex2f(-0.55, -0.47); // 0.07
    glVertex2f(-0.55, -0.8);
    glEnd();

    // zuun hundlun
    glBegin(GL_QUADS);
    glVertex2f(-0.65, -0.41);
    glVertex2f(-0.4, -0.53);
    glVertex2f(-0.4, -0.66);
    glVertex2f(-0.62, -0.54);
    glEnd();

    // baruun taliin bagana
    glBegin(GL_QUADS);
    glVertex2f(-0.15, -0.8);
    glVertex2f(-0.15, -0.41);
    glVertex2f(-0.25, -0.47);

    glVertex2f(-0.25, -0.8);

    glEnd();

    glFlush();
}

/* Program entry point */

int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitWindowSize(640, 480);
    glutInitWindowPosition(10, 10);
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
    glutCreateWindow("GLUT Shapes");
    glutDisplayFunc(display);
    glClearColor(1, 1, 1, 1);
    glutMainLoop();

    return EXIT_SUCCESS;
}