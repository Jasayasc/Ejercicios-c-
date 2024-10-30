/*4 Programa que le un N dado y construya la matriz mágica correspondiente (eje. Para N=3)*/
#include <iostream>
using namespace std;

class m4{//Declaracion de la clase
    public://Metodos de la clase
    void entrada();
    void proceso(int);
    void par(int**,int);
    void impar(int**,int);
    void salida(int**,int);
};
void m4::entrada(){//Metodo encargado de la entrada de el tamano de la matriz
    int n=0;
    cout<<"Por favor ingrese la dimension de la matriz"<<endl;
    cin>>n;
    proceso(n);
}
void m4::proceso(int n){//Metodo encargado de crear la matriz y diferenciar de si es orden par o impar
    int **matriz;
    matriz=new int *[n];//Asignacion dinamica de memoria
    if (matriz == NULL) {
		cout << "Error de memoria matriz";
	}
	for (int i = 0; i < n; i++) {
		matriz[i] = new int[n];
		if (matriz[i] == NULL) {
			cout << "Error de memoria matriz2";
		}
	}
	for(int i=0;i<n;i++){//Llenado de la matriz dinamica
	    for(int j=0;j<n;j++){
	        matriz[i][j]=0;
	    }
	}
	if(n%2==0){//Matriz par
	    par(matriz,n);
	}else{//Matriz impar
	    impar(matriz,n);
	}
}
void m4::par(int **matriz,int n){//Metodo encargado de crear la matriz par
    
}

void m4::impar(int**matriz,int n){//Metodo encargado de crear la matriz impar
    int x=0,y=0,vx=0,vy=0;//Variables posición
    int limite=n*n,limitex=n-1,limitey=n-1,contador=0;
    x=n/2;
    y=0;
    for(contador=1;contador<=limite;contador++)
    {
       // Asignar la posición del numero en la matriz
        matriz[y][x] = contador;
        // Guardar la posición actual
        vx = x;
        vy = y;
        // Aumentar la posición de x si sobrepasa el limite derecho
        // situarla en el limite izquierdo
        x++;
        if( x > limitex ) x = 0;
        // Disminuir la posición de y, ya que se pretende avanzar en
        // diagonal
        y--;
        if( y < 0 ) y = limitey;
        // Se comprueba si la posición ya esta ocupada por un numero
        // si es así se vuelve a la posición original y se resitúa el
        // numero justo en la casilla inferior
        if (matriz[y][x]>0)
        {
            // La casilla esta ocupada y se asigna el numero en la
            // casilla situada debajo de la casilla de donde intentaba
            x = vx ;
            y = vy +1 ;
        }
    }
    salida(matriz,n);
}
void m4::salida(int**matriz,int n){
    cout<<"Cuadro magico de dimension "<<n<<endl;
    for(int i=0;i<n;i++){
	    for(int j=0;j<n;j++){
	       printf("|%3d|",matriz[i][j]);
	    }
	    cout<<endl;
	}
	//Destruccion de memoria dinamica
	for(int i=0; i<n; i++) {
		delete matriz[n];
	}
	delete matriz;
}
int main(){
    m4 mat;
    mat.entrada();
    
    return 0;
}