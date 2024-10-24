#include "Software.h"
#include "Free.h"
#include "Shareware.h"
#include "Comercial.h"

int main()
{
    Free soft("Spotify","Spotify Technology S.A.");
    Shareware soft2("Photoshop", "ADOBE", Date()-10, 7);
    Comercial soft3("Office365", "Microsoft", Date(), 365,100.0f);

    soft.showInfo();
    soft2.showInfo();
    soft3.showInfo();
}
