
import java.io.*;


public class Fecha {


    private int dia;
    private int mes;
    private int anio;
    private int fecha;
    private boolean bisiesto;
    
    private void asignarFecha(int dia_param, int mes_param, int anio_param) {

        this.dia = dia_param;
        this.mes = mes_param;
        this.anio = anio_param;
    }

    private void fechaCorrecta() {  

        metodoBisiesto();

        if (this.dia<1 || this.dia>31){
            System.out.println("Dia incorrecto");
        } else if (this.mes<1 || this.mes>12){
            System.out.println("Mes incorrecto");
        } else if (this.anio<1582){
            System.out.println("Anio incorrecto");
        } else if(mes==2 && dia>28){
            if(dia==30 || dia==31 || (dia==29 && bisiesto==false)){
                 System.out.println("Dia incorrecto");
            }      
        }
    }

    private void metodoBisiesto() {

        if(anio%4==0 && anio%100!=0) 
            bisiesto=true;
        else if (anio%400==0)
            bisiesto=true;
    }

}
