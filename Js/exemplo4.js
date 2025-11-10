var n1 = 10;
var n2 = pegarValor();
mostrarMensagem("Exemplo de uso da fun\u00E7\u00E3o: ".concat(n2));
var media = calcularMedia(5.5, 7.8);
mostrarMensagem(media.toString());
function pegarValor() {
    return 40;
}
function mostrarMensagem(mensagem) {
    if (mensagem === void 0) { mensagem = ""; }
    console.log(mensagem);
}
function calcularMedia(n1, n2) {
    return (n1 + n2) / 2;
}
