package com.example.caraoucoroa

import android.content.Intent
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.widget.ImageButton
import kotlin.random.Random

class MainActivity : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

        val btnJogar = findViewById<ImageButton>(R.id.imgBtnJogar)

        btnJogar.setOnClickListener {
            this.abreTelaResultado()
        }
    }

    fun abreTelaResultado() {
         val intent = Intent(this, resultado::class.java)
         // Random.nextInt(<until>) Gera um número inteiro aleatório menor que o número passado
         // como <until>
         val numero = Random.nextInt(2)

         // <Intent>.putExtra(<nome>, <var>) injeta uma variável na intent passada
         intent.putExtra("numero", numero)

         startActivity(intent)
    }
}