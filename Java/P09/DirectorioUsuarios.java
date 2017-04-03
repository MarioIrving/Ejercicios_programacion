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
			UsersList[i].setUsuario(tomaDato.leeString());
			System.out.print("Dame su contrasena : " );
			UsersList[i].setContrasena(tomaDato.leeString());
		}


	}







}