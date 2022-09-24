package com.example.caraoucoroa

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.widget.ImageButton
import android.widget.ImageView

class resultado : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_resultado)

        this.alteraImagemPorResultado()

        val btnVoltar = findViewById<ImageButton>(R.id.imgBtnVoltar)

        btnVoltar.setOnClickListener {
            finish()
        }
    }

    fun alteraImagemPorResultado() {
        // Acessa as variáveis injetadas na Intent usando intent.extras!!
        // obs: !! é um operador de null safety do Kotlin
        val extras: Bundle = intent.extras!!
        val numero = extras.getInt("numero")
        val imgResultado = findViewById<ImageView>(R.id.imgResultado)

        // <ImageView>.setImageResource Altera a imagem atrelada a um <ImageView>
        imgResultado.setImageResource(if (numero == 0) R.drawable.moeda_cara else R.drawable.moeda_coroa)
    }
}