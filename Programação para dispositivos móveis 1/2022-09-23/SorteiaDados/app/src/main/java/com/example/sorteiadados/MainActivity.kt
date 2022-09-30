package com.example.sorteiadados

import android.content.Intent
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.widget.Button
import kotlin.random.Random

class MainActivity : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

        findViewById<Button>(R.id.btnJogar).setOnClickListener {
            this.abreActivityRsultado()
        }
    }

    fun abreActivityRsultado() {
        val intent = Intent(this, Resultado::class.java)
        val dadoSorteado = Random.nextInt(6)

        intent.putExtra("dadoSorteado", dadoSorteado)

        startActivity(intent)
    }
}