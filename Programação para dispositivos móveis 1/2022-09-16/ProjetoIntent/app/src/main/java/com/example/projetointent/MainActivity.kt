package com.example.projetointent

import android.content.Intent
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.widget.Button
import android.widget.ImageButton

class MainActivity : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

        // Obtém os elementos da tela
        val botaoCliente = findViewById<ImageButton>(R.id.imgBtnCliente)
        var botaoEmpresa = findViewById<ImageButton>(R.id.imgBtnEmpresa)
        var botaoServicos = findViewById<ImageButton>(R.id.imgBtnServicos)
        val botaoContato = findViewById<ImageButton>(R.id.imgBtnContato)

        // Altera a função que será disparado no click do botão
        botaoCliente.setOnClickListener {
            // Instancia a Intent passando a classe da ACtivity como uma instância Java
            // <Classe>::class -> obtém a classe
            // <Classe>::class.java -> obtém uma instância Java da classe
            val intent = Intent(this, Cliente::class.java)

            // Usa a Intent para iniciar a activity correspondente a classe passada
            startActivity(intent)
        }

        botaoEmpresa.setOnClickListener {
            val intent = Intent(this, Empresa::class.java)

            startActivity(intent)
        }

        botaoServicos.setOnClickListener {
            val intent = Intent(this, Servicos::class.java)

            startActivity(intent)
        }

        botaoContato.setOnClickListener {
            val intent = Intent(this, Contato::class.java)

            startActivity(intent)
        }
    }
}