class Produto {
    nome   : string ;
    codigo : number ;
    preco  : number ;

    //Construtor
    constructor ( nome:string, codigo:number, preco:number) {
        this.nome = nome ;
        this.codigo = codigo ;
        this.preco = preco ;
    }

    cadastrarProduto( produto : Produto) : string {
        return `Nome: ${produto.nome}
        Código: ${produto.codigo}
        Preço: ${produto.preco}`
    }
}

//TESTAR
var mouse = new Produto("Logitech M90", 1, 32.90) ;
console.log( mouse.cadastrarProduto( mouse ) ) ;