Project: Particle System to learn c++, graphics, and hopefully be a valuable asset!
Author: Trent Ellingsen

Currently the make file is setup to only run on Mac OS. If headers and make file are configured properly this could also be compiled on a unix machine.

Many of the high level functions to setup everything are split up into different files and pulled together in the Main.cpp.

The main function is in Main.cpp and the scene setup for the project is in Scene.cpp. Most of the meaty logic is in the Particle.cpp & ParticleSystem.cpp files.

Some basic functions to control it are:
x/X: x source coordinate
y/Y: y source coordinate
z/Z: z source coordinate

r/R: red amount from source particles 
g/G: green amount from source particles
b/B: blue amount from source particles

More keyboard commands can be seen in ParticleSystem.cpp