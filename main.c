#include "stdio.h"
#include "GPS_TOOLS.h"


int main(int argc, char** argv)
{
    
    //trame NMEA GGA valide: heure 06:40:36.289, lat= 48.608958°, long = 7.682288°, altitude = 200.2 m
    const char frame0[]="$GPGGA,064036.289,4836.5375,N,00740.9373,E,1,04,3.2,200.2,M,,,,0000*0E\r\n";
    //trame NMEA RMC valide: heure 05:37:40.00, lat= 25.060532°, long = 121.600165°, vitesse = 2.69 knot
    const char frame1[]="$GPRMC,053740.000,A,2503.6319,N,12136.0099,E,2.69,79.65,100106,,,A*53\r\n";
    //trame NMEA GGA non valide: heure 06:40:36.289, lat= 48.608958°, long = 7.682288°, altitude = 300.2 m
    const char frame2[]="$PPGGA,064036.289,4836.5375,N,00740.9373,E,1,04,3.2,300.2,M,,,,0000*0E\r\n";
    
    
    
    return 0;
}

