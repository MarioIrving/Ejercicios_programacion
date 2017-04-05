<<<<<<< HEAD
public class DirectorioUsuarios{

	private ListaDeUsuarios[] usersList;
	private int cantidadUsuarios;
	private Lee tomaDato=new Lee ();

	public DirectorioUsuarios (int cantidadUsuarios_param){
		
		this.cantidadUsuarios=cantidadUsuarios_param;
		usersList=new ListaDeUsuarios[this.cantidadUsuarios];

		for(int i=0; i<this.cantidadUsuarios; i+=1){

			usersList[i]=new ListaDeUsuarios();
			System.out.print("Dame el usuario " + (i+1) + ": ");
			usersList[i].setUsuario(tomaDato.leeCadena());
			System.out.print("Dame su contrasena : " );
			usersList[i].setContrasena(tomaDato.leeCadena());
		}
	}

	public boolean iniciarSesion () {

		String nombre=" ";
		String contrasena=" ";
		boolean valor=true;

		System.out.println(" ");
		System.out.print("Dame el usuario: ");
		nombre=tomaDato.leeCadena();

		System.out.print("Dame la contrasena: ");
		contrasena=tomaDato.leeCadena();

		for(int i=0; i<this.cantidadUsuarios; i+=1	){

			if (UsersList[i].getUsuario().compareTo(nombre)==0){
				if(UsersList[i].getContrasena().compareTo(contrasena)==0){
					valor=true;
					break;
				} else
					valor=false;
			}

		}
		return valor;

	}	
	







=======
public class DirectorioUsuarios{

	private ListaDeUsuarios[] UsersList;
	private int cantidadUsuarios;
	private Lee tomaDato=new Lee ();

	public DirectorioUsuarios (int cantidadUsuarios_param){
		
		this.cantidadUsuarios=cantidadUsuarios_param;
		UsersList=new ListaDeUsuarios[this.cantidadUsuarios];

		for(int i=0; i<this.cantidadUsuarios; i+=1){

			UsersList[i]=new ListaDeUsuarios();
			System.out.print("Dame el usuario " + (i+1) + ": ");
			UsersList[i].setUsuario(tomaDato.leeCadena());
			System.out.print("Dame su contrasena : " );
			UsersList[i].setContrasena(tomaDato.leeCadena());
		}
	}

	public boolean iniciarSesion () {

		String nombre=" ";
		String contrasena=" ";
		boolean valor=true;

		System.out.println(" ");
		System.out.print("Dame el usuario: ");
		nombre=tomaDato.leeCadena();

		System.out.print("Dame la contrasena: ");
		contrasena=tomaDato.leeCadena();

		for(int i=0; i<this.cantidadUsuarios; i+=1	){

			if (UsersList[i].getUsuario().compareTo(nombre)==0){
				if(UsersList[i].getContrasena().compareTo(contrasena)==0){
					valor=true;
					break;
				} else
					valor=false;
			}

		}
		return valor;

	}	
	







>>>>>>> 637916694ac7b243dd8d0040027e26b3676b8144
}