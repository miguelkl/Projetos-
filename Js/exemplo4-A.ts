class pessoa {
    nome:string ;
    idade:number ;

    //Construtor da classe
    constructor( nome:string , idade:number){
        this.nome = nome ;
        this.idade = idade ;
    }

    //Método
    mostrarDados() {
        console.log( `Nome: ${this.nome} \nidade: ${this.idade}` );
    }
}

var natalia = new pessoa( "Natalia Silva" , 21 ) ;
natalia.mostrarDados() ;