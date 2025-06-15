#include<iostream>
using namespace std;
void aliass(string alias[], int kill[], int n ){
    int maxkill=0,i;
    for ( i = 0; i < n ; i++)
    {
        if (kill[i] > maxkill)
        {
            maxkill = kill[i];
        }
        
    }
    cout<<"1_el/los jugador/es con mas asesinatos es/son: ";
    for ( i = 0; i < n; i++)
    {
        if (kill[i] == maxkill)
        {
            cout<<alias[i]<<", ";
        }
    }
    cout<<endl;
}


    void minutosbajas(float minutos[],int deaths[],int n){
        int maxdeaths=0,i;
        for(i=0; i<n; i++){
            if (deaths[i]>maxdeaths)
            {
               maxdeaths=deaths[i];
            }
        }
        cout<<"2_la cantidad de minutos jugadas por los/el jugador con mas bajas es: ";
        for(i=0; i<n; i++){
            if (deaths[i]==maxdeaths){
                cout<<minutos[i]<<", ";
            }
    }
        cout<<endl;
}
    void porc100200(int n, float minutos[],int deaths[]){
        int bajas100200=0,i,bajastotales=0;
        float porcentaje;
        for ( i = 0; i < n; i++)
        {
            if ((minutos[i]<=200) && (minutos[i]>=100)){
                bajas100200=bajas100200+deaths[i];
            }
            bajastotales=bajastotales+deaths[i];

        }
        porcentaje=(bajas100200*100.0)/bajastotales;
        cout<<"3_el porcentaje de muertes de jugadores que jugaron entre 100 y 200 minutos es: "<<porcentaje<<endl;
        
        
    
    }
    void maxkillviejo(int kill[], int edad[],int n){
        int edadmax=0,i;
        for ( i = 0; i < n; i++)
        {
            if (edad[i]>edadmax)
            {
             edadmax=edad[i];  
            }
            
        }
        cout<<"4_la cantidad de kills de el/los jugador/es mas grande es/son: ";
        for ( i = 0; i < n; i++)
        {
            if (edad[i]==edadmax)
            {
                cout<<kill[i]<<", ";
            }
        }
        cout<<endl;
        

        

    }
    void aliasmenor(string alias [],int edad[],int n){
        int edadmin=100,i;
        for ( i = 0; i < n; i++)
        {
            if (edad[i]<edadmin)
            {
                edadmin=edad[i];
              
            }
            
        }
        cout<<"5_el/los alias de/los jugador/es mas joven/es es/son: ";
        for ( i = 0; i < n; i++)
        {
            if (edad[i]==edadmin)
            {
                cout<<alias[i]<<", ";
            }
        }
        cout<<endl;
        
        
    }
    void muertespromedio(int deaths[],int n){
        int i,muertestotales=0;
       
        for ( i = 0; i < n; i++)
        {
            muertestotales=muertestotales+deaths[i];
        }
        float promedio=(float)muertestotales/n;
        cout<<"6_la cantidad de muertes promedio es: "<<promedio<<endl;
    }
    void edadmenosasesinatos(int kill[],int edad[], int n){
        int minkills=100,i;
        for ( i = 0; i < n; i++)
        {
            if (kill[i]<minkills)
            {
                minkills=kill[i];
            }
        }
        cout<<"7_la/s edad/es de el/los jugador/es con menos asesinatos es/son: ";
            for ( i = 0; i < n; i++)
            {
                if (minkills==kill[i])
                {
                    cout<<edad[i]<<", ";
                }
                
            }
            cout<<endl;
        
    }
    void promediobaj15y20(int deaths[],int edad[],int n){
        int i,bajas15y20=0,jugadores=0;
        float promedio;
        for ( i = 0; i < n ; i++)
        {
            if ((edad[i]>=15) && (edad[i]<=20))
            {

                bajas15y20=bajas15y20+deaths[i];
                jugadores++;
            }
            
        }
        if (jugadores!=0)
        {
            promedio=bajas15y20/jugadores;
           cout<<"8_el promedio de bajas de los jugadores entre 15 y 20 son: "<<promedio<<endl;
        }else{
            cout<<"8_no hay jugadores de esa edad con bajas o no hay jugadores de esa edad"<<endl;
        }
        
        

        
    }
    void masarmas(string alias[], int armas[],int n){
        int i,maxarmas=0;
        for ( i = 0; i < n; i++)
        {
            if (armas[i]>maxarmas)
            {
                maxarmas=armas[i];
                
            }
            
            
            
        }
        cout<<"9_el/los jugadores con mas armas es/son: ";
            for ( i = 0; i <n ; i++)
            {
                if (maxarmas==armas[i])
                {
                    cout<<alias[i]<<", ";
                }
                
            }
            cout<<endl;
        
    }
     void promediobaj20(int deaths[],int edad[],int n){
        int i,bajas20=0,jugadores=0;
        float promedio;
        for ( i = 0; i < n ; i++)
        {
            if (edad[i]<20)
            {

                bajas20=bajas20+deaths[i];
                jugadores++;
            }
            
        }
        promedio=bajas20/jugadores;
        if (jugadores!=0)
        {
            cout<<"10_el promedio de bajas de los jugadores menores de 20 es : "<<promedio<<endl;
        }else{
            cout<<"10_no hay jugadores menores de 20 años"<<endl;
        }
        
        
        

        
    }
    void porcbaj1822(int deaths[],int edad[],int n){
        int i,bajas18a20=0,bajastotales=0;
        float porcentaje;
        for (i = 0; i < n; i++) {
        if (edad[i]>=18 && edad[i]<=22) {
            bajas18a20=bajas18a20 + deaths[i];
            
        }
        bajastotales=bajastotales+deaths[i];
    }
    porcentaje=(bajas18a20*100.0)/bajastotales;
    if (bajastotales!=0)
    {
        cout<<"11_el porcentaje de bajas entre 18 y 22 años es: "<<porcentaje<<"%"<<endl;
    }else{
        cout<<"11_los jugadores entre 18 y 22 años no tuvieron bajas o no hay jugadores entre 18 y 22 años"<<endl;
    }
    
    
   }
   void minutosMas30Kills(float minutos[],int kill[],int n){
    float minutosmas30=0;
    for (int i = 0; i < n; i++) {
        if (kill[i]>30) {
        minutosmas30=minutosmas30+minutos[i];
        }
    }
    cout<<"12_minutos acumulados de jugadores con más de 30 asesinatos: "<<minutosmas30<<endl;
    
}
void masbajas(int deaths[],int kill[],int n){
    int i,jugadores=0;
    for ( i = 0; i < n; i++)
    {
        if (deaths[i]>kill[i])
        {
            jugadores++;
        }

        
    }
    if (jugadores!=0)
    {
        cout<<"13_la cantidad de jugadores con mayores bajas que asesinatos son: "<<jugadores<<endl;

    }else{
        cout<<"13_ningun jugador tiene mas bajas que asesinatos"<<endl;
    }
    
    
}
void porcjmaskill(int deaths[], int kill[],int n){
    int i,jugadores=0;
    float porcentaje;
    for ( i = 0; i < n; i++)
    {
        if (kill[i]>deaths[i])
        {
            jugadores++;
        }
        
    }
    porcentaje=(jugadores*100.0)/n;
    if (jugadores!=0)
    {
        cout<<"14_el porcentaje de jugadores con mas asesinatos es: "<<porcentaje<<"%"<<endl;
    }
    
    
}
void menosarmas(string alias[], int armas[],int n){
        int i,minarmas=100;
        for ( i = 0; i < n; i++)
        {
            if (armas[i]<minarmas)
            {
                minarmas=armas[i];
                
            }
            
            
            
        }
        cout<<"15_el/los jugadores con menos armas es/son: ";
            for ( i = 0; i <n ; i++)
            {
                if (minarmas==armas[i])
                {
                    cout<<alias[i]<<", ";
                }
                
            }
            cout<<endl;
        
    }


        
    



    

    


int main(){
    int n,i,edad[100],kill[100],armas[100],deaths[100];
    float horas,minutos[100];
    string alias[100];
    cout<<"indique la cantidad de jugadores: "<<endl;
    cin>>n;
    for(i=0;i<n;i++){
        cout<<"indique el alias del jugador "<<i+1<<endl;
        cin>>alias[i];
        cout<<"indique la cantidad de horas jugados por el jugador "<<i+1<<endl;
        cin>>horas;
        minutos[i]=horas*60;
        cout<<"indique la edad del jugador "<<i+1<<endl;
        cin>>edad[i];
        cout<<"indique la cantidad de asesinatos del jugador "<<i+1<<endl;
        cin>>kill[i];
        cout<<"indique la cantidad de armas utilzadas por el jugador "<<i+1<<endl;
        cin>>armas[i];
        cout<<"indique la cantidad de bajas del jugador "<<i+1<<endl;
        cin>>deaths[i];


    }
    aliass(alias,kill,n);
    minutosbajas(minutos,deaths,n);
    porc100200(n,minutos,deaths);
    maxkillviejo(kill,edad,n);
    aliasmenor(alias,edad,n);
    muertespromedio(deaths,n);
    edadmenosasesinatos(kill,edad,n);
    promediobaj15y20(deaths,edad,n);
    masarmas(alias,armas,n);
    promediobaj20(deaths,edad,n);
    porcbaj1822(deaths,edad,n);
    minutosMas30Kills(minutos,kill,n);
    masbajas(deaths,kill,n);
    porcjmaskill(deaths,kill,n);
    menosarmas(alias,armas,n);


    
}    
