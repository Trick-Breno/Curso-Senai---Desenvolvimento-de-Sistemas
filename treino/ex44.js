const form = document.querySelector('.form');

form.addEventListener('submit', function (evento){
    evento.preventDefault()
    const inputPeso = evento.target.querySelector('.peso');
    const inputAltura = evento.target.querySelector('.altura');

    const peso = Number(inputPeso.value);
    const altura = Number(inputAltura.value);

    if (!peso) {// se o peso nao for avaliado como verdadeiro
        setResultado('Peso invalido', false);
        return; // parar (nao executar mais)
    }

    if (!altura) {
        setResultado('Altura invalida', false);
        return; // parar (nao executar mais)
    }

    const imc = getImc(peso, altura);
    const nivelImc = getNivelImc(imc);

    const msg = `seu IMC é ${imc} (${nivelImc}).`
    setResultado(msg, true);
})

function getNivelImc (imc) {
    const nivel = ['Abaixo do peso', 'Peso normal', 'Sobrepeso', 
    'obesidade grau 1', 'Obesidade grau 2', 'Obesidade grau 3']

    if (imc >= 39.9) return nivel[5]
    if (imc >= 34.9) return nivel[4]
    if (imc >= 29.9) return nivel[3]
    if (imc >= 24.9) return nivel[2]
    if (imc >= 18.5) return nivel[1]
    if (imc < 18.5) return nivel[0]

}

function getImc(peso, altura) {
    const imc = peso / altura ** 2;
    return imc.toFixed(2);
}

function criaP () {
    const p = document.createElement('p');
    return p;

}

function setResultado (msg, isValid) {
    const resultado = document.querySelector('.res');
    resultado.innerHTML = '';

    const p = criaP();

    if (isValid) {
        p.classList.add('pResultado')
    } else {
        p.classList.add('vermelho')
    }

    p.innerHTML = msg
    resultado.appendChild(p)
}








// const form = document.querySelector('.form')
// const res = document.querySelector('.res')

// form.addEventListener('submit', function (evento) {
//     evento.preventDefault()
//     const inputPeso = document.querySelector('.peso')
//     const inputAltura = document.querySelector('.altura')

//     const peso = Number(inputPeso.value)
//     const altura = Number(inputAltura.value)

//     if (peso > 0 && altura > 0.5 ) {
//         const calculo = peso  / (altura * altura )
//         const imc = calculo.toFixed(1)

//         if (imc < 18.5){
//             res.innerHTML = `Seu IMC é ${imc} (Abaixo do peso)`
//             res.style.background = 'red'
//         }else if (imc < 24.9) {
//             res.innerHTML = `Seu IMC é ${imc} (Peso normal)`
//             res.style.background = '#56ed76'
//         } else if (imc < 29.9) {
//             res.innerHTML = `Seu IMC é ${imc} (Sobrepeso)`
//             res.style.background = 'red'
//         }else if (imc < 34.9) {
//             res.innerHTML = `Seu IMC é ${imc} (Obesidade grau 1)`
//             res.style.background = 'red'
//         }else if (imc < 39.9) {
//             res.innerHTML = `Seu IMC é ${imc} (Obesidade grau 2)`
//             res.style.background = 'red'
//         } else {
//             res.innerHTML = `Seu IMC é ${imc} (Obesidade grau 3)`
//             res.style.background = 'red'
//         }

//     } else {
//         alert('valor inválido')
//     }
// })
















