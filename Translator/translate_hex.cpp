#include "translate_hex.h"

void TRANSLATE_HEX::to_hex(QString str)
{
    for(int i = 0; i<str.length();i++){
        if(str[i]=="a"){
            output_hex+="1 ";

        }
        else if(str[i]=="b"){
            output_hex+="2 ";

        }
        else if(str[i]=="c"){
            output_hex+="3 ";

        }
        else if(str[i]=="d"){
            output_hex+="4 ";

        }
        else if(str[i]=="e"){
            output_hex+="5 ";

        }
        else if(str[i]=="f"){
            output_hex+="6 ";

        }
        else if(str[i]=="g"){
            output_hex+="7 ";

        }
        else if(str[i]=="h"){
            output_hex+="8 ";

        }
        else if(str[i]=="i"){
            output_hex+="9 ";

        }
        else if(str[i]=="j"){
            output_hex+="a ";

        }
        else if(str[i]=="k"){
            output_hex+="b ";

        }
        else if(str[i]=="l"){
            output_hex+="c ";

        }
        else if(str[i]=="m"){
            output_hex+="d ";

        }
        else if(str[i]=="n"){
            output_hex+="e ";

        }
        else if(str[i]=="o"){
            output_hex+="f ";

        }
        else if(str[i]=="p"){
            output_hex+="10 ";

        }
        else if(str[i]=="q"){
            output_hex+="11 ";

        }
        else if(str[i]=="r"){
            output_hex+="12 ";

        }
        else if(str[i]=="s"){
            output_hex+="13 ";

        }
        else if(str[i]=="t"){
            output_hex+="14 ";

        }
        else if(str[i]=="u"){
            output_hex+="15 ";

        }
        else if(str[i]=="v"){
            output_hex+="16 ";

        }
        else if(str[i]=="w"){
            output_hex+="17 ";

        }
        else if(str[i]=="x"){
            output_hex+="18 ";

        }
        else if(str[i]=="y"){
            output_hex+="19 ";

        }
        else if(str[i]=="z"){
            output_hex+="1a ";

        }
        else if(str[i]==" "){
            output_hex+="/ ";

        }
        else{
            output_hex+=str[i];

        }
    }
}
