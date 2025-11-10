import { Component } from '@angular/core';
import { FormsModule, NgForm } from '@angular/forms';
import { CommonModule } from '@angular/common';

@Component({
  selector: 'app-form-modelo',
  imports: [FormsModule,CommonModule],
  templateUrl: './form-modelo.html',
  styleUrl: './form-modelo.css'
})
export class FormModelo {
  titulo:string = "Formulário do tipo Template-Driven"

  enviar( form:NgForm){
    if ( form.valid ){
      alert("Vc digitou: " + form.controls ['nome'].value );
    }
  }
}
