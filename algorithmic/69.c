#include <stdio.h>
#include <math.h>
int main(){
  int 🤥,🤢;
        const int 🥰=(800); 
        const int 🙃=(800);
        double 🤑,🤪;
        const double 🤯=(-2.5);
        const double 🤠=(1.5);
        const double 🥳=(-2.0);
        const double 😵=(2.0);
        double 😱=(🤠-🤯)/🥰;
        double 😖=(😵-🥳)/🙃;
        const int 💩=(255);FILE *fp;
        char *💞="😹.ppm";
        char *💨="desu~~~ ";
        static unsigned char 👽[3];
        double 👩‍,µ;double 💣,💝;
        int 👅;
        const int 👧=200;
        const double 🧑‍=2;
        double 🙂=🧑‍*🧑‍;
        fp=fopen(💞,"wb");
        fprintf(fp,"P6\n%s\n%d\n%d\n%d\n",💨,🥰,🙃,💩);for(🤢=0;🤢<🙃;🤢++){
             🤪=🥳+🤢*😖;if(fabs(🤪)<😖/2)🤪=0.0;for(🤥=0;🤥<🥰;🤥++){         
                        🤑=🤯+🤥*😱;
                        👩‍=0.0;
                        µ=0.0;
                        💣=👩‍*👩‍;
                        💝=µ*µ;for(👅=0;👅<👧&&((💣+💝)<🙂);👅++){
                            µ=2*👩‍*µ+🤪;
                            👩‍=💣-💝+🤑;
                            💣=👩‍*👩‍;
                            💝=µ*µ;
                        };if(👅==👧){
                           👽[0]=0;
                           👽[1]=0;
                           👽[2]=0;                 
                        }else{
                             👽[0]=(255);
                             👽[1]=(255);
                             👽[2]=(255);
                        };fwrite(👽,1,3,fp);
                }}fclose(fp);return(0);}
