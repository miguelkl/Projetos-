var curso:string = "Sistema de Informação" ;

var idade:number = 21 ;
var salario:number = 12789.46 ;

var numBinario:number = 0b010101 ;
var numOctal:number = 0o765 ;
var numHex:number = 0xFF ;

console.log("numBinario: " + numBinario) ;
console.log("numOctal: " + numOctal) ;
console.log("numHex: " + numHex) ;

var lista:number[] = [ 3, 7, 2, 10 , 2];
var lista2:Array<number> = [1,6,5,4];

console.log( lista );
console.log( lista[0] ) ;

//TUPLA
var alunos:[string, number, string] ;
alunos = ['Ana', 212232025, 'ADS'] ;

console.log( alunos[0] );

var tudoCerto:boolean = true ;

var coisa:any = "Nelson" ;
coisa = true ;
coisa = 23 ;

//loop
for ( let item in  lista ) {
    console.log( "Chave " + item ) ;
}

//loop para pegar o valor
for ( let item of  lista ) {
    console.log( "Valor " + item ) ;
}