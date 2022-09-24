package com.example.sorteiadados

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.widget.Button
import android.widget.ImageView

class Resultado : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_resultado)

        this.defineImagemDado()

        findViewById<Button>(R.id.btnVoltar).setOnClickListener {
            finish()
        }
    }

    fun defineImagemDado() {
        val extras = intent.extras!!
        val dadoSorteado = extras.getInt("dadoSorteado")

        // when(<valor>) atua como uma expressão match/case para kotlin
        val imagem = when(dadoSorteado) {
            0 -> R.drawable.dado_1_ponto
            1 -> R.drawable.dado_2_pontos
            2 -> R.drawable.dado_3_pontos
            3 -> R.drawable.dado_4_pontos
            4 -> R.drawable.dado_5_pontos
            else -> R.drawable.dado_6_pontos
        }

        findViewById<ImageView>(R.id.imgDado).setImageResource(imagem)
    }
}