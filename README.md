[![Build Status](https://travis-ci.org/danielepanozzo/cg.svg?branch=master)](https://travis-ci.org/danielepanozzo/cg)
[![Build status](https://ci.appveyor.com/api/projects/status/3b1dti4xig8i3c4a?svg=true)](https://ci.appveyor.com/project/danielepanozzo/cg)

# CG Fall 2016

Assignment 1: Ray tracing and Animation
Mandatory: Sphere, planes
Optional: Mesh, Reflections on the floor, parallelization (OpenTTB)

Assignment 2: 2D Drawing App
Mandatory: Draw boxes and segments, pick, translate, rotate, scale, export to svg
Optional: Support for Bezier curves, keyframing animation

Assignment 3: 3D Scene
Mandatory: Draw a 3D mesh in wireframe, solid and smooth shading. Implement trackball.
Optional: Export the visible scene to SVG

Assignment 4: Game competition
Realize a small game, no game engines!
Minimal requirements: it should be 3D, it should have textures, it should have a moving object/camera

Suggestions:
- Frog
- Arkanoid
- Minecraft

# Compilation instructions

git clone --recursive XXX
cd XXX
mkdir build
cd build
cmake ../
make

I suggest to use CLion if you do not have a favorite IDE.

# Schedule
Sept 2 - Dec 15

# Debugging tips

check_gl_error();
https://open.gl/
