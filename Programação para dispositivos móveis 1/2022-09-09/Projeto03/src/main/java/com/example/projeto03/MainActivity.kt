package com.example.projeto03

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.view.View
import android.widget.EditText
import android.widget.TextView
//import kotlinx.android.synthetic.main.activity_main.*

class MainActivity : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)
    }

    fun calculaEtanolGasolina(view: View) {
        // Declara os elementos utilizando a classe R e a função findViewById<Elem>(...),
        // que obtém os elementos do frontend, esse é o modo tradicional de se obter elementos
        val editEtanol = findViewById<EditText>(R.id.editEtanol)
        val editGasolina = findViewById<EditText>(R.id.editGasolina)
        val txtResultado = findViewById<TextView>(R.id.txtResultado)

        // Obtendo os valores das inputs como String e removendo os caracteres em branco no
        // começo e no final utilizando String.trim()
        val precoEtanol = editEtanol.text.toString().trim()
        val precoGasolina = editGasolina.text.toString().trim()

        val isCamposValidos = this.validarCampos(precoEtanol, precoGasolina)
        if (!isCamposValidos) {
            txtResultado.text = "Por favor preencher os dois campos acima"
            return
        }

        val resultado = this.calcularPreco(precoEtanol, precoGasolina)
        if (resultado >= 0.7) {
            txtResultado.text = "A gasolina está compensando mais"
        } else {
            txtResultado.text = "O etanol está compensando mais"
        }
    }

    fun calcularPreco(etanol: String, gasolina: String): Double {
        // Converte os valores de String para Double para realizar as operações
        val valorEtanol = etanol.toDouble()
        val valorGasolina = gasolina.toDouble()

        return valorEtanol / valorGasolina
    }

    fun validarCampos(etanol: String, gasolina: String): Boolean {
        val isEtanolValido = etanol != null && etanol != ""
        val isGasolinaValido = gasolina != null && gasolina != ""

        return isEtanolValido && isGasolinaValido
    }
}