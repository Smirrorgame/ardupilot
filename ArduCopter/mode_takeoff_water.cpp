#include "Copter.h"
#include "mode.h"

// Das ist die init funktion, diese wird einmal durchlaufen, wenn der Flugmodus gesetzt werden soll.
// Wenn diese Funktion false liefert, wird der Modus nicht gesetzt.
bool TakeoffWater::init(bool ignore_checks) {
    
    // Wenn ignore_checks==false
    if(!ignore_checks){
        return true;
    }


    // Wenn die checks ignoriert werden sollen, return true
    return true;
}

void TakeoffWater::run() {
    gcs().send_text(MAV_SEVERITY_INFO, "Innerhalb der TakeoffWater run funktion");
}