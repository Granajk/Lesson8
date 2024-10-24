
#include "Free.h"
#include "Software.h"
#include "Shareware.h"

int main()
{
    Free soft("Spotify","Spotify Technology S.A.");
    Shareware soft2("Photoshop", "ADOBE", Date()-10, 7);

    soft.showInfo();
    soft2.showInfo();
}
