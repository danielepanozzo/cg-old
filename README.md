[![Build Status](https://travis-ci.org/danielepanozzo/cg.svg?branch=master)](https://travis-ci.org/danielepanozzo/cg)
[![Build status](https://ci.appveyor.com/api/projects/status/3b1dti4xig8i3c4a?svg=true)](https://ci.appveyor.com/project/danielepanozzo/cg)

# Graduate Computer Graphics, CSCI-GA 2270-001 Fall 2016

### Course Instructor
*Daniele Panozzo*

Room 1224, 719 Broadway, 12th Floor

Phone: 212 998 3208

[panozzo@nyu.edu](mailto:panozzo@nyu.edu)

URL: [http://cs.nyu.edu/~panozzo/](http://cs.nyu.edu/~panozzo/)

Office Hours: Mondays, 5pm-6pm and by appointment, Room 1224, 719 Broadway, 12th Floor

### Assistant
*Zhenyi He*

[zhenyi.he@nyu.edu](mailto:zhenyi.he@nyu.edu)

[https://snowymo.github.io/zhenyi-he/](https://snowymo.github.io/zhenyi-he/)

Office Hours: Thursdays, 5pm-7pm, Room 412 Warren Weaver Hall

### Lectures:
Mondays at 7:10pm - 9pm
Room 312 Warren Weaver Hall

## Course Description

This course provides an introduction to the field of Computer Graphics. We will cover the basic mathematical concepts, such as 2D and 3D transformations, study the interaction of light with geometry to derive  shading models, and implement rendering algorithms such as ray tracing and rasterization. We will investigate how these fundamental components are integrated in current graphics processors and study the corresponding programming APIs. This course will also include a brief introduction to C++.

Students will experiment with modern graphics programming and build small demos in C++ and OpenGL.

By the end of the course, the student must be able to:

* Explain and apply the fundamental mathematical concepts used in  image synthesis algorithms
* Implement a basic rendering system based on ray tracing
* Implement a basic rendering pipeline based on rasterization
* Develop simple graphics programs in C++ using OpenGL and GLSL

*Textbook*:
Fundamentals of Computer Graphics, 4th Edition
December 18, 2015 by A K Peters/CRC Press
Textbook - 734 Pages - 541 Color
ISBN 9781482229394

## Schedule and Course Notes:

The course schedule is tentative and *will* be adjusted along the way.

* 09/12: [01 - Introduction, Images  (Chapters 1,2,3)](http://cs.nyu.edu/~panozzo/cg/01%20-%20Introduction,%20Images.pdf)
* 09/19: [02 - Ray Tracing, C++ (Chapter 4,10)](http://cs.nyu.edu/~panozzo/cg/02%20-%20Ray%20Tracing,%20C++.pdf)

*Assignment 1: Ray tracing (due in 3 weeks)*

* 09/26: [03 - Basic Linear Algebra and 2D Transformations(Chapters 2, 5, 6)](https://www.dropbox.com/s/3njck7bui7jnxp2/03%20-%20Basic%20Linear%20Algebra%20and%202D%20Transformations.pdf?dl=0)
* 10/03: 04 - Orthographic Transformations, Rasterization 1 (Chapter 7,8, http://open.gl)
* 10/17: 05 - Rasterization 2, GLFW (Chapter 8, 17)

*Assignment 2: 2D Vector graphics editor (due in three weeks)*

* 10/24: 06 - 3D Transformations and Perspective Transformation  (Chapter 8 and Chapter 17)
* 10/31: 07 - Curves and Splines (Chapter 15)
* 11/07: 08 - Viewing Transformations (Chapter 7)

*Assignment 3: 3D Mesh viewer (due in two weeks)*

* 11/14: 09 - Data structures and Implicit Modeling (Chapter 12, 22)

*Assignment 4: Final Project Discussion (due in 6 weeks)*

* 11/21: 10 - Texturing 1: Textures and procedural noise (Chapter 11)
* 11/28: 11 - Animation and Quaternions (Chapter 16)
* 12/05: 12- Colors and Light (Chapter 18, 19, 20)
* 12/12: 13 - Texturing 2: UV Mapping and Bump mapping (Chapter 11)
* 12/13: 14 - Geometry Acquisition and Processing or Open Q&A for the projects
* 12/19: 15 - FINALS and project presentation

## Assignments

* [General guidelines](http://cs.nyu.edu/~panozzo/cg/generalrules.pdf)

* [Assignment 1: Ray tracing](http://cs.nyu.edu/~panozzo/cg/ex1.pdf)

* Assignment 2: 2D Drawing App

* Assignment 3: 3D Mesh viewer

* Assignment 4: Final Project

# Compilation Instructions

```bash
git clone --recursive https://github.com/danielepanozzo/cg
cd cg
cd Assignment_1
mkdir build
cd build
cmake ../
make
```

If you are looking for an IDE, I suggest to use [CLion](https://www.jetbrains.com/clion/).
