window.onload = function () {
    tratar_eventos();
    tocar_audio('abertura');
}

function tratar_eventos() {

    /*
        Jogador clicou no botão começar/reiniciar jogo.
    */

    document.getElementById("btn-comecar").onclick = function () {
        tocar_audio('comecar');
        document.getElementById("comecar").style.display = "none";
        document.getElementById("pergunta1000").style.display = "block";
    }

    /* 
        Analisar resposta da pergunta de R$ 1000 
    */

    document.getElementById("form-pegunta1000").onsubmit = function () {
        var opcao_correta = "3";
        var opcao_selecionada = this.pergunta1000.value;

        if (opcao_selecionada == opcao_correta) {
            tocar_audio('pergunta-2000');
            document.getElementById("pergunta1000").style.display = "none";
            document.getElementById("pergunta2000").style.display = "block";
        } else {
            document.getElementById("pergunta1000").style.display = "none";
            tocar_audio('errou');
            reinicia_jogo();
        }

        return false;
    }

    /* 
        Analisar resposta da pergunta de R$ 2000
    */
    document.getElementById("form-pegunta2000").onsubmit = function () {
        var opcao_correta = "4";
        var opcao_selecionada = this.pergunta2000.value;

        if (opcao_selecionada == opcao_correta) {
            tocar_audio('pergunta-3000');
            document.getElementById("pergunta2000").style.display = "none";
            document.getElementById("pergunta3000").style.display = "block";
        } else {
            document.getElementById("pergunta3000").style.display = "none";
            tocar_audio('errou');
            reinicia_jogo();
        }

        return false;
    }

    /* 
        Analisar resposta da pergunta de R$ 3000
    */
    document.getElementById("form-pegunta3000").onsubmit = function () {
        var opcao_correta = "2";
        var opcao_selecionada = this.pergunta3000.value;

        if (opcao_selecionada == opcao_correta) {
            tocar_audio('pergunta-4000');
            document.getElementById("pergunta3000").style.display = "none";
            document.getElementById("pergunta4000").style.display = "block";
        } else {
            document.getElementById("pergunta3000").style.display = "none";
            tocar_audio('errou');
            reinicia_jogo();
        }

        return false;
    }
    
    /*
        Analisar resposta da pergunta de R$ 4000
    */
    document.getElementById("form-pegunta4000").onsubmit = function () {
        var opcao_correta = "2";
        var opcao_selecionada = this.pergunta4000.value;

        if (opcao_selecionada == opcao_correta) {
            tocar_audio('pergunta-5000');
            document.getElementById("pergunta4000").style.display = "none";
            document.getElementById("pergunta5000").style.display = "block";
        } else {
            document.getElementById("pergunta4000").style.display = "none";
            tocar_audio('errou');
            reinicia_jogo();
        }

        return false;
    }
    
    /*
        Analisar resposta da pergunta de R$ 5000
    */
    document.getElementById("form-pegunta5000").onsubmit = function () {
        var opcao_correta = "3";
        var opcao_selecionada = this.pergunta5000.value;

        if (opcao_selecionada == opcao_correta) {
            tocar_audio('pergunta-10000');
            document.getElementById("pergunta5000").style.display = "none";
            document.getElementById("pergunta10000").style.display = "block";
        } else {
            document.getElementById("pergunta5000").style.display = "none";
            tocar_audio('errou');
            reinicia_jogo();
        }

        return false;
    }

    /*
        Analisar resposta da pergunta de R$ 10000
    */
    document.getElementById("form-pegunta10000").onsubmit = function () {
        var opcao_correta = "2";
        var opcao_selecionada = this.pergunta10000.value;

        if (opcao_selecionada == opcao_correta) {
            tocar_audio('pergunta-20000');
            document.getElementById("pergunta10000").style.display = "none";
            document.getElementById("pergunta20000").style.display = "block";
        } else {
            document.getElementById("pergunta10000").style.display = "none";
            tocar_audio('errou');
            reinicia_jogo();
        }

        return false;
    }
    
    /*
        Analisar resposta da pergunta de R$ 20000
    */
    document.getElementById("form-pegunta20000").onsubmit = function () {
        var opcao_correta = "4";
        var opcao_selecionada = this.pergunta20000.value;

        if (opcao_selecionada == opcao_correta) {
            tocar_audio('pergunta-30000');
            document.getElementById("pergunta20000").style.display = "none";
            document.getElementById("pergunta30000").style.display = "block";
        } else {
            document.getElementById("pergunta20000").style.display = "none";
            tocar_audio('errou');
            reinicia_jogo();
        }

        return false;
    }
    
    /*
        Analisar resposta da pergunta de R$ 30000
    */
    document.getElementById("form-pegunta30000").onsubmit = function () {
        var opcao_correta = "2";
        var opcao_selecionada = this.pergunta30000.value;

        if (opcao_selecionada == opcao_correta) {
            tocar_audio('pergunta-40000');
            document.getElementById("pergunta30000").style.display = "none";
            document.getElementById("pergunta40000").style.display = "block";
        } else {
            document.getElementById("pergunta30000").style.display = "none";
            tocar_audio('errou');
            reinicia_jogo();
        }

        return false;
    }
    
    /*
        Analisar resposta da pergunta de R$ 40000
    */
    document.getElementById("form-pegunta40000").onsubmit = function () {
        var opcao_correta = "2";
        var opcao_selecionada = this.pergunta40000.value;

        if (opcao_selecionada == opcao_correta) {
            tocar_audio('pergunta-50000');
            document.getElementById("pergunta40000").style.display = "none";
            document.getElementById("pergunta50000").style.display = "block";
        } else {
            document.getElementById("pergunta40000").style.display = "none";
            tocar_audio('errou');
            reinicia_jogo();
        }

        return false;
    }

    /*
        Analisar resposta da pergunta de R$ 50000
    */
    document.getElementById("form-pegunta50000").onsubmit = function () {
        var opcao_correta = "3";
        var opcao_selecionada = this.pergunta50000.value;

        if (opcao_selecionada == opcao_correta) {
            tocar_audio('pergunta-100000');
            document.getElementById("pergunta50000").style.display = "none";
            document.getElementById("pergunta100000").style.display = "block";
        } else {
            document.getElementById("pergunta50000").style.display = "none";
            tocar_audio('errou');
            reinicia_jogo();
        }

        return false;
    }

    /*
        Analisar resposta da pergunta de R$ 100000
    */
    document.getElementById("form-pegunta100000").onsubmit = function () {
        var opcao_correta = "4";
        var opcao_selecionada = this.pergunta100000.value;

        if (opcao_selecionada == opcao_correta) {
            tocar_audio('pergunta-200000');
            document.getElementById("pergunta100000").style.display = "none";
            document.getElementById("pergunta200000").style.display = "block";
        } else {
            document.getElementById("pergunta100000").style.display = "none";
            tocar_audio('errou');
            reinicia_jogo();
        }

        return false;
    }
    
    /*
        Analisar resposta da pergunta de R$ 200000
    */
    document.getElementById("form-pegunta200000").onsubmit = function () {
        var opcao_correta = "1";
        var opcao_selecionada = this.pergunta200000.value;

        if (opcao_selecionada == opcao_correta) {
            tocar_audio('pergunta-300000');
            document.getElementById("pergunta200000").style.display = "none";
            document.getElementById("pergunta300000").style.display = "block";
        } else {
            document.getElementById("pergunta200000").style.display = "none";
            tocar_audio('errou');
            reinicia_jogo();
        }

        return false;
    }
    
    /*
        Analisar resposta da pergunta de R$ 300000
    */
    document.getElementById("form-pegunta300000").onsubmit = function () {
        var opcao_correta = "3";
        var opcao_selecionada = this.pergunta300000.value;

        if (opcao_selecionada == opcao_correta) {
            tocar_audio('pergunta-400000');
            document.getElementById("pergunta300000").style.display = "none";
            document.getElementById("pergunta400000").style.display = "block";
        } else {
            document.getElementById("pergunta300000").style.display = "none";
            tocar_audio('errou');
            reinicia_jogo();
        }

        return false;
    }
    
    /*
        Analisar resposta da pergunta de R$ 400000
    */
    document.getElementById("form-pegunta400000").onsubmit = function () {
        var opcao_correta = "3";
        var opcao_selecionada = this.pergunta400000.value;

        if (opcao_selecionada == opcao_correta) {
            tocar_audio('pergunta-500000');
            document.getElementById("pergunta400000").style.display = "none";
            document.getElementById("pergunta300000").style.display = "block";
        } else {
            document.getElementById("pergunta400000").style.display = "none";
            tocar_audio('errou');
            reinicia_jogo();
        }

        return false;
    }
    
    /*
        Analisar resposta da pergunta de R$ 500000
    */
    document.getElementById("form-pegunta500000").onsubmit = function () {
        var opcao_correta = "4";
        var opcao_selecionada = this.pergunta500000.value;

        if (opcao_selecionada == opcao_correta) {
            tocar_audio('pergunta-600000');
            document.getElementById("pergunta500000").style.display = "none";
            document.getElementById("pergunta1000000").style.display = "block";
        } else {
            document.getElementById("pergunta500000").style.display = "none";
            tocar_audio('errou');
            reinicia_jogo();
        }

        return false;
    }
    
    /*
        Analisar resposta da pergunta de R$ 1000000
    */
    document.getElementById("form-pegunta1000000").onsubmit = function () {
        var opcao_correta = "4";
        var opcao_selecionada = this.pergunta1000000.value;

        if (opcao_selecionada == opcao_correta) {
            tocar_audio('pergunta-100000');
            document.getElementById("pergunta500000").style.display = "none";
            document.getElementById("pergunta1000000").style.display = "block";
        } else {
            document.getElementById("pergunta500000").style.display = "none";
            tocar_audio('errou');
            reinicia_jogo();
        }

        return false;
    }
}

/*
    Função caso o jogador perca.
*/

function reinicia_jogo() {
    document.getElementById("comecar").style.display = "block";
    document.getElementById("btn-comecar").innerHTML = "Jogar Novamente";
}

/*   
    Função para executar a voz do Silvio Santos, em cada uma das ocasiões.
*/
function tocar_audio(qual_tocar) {

    var audio = document.getElementById("silvio-santos");

    switch (qual_tocar) {
        case 'abertura':
            audio.src = "audio/abertura-show-do-milhao.mp3";
            break;

        case 'comecar':
            audio.src = "audio/1000.wav";
            break;

        case 'acertou':
            audio.src = "audio/parabens.wav";
            break;

        case 'ganhou':
            audio.src = "audio/ganhou.wav";
            break;

        case 'errou':
            audio.src = "audio/errou.wav";
            break;
        
        case 'pergunta-2000':
            audio.src = "audio/2000.wav";
            break;

        case 'pergunta-3000':
            audio.src = "audio/3000.wav";
            break;
        
        case 'pergunta-4000':
            audio.src = "audio/4000.wav";
            break;
        
        case 'pergunta-5000':
            audio.src = "audio/5000.wav";
            break;
        
        case 'pergunta-10000':
            audio.src = "audio/10000.wav";
            break;
        
        case 'pergunta-20000':
            audio.src = "audio/20000.wav";
            break;
        
        case 'pergunta-30000':
            audio.src = "audio/30000.wav";
            break;
        
        case 'pergunta-40000':
            audio.src = "audio/40000.wav";
            break;
        
        case 'pergunta-50000':
            audio.src = "audio/50000.wav";
            break;
        
        case 'pergunta-100000':
            audio.src = "audio/100000a.wav";
            break;
        
        case 'pergunta-200000':
            audio.src = "audio/200000.wav";
            break;
        
        case 'pergunta-300000':
            audio.src = "audio/300000.wav";
            break;
        
        case 'pergunta-400000':
            audio.src = "audio/400000.wav";
            break;
        
        case 'pergunta-500000':
            audio.src = "audio/500000.wav";
            break;
        
        case 'pergunta-1000000':
            audio.src = "audio/1000000.wav";
            break;
        
        
    }

    audio.play();
}