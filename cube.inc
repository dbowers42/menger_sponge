#include "plots.inc"

#declare Unit = box{
  <-1,-1,-1>,<1,1,1>

  texture {
    pigment {
      Red
    }
  }
}

#macro MengerSponge(sponge_size, unit)
  union {
    #local px = 0;
    #while(px < sponge_size)
      #local py = 0;
      #while(py < sponge_size)
        #local pz = 0;
        #while(pz < sponge_size)
          #if (!Plots[px][py] & !Plots[pz][py] & !Plots[px][pz])
            object {
              Unit
              translate <px, py, pz>
            }
          #end
        #local pz = pz + 1;
        #end
      #local py = py + 1;
      #end
    #local px = px + 1;
    #end

    translate sponge_size * -.5
  }
#end
