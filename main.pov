#include "colors.inc"  // Include color name macros
#include "woods.inc"
#include "cube.inc"

background { White }

// Lights!
//
light_source {
  <-2, 4, -3> * 300           // X, Y, and Z coordinates of the light source
  color White
}

// Camera!
//
camera {
  location <-1, 1, -1> * 100 // X, Y and Z coordinates of the camera
  look_at  <0, 0,  0>  // X, Y and Z coordinates of where the camera is aimed
}

MengerSponge(81, Unit)
/*
plane
{
    y, -1
    translate y
    pigment {checker White Tan}
    scale 10
    rotate 45 * y

} */
