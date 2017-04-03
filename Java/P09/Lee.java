import java.io.*;

public class Lee {


    InputStreamReader isr = new InputStreamReader(System.in);
    BufferedReader flujoE = new BufferedReader(isr);
    String sDato;


    public int leeInt() {

        int numInt=0;
        
        try {
            sDato = flujoE.readLine();
            numInt = Integer.parseInt(sDato);
        } catch(NumberFormatException e){
            System.out.println("El caracter ingresado no es correcto");
            return -1;
        }catch (IOException e) {}
        return numInt;
    }

    public float leeFloat() {

        float numFloat=0;
        
        try {
            sDato = flujoE.readLine();
            numFloat = Float.parseFloat(sDato);
        } catch(NumberFormatException e){
            System.out.println("El caracter ingresado no es correcto");
            return -1;
        }catch (IOException e) {}
        return numFloat;
    }

    public String leeString() {
        
        try {
            sDato = flujoE.readLine();
        } catch (IOException e) { }
        return sDato;
    }

}