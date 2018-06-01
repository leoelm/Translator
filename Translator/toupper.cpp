#include "toupper.h"

void TOUPPER::toupper(QString str)
{
    for(int i = 0; i<str.length();i++){
        if(str[i]=="a"){
            upper_out+="A";

        }
        else if(str[i]=="b"){
            upper_out+="B";

        }
        else if(str[i]=="c"){
            upper_out+="C";

        }
        else if(str[i]=="d"){
            upper_out+="D";

        }
        else if(str[i]=="e"){
            upper_out+="E";

        }
        else if(str[i]=="f"){
            upper_out+="F";

        }
        else if(str[i]=="g"){
            upper_out+="G";

        }
        else if(str[i]=="h"){
            upper_out+="H";

        }
        else if(str[i]=="i"){
            upper_out+="I";

        }
        else if(str[i]=="j"){
            upper_out+="J";

        }
        else if(str[i]=="k"){
            upper_out+="K";

        }
        else if(str[i]=="l"){
            upper_out+="L";

        }
        else if(str[i]=="m"){
            upper_out+="M";

        }
        else if(str[i]=="n"){
            upper_out+="N";

        }
        else if(str[i]=="o"){
            upper_out+="O";

        }
        else if(str[i]=="p"){
            upper_out+="P";

        }
        else if(str[i]=="q"){
            upper_out+="Q";

        }
        else if(str[i]=="r"){
            upper_out+="R";

        }
        else if(str[i]=="s"){
            upper_out+="S";

        }
        else if(str[i]=="t"){
            upper_out+="T";

        }
        else if(str[i]=="u"){
            upper_out+="U";

        }
        else if(str[i]=="v"){
            upper_out+="V";

        }
        else if(str[i]=="w"){
            upper_out+="W";

        }
        else if(str[i]=="x"){
            upper_out+="X";

        }
        else if(str[i]=="y"){
            upper_out+="Y";

        }
        else if(str[i]=="z"){
            upper_out+="Z";

        }
        else if(str[i]==" "){
            upper_out+=" ";

        }
        else if(str[i]=="ö" || str[i]=="Ö"){
            upper_out+="OE";
        }
        else if(str[i]=="ä" || str[i]=="Ä"){
            upper_out+="AE";
        }
        else if(str[i]=="ü" || str[i]=="Ü"){
            upper_out+="UE";
        }
        else{
            upper_out+=str[i];

        }
    }
}
