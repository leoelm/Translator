#include "translate_sponge.h"
#include "toupper.h"

void TRANSLATE_SPONGE::to_sponge(QString str)
{
    for(int i = 0; i<str.length();i++){

        QString in;
        TOUPPER new_toupper_sponge;

        if(i%2 == 0){
            in+=str[i];
            new_toupper_sponge.toupper(in);
            output_sponge+= new_toupper_sponge.upper_out;
        }
        else if(i%2==1){
            output_sponge+=str[i];
        }
    }
}

/*void TRANSLATE_SPONGE::delete_space(QString str){
    for(int i = 0; i<str.length(); i++){
        if(str[i]==" "){
            output_no_spaces+="";
            spaces.append(i);
        }
        else{
            output_no_spaces+=str[i];
        }
    }                                               //BUG!!!
}

void TRANSLATE_SPONGE::add_spaces(QString str){
    for(int i = 0; i<str.length();i++){
        if(i==spaces[0]){
            output_sponge_new+="!";
            output_sponge_new+=str[i];
            spaces.removeFirst();
        }
        else{
            output_sponge_new+=str[i];
        }
    }
}*/
