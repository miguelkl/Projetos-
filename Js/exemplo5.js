var Produto = /** @class */ (function () {
    //Construtor
    function Produto(nome, codigo, preco) {
        this.nome = nome;
        this.codigo = codigo;
        this.preco = preco;
    }
    Produto.prototype.cadastrarProduto = function (produto) {
        return "Nome: ".concat(produto.nome, "\n        C\u00F3digo: ").concat(produto.codigo, "\n        Pre\u00E7o: ").concat(produto.preco);
    };
    return Produto;
}());
//TESTAR
var mouse = new Produto("Logitech M90", 1, 32.90);
console.log(mouse.cadastrarProduto(mouse));
