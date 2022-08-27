package com.example.projeto2

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.widget.TextView
import org.w3c.dom.Text

class MainActivity : AppCompatActivity() {
    // onCreate é o método chamado assim que um app inicia (Ex: splash screen)
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)

        // R é a classe base para desenvolvimento android
        setContentView(R.layout.activity_main)

        // Kotlin conta com duas keywords de declaração de varáveis, val e var, ambas com inferencia
        // de tipo. val declara uma variável com um valor que nunca vai ser alterado e var declara
        // uma variável cujo valor pode ser mutado (assign)
        val mensagem = "Kotlin"

        // Obtém a TextView do frontend a partir do backend e altera o texto exibido
        val texto = findViewById<TextView>(R.id.texto)
        texto.setText(mensagem)
    }
}
