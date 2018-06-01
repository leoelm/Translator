#include "translate_bi.h"

void TRANSLATE_BI::to_bi(QString str)
{
    for(int i = 0; i<str.length();i++){
        if(str[i]=="a"){
            output_bi+="1 ";

        }
        else if(str[i]=="b"){
            output_bi+="10 ";

        }
        else if(str[i]=="c"){
            output_bi+="11 ";

        }
        else if(str[i]=="d"){
            output_bi+="100 ";

        }
        else if(str[i]=="e"){
            output_bi+="101 ";

        }
        else if(str[i]=="f"){
            output_bi+="110 ";

        }
        else if(str[i]=="g"){
            output_bi+="111 ";

        }
        else if(str[i]=="h"){
            output_bi+="1000 ";

        }
        else if(str[i]=="i"){
            output_bi+="1001 ";

        }
        else if(str[i]=="j"){
            output_bi+="1010 ";

        }
        else if(str[i]=="k"){
            output_bi+="1011 ";

        }
        else if(str[i]=="l"){
            output_bi+="1100 ";

        }
        else if(str[i]=="m"){
            output_bi+="1101 ";

        }
        else if(str[i]=="n"){
            output_bi+="1110 ";

        }
        else if(str[i]=="o"){
            output_bi+="1111 ";

        }
        else if(str[i]=="p"){
            output_bi+="10000 ";

        }
        else if(str[i]=="q"){
            output_bi+="10001 ";

        }
        else if(str[i]=="r"){
            output_bi+="10010 ";

        }
        else if(str[i]=="s"){
            output_bi+="10011 ";

        }
        else if(str[i]=="t"){
            output_bi+="10100 ";

        }
        else if(str[i]=="u"){
            output_bi+="10101 ";

        }
        else if(str[i]=="v"){
            output_bi+="10110 ";

        }
        else if(str[i]=="w"){
            output_bi+="10111 ";

        }
        else if(str[i]=="x"){
            output_bi+="11000 ";

        }
        else if(str[i]=="y"){
            output_bi+="11001 ";

        }
        else if(str[i]=="z"){
            output_bi+="11010 ";

        }
        else if(str[i]==" "){
            output_bi+="/ ";

        }
        else{
            output_bi+=str[i];

        }
    }
}
