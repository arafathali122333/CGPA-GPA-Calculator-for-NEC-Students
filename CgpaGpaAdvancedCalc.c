#include <stdio.h>
void add(int,int[]);
int grade(char[]);
void main()
{
    int n[10],k[100],z[1000],a[1000],b[1000],c,d[100],e[100],f[100],h,j,m=0,q[100],r=0,l;char addc[10];
    struct student{char g[10];}s[500];
    printf("2015 regulation ONLY-UG NEC Students\n\n");
    printf("Which Department\n1.ECE\n2.EEE\n3.EIE\n4.CSE\n5.IT\n6.Mech\n7.Civil\n");
    scanf("%d",&n[0]);
    printf("1.CGPA\n2.GPA\n");
    scanf("%d",&n[1]);
    printf("If you completed course=> type your grade{include[Reappear(RA)]}\n");
    printf("This Program are declared default credit point in 2015 regulation\n");
    printf("Otherwise=> type '-' \n");
    switch (n[0]){case 1:{switch (n[1]){case 1:{printf("How many semester you are completed...\n");
                    scanf("%d",&h);}
                case 2:{if(n[1]==2){printf("Which Semester\n");scanf("%d",&c);}else{c=1;}{
                    switch (c){case 1:{q[0]=3,q[1]=4,q[2]=3,q[3]=3,q[4]=2,q[5]=3,q[6]=1,q[7]=1;
                        printf("15SH11C-Technical English=> ");scanf("%s",s[0].g);z[0]=q[0]*grade(s[0].g);
                        printf("15SH12C-Mathematical Foundations for Engineers=> ");scanf("%s",s[1].g);z[1]=q[1]*grade(s[1].g);
                        printf("15SH13C-Engineering Physics=> ");scanf("%s",s[2].g);z[2]=q[2]*grade(s[2].g);
                        printf("15SH14C-Engineering Chemistry=> ");scanf("%s",s[3].g);z[3]=q[3]*grade(s[3].g);
                        printf("15SH15C-Introduction to Engineering=> ");scanf("%s",s[4].g);z[4]=q[4]*grade(s[4].g);
                        printf("15EC25C-C Programming for Engineers=> ");
                        scanf("%s",s[5].g);
                        z[5]=q[5]*grade(s[5].g);
                        printf("15SH17C-Engineering Physics and Engineering Chemistry Laboratory=> ");
                        scanf("%s",s[6].g);
                        z[6]=q[6]*grade(s[6].g);
                        printf("15EC28C-C Programming Laboratory=> ");
                        scanf("%s",s[7].g);
                        z[7]=q[7]*grade(s[7].g);
                        if(n[1]==2){for(j=0;j<=7;j++){if(z[j]>=0){m+=z[j];}}d[c]=m;
                            for(l=0;l<=7;l++){if(z[l]>=0){r+=q[l];}}e[c]=r;break;}
                        else if(h==1){for(j=0;j<=7;j++){if(z[j]>=0){m+=z[j];}}d[c]=m;
                            for(l=0;l<=7;l++){if(z[l]>=0){r+=q[l];}}e[c]=r;break;}
                        }
                        case 2:
                        {
                            q[8]=3,q[9]=4,q[10]=3,q[11]=4,q[12]=3,q[13]=3,q[14]=1,q[15]=1,q[16]=1;
                            printf("15EC21C-Professional English=> ");
                            scanf("%s",s[8].g);
                            z[8]=q[8]*grade(s[8].g);
                            printf("15EC22C-Calculus and Laplace Transforms=> ");
                            scanf("%s",s[9].g);
                            z[9]=q[9]*grade(s[9].g);
                            printf("15EC23C-Semiconductor Physics=> ");
                            scanf("%s",s[10].g);
                            z[10]=q[10]*grade(s[10].g);
                            printf("15EC24C-Circuit Analysis=> ");
                            scanf("%s",s[11].g);
                            z[11]=q[11]*grade(s[11].g);
                            printf("15EC26C-Environmental Science and Engineering=> ");
                            scanf("%s",s[12].g);
                            z[12]=q[12]*grade(s[12].g);
                            printf("15SH16C-Engineering Graphics=> ");
                            scanf("%s",s[13].g);
                            z[13]=q[13]*grade(s[13].g);
                            printf("15EC27C-Semiconductor Physics and Environmental Chemistry Laboratory=> ");
                            scanf("%s",s[14].g);
                            z[14]=q[14]*grade(s[14].g);
                            printf("15SH18C-Engineering Practice Laboratory=> ");
                            scanf("%s",s[15].g);
                            z[15]=q[15]*grade(s[15].g);
                            printf("15EC29C-Circuits and Devices Laboratory=> ");
                            scanf("%s",s[16].g);
                            z[16]=q[16]*grade(s[16].g);
                            if(n[1]==2){for(j=8;j<=16;j++){if(z[j]>=0){m+=z[j];}}d[c]=m;
                            for(l=8;l<=16;l++){if(z[l]>=0){r+=q[l];}}e[c]=r;break;}
                            else if(h==2){for(j=0;j<=16;j++){if(z[j]>=0){m+=z[j];}}d[c]=m;
                            for(l=0;l<=16;l++){if(z[l]>=0){r+=q[l];}}e[c]=r;break;}
                        }
                        case 3:
                        {
                            q[17]=4,q[18]=3,q[19]=3,q[20]=4,q[21]=3,q[22]=3,q[23]=1,q[24]=1,q[25]=1;
                            printf("15EC31C-Transforms and Complex Integration=> ");
                            scanf("%s",s[17].g);
                            z[17]=q[17]*grade(s[17].g);
                            printf("15EC32C-Electronic Circuits I => ");
                            scanf("%s",s[18].g);
                            z[18]=q[18]*grade(s[18].g);
                            printf("15EC33C-Digital Electronics=> ");
                            scanf("%s",s[19].g);
                            z[19]=q[19]*grade(s[19].g);
                            printf("15EC34C-Signals and Systems=> ");
                            scanf("%s",s[20].g);
                            z[20]=q[20]*grade(s[20].g);
                            printf("15EC35C-Electromagnetic Fields=> ");
                            scanf("%s",s[21].g);
                            z[21]=q[21]*grade(s[21].g);
                            printf("15EC36C-C++ and Data Structures=> ");
                            scanf("%s",s[22].g);
                            z[22]=q[22]*grade(s[22].g);
                            printf("15EC37C-Digital Electronics Laboratory=> ");
                            scanf("%s",s[23].g);
                            z[23]=q[23]*grade(s[23].g);
                            printf("15EC38C-C++ and Data Structures Laboratory=> ");
                            scanf("%s",s[24].g);
                            z[24]=q[24]*grade(s[24].g);
                            printf("15EC39C-Electronic Circuits laboratory=> ");
                            scanf("%s",s[25].g);
                            z[25]=q[25]*grade(s[25].g);
                            if(n[1]==2){for(j=17;j<=25;j++){if(z[j]>=0){m+=z[j];}}d[c]=m;
                            for(l=17;l<=25;l++){if(z[l]>=0){r+=q[l];}}e[c]=r;break;}
                            else if(h==3){for(j=0;j<=25;j++){if(z[j]>=0){m+=z[j];}}d[c]=m;
                            for(l=0;l<=25;l++){if(z[l]>=0){r+=q[l];}}e[c]=r;break;}
                        }
                        case 4:
                        {
                            q[26]=4,q[27]=3,q[28]=4,q[29]=3,q[30]=3,q[31]=3,q[32]=1,q[33]=1,q[34]=1;
                            printf("15EC41C-Probability and Random Processes=> ");
                            scanf("%s",s[26].g);
                            z[26]=q[26]*grade(s[26].g);
                            printf("15EC42C-Electronic Circuits II => ");
                            scanf("%s",s[27].g);
                            z[27]=q[27]*grade(s[27].g);
                            printf("15EC43C-Digital Signal Processing=> ");
                            scanf("%s",s[28].g);
                            z[28]=q[28]*grade(s[28].g);
                            printf("15EC44C-Communication Systems=> ");
                            scanf("%s",s[29].g);
                            z[29]=q[29]*grade(s[29].g);
                            printf("15EC45C-Transmission Lines and Waveguides=> ");
                            scanf("%s",s[30].g);
                            z[30]=q[30]*grade(s[30].g);
                            printf("15EC46C-Professional Ethics and Human Values=> ");
                            scanf("%s",s[31].g);
                            z[31]=q[31]*grade(s[31].g);
                            printf("15EC47C-Digital Signal Processing Laboratory=> ");
                            scanf("%s",s[32].g);
                            z[32]=q[32]*grade(s[32].g);
                            printf("15EC48C-Electronic Circuits and Simulation Laboratory=> ");
                            scanf("%s",s[33].g);
                            z[33]=q[33]*grade(s[33].g);
                            printf("15EC49C-Communication Skills Laboratory=> ");
                            scanf("%s",s[34].g);
                            z[34]=q[34]*grade(s[34].g);
                            if(n[1]==2){for(j=26;j<=34;j++){if(z[j]>=0){m+=z[j];}}d[c]=m;
                            for(l=26;l<=34;l++){if(z[l]>=0){r+=q[l];}}e[c]=r;break;}
                            else if(h==4){for(j=0;j<=34;j++){if(z[j]>=0){m+=z[j];}}d[c]=m;
                            for(l=0;l<=34;l++){if(z[l]>=0){r+=q[l];}}e[c]=r;break;}
                        }
                        case 5:
                        {
                            q[35]=4,q[36]=3,q[37]=4,q[38]=3,q[39]=3,q[40]=4,q[41]=1,q[42]=1,q[43]=1;
                            printf("15EC51C-Advanced Communication Systems=> ");
                            scanf("%s",s[35].g);
                            z[35]=q[35]*grade(s[35].g);
                            printf("15EC52C-Linear Integrated Circuits=> ");
                            scanf("%s",s[36].g);
                            z[36]=q[36]*grade(s[36].g);
                            printf("15EC53C-Microprocessor and Microcontroller=> ");
                            scanf("%s",s[37].g);
                            z[37]=q[37]*grade(s[37].g);
                            printf("15EC54C-Antennas and Wave Propagation=> ");
                            scanf("%s",s[38].g);
                            z[38]=q[38]*grade(s[38].g);
                            printf("15EC55C-Project Management and Finance=> ");
                            scanf("%s",s[39].g);
                            z[39]=q[39]*grade(s[39].g);
                            printf("15EC56C-Control Systems Analysis and Design=> ");
                            scanf("%s",s[40].g);
                            z[40]=q[40]*grade(s[40].g);
                            printf("15EC57C-Analog and Digital Communication Laboratory=> ");
                            scanf("%s",s[41].g);
                            z[41]=q[41]*grade(s[41].g);
                            printf("15EC58C-Linear Integrated Circuits Laboratory=> ");
                            scanf("%s",s[42].g);
                            z[42]=q[42]*grade(s[42].g);
                            printf("15EC59C-Microprocessor and Microcontroller Laboratory=> ");
                            scanf("%s",s[43].g);
                            z[43]=q[43]*grade(s[43].g);
                            if(n[1]==2){for(j=35;j<=43;j++){if(z[j]>=0){m+=z[j];}}d[c]=m;
                            for(l=35;l<=43;l++){if(z[l]>=0){r+=q[l];}}e[c]=r;break;}
                            else if(h==5){for(j=0;j<=43;j++){if(z[j]>=0){m+=z[j];}}d[c]=m;
                            for(l=0;l<=43;l++){if(z[l]>=0){r+=q[l];}}e[c]=r;break;}
                        }
                        case 6:
                        {
                            q[44]=4,q[45]=3,q[46]=3,q[47]=3,q[48]=1,q[49]=1,q[50]=1,q[51]=2;
                            printf("15EC61C-VLSI Technology and Design=> ");
                            scanf("%s",s[44].g);
                            z[44]=q[44]*grade(s[44].g);
                            printf("15EC62C-Computer Communication Networks=> ");
                            scanf("%s",s[45].g);
                            z[45]=q[45]*grade(s[45].g);
                            printf("15EC63C-Wireless Communication=> ");
                            scanf("%s",s[46].g);
                            z[46]=q[46]*grade(s[46].g);
                            printf("15EC64C-RF and Microwave Engineering=> ");
                            scanf("%s",s[47].g);
                            z[47]=q[47]*grade(s[47].g);
                            printf("15EC65C-RF and Microwave Engineering Laboratory=> ");
                            scanf("%s",s[48].g);
                            z[48]=q[48]*grade(s[48].g);
                            printf("15EC66C-VLSI Design Laboratory=> ");
                            scanf("%s",s[49].g);
                            z[49]=q[49]*grade(s[49].g);
                            printf("15EC67C-Computer Communication Networks Laboratory=> ");
                            scanf("%s",s[50].g);
                            z[50]=q[50]*grade(s[50].g);
                            printf("15EC68C-Product Development Laboratory=> ");
                            scanf("%s",s[51].g);
                            z[51]=q[51]*grade(s[51].g);
                            if(n[1]==2){for(j=44;j<=51;j++){if(z[j]>=0){m+=z[j];}}d[c]=m;
                            for(l=44;l<=51;l++){if(z[l]>=0){r+=q[l];}}e[c]=r;break;}
                            else if(h==6){for(j=0;j<=51;j++){if(z[j]>=0){m+=z[j];}}d[c]=m;
                            for(l=0;l<=51;l++){if(z[l]>=0){r+=q[l];}}e[c]=r;break;}
                        }
                        case 7:
                        {
                            q[52]=4,q[53]=1,q[54]=1;
                            printf("15EC71C-Mini Project=> ");
                            scanf("%s",s[52].g);
                            z[52]=q[52]*grade(s[52].g);
                            printf("15EC72C-Research Paper and Patent Review-Seminar=> ");
                            scanf("%s",s[53].g);
                            z[53]=q[53]*grade(s[53].g);
                            printf("15EC73C-Comprehension=> ");
                            scanf("%s",s[54].g);
                            z[54]=q[54]*grade(s[54].g);
                            if(n[1]==2){for(j=52;j<=54;j++){if(z[j]>=0){m+=z[j];}}d[c]=m;
                            for(l=52;l<=54;l++){if(z[l]>=0){r+=q[l];}}e[c]=r;break;}
                            else if(h==7){for(j=0;j<=54;j++){if(z[j]>=0){m+=z[j];}}d[c]=m;
                            for(l=0;l<=54;l++){if(z[l]>=0){r+=q[l];}}e[c]=r;break;}
                        }
                        case 8:
                        {
                            q[55]=10,q[56]=2;
                            printf("15EC81C-Project Work=> ");
                            scanf("%s",s[55].g);
                            z[55]=q[55]*grade(s[55].g);
                            printf("15EC82C-Internship/Inplant Training=> ");
                            scanf("%s",s[56].g);
                            z[56]=q[56]*grade(s[56].g);
                            if(n[1]==2){for(j=55;j<=56;j++){if(z[j]>=0){m+=z[j];}}d[c]=m;
                            for(l=55;l<=56;l++){if(z[l]>=0){r+=q[l];}}e[c]=r;break;}
                            else if(h==8){for(j=0;j<=56;j++){if(z[j]>=0){m+=z[j];}}d[c]=m;
                            for(l=0;l<=56;l++){if(z[l]>=0){r+=q[l];}}e[c]=r;break;}
                        }}}}}
    break;}
    case 2:{switch (n[1]){
                case 1:{printf("How many semester you are completed...\n");scanf("%d",&h);}
                case 2:{if(n[1]==2){printf("Which Semester\n");scanf("%d",&c);}else{c=1;}{
                    switch (c){
                        case 1:
                        {
                        q[0]=3,q[1]=4,q[2]=3,q[3]=3,q[4]=2,q[5]=3,q[6]=1,q[7]=1;
                        printf("15SH11C-Technical English=> ");
                        scanf("%s",s[0].g);
                        z[0]=q[0]*grade(s[0].g);
                        printf("15SH12C-Mathematical Foundations for Engineers=> ");
                        scanf("%s",s[1].g);
                        z[1]=q[1]*grade(s[1].g);
                        printf("15SH13C-Engineering Physics=> ");
                        scanf("%s",s[2].g);
                        z[2]=q[2]*grade(s[2].g);
                        printf("15SH14C-Engineering Chemistry=> ");
                        scanf("%s",s[3].g);
                        z[3]=q[3]*grade(s[3].g);
                        printf("15SH15C-Introduction to Engineering=> ");
                        scanf("%s",s[4].g);
                        z[4]=q[4]*grade(s[4].g);
                        printf("15EE25C-C Programming for Engineers=> ");
                        scanf("%s",s[5].g);
                        z[5]=q[5]*grade(s[5].g);
                        printf("15SH17C-Engineering Physics and Engineering Chemistry Laboratory=> ");
                        scanf("%s",s[6].g);
                        z[6]=q[6]*grade(s[6].g);
                        printf("15EE28C-C Programming Laboratory=> ");
                        scanf("%s",s[7].g);
                        z[7]=q[7]*grade(s[7].g);
                        if(n[1]==2){for(j=0;j<=7;j++){if(z[j]>=0){m+=z[j];}}d[c]=m;
                            for(l=0;l<=7;l++){if(z[l]>=0){r+=q[l];}}e[c]=r;break;}
                        else if(h==1){for(j=0;j<=7;j++){if(z[j]>=0){m+=z[j];}}d[c]=m;
                            for(l=0;l<=7;l++){if(z[l]>=0){r+=q[l];}}e[c]=r;break;}
                        }
                        case 2:
                        {q[8]=3,q[9]=4,q[10]=3,q[11]=4,q[12]=3,q[13]=3,q[14]=1,q[15]=1,q[16]=1;
                            printf("15EE21C-Professional English=> ");
                            scanf("%s",s[8].g);
                            z[8]=q[8]*grade(s[8].g);
                            printf("15EE22C-Calculus,Probability and Statistics=> ");
                            scanf("%s",s[9].g);
                            z[9]=q[9]*grade(s[9].g);
                            printf("15EE23C-Semiconductor Physics=> ");
                            scanf("%s",s[10].g);
                            z[10]=q[10]*grade(s[10].g);
                            printf("15EE24C-Circuit Theory=> ");
                            scanf("%s",s[11].g);
                            z[11]=q[11]*grade(s[11].g);
                            printf("15EE26C-Environmental Science and Engineering=> ");
                            scanf("%s",s[12].g);
                            z[12]=q[12]*grade(s[12].g);
                            printf("15SH16C-Engineering Graphics=> ");
                            scanf("%s",s[13].g);
                            z[13]=q[13]*grade(s[13].g);
                            printf("15EE27C-Semiconductor Physics and Environmental Chemistry Laboratory=> ");
                            scanf("%s",s[14].g);
                            z[14]=q[14]*grade(s[14].g);
                            printf("15SH18C-Engineering Practice Laboratory=> ");
                            scanf("%s",s[15].g);
                            z[15]=q[15]*grade(s[15].g);
                            printf("15EE29C-Electric Circuits Laboratory=> ");
                            scanf("%s",s[16].g);
                            z[16]=q[16]*grade(s[16].g);
                            if(n[1]==2){for(j=8;j<=16;j++){if(z[j]>=0){m+=z[j];}}d[c]=m;
                            for(l=8;l<=16;l++){if(z[l]>=0){r+=q[l];}}e[c]=r;break;}
                            else if(h==2){for(j=0;j<=16;j++){if(z[j]>=0){m+=z[j];}}d[c]=m;
                            for(l=0;l<=16;l++){if(z[l]>=0){r+=q[l];}}e[c]=r;break;}}
                        case 3:
                        {q[17]=3,q[18]=4,q[19]=3,q[20]=3,q[21]=3,q[22]=3,q[23]=1,q[24]=1,q[25]=1;
                            printf("15EE31C-Fourier Series and Transforms=> ");
                            scanf("%s",s[17].g);
                            z[17]=q[17]*grade(s[17].g);
                            printf("15EE32C-Electromagnetic Theory => ");
                            scanf("%s",s[18].g);
                            z[18]=q[18]*grade(s[18].g);
                            printf("15EE33C-Electronic Circuits=> ");
                            scanf("%s",s[19].g);
                            z[19]=q[19]*grade(s[19].g);
                            printf("15EE34C-DC Machines and Transformer=> ");
                            scanf("%s",s[20].g);
                            z[20]=q[20]*grade(s[20].g);
                            printf("15EE35C-Linear Integrated Circuits and its Applications => ");
                            scanf("%s",s[21].g);
                            z[21]=q[21]*grade(s[21].g);
                            printf("15EE36C-Digital Logic Circuits=> ");
                            scanf("%s",s[22].g);
                            z[22]=q[22]*grade(s[22].g);
                            printf("15EE37C-DC Machines and Transformer Laboratory=> ");
                            scanf("%s",s[23].g);
                            z[23]=q[23]*grade(s[23].g);
                            printf("15EE38C-Integrated Circuits Laboratory=> ");
                            scanf("%s",s[24].g);
                            z[24]=q[24]*grade(s[24].g);
                            printf("15EE39C-Electronic Circuits laboratory=> ");
                            scanf("%s",s[25].g);
                            z[25]=q[25]*grade(s[25].g);
                            if(n[1]==2){for(j=17;j<=25;j++){if(z[j]>=0){m+=z[j];}}d[c]=m;
                            for(l=17;l<=25;l++){if(z[l]>=0){r+=q[l];}}e[c]=r;break;}
                            else if(h==3){for(j=0;j<=25;j++){if(z[j]>=0){m+=z[j];}}d[c]=m;
                            for(l=0;l<=25;l++){if(z[l]>=0){r+=q[l];}}e[c]=r;break;}}
                        case 4:
                        {q[26]=4,q[27]=3,q[28]=4,q[29]=3,q[30]=4,q[31]=3,q[32]=1,q[33]=1,q[34]=1;
                            printf("15EE41C-Complex, Discrete and Numerical Analysis=> ");
                            scanf("%s",s[26].g);
                            z[26]=q[26]*grade(s[26].g);
                            printf("15EE42C-AC Rotating Machines=> ");
                            scanf("%s",s[27].g);
                            z[27]=q[27]*grade(s[27].g);
                            printf("15EE43C-Control Engineering=> ");
                            scanf("%s",s[28].g);
                            z[28]=q[28]*grade(s[28].g);
                            printf("15EE44C-Measurements and Instrumentation=> ");
                            scanf("%s",s[29].g);
                            z[29]=q[29]*grade(s[29].g);
                            printf("15EE45C-Electrical Power Systems=> ");
                            scanf("%s",s[30].g);
                            z[30]=q[30]*grade(s[30].g);
                            printf("15EE46C-Professional Ethics and Human Values=> ");
                            scanf("%s",s[31].g);
                            z[31]=q[31]*grade(s[31].g);
                            printf("15EE47C-AC Rotating Machines Laboratory=> ");
                            scanf("%s",s[32].g);
                            z[32]=q[32]*grade(s[32].g);
                            printf("15EE48C-Control and Instrumentation Laboratory=> ");
                            scanf("%s",s[33].g);
                            z[33]=q[33]*grade(s[33].g);
                            printf("15EE49C-Communication Skills Laboratory=> ");
                            scanf("%s",s[34].g);
                            z[34]=q[34]*grade(s[34].g);
                            if(n[1]==2){for(j=26;j<=34;j++){if(z[j]>=0){m+=z[j];}}d[c]=m;
                            for(l=26;l<=34;l++){if(z[l]>=0){r+=q[l];}}e[c]=r;break;}
                            else if(h==4){for(j=0;j<=34;j++){if(z[j]>=0){m+=z[j];}}d[c]=m;
                            for(l=0;l<=34;l++){if(z[l]>=0){r+=q[l];}}e[c]=r;break;}
                        }
                        case 5:
                        {
                            q[35]=4,q[36]=3,q[37]=3,q[38]=3,q[39]=4,q[40]=1,q[41]=1,q[42]=1;
                            printf("15EE51C-Power System Protection,Operation and Control=> ");
                            scanf("%s",s[35].g);
                            z[35]=q[35]*grade(s[35].g);
                            printf("15EE52C-Power Electronics=> ");
                            scanf("%s",s[36].g);
                            z[36]=q[36]*grade(s[36].g);
                            printf("15EE53C-Architecture,Programming and Applications of Microprocessor and Microcontroller=> ");
                            scanf("%s",s[37].g);
                            z[37]=q[37]*grade(s[37].g);
                            printf("15EE54C-Data Structures and Algorithms=> ");
                            scanf("%s",s[38].g);
                            z[38]=q[38]*grade(s[38].g);
                            printf("15EE55C-Digital Signal Processing and its Applications=> ");
                            scanf("%s",s[39].g);
                            z[39]=q[39]*grade(s[39].g);
                            printf("15EE56C-Power Electronics Laboratory=> ");
                            scanf("%s",s[40].g);
                            z[40]=q[40]*grade(s[40].g);
                            printf("15EE57C-Microprocessor and Microcontroller Laboratory=> ");
                            scanf("%s",s[41].g);
                            z[41]=q[41]*grade(s[41].g);
                            printf("15EE58C Data Structures and Algorithms Laboratory=> ");
                            scanf("%s",s[42].g);
                            z[42]=q[42]*grade(s[42].g);
                            if(n[1]==2){for(j=35;j<=42;j++){if(z[j]>=0){m+=z[j];}}d[c]=m;
                            for(l=35;l<=42;l++){if(z[l]>=0){r+=q[l];}}e[c]=r;break;}
                            else if(h==5){for(j=0;j<=42;j++){if(z[j]>=0){m+=z[j];}}d[c]=m;
                            for(l=0;l<=42;l++){if(z[l]>=0){r+=q[l];}}e[c]=r;break;}
                        }
                        case 6:
                        {
                            q[43]=3,q[44]=3,q[45]=3,q[46]=3,q[47]=3,q[48]=1,q[49]=1,q[50]=2,q[51]=1;
                            printf("15EE61C-High Voltage Engineering=> ");
                            scanf("%s",s[43].g);
                            z[43]=q[43]*grade(s[43].g);
                            printf("15EE62C-Electrical Energy Utilization and Conservation=> ");
                            scanf("%s",s[44].g);
                            z[44]=q[44]*grade(s[44].g);
                            printf("15EE63C-Object Oriented Programming => ");
                            scanf("%s",s[45].g);
                            z[45]=q[45]*grade(s[45].g);
                            printf("15EE64C-Design of Electrical Apparatus=> ");
                            scanf("%s",s[46].g);
                            z[46]=q[46]*grade(s[46].g);
                            printf("15EE65C-Project Management and Finance=> ");
                            scanf("%s",s[47].g);
                            z[47]=q[47]*grade(s[47].g);
                            printf("15EE66C Power System Simulation and High Voltage Laboratory=> ");
                            scanf("%s",s[48].g);
                            z[48]=q[48]*grade(s[48].g);
                            printf("15EE67C-Object Oriented Programming Laboratory=> ");
                            scanf("%s",s[49].g);
                            z[49]=q[49]*grade(s[49].g);
                            printf("15EE68C-Product Development Laboratory => ");
                            scanf("%s",s[50].g);
                            z[50]=q[50]*grade(s[50].g);
                            printf("15EE69C-Comprehension=> ");
                            scanf("%s",s[51].g);
                            z[51]=q[51]*grade(s[51].g);
                            if(n[1]==2){for(j=43;j<=51;j++){if(z[j]>=0){m+=z[j];}}d[c]=m;
                            for(l=43;l<=51;l++){if(z[l]>=0){r+=q[l];}}e[c]=r;break;}
                            else if(h==6){for(j=0;j<=51;j++){if(z[j]>=0){m+=z[j];}}d[c]=m;
                            for(l=0;l<=51;l++){if(z[l]>=0){r+=q[l];}}e[c]=r;break;}
                        }
                        case 7:
                        {
                            q[52]=3,q[53]=4,q[54]=1;
                            printf("15EE71C-Smart Grid=> ");
                            scanf("%s",s[52].g);
                            z[52]=q[52]*grade(s[52].g);
                            printf("15EE72C-Mini Project=> ");
                            scanf("%s",s[53].g);
                            z[53]=q[53]*grade(s[53].g);
                            printf("15EE73C-Research Paper and Patent Review,Seminar=> ");
                            scanf("%s",s[54].g);
                            z[54]=q[54]*grade(s[54].g);
                            if(n[1]==2){for(j=52;j<=54;j++){if(z[j]>=0){m+=z[j];}}d[c]=m;
                            for(l=52;l<=54;l++){if(z[l]>=0){r+=q[l];}}e[c]=r;break;}
                            else if(h==7){for(j=0;j<=54;j++){if(z[j]>=0){m+=z[j];}}d[c]=m;
                            for(l=0;l<=54;l++){if(z[l]>=0){r+=q[l];}}e[c]=r;break;}
                        }
                        case 8:
                        {
                            q[55]=10,q[56]=2;
                            printf("15EE81C-Project Work=> ");
                            scanf("%s",s[55].g);
                            z[55]=q[55]*grade(s[55].g);
                            printf("15EE82C-Internship/Inplant Training=> ");
                            scanf("%s",s[56].g);
                            z[56]=q[56]*grade(s[56].g);
                            if(n[1]==2){for(j=55;j<=56;j++){if(z[j]>=0){m+=z[j];}}d[c]=m;
                            for(l=55;l<=56;l++){if(z[l]>=0){r+=q[l];}}e[c]=r;break;}
                            else if(h==8){for(j=0;j<=56;j++){if(z[j]>=0){m+=z[j];}}d[c]=m;
                            for(l=0;l<=56;l++){if(z[l]>=0){r+=q[l];}}e[c]=r;break;}
    }}}}}break;}
    case 3:{switch (n[1]){case 1:{printf("How many semester you are completed...\n");scanf("%d",&h);}
    case 2:{if(n[1]==2){printf("Which Semester\n");scanf("%d",&c);}else{c=1;}{
    switch (c)
    {case 1:{q[0]=3,q[1]=4,q[2]=3,q[3]=3,q[4]=2,q[5]=3,q[6]=1,q[7]=1;
                        printf("15SH11C-Technical English=> ");
                        scanf("%s",s[0].g);
                        z[0]=q[0]*grade(s[0].g);
                        printf("15SH12C-Mathematical Foundations for Engineers=> ");
                        scanf("%s",s[1].g);
                        z[1]=q[1]*grade(s[1].g);
                        printf("15SH13C-Engineering Physics=> ");
                        scanf("%s",s[2].g);
                        z[2]=q[2]*grade(s[2].g);
                        printf("15SH14C-Engineering Chemistry=> ");
                        scanf("%s",s[3].g);
                        z[3]=q[3]*grade(s[3].g);
                        printf("15SH15C-Introduction to Engineering=> ");
                        scanf("%s",s[4].g);
                        z[4]=q[4]*grade(s[4].g);
                        printf("15SH16C-Engineering Graphics=> ");
                        scanf("%s",s[5].g);
                        z[5]=q[5]*grade(s[5].g);
                        printf("15SH17C-Engineering Physics and Engineering Chemistry Laboratory=> ");
                        scanf("%s",s[6].g);
                        z[6]=q[6]*grade(s[6].g);
                        printf("15SH18C-Engineering Practice Laboratory=> ");
                        scanf("%s",s[7].g);
                        z[7]=q[7]*grade(s[7].g);
                        if(n[1]==2){for(j=0;j<=7;j++){if(z[j]>=0){m+=z[j];}}d[c]=m;
                            for(l=0;l<=7;l++){if(z[l]>=0){r+=q[l];}}e[c]=r;break;}
                        else if(h==1){for(j=0;j<=7;j++){if(z[j]>=0){m+=z[j];}}d[c]=m;
                            for(l=0;l<=7;l++){if(z[l]>=0){r+=q[l];}}e[c]=r;break;}
                        }
                        case 2:
                        {
                            q[8]=3,q[9]=4,q[10]=3,q[11]=4,q[12]=3,q[13]=3,q[14]=1,q[15]=1,q[16]=1;
                            printf("15EI21C-Professional English=> ");
                            scanf("%s",s[8].g);
                            z[8]=q[8]*grade(s[8].g);
                            printf("15EI22C-Calculus,Probability and Statistics=> ");
                            scanf("%s",s[9].g);
                            z[9]=q[9]*grade(s[9].g);
                            printf("15EI23C-Materials Science and Technology=> ");
                            scanf("%s",s[10].g);
                            z[10]=q[10]*grade(s[10].g);
                            printf("15EI24C-Electric Circuits Analysis => ");
                            scanf("%s",s[11].g);
                            z[11]=q[11]*grade(s[11].g);
                            printf("15EI25C-C Programming for Engineers=> ");
                            scanf("%s",s[12].g);
                            z[12]=q[12]*grade(s[12].g);
                            printf("15EI26C-Environmental Science and Engineering=> ");
                            scanf("%s",s[13].g);
                            z[13]=q[13]*grade(s[13].g);
                            printf("15EI27C-Physics and Environmental Chemistry Laboratory=> ");
                            scanf("%s",s[14].g);
                            z[14]=q[14]*grade(s[14].g);
                            printf("15EI28C-C Programming Laboratory=> ");
                            scanf("%s",s[15].g);
                            z[15]=q[15]*grade(s[15].g);
                            printf("15EI29C-Electric Circuit Analysis Laboratory=> ");
                            scanf("%s",s[16].g);
                            z[16]=q[16]*grade(s[16].g);
                            if(n[1]==2){for(j=8;j<=16;j++){if(z[j]>=0){m+=z[j];}}d[c]=m;
                            for(l=8;l<=16;l++){if(z[l]>=0){r+=q[l];}}e[c]=r;break;}
                            else if(h==2){for(j=0;j<=16;j++){if(z[j]>=0){m+=z[j];}}d[c]=m;
                            for(l=0;l<=16;l++){if(z[l]>=0){r+=q[l];}}e[c]=r;break;}
                        }
                        case 3:
                        {
                            q[17]=4,q[18]=3,q[19]=4,q[20]=3,q[21]=3,q[22]=3,q[23]=1,q[24]=1,q[25]=1;
                            printf("15EI31C-Fourier Series and Transforms=> ");
                            scanf("%s",s[17].g);
                            z[17]=q[17]*grade(s[17].g);
                            printf("15EI32C-Signals and Networks=> ");
                            scanf("%s",s[18].g);
                            z[18]=q[18]*grade(s[18].g);
                            printf("15EI33C-Electronic Devices and Circuits=> ");
                            scanf("%s",s[19].g);
                            z[19]=q[19]*grade(s[19].g);
                            printf("15EI34C-Sensors and Transducers=> ");
                            scanf("%s",s[20].g);
                            z[20]=q[20]*grade(s[20].g);
                            printf("15EI35C-Electrical Measurements and Electronic Instrumentation=> ");
                            scanf("%s",s[21].g);
                            z[21]=q[21]*grade(s[21].g);
                            printf("15EI36C-Professional Ethics and Human Values=> ");
                            scanf("%s",s[22].g);
                            z[22]=q[22]*grade(s[22].g);
                            printf("15EI37C-Transducers and Measurements Laboratory=> ");
                            scanf("%s",s[23].g);
                            z[23]=q[23]*grade(s[23].g);
                            printf("15EI38C-Electronic Devices and Circuits Laboratory=> ");
                            scanf("%s",s[24].g);
                            z[24]=q[24]*grade(s[24].g);
                            printf("15EI39C-Communication Skills Laboratory=> ");
                            scanf("%s",s[25].g);
                            z[25]=q[25]*grade(s[25].g);
                            if(n[1]==2){for(j=17;j<=25;j++){if(z[j]>=0){m+=z[j];}}d[c]=m;
                            for(l=17;l<=25;l++){if(z[l]>=0){r+=q[l];}}e[c]=r;break;}
                            else if(h==3){for(j=0;j<=25;j++){if(z[j]>=0){m+=z[j];}}d[c]=m;
                            for(l=0;l<=25;l++){if(z[l]>=0){r+=q[l];}}e[c]=r;break;}
                        }
                        case 4:
                        {
                            q[26]=4,q[27]=4,q[28]=3,q[29]=3,q[30]=3,q[31]=3,q[32]=1,q[33]=1,q[34]=1;
                            printf("15EI41C-Complex Analysis and Numerical Methods=> ");
                            scanf("%s",s[26].g);
                            z[26]=q[26]*grade(s[26].g);
                            printf("15EI42C-Control Systems=> ");
                            scanf("%s",s[27].g);
                            z[27]=q[27]*grade(s[27].g);
                            printf("15EI43C-Electrical Machines=> ");
                            scanf("%s",s[28].g);
                            z[28]=q[28]*grade(s[28].g);
                            printf("15EI44C-Industrial Instrumentation I => ");
                            scanf("%s",s[29].g);
                            z[29]=q[29]*grade(s[29].g);
                            printf("15EI45C-Digital Circuits and Systems=> ");
                            scanf("%s",s[30].g);
                            z[30]=q[30]*grade(s[30].g);
                            printf("15EI46C-Fundamentals of Thermodynamics and Fluid Mechanics=> ");
                            scanf("%s",s[31].g);
                            z[31]=q[31]*grade(s[31].g);
                            printf("15EI47C-Control Systems Laboratory=> ");
                            scanf("%s",s[32].g);
                            z[32]=q[32]*grade(s[32].g);
                            printf("15EI48C-Digital Circuits and Systems Laboratory=> ");
                            scanf("%s",s[33].g);
                            z[33]=q[33]*grade(s[33].g);
                            printf("15EI49C-Electrical Machines Laboratory=> ");
                            scanf("%s",s[34].g);
                            z[34]=q[34]*grade(s[34].g);
                            if(n[1]==2){for(j=26;j<=34;j++){if(z[j]>=0){m+=z[j];}}d[c]=m;
                            for(l=26;l<=34;l++){if(z[l]>=0){r+=q[l];}}e[c]=r;break;}
                            else if(h==4){for(j=0;j<=34;j++){if(z[j]>=0){m+=z[j];}}d[c]=m;
                            for(l=0;l<=34;l++){if(z[l]>=0){r+=q[l];}}e[c]=r;break;}
                        }
                        case 5:
                        {
                            q[35]=3,q[36]=4,q[37]=3,q[38]=4,q[39]=1,q[40]=1,q[41]=1,q[42]=1;
                            printf("15EI51C-Industrial Instrumentation II => ");
                            scanf("%s",s[35].g);
                            z[35]=q[35]*grade(s[35].g);
                            printf("15EI52C-Microprocessor,Microcontroller and Applications=> ");
                            scanf("%s",s[36].g);
                            z[36]=q[36]*grade(s[36].g);
                            printf("15EI53C-Linear Integrated Circuits=> ");
                            scanf("%s",s[37].g);
                            z[37]=q[37]*grade(s[37].g);
                            printf("15EI54C-Process Control=> ");
                            scanf("%s",s[38].g);
                            z[38]=q[38]*grade(s[38].g);
                            printf("15EI55C-Industrial Instrumentation Laboratory=> ");
                            scanf("%s",s[39].g);
                            z[39]=q[39]*grade(s[39].g);
                            printf("15EI56C-Microprocessor and Microcontroller Laboratory=> ");
                            scanf("%s",s[40].g);
                            z[40]=q[40]*grade(s[40].g);
                            printf("15EI57C-Linear Integrated Circuits Laboratory=> ");
                            scanf("%s",s[41].g);
                            z[41]=q[41]*grade(s[41].g);
                            printf("15EI58C-Process Control Laboratory=> ");
                            scanf("%s",s[42].g);
                            z[42]=q[42]*grade(s[42].g);
                            if(n[1]==2){for(j=35;j<=42;j++){if(z[j]>=0){m+=z[j];}}d[c]=m;
                            for(l=35;l<=42;l++){if(z[l]>=0){r+=q[l];}}e[c]=r;break;}
                            else if(h==5){for(j=0;j<=42;j++){if(z[j]>=0){m+=z[j];}}d[c]=m;
                            for(l=0;l<=42;l++){if(z[l]>=0){r+=q[l];}}e[c]=r;break;}
                        }
                        case 6:
                        {
                            q[43]=3,q[44]=3,q[45]=3,q[46]=3,q[47]=1,q[48]=1,q[49]=2,q[50]=1;
                            printf("15EI61C-Logic and Distributed Control System=> ");
                            scanf("%s",s[43].g);
                            z[43]=q[43]*grade(s[43].g);
                            printf("15EI62C-Testing and Calibration of Instruments=> ");
                            scanf("%s",s[44].g);
                            z[44]=q[44]*grade(s[44].g);
                            printf("15EI63C-Biomedical Instrumentation=> ");
                            scanf("%s",s[45].g);
                            z[45]=q[45]*grade(s[45].g);
                            printf("15EI64C-Robotics and Automation=> ");
                            scanf("%s",s[46].g);
                            z[46]=q[46]*grade(s[46].g);
                            printf("15EI65C-Virtual Instrumentation Laboratory=> ");
                            scanf("%s",s[47].g);
                            z[47]=q[47]*grade(s[47].g);
                            printf("15EI66C-Industrial Automation Laboratory=> ");
                            scanf("%s",s[48].g);
                            z[48]=q[48]*grade(s[48].g);
                            printf("15EI67C-Product Development Laboratory=> ");
                            scanf("%s",s[49].g);
                            z[49]=q[49]*grade(s[49].g);
                            printf("15EI68C-Comprehension=> ");
                            scanf("%s",s[50].g);
                            z[50]=q[50]*grade(s[50].g);
                            if(n[1]==2){for(j=43;j<=50;j++){if(z[j]>=0){m+=z[j];}}d[c]=m;
                            for(l=43;l<=50;l++){if(z[l]>=0){r+=q[l];}}e[c]=r;break;}
                            else if(h==6){for(j=0;j<=50;j++){if(z[j]>=0){m+=z[j];}}d[c]=m;
                            for(l=0;l<=50;l++){if(z[l]>=0){r+=q[l];}}e[c]=r;break;}
                        }
                        case 7:
                        {
                            q[51]=3,q[52]=3,q[53]=4,q[54]=1;
                            printf("15EI71C-Project Management and Finance=> ");
                            scanf("%s",s[51].g);
                            z[51]=q[51]*grade(s[51].g);
                            printf("15EI72C-IOT and its Applications=> ");
                            scanf("%s",s[52].g);
                            z[52]=q[52]*grade(s[52].g);
                            printf("15EI73C-Mini Project=> ");
                            scanf("%s",s[53].g);
                            z[53]=q[53]*grade(s[53].g);
                            printf("15EI74C-Research Paper and Patent Review,Seminar=> ");
                            scanf("%s",s[54].g);
                            z[54]=q[54]*grade(s[54].g);
                            if(n[1]==2){for(j=51;j<=54;j++){if(z[j]>=0){m+=z[j];}}d[c]=m;
                            for(l=51;l<=54;l++){if(z[l]>=0){r+=q[l];}}e[c]=r;break;}
                            else if(h==7){for(j=0;j<=54;j++){if(z[j]>=0){m+=z[j];}}d[c]=m;
                            for(l=0;l<=54;l++){if(z[l]>=0){r+=q[l];}}e[c]=r;break;}
                        }
                        case 8:
                        {
                            q[55]=10,q[56]=2;
                            printf("15EI81C-Project Work=> ");
                            scanf("%s",s[55].g);
                            z[55]=q[55]*grade(s[55].g);
                            printf("15EI82C-Internship/Inplant Training=> ");
                            scanf("%s",s[56].g);
                            z[56]=q[56]*grade(s[56].g);
                            if(n[1]==2){for(j=55;j<=56;j++){if(z[j]>=0){m+=z[j];}}d[c]=m;
                            for(l=55;l<=56;l++){if(z[l]>=0){r+=q[l];}}e[c]=r;break;}
                            else if(h==8){for(j=0;j<=56;j++){if(z[j]>=0){m+=z[j];}}d[c]=m;
                            for(l=0;l<=56;l++){if(z[l]>=0){r+=q[l];}}e[c]=r;break;}
    }}}}}break;}
    case 4:{switch (n[1]){case 1:{printf("How many semester you are completed...\n");scanf("%d",&h);}case 2:{if(n[1]==2){printf("Which Semester\n");scanf("%d",&c);}
                    else{c=1;}
{switch (c){case 1:{q[0]=3,q[1]=4,q[2]=3,q[3]=3,q[4]=2,q[5]=3,q[6]=1,q[7]=1;
                        printf("15SH11C-Technical English=> ");
                        scanf("%s",s[0].g);
                        z[0]=q[0]*grade(s[0].g);
                        printf("15SH12C-Mathematical Foundations for Engineers=> ");
                        scanf("%s",s[1].g);
                        z[1]=q[1]*grade(s[1].g);
                        printf("15SH13C-Engineering Physics=> ");
                        scanf("%s",s[2].g);
                        z[2]=q[2]*grade(s[2].g);
                        printf("15SH14C-Engineering Chemistry=> ");
                        scanf("%s",s[3].g);
                        z[3]=q[3]*grade(s[3].g);
                        printf("15SH15C-Introduction to Engineering=> ");
                        scanf("%s",s[4].g);
                        z[4]=q[4]*grade(s[4].g);
                        printf("15CS25C-C Programming for Engineers=> ");
                        scanf("%s",s[5].g);
                        z[5]=q[5]*grade(s[5].g);
                        printf("15SH17C-Engineering Physics and Engineering Chemistry Laboratory=> ");
                        scanf("%s",s[6].g);
                        z[6]=q[6]*grade(s[6].g);
                        printf("15CS28C-C Programming Laboratory=> ");
                        scanf("%s",s[7].g);
                        z[7]=q[7]*grade(s[7].g);
                        if(n[1]==2){for(j=0;j<=7;j++){if(z[j]>=0){m+=z[j];}}d[c]=m;
                            for(l=0;l<=7;l++){if(z[l]>=0){r+=q[l];}}e[c]=r;break;}
                        else if(h==1){for(j=0;j<=7;j++){if(z[j]>=0){m+=z[j];}}d[c]=m;
                            for(l=0;l<=7;l++){if(z[l]>=0){r+=q[l];}}e[c]=r;break;}
                        }
                        case 2:
                        {
                            q[8]=3,q[9]=4,q[10]=3,q[11]=4,q[12]=3,q[13]=3,q[14]=1,q[15]=1,q[16]=1;
                            printf("15CS21C-Professional English=> ");
                            scanf("%s",s[8].g);
                            z[8]=q[8]*grade(s[8].g);
                            printf("15CS22C-Probability and Statistics=> ");
                            scanf("%s",s[9].g);
                            z[9]=q[9]*grade(s[9].g);
                            printf("15CS23C-Physics of Solid State Devices=> ");
                            scanf("%s",s[10].g);
                            z[10]=q[10]*grade(s[10].g);
                            printf("15CS24C-Problem Solving Techniques => ");
                            scanf("%s",s[11].g);
                            z[11]=q[11]*grade(s[11].g);
                            printf("15CS26C-Environmental Science and Engineering=> ");
                            scanf("%s",s[12].g);
                            z[12]=q[12]*grade(s[12].g);
                            printf("15SH16C-Engineering Graphics=> ");
                            scanf("%s",s[13].g);
                            z[13]=q[13]*grade(s[13].g);
                            printf("15CS27C-Applied Physics and Environmental Chemistry Laboratory=> ");
                            scanf("%s",s[14].g);
                            z[14]=q[14]*grade(s[14].g);
                            printf("15CS29C-Applied Numerical Analysis Laboratory=> ");
                            scanf("%s",s[15].g);
                            z[15]=q[15]*grade(s[15].g);
                            printf("15SH18C-Engineering Practice Laboratory=> ");
                            scanf("%s",s[16].g);
                            z[16]=q[16]*grade(s[16].g);
                            if(n[1]==2){for(j=8;j<=16;j++){if(z[j]>=0){m+=z[j];}}d[c]=m;
                            for(l=8;l<=16;l++){if(z[l]>=0){r+=q[l];}}e[c]=r;break;}
                            else if(h==2){for(j=0;j<=16;j++){if(z[j]>=0){m+=z[j];}}d[c]=m;
                            for(l=0;l<=16;l++){if(z[l]>=0){r+=q[l];}}e[c]=r;break;}
                        }
                        case 3:
                        {
                            q[17]=4,q[18]=3,q[19]=3,q[20]=3,q[21]=4,q[22]=3,q[23]=1,q[24]=1,q[25]=1;
                            printf("15CS31C-Discrete Structures=> ");
                            scanf("%s",s[17].g);
                            z[17]=q[17]*grade(s[17].g);
                            printf("15CS32C-Data Structures=> ");
                            scanf("%s",s[18].g);
                            z[18]=q[18]*grade(s[18].g);
                            printf("15CS33C-Computer Networks => ");
                            scanf("%s",s[19].g);
                            z[19]=q[19]*grade(s[19].g);
                            printf("15CS34C-Computer Organization and Architecture=> ");
                            scanf("%s",s[20].g);
                            z[20]=q[20]*grade(s[20].g);
                            printf("15CS35C-Object Oriented Programming=> ");
                            scanf("%s",s[21].g);
                            z[21]=q[21]*grade(s[21].g);
                            printf("15CS36C-Digital Principles and System Design=> ");
                            scanf("%s",s[22].g);
                            z[22]=q[22]*grade(s[22].g);
                            printf("15CS37C-Computer Networks Laboratory=> ");
                            scanf("%s",s[23].g);
                            z[23]=q[23]*grade(s[23].g);
                            printf("15CS38C-Data Structures Laboratory=> ");
                            scanf("%s",s[24].g);
                            z[24]=q[24]*grade(s[24].g);
                            printf("15CS39C-Communication Skills Laboratory=> ");
                            scanf("%s",s[25].g);
                            z[25]=q[25]*grade(s[25].g);
                            if(n[1]==2){for(j=17;j<=25;j++){if(z[j]>=0){m+=z[j];}}d[c]=m;
                            for(l=17;l<=25;l++){if(z[l]>=0){r+=q[l];}}e[c]=r;break;}
                            else if(h==3){for(j=0;j<=25;j++){if(z[j]>=0){m+=z[j];}}d[c]=m;
                            for(l=0;l<=25;l++){if(z[l]>=0){r+=q[l];}}e[c]=r;break;}
                        }
                        case 4:
                        {
                            q[26]=4,q[27]=4,q[28]=3,q[29]=3,q[30]=3,q[31]=3,q[32]=1,q[33]=1;
                            printf("15CS41C-Applied Mathematics for Computer Science=> ");
                            scanf("%s",s[26].g);
                            z[26]=q[26]*grade(s[26].g);
                            printf("15CS42C-Design and Analysis of Algorithms=> ");
                            scanf("%s",s[27].g);
                            z[27]=q[27]*grade(s[27].g);
                            printf("15CS43C-Operating Systems=> ");
                            scanf("%s",s[28].g);
                            z[28]=q[28]*grade(s[28].g);
                            printf("15CS44C-Database Management Systems=> ");
                            scanf("%s",s[29].g);
                            z[29]=q[29]*grade(s[29].g);
                            printf("15CS45C-Software Engineering Methodologies=> ");
                            scanf("%s",s[30].g);
                            z[30]=q[30]*grade(s[30].g);
                            printf("15CS46C-Professional Ethics and Human Values=> ");
                            scanf("%s",s[31].g);
                            z[31]=q[31]*grade(s[31].g);
                            printf("15CS47C-Operating Systems Laboratory=> ");
                            scanf("%s",s[32].g);
                            z[32]=q[32]*grade(s[32].g);
                            printf("15CS48C-Database Management Systems Laboratory => ");
                            scanf("%s",s[33].g);
                            z[33]=q[33]*grade(s[33].g);
                            if(n[1]==2){for(j=26;j<=33;j++){if(z[j]>=0){m+=z[j];}}d[c]=m;
                            for(l=26;l<=33;l++){if(z[l]>=0){r+=q[l];}}e[c]=r;break;}
                            else if(h==4){for(j=0;j<=33;j++){if(z[j]>=0){m+=z[j];}}d[c]=m;
                            for(l=0;l<=33;l++){if(z[l]>=0){r+=q[l];}}e[c]=r;break;}
                        }
                        case 5:
                        {
                            q[34]=3,q[35]=4,q[36]=3,q[37]=3,q[38]=3,q[39]=1,q[40]=1,q[41]=1;
                            printf("15CS51C-Java Programming=> ");
                            scanf("%s",s[34].g);
                            z[34]=q[34]*grade(s[34].g);
                            printf("15CS52C-Theory of Computation=> ");
                            scanf("%s",s[35].g);
                            z[35]=q[35]*grade(s[35].g);
                            printf("15CS53C-Internet and Web Technology=> ");
                            scanf("%s",s[36].g);
                            z[36]=q[36]*grade(s[36].g);
                            printf("15CS54C-Cryptography and Network Security=> ");
                            scanf("%s",s[37].g);
                            z[37]=q[37]*grade(s[37].g);
                            printf("15CS55C-Data Mining=> ");
                            scanf("%s",s[38].g);
                            z[38]=q[38]*grade(s[38].g);
                            printf("15CS56C-Internet and Web Technology Laboratory=> ");
                            scanf("%s",s[39].g);
                            z[39]=q[39]*grade(s[39].g);
                            printf("15CS57C-Network Security Laboratory=> ");
                            scanf("%s",s[40].g);
                            z[40]=q[40]*grade(s[40].g);
                            printf("15CS58C-Java Programming Laboratory => ");
                            scanf("%s",s[41].g);
                            z[41]=q[41]*grade(s[41].g);
                            if(n[1]==2){for(j=34;j<=41;j++){if(z[j]>=0){m+=z[j];}}d[c]=m;
                            for(l=34;l<=41;l++){if(z[l]>=0){r+=q[l];}}e[c]=r;break;}
                            else if(h==5){for(j=0;j<=41;j++){if(z[j]>=0){m+=z[j];}}d[c]=m;
                            for(l=0;l<=41;l++){if(z[l]>=0){r+=q[l];}}e[c]=r;break;}
                        }
                        case 6:
                        {
                            q[42]=4,q[43]=3,q[44]=3,q[45]=3,q[46]=3,q[47]=1,q[48]=1,q[49]=2;
                            printf("15CS61C-Object Oriented Analysis and Design=> ");
                            scanf("%s",s[42].g);
                            z[42]=q[42]*grade(s[42].g);
                            printf("15CS62C-C# and .Net Technologies=> ");
                            scanf("%s",s[43].g);
                            z[43]=q[43]*grade(s[43].g);
                            printf("15CS63C-Principles of Compiler Design=> ");
                            scanf("%s",s[44].g);
                            z[44]=q[44]*grade(s[44].g);
                            printf("15CS64C-Project Management and Finance=> ");
                            scanf("%s",s[45].g);
                            z[45]=q[45]*grade(s[45].g);
                            printf("15CS65C-Mobile and Pervasive Computing=> ");
                            scanf("%s",s[46].g);
                            z[46]=q[46]*grade(s[46].g);
                            printf("15CS66C-C# and .Net Technologies Laboratory=> ");
                            scanf("%s",s[47].g);
                            z[47]=q[47]*grade(s[47].g);
                            printf("15CS67C-Comprehension=> ");
                            scanf("%s",s[48].g);
                            z[48]=q[48]*grade(s[48].g);
                            printf("15CS68C-Product Development Laboratory=> ");
                            scanf("%s",s[49].g);
                            z[49]=q[49]*grade(s[49].g);
                            if(n[1]==2){for(j=42;j<=49;j++){if(z[j]>=0){m+=z[j];}}d[c]=m;
                            for(l=42;l<=49;l++){if(z[l]>=0){r+=q[l];}}e[c]=r;break;}
                            else if(h==6){for(j=0;j<=49;j++){if(z[j]>=0){m+=z[j];}}d[c]=m;
                            for(l=0;l<=49;l++){if(z[l]>=0){r+=q[l];}}e[c]=r;break;}
                        }
                        case 7:
                        {
                            q[50]=1,q[51]=4;
                            printf("15CS71C-Research Paper and Patent Review,Seminar=> ");
                            scanf("%s",s[50].g);
                            z[50]=q[50]*grade(s[50].g);
                            printf("15CS72C-Mini Project=> ");
                            scanf("%s",s[51].g);
                            z[51]=q[51]*grade(s[51].g);
                            if(n[1]==2){for(j=50;j<=51;j++){if(z[j]>=0){m+=z[j];}}d[c]=m;
                            for(l=50;l<=51;l++){if(z[l]>=0){r+=q[l];}}e[c]=r;break;}
                            else if(h==7){for(j=0;j<=51;j++){if(z[j]>=0){m+=z[j];}}d[c]=m;
                            for(l=0;l<=51;l++){if(z[l]>=0){r+=q[l];}}e[c]=r;break;}
                        }
                        case 8:
                        {
                            q[52]=10,q[53]=2;
                            printf("15CS81C-Project Work=> ");
                            scanf("%s",s[52].g);
                            z[52]=q[52]*grade(s[52].g);
                            printf("15CS82C-Internship/Inplant Training=> ");
                            scanf("%s",s[53].g);
                            z[53]=q[53]*grade(s[53].g);
                            if(n[1]==2){for(j=52;j<=53;j++){if(z[j]>=0){m+=z[j];}}d[c]=m;
                            for(l=52;l<=53;l++){if(z[l]>=0){r+=q[l];}}e[c]=r;break;}
                            else if(h==8){for(j=0;j<=53;j++){if(z[j]>=0){m+=z[j];}}d[c]=m;
                            for(l=0;l<=53;l++){if(z[l]>=0){r+=q[l];}}e[c]=r;break;}
                        }}}}}break;}
    case 5:{switch (n[1]){case 1:{printf("How many semester you are completed...\n");scanf("%d",&h);}
                case 2:{if(n[1]==2){printf("Which Semester\n");scanf("%d",&c);}else{c=1;}
{switch (c){case 1:{q[0]=3,q[1]=4,q[2]=3,q[3]=3,q[4]=2,q[5]=3,q[6]=1,q[7]=1;
                        printf("15SH11C-Technical English=> ");
                        scanf("%s",s[0].g);
                        z[0]=q[0]*grade(s[0].g);
                        printf("15SH12C-Mathematical Foundations for Engineers=> ");
                        scanf("%s",s[1].g);
                        z[1]=q[1]*grade(s[1].g);
                        printf("15SH13C-Engineering Physics=> ");
                        scanf("%s",s[2].g);
                        z[2]=q[2]*grade(s[2].g);
                        printf("15SH14C-Engineering Chemistry=> ");
                        scanf("%s",s[3].g);
                        z[3]=q[3]*grade(s[3].g);
                        printf("15SH15C-Introduction to Engineering=> ");
                        scanf("%s",s[4].g);
                        z[4]=q[4]*grade(s[4].g);
                        printf("15SH16C-Engineering Graphics=> ");
                        scanf("%s",s[5].g);
                        z[5]=q[5]*grade(s[5].g);
                        printf("15SH17C-Engineering Physics and Engineering Chemistry Laboratory=> ");
                        scanf("%s",s[6].g);
                        z[6]=q[6]*grade(s[6].g);
                        printf("15SH18C-Engineering Practice Laboratory=> ");
                        scanf("%s",s[7].g);
                        z[7]=q[7]*grade(s[7].g);
                        if(n[1]==2){for(j=0;j<=7;j++){if(z[j]>=0){m+=z[j];}}d[c]=m;
                            for(l=0;l<=7;l++){if(z[l]>=0){r+=q[l];}}e[c]=r;break;}
                        else if(h==1){for(j=0;j<=7;j++){if(z[j]>=0){m+=z[j];}}d[c]=m;
                            for(l=0;l<=7;l++){if(z[l]>=0){r+=q[l];}}e[c]=r;break;}
                        }
    case 2:
                        {
                            q[8]=3,q[9]=4,q[10]=3,q[11]=4,q[12]=3,q[13]=3,q[14]=1,q[15]=1,q[16]=1;
                            printf("15IT21C-Professional English=> ");
                            scanf("%s",s[8].g);
                            z[8]=q[8]*grade(s[8].g);
                            printf("15IT22C-Probability and Statistics=> ");
                            scanf("%s",s[9].g);
                            z[9]=q[9]*grade(s[9].g);
                            printf("15IT23C-Physics of Solid State Devices=> ");
                            scanf("%s",s[10].g);
                            z[10]=q[10]*grade(s[10].g);
                            printf("15IT24C-Digital Systems=> ");
                            scanf("%s",s[11].g);
                            z[11]=q[11]*grade(s[11].g);
                            printf("15IT25C-C Programming for Engineers=> ");
                            scanf("%s",s[12].g);
                            z[12]=q[12]*grade(s[12].g);
                            printf("15IT26C-Environmental Science and Engineering=> ");
                            scanf("%s",s[13].g);
                            z[13]=q[13]*grade(s[13].g);
                            printf("15IT27C-Applied Physics and Environmental Chemistry Laboratory=> ");
                            scanf("%s",s[14].g);
                            z[14]=q[14]*grade(s[14].g);
                            printf("15IT28C-C Programming Laboratory=> ");
                            scanf("%s",s[15].g);
                            z[15]=q[15]*grade(s[15].g);
                            printf("15IT29C-Digital Laboratory=> ");
                            scanf("%s",s[16].g);
                            z[16]=q[16]*grade(s[16].g);
                            if(n[1]==2){for(j=8;j<=16;j++){if(z[j]>=0){m+=z[j];}}d[c]=m;
                            for(l=8;l<=16;l++){if(z[l]>=0){r+=q[l];}}e[c]=r;break;}
                            else if(h==2){for(j=0;j<=16;j++){if(z[j]>=0){m+=z[j];}}d[c]=m;
                            for(l=0;l<=16;l++){if(z[l]>=0){r+=q[l];}}e[c]=r;break;}
                        }
                        case 3:
                        {
                            q[17]=4,q[18]=3,q[19]=3,q[20]=3,q[21]=3,q[22]=3,q[23]=1,q[24]=1,q[25]=1;
                            printf("15IT31C-Discrete Mathematics=> ");
                            scanf("%s",s[17].g);
                            z[17]=q[17]*grade(s[17].g);
                            printf("15IT32C-Data Structures and Algorithms => ");
                            scanf("%s",s[18].g);
                            z[18]=q[18]*grade(s[18].g);
                            printf("15IT33C-Object Oriented Programming=> ");
                            scanf("%s",s[19].g);
                            z[19]=q[19]*grade(s[19].g);
                            printf("15IT34C-Principles of Data Communication => ");
                            scanf("%s",s[20].g);
                            z[20]=q[20]*grade(s[20].g);
                            printf("15IT35C-Computer Architecture => ");
                            scanf("%s",s[21].g);
                            z[21]=q[21]*grade(s[21].g);
                            printf("15IT36C-Professional Ethics and Human Values=> ");
                            scanf("%s",s[22].g);
                            z[22]=q[22]*grade(s[22].g);
                            printf("15IT37C-Object Oriented Programming Laboratory=> ");
                            scanf("%s",s[23].g);
                            z[23]=q[23]*grade(s[23].g);
                            printf("15IT38C-Data Structures Laboratory=> ");
                            scanf("%s",s[24].g);
                            z[24]=q[24]*grade(s[24].g);
                            printf("15IT39C-Communication Skills Laboratory=> ");
                            scanf("%s",s[25].g);
                            z[25]=q[25]*grade(s[25].g);
                            if(n[1]==2){for(j=17;j<=25;j++){if(z[j]>=0){m+=z[j];}}d[c]=m;
                            for(l=17;l<=25;l++){if(z[l]>=0){r+=q[l];}}e[c]=r;break;}
                            else if(h==3){for(j=0;j<=25;j++){if(z[j]>=0){m+=z[j];}}d[c]=m;
                            for(l=0;l<=25;l++){if(z[l]>=0){r+=q[l];}}e[c]=r;break;}
                        }
                        case 4:
                        {
                            q[26]=3,q[27]=3,q[28]=3,q[29]=3,q[30]=3,q[31]=3,q[32]=1,q[33]=1,q[34]=1;
                            printf("15IT41C-Applied Mathematics for Information Technology=> ");
                            scanf("%s",s[26].g);
                            z[26]=q[26]*grade(s[26].g);
                            printf("15IT42C-C# and .Net framework=> ");
                            scanf("%s",s[27].g);
                            z[27]=q[27]*grade(s[27].g);
                            printf("15IT43C-Operating Systems=> ");
                            scanf("%s",s[28].g);
                            z[28]=q[28]*grade(s[28].g);
                            printf("15IT44C-Database Management Systems=> ");
                            scanf("%s",s[29].g);
                            z[29]=q[29]*grade(s[29].g);
                            printf("15IT45C-Software Engineering=> ");
                            scanf("%s",s[30].g);
                            z[30]=q[30]*grade(s[30].g);
                            printf("15IT46C-Green IT=> ");
                            scanf("%s",s[31].g);
                            z[31]=q[31]*grade(s[31].g);
                            printf("15IT47C-Operating Systems Laboratory=> ");
                            scanf("%s",s[32].g);
                            z[32]=q[32]*grade(s[32].g);
                            printf("15IT48C-Database Management Systems Laboratory => ");
                            scanf("%s",s[33].g);
                            z[33]=q[33]*grade(s[33].g);
                            printf("15IT49C-C# and .Net framework Laboratory=> ");
                            scanf("%s",s[34].g);
                            z[34]=q[34]*grade(s[34].g);
                            if(n[1]==2){for(j=26;j<=34;j++){if(z[j]>=0){m+=z[j];}}d[c]=m;
                            for(l=26;l<=34;l++){if(z[l]>=0){r+=q[l];}}e[c]=r;break;}
                            else if(h==4){for(j=0;j<=34;j++){if(z[j]>=0){m+=z[j];}}d[c]=m;
                            for(l=0;l<=34;l++){if(z[l]>=0){r+=q[l];}}e[c]=r;break;}
                        }
                        case 5:
                        {
                            q[35]=3,q[36]=3,q[37]=3,q[38]=3,q[39]=3,q[40]=1,q[41]=1,q[42]=1;
                            printf("15IT51C-Embedded Systems=> ");
                            scanf("%s",s[35].g);
                            z[35]=q[35]*grade(s[35].g);
                            printf("15IT52C-Internet and Web Technology=> ");
                            scanf("%s",s[36].g);
                            z[36]=q[36]*grade(s[36].g);
                            printf("15IT53C-Computer Networks=> ");
                            scanf("%s",s[37].g);
                            z[37]=q[37]*grade(s[37].g);
                            printf("15IT54C-Multimedia Computing=> ");
                            scanf("%s",s[38].g);
                            z[38]=q[38]*grade(s[38].g);
                            printf("15IT55C-Project Management and Finance=> ");
                            scanf("%s",s[39].g);
                            z[39]=q[39]*grade(s[39].g);
                            printf("15IT56C-Internet and Web Technology Laboratory=> ");
                            scanf("%s",s[40].g);
                            z[40]=q[40]*grade(s[40].g);
                            printf("15IT57C-Networking Laboratory=> ");
                            scanf("%s",s[41].g);
                            z[41]=q[41]*grade(s[41].g);
                            printf("15IT58C-Multimedia Laboratory=> ");
                            scanf("%s",s[42].g);
                            z[42]=q[42]*grade(s[42].g);
                            if(n[1]==2){for(j=35;j<=42;j++){if(z[j]>=0){m+=z[j];}}d[c]=m;
                            for(l=35;l<=42;l++){if(z[l]>=0){r+=q[l];}}e[c]=r;break;}
                            else if(h==5){for(j=0;j<=42;j++){if(z[j]>=0){m+=z[j];}}d[c]=m;
                            for(l=0;l<=42;l++){if(z[l]>=0){r+=q[l];}}e[c]=r;break;}
                        }
                        case 6:
                        {
                            q[43]=3,q[44]=3,q[45]=3,q[46]=4,q[47]=4,q[48]=1,q[49]=1,q[50]=2;
                            printf("15IT61C-Software Project Management=> ");
                            scanf("%s",s[43].g);
                            z[43]=q[43]*grade(s[43].g);
                            printf("15IT62C-Enterprise Mobility=> ");
                            scanf("%s",s[44].g);
                            z[44]=q[44]*grade(s[44].g);
                            printf("15IT63C-Data Analytics and Business Intelligence=> ");
                            scanf("%s",s[45].g);
                            z[45]=q[45]*grade(s[45].g);
                            printf("15IT64C-Cryptography and Network Security=> ");
                            scanf("%s",s[46].g);
                            z[46]=q[46]*grade(s[46].g);
                            printf("15IT65C-Cloud Computing=> ");
                            scanf("%s",s[47].g);
                            z[47]=q[47]*grade(s[47].g);
                            printf("15IT66C-Data Analytics Laboratory=> ");
                            scanf("%s",s[48].g);
                            z[48]=q[48]*grade(s[48].g);
                            printf("15IT67C-Mobile Technologies Laboratory=> ");
                            scanf("%s",s[49].g);
                            z[49]=q[49]*grade(s[49].g);
                            printf("15IT68C-Product Development Laboratory=> ");
                            scanf("%s",s[50].g);
                            z[50]=q[50]*grade(s[50].g);
                            if(n[1]==2){for(j=43;j<=50;j++){if(z[j]>=0){m+=z[j];}}d[c]=m;
                            for(l=43;l<=50;l++){if(z[l]>=0){r+=q[l];}}e[c]=r;break;}
                            else if(h==6){for(j=0;j<=50;j++){if(z[j]>=0){m+=z[j];}}d[c]=m;
                            for(l=0;l<=50;l++){if(z[l]>=0){r+=q[l];}}e[c]=r;break;}
                        }
                        case 7:
                        {
                            q[51]=4,q[52]=1,q[53]=1;
                            printf("15IT71C-Mini Project=> ");
                            scanf("%s",s[51].g);
                            z[51]=q[51]*grade(s[51].g);
                            printf("15IT72C-Research Paper and Patent Review,Seminar=> ");
                            scanf("%s",s[52].g);
                            z[52]=q[52]*grade(s[52].g);
                            printf("15IT73C-Comprehension=> ");
                            scanf("%s",s[53].g);
                            z[53]=q[53]*grade(s[53].g);
                            if(n[1]==2){for(j=51;j<=53;j++){if(z[j]>=0){m+=z[j];}}d[c]=m;
                            for(l=51;l<=53;l++){if(z[l]>=0){r+=q[l];}}e[c]=r;break;}
                            else if(h==7){for(j=0;j<=53;j++){if(z[j]>=0){m+=z[j];}}d[c]=m;
                            for(l=0;l<=53;l++){if(z[l]>=0){r+=q[l];}}e[c]=r;break;}
                        }
                        case 8:
                        {
                            q[54]=10,q[55]=2;
                            printf("15IT81C-Project Work=> ");
                            scanf("%s",s[54].g);
                            z[54]=q[54]*grade(s[54].g);
                            printf("15IT82C-Internship/Inplant Training=> ");
                            scanf("%s",s[55].g);
                            z[55]=q[55]*grade(s[55].g);
                            if(n[1]==2){for(j=54;j<=55;j++){if(z[j]>=0){m+=z[j];}}d[c]=m;
                            for(l=54;l<=55;l++){if(z[l]>=0){r+=q[l];}}e[c]=r;break;}
                            else if(h==8){for(j=0;j<=55;j++){if(z[j]>=0){m+=z[j];}}d[c]=m;
                            for(l=0;l<=55;l++){if(z[l]>=0){r+=q[l];}}e[c]=r;break;}
    }}}}}break;}
case 6:{switch (n[1]){case 1:{printf("How many semester you are completed...\n");scanf("%d",&h);}
        case 2:{if(n[1]==2){printf("Which Semester\n");scanf("%d",&c);}else{c=1;}{
        switch (c){case 1:{
                        q[0]=3,q[1]=4,q[2]=3,q[3]=3,q[4]=2,q[5]=3,q[6]=1,q[7]=1;
                        printf("15SH11C-Technical English=> ");
                        scanf("%s",s[0].g);
                        z[0]=q[0]*grade(s[0].g);
                        printf("15SH12C-Mathematical Foundations for Engineers=> ");
                        scanf("%s",s[1].g);
                        z[1]=q[1]*grade(s[1].g);
                        printf("15SH13C-Engineering Physics=> ");
                        scanf("%s",s[2].g);
                        z[2]=q[2]*grade(s[2].g);
                        printf("15SH14C-Engineering Chemistry=> ");
                        scanf("%s",s[3].g);
                        z[3]=q[3]*grade(s[3].g);
                        printf("15SH15C-Introduction to Engineering=> ");
                        scanf("%s",s[4].g);
                        z[4]=q[4]*grade(s[4].g);
                        printf("15SH16C-Engineering Graphics=> ");
                        scanf("%s",s[5].g);
                        z[5]=q[5]*grade(s[5].g);
                        printf("15SH17C-Engineering Physics and Engineering Chemistry Laboratory=> ");
                        scanf("%s",s[6].g);
                        z[6]=q[6]*grade(s[6].g);
                        printf("15SH18C-Engineering Practice Laboratory=> ");
                        scanf("%s",s[7].g);
                        z[7]=q[7]*grade(s[7].g);
                        if(n[1]==2){for(j=0;j<=7;j++){if(z[j]>=0){m+=z[j];}}d[c]=m;
                            for(l=0;l<=7;l++){if(z[l]>=0){r+=q[l];}}e[c]=r;break;}
                        else if(h==1){for(j=0;j<=7;j++){if(z[j]>=0){m+=z[j];}}d[c]=m;
                            for(l=0;l<=7;l++){if(z[l]>=0){r+=q[l];}}e[c]=r;break;}
                        }
                        case 2:
                        {
                            q[8]=3,q[9]=4,q[10]=3,q[11]=3,q[12]=3,q[13]=4,q[14]=2,q[15]=1,q[16]=1;
                            printf("15ME21C-Professional English=> ");
                            scanf("%s",s[8].g);
                            z[8]=q[8]*grade(s[8].g);
                            printf("15ME22C-Computational Methods with Algorithm=> ");
                            scanf("%s",s[9].g);
                            z[9]=q[9]*grade(s[9].g);
                            printf("15ME23C-Engineering Materials Science=> ");
                            scanf("%s",s[10].g);
                            z[10]=q[10]*grade(s[10].g);
                            printf("15ME24C-Chemistry for Mechanical Engineering=> ");
                            scanf("%s",s[11].g);
                            z[11]=q[11]*grade(s[11].g);
                            printf("15ME25C-C Programming for Engineers=> ");
                            scanf("%s",s[12].g);
                            z[12]=q[12]*grade(s[12].g);
                            printf("15ME26C-Mechanics of Rigid Body=> ");
                            scanf("%s",s[13].g);
                            z[13]=q[13]*grade(s[13].g);
                            printf("15ME27C-Introduction to Mechanical Engineering and Design=> ");
                            scanf("%s",s[14].g);
                            z[14]=q[14]*grade(s[14].g);
                            printf("15ME28C-C Programming Laboratory=> ");
                            scanf("%s",s[15].g);
                            z[15]=q[15]*grade(s[15].g);
                            printf("15ME29C-Physics and Chemistry Laboratory=> ");
                            scanf("%s",s[16].g);
                            z[16]=q[16]*grade(s[16].g);
                            if(n[1]==2){for(j=8;j<=16;j++){if(z[j]>=0){m+=z[j];}}d[c]=m;
                            for(l=8;l<=16;l++){if(z[l]>=0){r+=q[l];}}e[c]=r;break;}
                            else if(h==2){for(j=0;j<=16;j++){if(z[j]>=0){m+=z[j];}}d[c]=m;
                            for(l=0;l<=16;l++){if(z[l]>=0){r+=q[l];}}e[c]=r;break;}
                        }
                        case 3:
                        {
                            q[17]=4,q[18]=3,q[19]=3,q[20]=4,q[21]=3,q[22]=1,q[23]=1,q[24]=1,q[25]=1;
                            printf("15ME31C-Applied Mathematics=> ");
                            scanf("%s",s[17].g);
                            z[17]=q[17]*grade(s[17].g);
                            printf("15ME32C-Basic Electrical Engineering=> ");
                            scanf("%s",s[18].g);
                            z[18]=q[18]*grade(s[18].g);
                            printf("15ME33C-Material Technology=> ");
                            scanf("%s",s[19].g);
                            z[19]=q[19]*grade(s[19].g);
                            printf("15ME34C-Thermal science=> ");
                            scanf("%s",s[20].g);
                            z[20]=q[20]*grade(s[20].g);
                            printf("15ME35C-Manufacturing Technology I => ");
                            scanf("%s",s[21].g);
                            z[21]=q[21]*grade(s[21].g);
                            printf("15ME36C-Manufacturing Technology Laboratory I => ");
                            scanf("%s",s[22].g);
                            z[22]=q[22]*grade(s[22].g);
                            printf("15ME37C-Drafting and Modeling Laboratory=> ");
                            scanf("%s",s[23].g);
                            z[23]=q[23]*grade(s[23].g);
                            printf("15ME38C-Communication Skills Laboratory=> ");
                            scanf("%s",s[24].g);
                            z[24]=q[24]*grade(s[24].g);
                            printf("15ME39C-Electrical Engineering Laboratory=> ");
                            scanf("%s",s[25].g);
                            z[25]=q[25]*grade(s[25].g);
                            if(n[1]==2){for(j=17;j<=25;j++){if(z[j]>=0){m+=z[j];}}d[c]=m;
                            for(l=17;l<=25;l++){if(z[l]>=0){r+=q[l];}}e[c]=r;break;}
                            else if(h==3){for(j=0;j<=25;j++){if(z[j]>=0){m+=z[j];}}d[c]=m;
                            for(l=0;l<=25;l++){if(z[l]>=0){r+=q[l];}}e[c]=r;break;}
                        }
                        case 4:
                        {
                            q[26]=3,q[27]=4,q[28]=4,q[29]=3,q[30]=4,q[31]=3,q[32]=1,q[33]=1,q[34]=1;
                            printf("15ME41C-Fluid Mechanics and Machinery=> ");
                            scanf("%s",s[26].g);
                            z[26]=q[26]*grade(s[26].g);
                            printf("15ME42C-Mechanics of Materials=> ");
                            scanf("%s",s[27].g);
                            z[27]=q[27]*grade(s[27].g);
                            printf("15ME43C-Thermal Engineering=> ");
                            scanf("%s",s[28].g);
                            z[28]=q[28]*grade(s[28].g);
                            printf("15ME44C-Manufacturing Technology II => ");
                            scanf("%s",s[29].g);
                            z[29]=q[29]*grade(s[29].g);
                            printf("15ME45C-Kinematics of Machinery=> ");
                            scanf("%s",s[30].g);
                            z[30]=q[30]*grade(s[30].g);
                            printf("15ME46C-Environmental Science and Engineering => ");
                            scanf("%s",s[31].g);
                            z[31]=q[31]*grade(s[31].g);
                            printf("15ME47C-Fluid Mechanics and Machinery Laboratory=> ");
                            scanf("%s",s[32].g);
                            z[32]=q[32]*grade(s[32].g);
                            printf("15ME48C-Material Testing Laboratory=> ");
                            scanf("%s",s[33].g);
                            z[33]=q[33]*grade(s[33].g);
                            printf("15ME49C-Manufacturing Technology Laboratory II => ");
                            scanf("%s",s[34].g);
                            z[34]=q[34]*grade(s[34].g);
                            if(n[1]==2){for(j=26;j<=34;j++){if(z[j]>=0){m+=z[j];}}d[c]=m;
                            for(l=26;l<=34;l++){if(z[l]>=0){r+=q[l];}}e[c]=r;break;}
                            else if(h==4){for(j=0;j<=34;j++){if(z[j]>=0){m+=z[j];}}d[c]=m;
                            for(l=0;l<=34;l++){if(z[l]>=0){r+=q[l];}}e[c]=r;break;}
                        }
                        case 5:
                        {
                            q[35]=3,q[36]=3,q[37]=4,q[38]=3,q[39]=3,q[40]=3,q[41]=1,q[42]=1,q[43]=1;
                            printf("15ME51C-Heat and Mass Transfer=> ");
                            scanf("%s",s[35].g);
                            z[35]=q[35]*grade(s[35].g);
                            printf("15ME52C-Dynamics of Machinery=> ");
                            scanf("%s",s[36].g);
                            z[36]=q[36]*grade(s[36].g);
                            printf("15ME53C-Design of Machine Elements=> ");
                            scanf("%s",s[37].g);
                            z[37]=q[37]*grade(s[37].g);
                            printf("15ME54C-Computer Aided Design and Manufacturing=> ");
                            scanf("%s",s[38].g);
                            z[38]=q[38]*grade(s[38].g);
                            printf("15ME55C-Instrumentation,Mechanical Measurements and Control=> ");
                            scanf("%s",s[39].g);
                            z[39]=q[39]*grade(s[39].g);
                            printf("15ME56C-Professional Ethics and Human Values=> ");
                            scanf("%s",s[40].g);
                            z[40]=q[40]*grade(s[40].g);
                            printf("15ME57C-Thermal and Heat Transfer Laboratory=> ");
                            scanf("%s",s[41].g);
                            z[41]=q[41]*grade(s[41].g);
                            printf("15ME58C-Dynamics Laboratory=> ");
                            scanf("%s",s[42].g);
                            z[42]=q[42]*grade(s[42].g);
                            printf("15ME59C-Computer Aided Design and Manufacturing Laboratory=> ");
                            scanf("%s",s[43].g);
                            z[43]=q[43]*grade(s[43].g);
                            if(n[1]==2){for(j=35;j<=43;j++){if(z[j]>=0){m+=z[j];}}d[c]=m;
                            for(l=35;l<=43;l++){if(z[l]>=0){r+=q[l];}}e[c]=r;break;}
                            else if(h==5){for(j=0;j<=43;j++){if(z[j]>=0){m+=z[j];}}d[c]=m;
                            for(l=0;l<=43;l++){if(z[l]>=0){r+=q[l];}}e[c]=r;break;}
                        }
                        case 6:
                        {
                            q[44]=3,q[45]=4,q[46]=3,q[47]=3,q[48]=1,q[49]=1,q[50]=1,q[51]=1,q[52]=2;
                            printf("15ME61C-Metrology and Quality Engineering=> ");
                            scanf("%s",s[44].g);
                            z[44]=q[44]*grade(s[44].g);
                            printf("15ME62C-Design of Transmission Systems=> ");
                            scanf("%s",s[45].g);
                            z[45]=q[45]*grade(s[45].g);
                            printf("15ME63C-Finite Element Analysis=> ");
                            scanf("%s",s[46].g);
                            z[46]=q[46]*grade(s[46].g);
                            printf("15ME64C-Project Management and Finance=> ");
                            scanf("%s",s[47].g);
                            z[47]=q[47]*grade(s[47].g);
                            printf("15ME65C-Comprehension=> ");
                            scanf("%s",s[48].g);
                            z[48]=q[48]*grade(s[48].g);
                            printf("15ME66C-Metrology and Automation Laboratory=> ");
                            scanf("%s",s[49].g);
                            z[49]=q[49]*grade(s[49].g);
                            printf("15ME67C-Computer Aided Analysis Laboratory=> ");
                            scanf("%s",s[50].g);
                            z[50]=q[50]*grade(s[50].g);
                            printf("15ME68C-Simulation Laboratory=> ");
                            scanf("%s",s[51].g);
                            z[51]=q[51]*grade(s[51].g);
                            printf("15ME69C-Product Development Laboratory=> ");
                            scanf("%s",s[52].g);
                            z[52]=q[52]*grade(s[52].g);
                            if(n[1]==2){for(j=44;j<=52;j++){if(z[j]>=0){m+=z[j];}}d[c]=m;
                            for(l=44;l<=52;l++){if(z[l]>=0){r+=q[l];}}e[c]=r;break;}
                            else if(h==6){for(j=0;j<=52;j++){if(z[j]>=0){m+=z[j];}}d[c]=m;
                            for(l=0;l<=52;l++){if(z[l]>=0){r+=q[l];}}e[c]=r;break;}
                        }
                        case 7:
                        {
                            q[53]=4,q[54]=1;
                            printf("15ME71C-Mini Project=> ");
                            scanf("%s",s[53].g);
                            z[53]=q[53]*grade(s[53].g);
                            printf("15ME72C-Research Paper and Patent Review,Seminar=> ");
                            scanf("%s",s[54].g);
                            z[54]=q[54]*grade(s[54].g);
                            if(n[1]==2){for(j=53;j<=54;j++){if(z[j]>=0){m+=z[j];}}d[c]=m;
                            for(l=53;l<=54;l++){if(z[l]>=0){r+=q[l];}}e[c]=r;break;}
                            else if(h==7){for(j=0;j<=54;j++){if(z[j]>=0){m+=z[j];}}d[c]=m;
                            for(l=0;l<=54;l++){if(z[l]>=0){r+=q[l];}}e[c]=r;break;}
                        }
                        case 8:
                        {
                            q[55]=2,q[56]=10;
                            printf("15ME81C-Internship/Inplant Training=> ");
                            scanf("%s",s[55].g);
                            z[55]=q[55]*grade(s[55].g);
                            printf("15ME82C-Project Work=> ");
                            scanf("%s",s[56].g);
                            z[56]=q[56]*grade(s[56].g);
                            if(n[1]==2){for(j=55;j<=56;j++){if(z[j]>=0){m+=z[j];}}d[c]=m;
                            for(l=55;l<=56;l++){if(z[l]>=0){r+=q[l];}}e[c]=r;break;}
                            else if(h==8){for(j=0;j<=56;j++){if(z[j]>=0){m+=z[j];}}d[c]=m;
                            for(l=0;l<=56;l++){if(z[l]>=0){r+=q[l];}}e[c]=r;break;}}}}}}break;}
    case 7:{switch (n[1]){case 1:{printf("How many semester you are completed...\n");scanf("%d",&h);}
            case 2:{if(n[1]==2){printf("Which Semester\n");scanf("%d",&c);}else{c=1;}{
            switch (c){case 1:{q[0]=3,q[1]=4,q[2]=3,q[3]=3,q[4]=2,q[5]=3,q[6]=1,q[7]=1;
            printf("15SH11C-Technical English=> ");
                        scanf("%s",s[0].g);
                        z[0]=q[0]*grade(s[0].g);
                        printf("15SH12C-Mathematical Foundations for Engineers=> ");
                        scanf("%s",s[1].g);
                        z[1]=q[1]*grade(s[1].g);
                        printf("15SH13C-Engineering Physics=> ");
                        scanf("%s",s[2].g);
                        z[2]=q[2]*grade(s[2].g);
                        printf("15SH14C-Engineering Chemistry=> ");
                        scanf("%s",s[3].g);
                        z[3]=q[3]*grade(s[3].g);
                        printf("15SH15C-Introduction to Engineering=> ");
                        scanf("%s",s[4].g);
                        z[4]=q[4]*grade(s[4].g);
                        printf("15SH16C-Engineering Graphics=> ");
                        scanf("%s",s[5].g);
                        z[5]=q[5]*grade(s[5].g);
                        printf("15SH17C-Engineering Physics and Engineering Chemistry Laboratory=> ");
                        scanf("%s",s[6].g);
                        z[6]=q[6]*grade(s[6].g);
                        printf("15SH18C-Engineering Practice Laboratory=> ");
                        scanf("%s",s[7].g);
                        z[7]=q[7]*grade(s[7].g);
                        if(n[1]==2){for(j=0;j<=7;j++){if(z[j]>=0){m+=z[j];}}d[c]=m;
                            for(l=0;l<=7;l++){if(z[l]>=0){r+=q[l];}}e[c]=r;break;}
                        else if(h==1){for(j=0;j<=7;j++){if(z[j]>=0){m+=z[j];}}d[c]=m;
                            for(l=0;l<=7;l++){if(z[l]>=0){r+=q[l];}}e[c]=r;break;}
                        }
                        case 2:
                        {
                            q[8]=3,q[9]=4,q[10]=3,q[11]=3,q[12]=3,q[13]=4,q[14]=1,q[15]=1,q[16]=1;
                            printf("15CE21C-Professional English=> ");
                            scanf("%s",s[8].g);
                            z[8]=q[8]*grade(s[8].g);
                            printf("15CE22C-Calculus and Transforms=> ");
                            scanf("%s",s[9].g);
                            z[9]=q[9]*grade(s[9].g);
                            printf("15CE23C-Applied Physics=> ");
                            scanf("%s",s[10].g);
                            z[10]=q[10]*grade(s[10].g);
                            printf("15CE24C-Chemistry for Civil Engineering=> ");
                            scanf("%s",s[11].g);
                            z[11]=q[11]*grade(s[11].g);
                            printf("15CE25C-C Programming for Engineers=> ");
                            scanf("%s",s[12].g);
                            z[12]=q[12]*grade(s[12].g);
                            printf("15CE26C-Engineering Mechanics=> ");
                            scanf("%s",s[13].g);
                            z[13]=q[13]*grade(s[13].g);
                            printf("15CE27C-Physics and Applied Chemistry Laboratory=> ");
                            scanf("%s",s[14].g);
                            z[14]=q[14]*grade(s[14].g);
                            printf("15CE28C-C Programming Laboratory=> ");
                            scanf("%s",s[15].g);
                            z[15]=q[15]*grade(s[15].g);
                            printf("15CE29C-Computer Aided Building drawing Laboratory=> ");
                            scanf("%s",s[16].g);
                            z[16]=q[16]*grade(s[16].g);
                            if(n[1]==2){for(j=8;j<=16;j++){if(z[j]>=0){m+=z[j];}}d[c]=m;
                            for(l=8;l<=16;l++){if(z[l]>=0){r+=q[l];}}e[c]=r;break;}
                            else if(h==2){for(j=0;j<=16;j++){if(z[j]>=0){m+=z[j];}}d[c]=m;
                            for(l=0;l<=16;l++){if(z[l]>=0){r+=q[l];}}e[c]=r;break;}
                        }
                        case 3:
                        {q[17]=4,q[18]=4,q[19]=3,q[20]=3,q[21]=3,q[22]=3,q[23]=1,q[24]=1; printf("15CE31C-Fourier Series,Probability and Statistics=> "); scanf("%s",s[17].g); z[17]=q[17]*grade(s[17].g); printf("15CE32C-Solid Mechanics=> "); scanf("%s",s[18].g); z[18]=q[18]*grade(s[18].g); printf("15CE33C-Fluid Mechanics=> "); scanf("%s",s[19].g); z[19]=q[19]*grade(s[19].g); printf("15CE34C-Engineering Survey I => "); scanf("%s",s[20].g); z[20]=q[20]*grade(s[20].g); printf("15CE35C-Engineering Geology=> "); scanf("%s",s[21].g); z[21]=q[21]*grade(s[21].g); printf("15CE36C-Environmental science and Engineering=> "); scanf("%s",s[22].g); z[22]=q[22]*grade(s[22].g); printf("15CE37C-Strength of Materials Laboratory=> "); scanf("%s",s[23].g); z[23]=q[23]*grade(s[23].g); printf("15CE38C-Engineering Survey Practical I => "); scanf("%s",s[24].g); z[24]=q[24]*grade(s[24].g);
                            if(n[1]==2){for(j=17;j<=24;j++){if(z[j]>=0){m+=z[j];}}d[c]=m;
                            for(l=17;l<=24;l++){if(z[l]>=0){r+=q[l];}}e[c]=r;break;}
                            else if(h==3){for(j=0;j<=24;j++){if(z[j]>=0){m+=z[j];}}d[c]=m;
                            for(l=0;l<=24;l++){if(z[l]>=0){r+=q[l];}}e[c]=r;break;}
                        }
                        case 4:{q[25]=4,q[26]=3,q[27]=3,q[28]=3,q[29]=3,q[30]=3,q[31]=1,q[32]=1,q[33]=1; printf("15CE41C-Strength of Materials=> "); scanf("%s",s[25].g); z[25]=q[25]*grade(s[25].g); printf("15CE42C-Applied Hydraulics and Hydraulic Machines=> "); scanf("%s",s[26].g); z[26]=q[26]*grade(s[26].g); printf("15CE43C-Professional Ethics and Human Values=> "); scanf("%s",s[27].g); z[27]=q[27]*grade(s[27].g); printf("15CE44C-Highway Engineering=> "); scanf("%s",s[28].g); z[28]=q[28]*grade(s[28].g); printf("15CE45C-Engineering Survey II => "); scanf("%s",s[29].g); z[29]=q[29]*grade(s[29].g); printf("15CE46C-Construction Materials,Equipments and Practices=> "); scanf("%s",s[30].g); z[30]=q[30]*grade(s[30].g); printf("15CE47C-Hydraulic Engineering Laboratory=> "); scanf("%s",s[31].g); z[31]=q[31]*grade(s[31].g); printf("15CE48C-Engineering Survey II Laboratory=> "); scanf("%s",s[32].g); z[32]=q[32]*grade(s[32].g); printf("15CE49C-Communication Skils Laboratory=> "); scanf("%s",s[33].g); z[33]=q[33]*grade(s[33].g);
                            if(n[1]==2){for(j=25;j<=33;j++){if(z[j]>=0){m+=z[j];}}d[c]=m;
                            for(l=25;l<=33;l++){if(z[l]>=0){r+=q[l];}}e[c]=r;break;}
                            else if(h==4){for(j=0;j<=33;j++){if(z[j]>=0){m+=z[j];}}d[c]=m;
                            for(l=0;l<=33;l++){if(z[l]>=0){r+=q[l];}}e[c]=r;break;}
                        }
                        case 5:
                        {q[34]=4,q[35]=4,q[36]=4,q[37]=4,q[38]=3,q[39]=1,q[40]=1; printf("15CE51C-Structural Analysis I => "); scanf("%s",s[34].g); z[34]=q[34]*grade(s[34].g); printf("15CE52C-Design of Reinforced Concrete Elements=> "); scanf("%s",s[35].g); z[35]=q[35]*grade(s[35].g); printf("15CE53C-Water Supply Treatment and Management=> "); scanf("%s",s[36].g); z[36]=q[36]*grade(s[36].g); printf("15CE54C-Soil mechanics=> "); scanf("%s",s[37].g); z[37]=q[37]*grade(s[37].g); printf("15CE55C-Project Management and Finance=> "); scanf("%s",s[38].g); z[38]=q[38]*grade(s[38].g); printf("15CE56C-Concrete and Highway Laboratory=> "); scanf("%s",s[39].g); z[39]=q[39]*grade(s[39].g); printf("15CE57C-Soil Mechanics Laboratory=> "); scanf("%s",s[40].g); z[40]=q[40]*grade(s[40].g);
                            if(n[1]==2){for(j=34;j<=40;j++){if(z[j]>=0){m+=z[j];}}d[c]=m;
                            for(l=34;l<=40;l++){if(z[l]>=0){r+=q[l];}}e[c]=r;break;}
                            else if(h==5){for(j=0;j<=40;j++){if(z[j]>=0){m+=z[j];}}d[c]=m;
                            for(l=0;l<=40;l++){if(z[l]>=0){r+=q[l];}}e[c]=r;break;}
                        }
                        case 6:
                        {
                            q[41]=4,q[42]=4,q[43]=4,q[44]=4,q[45]=3,q[46]=1,q[47]=1,q[48]=2; printf("15CE61C-Design of Steel Structures=> "); scanf("%s",s[41].g); z[41]=q[41]*grade(s[41].g); printf("15CE62C-Structural analysis II => "); scanf("%s",s[42].g); z[42]=q[42]*grade(s[42].g); printf("15CE63C-Foundation Engineering=> "); scanf("%s",s[43].g); z[43]=q[43]*grade(s[43].g); printf("15CE64C-Waste Water Treatment and Management=> "); scanf("%s",s[44].g); z[44]=q[44]*grade(s[44].g); printf("15CE65C-Estimation and Quantity Surveying => "); scanf("%s",s[45].g); z[45]=q[45]*grade(s[45].g); printf("15CE66C-Environmental Engineering Laboratory=> "); scanf("%s",s[46].g); z[46]=q[46]*grade(s[46].g); printf("15CE67C-Software Applications Laboratory=> "); scanf("%s",s[47].g); z[47]=q[47]*grade(s[47].g); printf("15CE68C-Product Development Laboratory=> "); scanf("%s",s[48].g); z[48]=q[48]*grade(s[48].g);
                            if(n[1]==2){for(j=41;j<=48;j++){if(z[j]>=0){m+=z[j];}}d[c]=m;
                            for(l=41;l<=48;l++){if(z[l]>=0){r+=q[l];}}e[c]=r;break;}
                            else if(h==6){for(j=0;j<=48;j++){if(z[j]>=0){m+=z[j];}}d[c]=m;
                            for(l=0;l<=48;l++){if(z[l]>=0){r+=q[l];}}e[c]=r;break;}
                        }
                        case 7:
                        {
                            q[49]=3,q[50]=4,q[51]=1,q[52]=1; printf("15CE71C-Construction Project Management=> "); scanf("%s",s[49].g); z[49]=q[49]*grade(s[49].g); printf("15CE72C-Mini Project=> "); scanf("%s",s[50].g); z[50]=q[50]*grade(s[50].g); printf("15CE73C-Research Paper and Patent Review,Seminar => "); scanf("%s",s[51].g); z[51]=q[51]*grade(s[51].g); printf("15CE74C-Comprehension=> "); scanf("%s",s[52].g); z[52]=q[52]*grade(s[52].g);
                            if(n[1]==2){for(j=49;j<=52;j++){if(z[j]>=0){m+=z[j];}}d[c]=m;
                            for(l=49;l<=52;l++){if(z[l]>=0){r+=q[l];}}e[c]=r;break;}
                            else if(h==7){for(j=0;j<=52;j++){if(z[j]>=0){m+=z[j];}}d[c]=m;
                            for(l=0;l<=52;l++){if(z[l]>=0){r+=q[l];}}e[c]=r;break;}
                        }
                        case 8:{q[53]=10,q[54]=2;printf("15CE81C-Project Work=> ");scanf("%s",s[53].g);z[53]=q[53]*grade(s[53].g);
                            printf("15CE82C-Internship/In plant Training => ");scanf("%s",s[54].g);z[54]=q[54]*grade(s[54].g);
                            if(n[1]==2){for(j=53;j<=54;j++){if(z[j]>=0){m+=z[j];}}d[c]=m;
                            for(l=53;l<=54;l++){if(z[l]>=0){r+=q[l];}}e[c]=r;break;}
                            else if(h==8){for(j=0;j<=54;j++){if(z[j]>=0){m+=z[j];}}d[c]=m;
                            for(l=0;l<=54;l++){if(z[l]>=0){r+=q[l];}}e[c]=r;break;}}}}}}break;}
}
    printf("Do you have any additional course [or] elective course(Y/N)\n");
    scanf("%s",addc);
    if(addc[0]=='Y' || addc[0]=='y'){printf("How many additional course(or)elective course are found\n");scanf("%d",&a[0]);add(a[0],b);f[0]=e[c]+b[1];printf("<====   %.4f   ====>",(d[c]+b[0])/(float)f[0]);}else
                        {printf("<====   %.4f   ====>",(d[c])/(float)e[c]);}}
void add(int n,int z[]){struct pt{char sub[1000];int cre;char gra[100];}s[100];
    int gp[100],i,Tc=0,Tgp=0;
    printf("plz type this format=> subject name'space'credit'space'grade\n");
    printf("If you don't know credit for your subject use this link=> https://nec.edu.in/r-2015-ug-courses/ \n");
    printf("Note:plz type subject name without space\n\n");
    for(i=0;i<n;i++){scanf("%s",s[i].sub);scanf("%d",&s[i].cre);scanf("%s",s[i].gra);gp[i]=s[i].cre*grade(s[i].gra);}
    for(i=0;i<n;i++){Tc+=s[i].cre;Tgp+=gp[i];}z[0]=Tgp;z[1]=Tc;}
int grade(char x[]){int k;
    if(x[0]=='A' || x[0]=='a') if(x[1]=='+') k=9; else k=8;
    else if(x[0]=='B' || x[0]=='b') if(x[1]=='+') k=7; else k=6;
    else if(x[0]=='O' || x[0]=='o' || x[0]=='-') if(x[0]=='-') k=-1; else k=10;
    else if(x[0]=='R' || x[0]=='r') if(x[1]=='A' || x[1]=='a') k=0;
    return k;}
