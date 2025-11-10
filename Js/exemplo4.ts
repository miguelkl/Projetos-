var n1:number = 10;

var n2:number = pegarValor() ;

mostrarMensagem( `Exemplo de uso da função: ${n2}` );

var media:number = calcularMedia( 5.5 , 7.8 );
mostrarMensagem( media.toString() );

function pegarValor () : number {
    return 40 ;
}

function mostrarMensagem ( mensagem:string = "" ) {
    console.log( mensagem ) ;
}

function calcularMedia (n1:number , n2:number) :number {
    return (n1+n2) / 2 ;
}