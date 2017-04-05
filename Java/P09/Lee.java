<<<<<<< HEAD
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

    public String leeCadena () {
        
        try {
            sDato = flujoE.readLine();
        } catch (IOException e) { }
        return sDato;
    }

=======
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

    public String leeCadena () {
        
        try {
            sDato = flujoE.readLine();
        } catch (IOException e) { }
        return sDato;
    }

>>>>>>> 637916694ac7b243dd8d0040027e26b3676b8144
}