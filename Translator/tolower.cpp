#include "tolower.h"

void TOLOWER::tolower(QString str)
{
    for(int i = 0; i<str.length();i++){
        if(str[i]=="A"){
            lower_out+="a";

        }
        else if(str[i]=="B"){
            lower_out+="b";

        }
        else if(str[i]=="C"){
            lower_out+="c";

        }
        else if(str[i]=="D"){
            lower_out+="d";

        }
        else if(str[i]=="E"){
            lower_out+="e";

        }
        else if(str[i]=="F"){
            lower_out+="f";

        }
        else if(str[i]=="G"){
            lower_out+="g";

        }
        else if(str[i]=="H"){
            lower_out+="h";

        }
        else if(str[i]=="I"){
            lower_out+="i";

        }
        else if(str[i]=="J"){
            lower_out+="j";

        }
        else if(str[i]=="K"){
            lower_out+="k";

        }
        else if(str[i]=="L"){
            lower_out+="l";

        }
        else if(str[i]=="M"){
            lower_out+="m";

        }
        else if(str[i]=="N"){
            lower_out+="n";

        }
        else if(str[i]=="O"){
            lower_out+="o";

        }
        else if(str[i]=="P"){
            lower_out+="p";

        }
        else if(str[i]=="Q"){
            lower_out+="q";

        }
        else if(str[i]=="R"){
            lower_out+="r";

        }
        else if(str[i]=="S"){
            lower_out+="s";

        }
        else if(str[i]=="T"){
            lower_out+="t";

        }
        else if(str[i]=="U"){
            lower_out+="u";

        }
        else if(str[i]=="V"){
            lower_out+="v";

        }
        else if(str[i]=="W"){
            lower_out+="w";

        }
        else if(str[i]=="X"){
            lower_out+="x";

        }
        else if(str[i]=="Y"){
            lower_out+="y";

        }
        else if(str[i]=="Z"){
            lower_out+="z";

        }
        else if(str[i]==" "){
            lower_out+=" ";

        }
        else if(str[i]=="ö" || str[i]=="Ö"){
            lower_out+="oe";
        }
        else if(str[i]=="ä" || str[i]=="Ä"){
            lower_out+="ae";
        }
        else if(str[i]=="ü" || str[i]=="Ü"){
            lower_out+="ue";
        }
        else if(str[i]=="ß"){
            lower_out+="ss";

        }
        else{
            lower_out+=str[i];

        }
    }
}
