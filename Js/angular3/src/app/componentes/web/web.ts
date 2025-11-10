import { Component } from '@angular/core';

@Component({
  selector: 'app-web',
  imports: [],
  templateUrl: './web.html',
  styleUrl: './web.css'
})
export class Web {
  nome : string = "Miguel" ;
  vermelho : string = "#ff0000" ;
  
  corFundo1 : string = "#808080" ;
  corFundo2 : string = 'background-color: #008000' ;

  urlImagem: string = 'https://images.unsplash.com/photo-1531512073830-ba890ca4eba2?fm=jpg&q=60&w=3000&ixlib=rb-4.1.0&ixid=M3wxMjA3fDB8MHxzZWFyY2h8N3x8cGxhbm8lMjBkZSUyMGZ1bmRvJTIwcGFpc2FnZW18ZW58MHx8MHx8fDA%3D' ;
  tamanhoImagem: string = '400' ;

  naoAdm:boolean = false ;
}
