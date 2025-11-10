var pessoa = /** @class */ (function () {
    //Construtor da classe
    function pessoa(nome, idade) {
        this.nome = nome;
        this.idade = idade;
    }
    //Método
    pessoa.prototype.mostrarDados = function () {
        console.log("Nome: ".concat(this.nome, " \nidade: ").concat(this.idade));
    };
    return pessoa;
}());
var natalia = new pessoa("Natalia Silva", 21);
natalia.mostrarDados();
