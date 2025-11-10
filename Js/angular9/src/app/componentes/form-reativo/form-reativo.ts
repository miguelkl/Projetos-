import { CommonModule } from '@angular/common';
import { Component } from '@angular/core';

import { ReactiveFormsModule,FormGroup,Validator, FormBuilder, Validators } from '@angular/forms';

@Component({
  selector: 'app-form-reativo',
  imports: [ CommonModule, ReactiveFormsModule],
  templateUrl: './form-reativo.html',
  styleUrl: './form-reativo.css'
})
export class FormReativo {
  form: FormGroup ;

  constructor( fb: FormBuilder ){
    this.form = fb.group({ 
      nome : [ '' , [Validators.required , Validators.minLength(5)] ]  ,
      email : [ '' , [Validators.required, Validators.email ] ]  ,
      idade : [ '' , [Validators.required, Validators.min(0)] ]
    }) ;
  }

  enviar() {
    if ( this.form.valid ){
      alert ( this.form.get('nome')?.value ) ;
    } else {
      alert("Formulário invalido") ;
    }
  }


}
