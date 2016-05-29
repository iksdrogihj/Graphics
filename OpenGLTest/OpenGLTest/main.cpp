//
//  main.cpp
//  OpenGLTest
//
//  Created by Todor Ivanov on 5/29/16.
//  Copyright © 2016 Todor Ivanov. All rights reserved.
//

#include <iostream>
#include "GLUT/glut.h"
#include "Utilities/Vector/Vec3f.hpp"

using namespace std;

/* Matrix transformations */
void reshape(int w, int h){
    glViewport(0, 0, (GLfloat) w, (GLfloat) h);
    
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(60, (GLfloat) w/ (GLfloat) h, 1, 2000);
    glVertex3d(-10, 0, 0);
    
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    //trackballResize(w, h);
    gluLookAt(0, 0, 25, 0, 0, 0, 0, 1, 0);
    
}
void init()
{
    
    
}



void display()
{
    glClear (GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glClearColor(0, 0, 0, 0);
    /* Applies Panning Capabilities */
  //  applyTrackball();
    glBegin(GL_TRIANGLES);
    
    glColor3f(1, 0, 0);
    glVertex3d(0, 10, 0);
    glColor3f(0, 1, 0);
    glVertex3d(10, 0, 0);
    glColor3f(0, 0, 1);
    glVertex3d(-10, 0, 0);
    glEnd();
    glutSwapBuffers();
    
}



int main(int argc,char ** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(0, 0);
    glutCreateWindow("BarycentricTest");
    //
    /* Glut Mouse, Keybord and Reshape Function calls */
   // glutMouseFunc(trackballButton);
    //glutMotionFunc(trackballMotion);
    glutReshapeFunc(reshape);
    glutDisplayFunc(display);
    // insert code here...
    std::cout << "Hello, World!\n";
    glutMainLoop();
    return 0;
}