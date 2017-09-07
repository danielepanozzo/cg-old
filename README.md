[![Build Status](https://travis-ci.org/danielepanozzo/cg.svg?branch=master)](https://travis-ci.org/danielepanozzo/cg)
[![Build status](https://ci.appveyor.com/api/projects/status/3b1dti4xig8i3c4a?svg=true)](https://ci.appveyor.com/project/danielepanozzo/cg)

# Graduate Computer Graphics, CSCI-GA 2270-001 Fall 2017

### Course Instructor
*Daniele Panozzo*

60 5th Ave, 5th Floor

Phone: 212 998 3208

[panozzo@nyu.edu](mailto:panozzo@nyu.edu)

URL: [http://cs.nyu.edu/~panozzo/](http://cs.nyu.edu/~panozzo/)

Office Hours: Mondays, 5pm-6pm and by appointment, 60 5th Ave, 5th Floor

### Assistant
*Zhongshi Jiang*

[zhongshi@cims.nyu.edu](mailto:zhongshi@cims.nyu.edu)

[http://cs.nyu.edu/~zhongshi/](http://cs.nyu.edu/~zhongshi/)

Office Hours: Tuesdays and Thursday, 2pm-3pm, 60 5th Ave, 5th Floor

### Lectures:
Mondays at 7:10pm - 9pm
60 Fifth Ave C10

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

* 09/11: [01 - Introduction, Images  (Chapters 1,2,3)](http://cs.nyu.edu/~panozzo/cg17/Slides/01%20-%20Introduction,%20Images.pdf) [(keynote)](http://cs.nyu.edu/~panozzo/cg17/Slides/01%20-%20Introduction,%20Images.key.zip)
* 09/18: [02 - Ray Tracing, C++ (Chapter 4,10)](http://cs.nyu.edu/~panozzo/cg17/Slides/02%20-%20Ray%20Tracing,%20C++.pdf) [(keynote)](http://cs.nyu.edu/~panozzo/cg17/Slides/02%20-%20Ray%20Tracing,%20C++.key.pdf)

*Assignment 1: Ray tracing*

* 09/25: 03 - Basic Linear Algebra and 2D Transformations (Chapters 2, 5, 6)
* 10/02: 04 - Viewing Transformations and Rasterization (Chapter 7,8)
* 10/16: 05 - The OpenGL Graphics Pipeline (Chapter 8, 17, http://open.gl)

*Assignment 2: 2D Vector graphics editor*

* 10/23: 06 - The OpenGL Graphics Pipeline - Part 2 (Chapter 8, 17, http://open.gl)

* 10/30: 07 - Designing Interpolating Curves (Chapter 15)
* 11/06: 08 - Designing Approximating Curves (Chapter 15)

*Assignment 3: 3D Mesh viewer*

* 11/13: 09 - Designing Surfaces (Chapter 7)]

*Assignment 4: Final Project Discussion*

* 11/20: 10 - Texture Mapping (Chapter 11)
Jeremie * 11/27: 11 - Spatial Data Structures
* 12/04: 12 - Procedural Noise Generation (Invited Lecture, Prof. Ken Perlin)
* 12/11: 13 - Animation and Quaternions
* 12/12: 14 - Mesh Data Structures or Open Q&A for the projects
* 12/19: 15 - FINALS and project presentation

## Assignments

* [General guidelines](http://cs.nyu.edu/~panozzo/cg17/Assignments/0%20-%20General%20Rules.pdf) [(latex)](http://cs.nyu.edu/~panozzo/cg17/Assignments/0%20-%20General%20Rules.zip)

* [Assignment 1: Ray tracing](http://cs.nyu.edu/~panozzo/cg17/Assignments/1%20-%20Ray%20Tracing.pdf) [(latex)](http://cs.nyu.edu/~panozzo/cg17/Assignments/1%20-%20Ray%20Tracing.zip)

<!-- * [Assignment 2: 2D Drawing App](http://cs.nyu.edu/~panozzo/cg/ex2.pdf)

* [Assignment 3: 3D Scene Editor](http://cs.nyu.edu/~panozzo/cg/ex3.pdf)

* [Assignment 4: Final Project](http://cs.nyu.edu/~panozzo/cg/ex4.pdf) -->

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
