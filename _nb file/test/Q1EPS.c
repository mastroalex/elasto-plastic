/*************************************************************
* AceGen    7.303 MacOSX (3 Aug 21)                          *
*           Co. J. Korelc  2020           24 Dec 21 12:38:43 *
**************************************************************
User     : Full professional version
Notebook : EP_ACM_2021
Evaluation time                 : 10 s    Mode  : Optimal
Number of formulae              : 431     Method: Automatic
Subroutine                      : SKR size: 3340
Subroutine                      : SPP size: 2548
Total size of Mathematica  code : 5888 subexpressions
Total size of C code            : 16719 bytes */
#include "sms.h"

void SKR(double v[1009],ElementSpec *es,ElementData *ed,NodeSpec **ns,NodeData **nd,double *rdata,int *idata,double *p,double **s);
void SPP(double v[1009],ElementSpec *es,ElementData *ed,NodeSpec **ns,NodeData **nd,double *rdata,int *idata,double **gpost,double **npost);

int MMAInitialisationCode[]={
0,24,123,72,111,108,100,91,78,117,108,108,93,44,32,72,111,108,100,91,78,117,108,108,93,125
};



DLLEXPORT int SMTSetElSpec(ElementSpec *es,int *idata,int ic,int ng)
{ int intc,nd,i;FILE *SMSFile;
  static int pn[11]={1, 2, 3, 4, 0, 1, 2, 3, 4, -1, 0};
  static int dof[4]={2, 2, 2, 2};
  static int nsto[4]={0, 0, 0, 0};

  static int ndat[4]={0, 0, 0, 0};

  static int esdat[1]={0};

  static char *nid[]={"D","D","D","D"};
  static char *gdcs[]={"E -Young","$[Nu]$ -Poisson","$[Sigma]$YO -yield","H -Hardening"};
  static double defd[]={100e0,0.49e0,1e0,10e0,0e0};
  static char *gpcs[]={"$[Epsilon]$xx","$[Epsilon]$xy","$[Epsilon]$yy","$[Epsilon]$exx","$[Epsilon]$exy","$[Epsilon]$eyy",
                       "$[Epsilon]$pxx","$[Epsilon]$pxy","$[Epsilon]$pyy","$[Sigma]$xx","$[Sigma]$xy","$[Sigma]$yy",
                       "$[Sigma]$VM","$[Alpha]$","$[Lambda]$","$[CapitalPsi]$e"};
  static char *npcs[]={"DeformedMeshX","DeformedMeshY","u","v"};
  static char *sname[]={""};
  static char *idname[]={""};
  static int idindex[1];
  static char *rdname[]={""};
  static char *cswitch[]={""};
  static int iswitch[1]={0};
  static double dswitch[1]={0e0};
  static int rdindex[1];
  static int nspecs[4];
  static double version[3]={7.303,7.303,12.3};
  static double pnweights[4]={1e0,1e0,1e0,1e0};
  static double rnodes[12]={-1e0,-1e0,0e0,1e0,-1e0,0e0,
  1e0,1e0,0e0,-1e0,1e0,0e0};
  es->ReferenceNodes=rnodes;
  if(ng==-1) es->Data=defd;
  es->id.NoDomainData=4;
  es->Code="Q1EPS";es->Version=version;
  es->MainTitle="";
  es->SubTitle="";
  es->SubSubTitle="";
  es->Bibliography="";
  es->id.NoDimensions=2;es->id.NoDOFGlobal=8;es->id.NoDOFCondense=0;es->id.NoNodes=4;
  es->id.NoSegmentPoints=10;es->Segments=pn;es->PostNodeWeights=pnweights;
  es->id.NoIntSwitch=0;es->IntSwitch=iswitch;es->id.LocalReKe=0;
  es->id.NoDoubleSwitch=0;es->DoubleSwitch=dswitch;
  es->id.NoCharSwitch=0;es->id.WorkingVectorSize=1009;es->CharSwitch=cswitch;
  es->DOFGlobal=dof;es->NodeID=nid;es->id.NoGPostData=16;es->id.NoNPostData=4;
  es->id.SymmetricTangent=1;es->id.PostIterationCall=1;es->id.DOFScaling=0;
  es->Topology="Q1";es->DomainDataNames=gdcs;es->GPostNames=gpcs;es->NPostNames=npcs;
  es->AdditionalNodes="{} & ";
  es->AdditionalGraphics="{Null,Null,Null}";
  es->MMAInitialisation=MMAInitialisationCode;
  es->MMANextStep="";
  es->MMAStepBack="";
  es->MMAPreIteration="";
  es->IDataNames=idname;es->IDataIndex=idindex;es->RDataNames=rdname;es->RDataIndex=rdindex;
  es->id.NoIData=0;es->id.NoRData=0;
  es->id.ShapeSensitivity=0; es->id.EBCSensitivity=0;es->id.SensitivityOrder=0;
  es->id.NoSensNames=0;es->SensitivityNames=sname;es->NodeSpecs=nspecs;
  es->user.SPP=SPP;es->user.SKR=SKR;

  es->id.DefaultIntegrationCode=2;
  if(ic==-1){intc=2;} else {intc=ic;};
  es->id.IntCode=intc;
  SMTMultiIntPoints(&intc,idata,&es->id.NoIntPoints,
      &es->id.NoIntPointsA,&es->id.NoIntPointsB,&es->id.NoIntPointsC,0);
  es->id.NoAdditionalData=(int)(0);
  es->id.NoTimeStorage=(int)((int)(6*es->id.NoIntPoints));
  es->id.NoElementData=(int)(0);


  es->NoNodeStorage=nsto;es->NoNodeData=ndat;
  
  es->ExtraSensitivityData=esdat;
  if(1){
   return 0;
  }else{
   return 1;
  };
};


/******************* S U B R O U T I N E *********************/
void SKR(double v[1009],ElementSpec *es,ElementData *ed,NodeSpec **ns
     ,NodeData **nd,double *rdata,int *idata,double *p,double **s)
{
int i1,i2,i8,i76,i78,i118,i119,i120,i121,i122,i123,i130,i297,i311,b111,b112
     ,b220,b287,b308,b325;
i78=idata[ID_Iteration];
v[77]=rdata[RD_SubIterationTolerance];
v[27]=nd[3]->at[1];
v[26]=nd[3]->at[0];
v[25]=nd[2]->at[1];
v[24]=nd[2]->at[0];
v[23]=nd[1]->at[1];
v[22]=nd[1]->at[0];
v[21]=nd[0]->at[1];
v[20]=nd[0]->at[0];
v[19]=nd[3]->X[1];
v[18]=nd[3]->X[0];
v[17]=nd[2]->X[1];
v[680]=v[17]-v[19];
v[16]=nd[2]->X[0];
v[682]=v[16]-v[18];
v[15]=nd[1]->X[1];
v[676]=v[15]-v[17];
v[14]=nd[1]->X[0];
v[678]=v[14]-v[16];
v[13]=nd[0]->X[1];
v[679]=v[13]-v[15];
v[675]=v[13]-v[19];
v[12]=nd[0]->X[0];
v[681]=v[12]-v[14];
v[677]=v[12]-v[18];
v[6]=es->Data[3];
v[5]=es->Data[2];
v[4]=es->Data[1];
v[97]=es->Data[0]/(2e0*(1e0+v[4]));
v[683]=(v[97]*v[97]);
v[656]=2e0*v[97];
v[95]=(v[4]*v[656])/(1e0-2e0*v[4]);
i1=es->id.NoIntPoints;
for(i2=1;i2<=i1;i2++){
 i8=4*(-1+i2);
 v[7]=es->IntPoints[i8];
 v[39]=(-1e0+v[7])/4e0;
 v[40]=(-1e0-v[7])/4e0;
 v[45]=v[39]*v[675]+v[40]*v[676];
 v[43]=v[39]*v[677]+v[40]*v[678];
 v[9]=es->IntPoints[1+i8];
 v[41]=(1e0+v[9])/4e0;
 v[38]=(-1e0+v[9])/4e0;
 v[44]=v[38]*v[679]+v[41]*v[680];
 v[42]=v[38]*v[681]+v[41]*v[682];
 v[46]=-(v[43]*v[44])+v[42]*v[45];
 v[673]=es->IntPoints[3+i8]*v[46];
 v[49]=-(v[45]/v[46]);
 v[63]=-(v[41]*v[49]);
 v[55]=-(v[38]*v[49]);
 v[50]=v[43]/v[46];
 v[66]=-(v[41]*v[50]);
 v[57]=-(v[38]*v[50]);
 v[51]=-(v[44]/v[46]);
 v[64]=v[39]*v[51];
 v[59]=v[40]*v[51];
 v[52]=v[42]/v[46];
 v[67]=v[39]*v[52];
 v[61]=v[40]*v[52];
 v[53]=v[55]+v[64];
 v[54]=v[57]+v[67];
 v[56]=-v[55]+v[59];
 v[58]=-v[57]+v[61];
 v[60]=-v[59]+v[63];
 v[62]=-v[61]+v[66];
 v[65]=-v[63]-v[64];
 v[886]=v[53];
 v[887]=0e0;
 v[888]=v[56];
 v[889]=0e0;
 v[890]=v[60];
 v[891]=0e0;
 v[892]=v[65];
 v[893]=0e0;
 v[68]=-v[66]-v[67];
 v[894]=0e0;
 v[895]=v[54];
 v[896]=0e0;
 v[897]=v[58];
 v[898]=0e0;
 v[899]=v[62];
 v[900]=0e0;
 v[901]=v[68];
 v[866]=v[54];
 v[867]=v[53];
 v[868]=v[58];
 v[869]=v[56];
 v[870]=v[62];
 v[871]=v[60];
 v[872]=v[68];
 v[873]=v[65];
 v[73]=v[20]*v[53]+v[22]*v[56]+v[24]*v[60]+v[26]*v[65];
 v[74]=(v[21]*v[53]+v[20]*v[54]+v[23]*v[56]+v[22]*v[58]+v[25]*v[60]+v[24]*v[62]+v[27]*v[65]
  +v[26]*v[68])/2e0;
 v[75]=v[21]*v[54]+v[23]*v[58]+v[25]*v[62]+v[27]*v[68];
 i76=6*(-1+i2);
 i123=6+i76;
 i122=5+i76;
 i121=4+i76;
 i120=3+i76;
 i119=2+i76;
 i118=1+i76;
 v[84]=ed->hp[i118-1];
 v[85]=ed->hp[i119-1];
 v[86]=ed->hp[i120-1];
 v[87]=ed->hp[i121-1];
 v[88]=ed->hp[i122-1];
 v[92]=v[73]-v[84];
 v[94]=v[75]-v[85];
 v[102]=(v[92]+v[94])*v[95];
 v[104]=v[102]+v[656]*v[92];
 v[106]=v[102]+v[656]*v[94];
 v[109]=(-v[104]-v[106])/3e0;
 b111=(i78==1 && ed->hp[i123-1]==0e0) || (i78>1 && (-v[5]-v[6]*v[87]+sqrt(0.15e1*(Power(v[104]
  +v[109],2)+Power(v[106]+v[109],2)+8e0*v[683]*Power(v[74]-v[86],2))))<v[77]);
 if(b111){
  v[113]=v[84];
  v[114]=v[85];
  v[115]=v[86];
  v[116]=v[87];
  v[117]=v[88];
  ed->ht[i118-1]=v[113];
  ed->ht[i119-1]=v[114];
  ed->ht[i120-1]=v[115];
  ed->ht[i121-1]=v[116];
  ed->ht[i122-1]=v[117];
  ed->ht[i123-1]=0e0;
 } else {
  v[163]=-v[656]-v[95];
  v[165]=(-v[163]+v[95])/3e0;
  v[167]=v[163]+v[165];
  v[166]=v[165]-v[95];
  v[223]=(2e0/3e0)*(2e0*v[166]-v[167]);
  v[222]=(-2e0/3e0)*(v[166]-2e0*v[167]);
  v[125]=v[84];
  v[126]=v[85];
  v[127]=v[86];
  v[128]=v[87];
  v[129]=v[88];
  for(i130=1;i130<=30;i130++){
   v[158]=v[129]-v[88];
   v[671]=v[158]/2e0;
   v[132]=-v[125]+v[73];
   v[134]=-v[126]+v[75];
   v[141]=(v[132]+v[134])*v[95];
   v[143]=v[141]+v[132]*v[656];
   v[144]=v[656]*(-v[127]+v[74]);
   v[665]=0.15e1*v[144];
   v[672]=2e0*(v[144]*v[144]);
   v[145]=v[141]+v[134]*v[656];
   v[148]=(-v[143]-v[145])/3e0;
   v[152]=v[145]+v[148];
   v[151]=v[143]+v[148];
   v[231]=2e0*(v[151]*v[166]+v[152]*v[167]);
   v[225]=2e0*(v[152]*v[166]+v[151]*v[167]);
   v[224]=(v[151]*v[151])+(v[152]*v[152])+v[672];
   v[659]=sqrt(0.15e1*v[224]);
   v[660]=3e0/v[659];
   v[185]=(2e0/3e0)*(2e0*v[151]-v[152]);
   v[661]=0.75e0*v[185];
   v[177]=(-2e0/3e0)*(v[151]-2e0*v[152]);
   v[662]=0.75e0*v[177];
   v[171]=v[144]*v[660];
   v[172]=-(v[171]*v[656]);
   v[658]=0.75e0/v[659];
   v[170]=v[231]*v[658];
   v[169]=v[225]*v[658];
   v[174]=1e0/(v[659]*v[659]);
   v[176]=-(v[172]*v[174]);
   v[663]=-(v[158]*v[176]);
   v[192]=v[661]*v[663];
   v[175]=-(v[170]*v[174]);
   v[173]=-(v[169]*v[174]);
   v[227]=-(v[656]*v[660]);
   v[187]=v[223]*v[658];
   v[191]=-(v[158]*(v[187]+v[175]*v[661]));
   v[184]=v[222]*v[658];
   v[190]=1e0-v[158]*(v[184]+v[173]*v[661]);
   v[664]=-(v[158]/v[190]);
   v[156]=v[177]*v[658];
   v[199]=-0.5e0*v[171];
   v[669]=-(v[158]*v[199]);
   v[153]=v[661]/v[659];
   v[157]=v[125]-v[153]*v[158]-v[84];
   v[161]=v[128]-v[129]-v[87]+v[88];
   v[200]=(v[187]+v[173]*v[662])*v[664];
   v[201]=1e0-v[191]*v[200]-v[158]*(v[184]+v[175]*v[662]);
   v[202]=-(v[192]*v[200])+v[662]*v[663];
   v[203]=-v[156]+v[153]*v[200];
   v[204]=v[173]*v[664]*v[665];
   v[205]=v[169]/v[190];
   v[206]=-v[126]+v[156]*v[158]+v[157]*v[200]+v[85];
   v[207]=-((v[191]*v[204]+v[158]*v[175]*v[665])/v[201]);
   v[208]=1e0-v[192]*v[204]-v[202]*v[207]+(-3e0*v[144]*v[176]-v[227])*v[671];
   v[209]=v[199]+v[153]*v[204]-v[203]*v[207];
   v[210]=(v[170]-v[191]*v[205])/v[201];
   v[211]=-v[127]+v[157]*v[204]-v[206]*v[207]+v[669]+v[86];
   v[212]=(v[172]-v[192]*v[205]-v[202]*v[210])/v[208];
   v[213]=v[153]*v[205]-v[203]*v[210]-v[209]*v[212]-v[6];
   v[214]=(v[157]*v[205]-v[206]*v[210]-v[211]*v[212]+v[5]+(v[128]-v[161])*v[6]-v[659])/v[213];
   v[215]=-v[161]+v[214];
   v[216]=(v[211]-v[209]*v[214])/v[208];
   v[217]=(v[206]-v[203]*v[214]-v[202]*v[216])/v[201];
   v[218]=-((v[157]-v[153]*v[214]+v[192]*v[216]+v[191]*v[217])/v[190]);
   v[125]=v[125]+v[218];
   v[126]=v[126]+v[217];
   v[127]=v[127]+v[216];
   v[128]=v[128]+v[215];
   v[129]=v[129]+v[214];
   if(sqrt((v[214]*v[214])+(v[215]*v[215])+(v[216]*v[216])+(v[217]*v[217])+(v[218]*v[218]))<v[77]){
    v[668]=1e0/(2e0*v[224]);
    v[667]=-3e0*v[185];
    v[666]=v[158]/4e0;
    v[235]=v[668]/v[659];
    ed->ht[i118-1]=v[125];
    ed->ht[i119-1]=v[126];
    ed->ht[i120-1]=v[127];
    ed->ht[i121-1]=v[128];
    ed->ht[i122-1]=v[129];
    ed->ht[i123-1]=1e0;
    v[233]=v[225]*v[235];
    v[670]=((2e0/3e0)*v[144]*v[158]*v[227])/v[224];
    v[236]=v[231]*v[235];
    v[243]=v[666]*(4e0*v[184]+v[233]*v[667]);
    v[244]=-(v[661]*v[670]);
    v[245]=v[666]*(4e0*v[187]+v[236]*v[667]);
    v[252]=v[200]*v[243]+v[158]*(-v[187]+v[233]*v[662]);
    v[253]=v[204]*v[243]-v[207]*v[252]+v[225]*v[668]*v[669];
    v[254]=(v[169]+v[205]*v[243]-v[210]*v[252]-v[212]*v[253])/v[213];
    v[255]=(v[253]-v[209]*v[254])/v[208];
    v[256]=(v[252]-v[203]*v[254]-v[202]*v[255])/v[201];
    v[258]=v[200]*v[244]+v[662]*v[670];
    v[259]=v[204]*v[244]-v[207]*v[258]+v[227]*v[671]*(-1e0+v[672]/v[224]);
    v[260]=(v[172]+v[205]*v[244]-v[210]*v[258]-v[212]*v[259])/v[213];
    v[261]=(v[259]-v[209]*v[260])/v[208];
    v[262]=(v[258]-v[203]*v[260]-v[202]*v[261])/v[201];
    v[264]=v[200]*v[245]+v[158]*(-v[184]+v[236]*v[662]);
    v[265]=v[204]*v[245]-v[207]*v[264]-(v[199]*v[231]*v[671])/v[224];
    v[266]=(v[170]+v[205]*v[245]-v[210]*v[264]-v[212]*v[265])/v[213];
    v[267]=(v[265]-v[209]*v[266])/v[208];
    v[268]=(v[264]-v[203]*v[266]-v[202]*v[267])/v[201];
    v[270]=-((v[243]-v[153]*v[254]+v[192]*v[255]+v[191]*v[256])/v[190]);
    v[271]=-((v[244]-v[153]*v[260]+v[192]*v[261]+v[191]*v[262])/v[190]);
    v[272]=-((v[245]-v[153]*v[266]+v[192]*v[267]+v[191]*v[268])/v[190]);
    v[273]=v[256];
    v[274]=v[262];
    v[275]=v[268];
    v[276]=v[255];
    v[277]=v[261];
    v[278]=v[267];
    break;
   } else {
   };
   if(i130==29){
    idata[ID_SubDivergence]=1e0;
    idata[ID_ErrorStatus]=2e0;
    break;
   } else {
   };
  };/* end for */
  v[113]=v[125];
  v[114]=v[126];
  v[115]=v[127];
  v[116]=v[128];
  v[117]=v[129];
 };
 v[291]=-v[113]+v[73];
 v[293]=-v[114]+v[75];
 v[302]=(v[291]+v[293])*v[95];
 v[300]=v[302]+v[293]*v[656];
 v[301]=4e0*(-v[115]+v[74])*v[97];
 v[303]=v[302]+v[291]*v[656];
 v[858]=v[303]*v[53];
 v[859]=v[300]*v[54];
 v[860]=v[303]*v[56];
 v[861]=v[300]*v[58];
 v[862]=v[303]*v[60];
 v[863]=v[300]*v[62];
 v[864]=v[303]*v[65];
 v[865]=v[300]*v[68];
 b308=b111;
 for(i297=1;i297<=8;i297++){
  v[316]=v[865+i297];
  v[314]=v[673]*v[885+i297];
  v[315]=v[673]*v[893+i297];
  v[317]=v[316]*v[656]*v[673];
  v[320]=(v[314]+v[315])*v[95];
  v[319]=v[320]+v[315]*v[656];
  v[321]=v[320]+v[314]*v[656];
  v[322]=v[319];
  v[323]=v[317];
  v[324]=v[321];
  b325=b111;
  if(b325){
  } else {
   v[322]=-(v[278]*v[317])-v[275]*v[319]-v[272]*v[321]+v[322];
   v[323]=-(v[277]*v[317])-v[274]*v[319]-v[271]*v[321]+v[323];
   v[324]=-(v[276]*v[317])-v[273]*v[319]-v[270]*v[321]+v[324];
  };
  v[674]=v[323]/2e0;
  v[902]=v[324]*v[53]+v[54]*v[674];
  v[903]=v[322]*v[54]+v[53]*v[674];
  v[904]=v[324]*v[56]+v[58]*v[674];
  v[905]=v[322]*v[58]+v[56]*v[674];
  v[906]=v[324]*v[60]+v[62]*v[674];
  v[907]=v[322]*v[62]+v[60]*v[674];
  v[908]=v[324]*v[65]+v[674]*v[68];
  v[909]=v[65]*v[674]+v[322]*v[68];
  p[i297-1]+=v[673]*((v[301]*v[316])/2e0+v[857+i297]);
  for(i311=i297;i311<=8;i311++){
   s[i297-1][i311-1]+=v[901+i311];
  };/* end for */
 };/* end for */
};/* end for */
};

/******************* S U B R O U T I N E *********************/
void SPP(double v[1009],ElementSpec *es,ElementData *ed,NodeSpec **ns
     ,NodeData **nd,double *rdata,int *idata,double **gpost,double **npost)
{
int i345,i346,i352,i420,i422,i462,i463,i464,i465,i466,i467,i474,b456,b564,b631;
i422=idata[ID_Iteration];
v[421]=rdata[RD_SubIterationTolerance];
v[371]=nd[3]->at[1];
v[370]=nd[3]->at[0];
v[369]=nd[2]->at[1];
v[368]=nd[2]->at[0];
v[367]=nd[1]->at[1];
v[366]=nd[1]->at[0];
v[365]=nd[0]->at[1];
v[364]=nd[0]->at[0];
v[363]=nd[3]->X[1];
v[362]=nd[3]->X[0];
v[361]=nd[2]->X[1];
v[704]=v[361]-v[363];
v[360]=nd[2]->X[0];
v[706]=v[360]-v[362];
v[359]=nd[1]->X[1];
v[700]=v[359]-v[361];
v[358]=nd[1]->X[0];
v[702]=v[358]-v[360];
v[357]=nd[0]->X[1];
v[703]=v[357]-v[359];
v[699]=v[357]-v[363];
v[356]=nd[0]->X[0];
v[705]=v[356]-v[358];
v[701]=v[356]-v[362];
v[350]=es->Data[3];
v[349]=es->Data[2];
v[348]=es->Data[1];
v[441]=es->Data[0]/(2e0*(1e0+v[348]));
v[707]=(v[441]*v[441]);
v[688]=2e0*v[441];
v[439]=(v[348]*v[688])/(1e0-2e0*v[348]);
i345=es->id.NoIntPoints;
for(i346=1;i346<=i345;i346++){
 i352=4*(-1+i346);
 v[351]=es->IntPoints[i352];
 v[383]=(-1e0+v[351])/4e0;
 v[384]=(-1e0-v[351])/4e0;
 v[389]=v[383]*v[699]+v[384]*v[700];
 v[387]=v[383]*v[701]+v[384]*v[702];
 v[353]=es->IntPoints[1+i352];
 v[385]=(1e0+v[353])/4e0;
 v[382]=(-1e0+v[353])/4e0;
 v[388]=v[382]*v[703]+v[385]*v[704];
 v[386]=v[382]*v[705]+v[385]*v[706];
 v[390]=-(v[387]*v[388])+v[386]*v[389];
 v[393]=-(v[389]/v[390]);
 v[407]=-(v[385]*v[393]);
 v[399]=-(v[382]*v[393]);
 v[394]=v[387]/v[390];
 v[410]=-(v[385]*v[394]);
 v[401]=-(v[382]*v[394]);
 v[395]=-(v[388]/v[390]);
 v[408]=v[383]*v[395];
 v[403]=v[384]*v[395];
 v[396]=v[386]/v[390];
 v[411]=v[383]*v[396];
 v[405]=v[384]*v[396];
 v[397]=v[399]+v[408];
 v[398]=v[401]+v[411];
 v[400]=-v[399]+v[403];
 v[402]=-v[401]+v[405];
 v[404]=-v[403]+v[407];
 v[406]=-v[405]+v[410];
 v[409]=-v[407]-v[408];
 v[412]=-v[410]-v[411];
 v[417]=v[364]*v[397]+v[366]*v[400]+v[368]*v[404]+v[370]*v[409];
 v[418]=(v[365]*v[397]+v[364]*v[398]+v[367]*v[400]+v[366]*v[402]+v[369]*v[404]+v[368]*v[406]
  +v[371]*v[409]+v[370]*v[412])/2e0;
 v[419]=v[365]*v[398]+v[367]*v[402]+v[369]*v[406]+v[371]*v[412];
 i420=6*(-1+i346);
 i467=6+i420;
 i466=5+i420;
 i465=4+i420;
 i464=3+i420;
 i463=2+i420;
 i462=1+i420;
 v[428]=ed->hp[i462-1];
 v[429]=ed->hp[i463-1];
 v[430]=ed->hp[i464-1];
 v[431]=ed->hp[i465-1];
 v[432]=ed->hp[i466-1];
 v[436]=v[417]-v[428];
 v[438]=v[419]-v[429];
 v[446]=(v[436]+v[438])*v[439];
 v[448]=v[446]+v[436]*v[688];
 v[450]=v[446]+v[438]*v[688];
 v[453]=(-v[448]-v[450])/3e0;
 if((i422==1 && ed->hp[i467-1]==0e0) || (i422>1 && (-v[349]-v[350]*v[431]+sqrt(0.15e1*(Power(v[448]
  +v[453],2)+Power(v[450]+v[453],2)+8e0*Power(v[418]-v[430],2)*v[707])))<v[421])){
  v[457]=v[428];
  v[458]=v[429];
  v[459]=v[430];
  v[460]=v[431];
  v[461]=v[432];
  ed->ht[i462-1]=v[457];
  ed->ht[i463-1]=v[458];
  ed->ht[i464-1]=v[459];
  ed->ht[i465-1]=v[460];
  ed->ht[i466-1]=v[461];
  ed->ht[i467-1]=0e0;
 } else {
  v[507]=-v[439]-v[688];
  v[509]=(v[439]-v[507])/3e0;
  v[511]=v[507]+v[509];
  v[510]=-v[439]+v[509];
  v[567]=(2e0/3e0)*(2e0*v[510]-v[511]);
  v[566]=(-2e0/3e0)*(v[510]-2e0*v[511]);
  v[469]=v[428];
  v[470]=v[429];
  v[471]=v[430];
  v[472]=v[431];
  v[473]=v[432];
  for(i474=1;i474<=30;i474++){
   v[502]=-v[432]+v[473];
   v[476]=v[417]-v[469];
   v[478]=v[419]-v[470];
   v[485]=v[439]*(v[476]+v[478]);
   v[487]=v[485]+v[476]*v[688];
   v[488]=(v[418]-v[471])*v[688];
   v[697]=0.15e1*v[488];
   v[489]=v[485]+v[478]*v[688];
   v[492]=(-v[487]-v[489])/3e0;
   v[496]=v[489]+v[492];
   v[495]=v[487]+v[492];
   v[691]=sqrt(0.15e1*(2e0*(v[488]*v[488])+(v[495]*v[495])+(v[496]*v[496])));
   v[529]=(2e0/3e0)*(2e0*v[495]-v[496]);
   v[692]=0.75e0*v[529];
   v[521]=(-2e0/3e0)*(v[495]-2e0*v[496]);
   v[694]=0.75e0*v[521];
   v[515]=(3e0*v[488])/v[691];
   v[698]=v[515]/2e0;
   v[516]=-(v[515]*v[688]);
   v[693]=0.75e0/v[691];
   v[690]=0.15e1/v[691];
   v[514]=(v[495]*v[510]+v[496]*v[511])*v[690];
   v[513]=(v[496]*v[510]+v[495]*v[511])*v[690];
   v[518]=1e0/(v[691]*v[691]);
   v[520]=-(v[516]*v[518]);
   v[695]=-(v[502]*v[520]);
   v[536]=v[692]*v[695];
   v[519]=-(v[514]*v[518]);
   v[517]=-(v[513]*v[518]);
   v[531]=v[567]*v[693];
   v[535]=-(v[502]*(v[531]+v[519]*v[692]));
   v[528]=v[566]*v[693];
   v[534]=1e0-v[502]*(v[528]+v[517]*v[692]);
   v[696]=-(v[502]/v[534]);
   v[500]=v[521]*v[693];
   v[497]=v[529]*v[693];
   v[501]=-v[428]+v[469]-v[497]*v[502];
   v[505]=-v[431]+v[432]+v[472]-v[473];
   v[544]=(v[531]+v[517]*v[694])*v[696];
   v[545]=1e0-v[535]*v[544]-v[502]*(v[528]+v[519]*v[694]);
   v[546]=-(v[536]*v[544])+v[694]*v[695];
   v[547]=-v[500]+v[497]*v[544];
   v[548]=v[517]*v[696]*v[697];
   v[549]=v[513]/v[534];
   v[550]=v[429]-v[470]+v[500]*v[502]+v[501]*v[544];
   v[551]=-((v[535]*v[548]+v[502]*v[519]*v[697])/v[545]);
   v[552]=1e0-v[536]*v[548]-v[546]*v[551]+-0.15e1*v[502]*(v[488]*v[520]-v[688]/v[691]);
   v[553]=v[497]*v[548]-v[547]*v[551]-v[698];
   v[554]=(v[514]-v[535]*v[549])/v[545];
   v[555]=v[430]-v[471]+v[501]*v[548]-v[550]*v[551]+v[502]*v[698];
   v[556]=(v[516]-v[536]*v[549]-v[546]*v[554])/v[552];
   v[558]=(-v[349]+v[350]*(-v[472]+v[505])-v[501]*v[549]+v[550]*v[554]+v[555]*v[556]+v[691])/
    (v[350]-v[497]*v[549]+v[547]*v[554]+v[553]*v[556]);
   v[559]=-v[505]+v[558];
   v[560]=(v[555]-v[553]*v[558])/v[552];
   v[561]=(v[550]-v[547]*v[558]-v[546]*v[560])/v[545];
   v[562]=-((v[501]-v[497]*v[558]+v[536]*v[560]+v[535]*v[561])/v[534]);
   v[469]=v[469]+v[562];
   v[470]=v[470]+v[561];
   v[471]=v[471]+v[560];
   v[472]=v[472]+v[559];
   v[473]=v[473]+v[558];
   if(sqrt((v[558]*v[558])+(v[559]*v[559])+(v[560]*v[560])+(v[561]*v[561])+(v[562]*v[562]))<v[421]
    ){
    ed->ht[i462-1]=v[469];
    ed->ht[i463-1]=v[470];
    ed->ht[i464-1]=v[471];
    ed->ht[i465-1]=v[472];
    ed->ht[i466-1]=v[473];
    ed->ht[i467-1]=1e0;
    break;
   } else {
   };
   if(i474==29){
    idata[ID_SubDivergence]=1e0;
    idata[ID_ErrorStatus]=2e0;
    break;
   } else {
   };
  };/* end for */
  v[457]=v[469];
  v[458]=v[470];
  v[459]=v[471];
  v[460]=v[472];
  v[461]=v[473];
 };
 v[635]=v[417]-v[457];
 v[636]=v[418]-v[459];
 v[637]=v[419]-v[458];
 v[644]=v[635]+v[637];
 v[647]=v[439]*v[644];
 v[648]=v[647]+v[637]*v[688];
 v[645]=v[647]+v[635]*v[688];
 v[651]=(-v[645]-v[648])/3e0;
 v[649]=v[636]*v[688];
 gpost[i346-1][0]=v[417];
 gpost[i346-1][1]=v[418];
 gpost[i346-1][2]=v[419];
 gpost[i346-1][3]=v[635];
 gpost[i346-1][4]=v[636];
 gpost[i346-1][5]=v[637];
 gpost[i346-1][6]=v[417]-v[635];
 gpost[i346-1][7]=v[418]-v[636];
 gpost[i346-1][8]=v[419]-v[637];
 gpost[i346-1][9]=v[645];
 gpost[i346-1][10]=v[649];
 gpost[i346-1][11]=v[648];
 gpost[i346-1][12]=sqrt(0.15e1*(2e0*(v[649]*v[649])+Power(v[645]+v[651],2)+Power(v[648]+v[651],2))
  );
 gpost[i346-1][13]=v[460];
 gpost[i346-1][14]=v[461];
 gpost[i346-1][15]=(v[350]*(v[460]*v[460]))/2e0+v[441]*((v[635]*v[635])+2e0*(v[636]*v[636])+
  (v[637]*v[637]))+(v[439]*(v[644]*v[644]))/2e0;
};/* end for */
npost[0][0]=v[364];
npost[1][0]=v[366];
npost[2][0]=v[368];
npost[3][0]=v[370];
npost[0][1]=v[365];
npost[1][1]=v[367];
npost[2][1]=v[369];
npost[3][1]=v[371];
npost[0][2]=v[364];
npost[1][2]=v[366];
npost[2][2]=v[368];
npost[3][2]=v[370];
npost[0][3]=v[365];
npost[1][3]=v[367];
npost[2][3]=v[369];
npost[3][3]=v[371];
};
