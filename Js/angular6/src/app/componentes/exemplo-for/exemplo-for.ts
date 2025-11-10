import { Component } from '@angular/core';

import { CommonModule } from '@angular/common';

@Component({
  selector: 'app-exemplo-for',
  imports: [CommonModule],
  templateUrl: './exemplo-for.html',
  styleUrl: './exemplo-for.css'
})
export class ExemploFor {
  
  titulo:string = "EXEMPLO Diretiva - FOR" ;
  lista:string[] = ['Php', 'Angular', "Java", "C#", "TypeScript"] ;

}
