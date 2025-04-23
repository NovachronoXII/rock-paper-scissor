# **Pedra, Papel e Tesoura em C** 🎮  

🔹 Um jogo simples de **Pedra, Papel e Tesoura** desenvolvido em **C**, onde você enfrenta o computador em uma batalha clássica!  

<p align="center">
  <img src="https://media.giphy.com/media/xULW8DcQ4P4XFX3x44/giphy.gif" alt="Pedra Papel Tesoura" width="300">
</p>

---

## **🚀 Como Jogar**  
1. Escolha uma das opções:  
   - **1** para **Pedra** ✊  
   - **2** para **Papel** ✋  
   - **3** para **Tesoura** ✌️  
   - **0** para **Sair** do jogo  
2. O computador escolherá aleatoriamente sua "arma".  
3. Veja quem ganhou e jogue novamente!  

---

## **⚙️ Funcionalidades**  
✅ **Validação de entrada** (só aceita números).  
✅ **Tratamento de erros** (se digitar letras ou opções inválidas).  
✅ **Lógica de vitória/derrota/empate** seguindo as regras clássicas:  
   - **Pedra** quebra **Tesoura**  
   - **Papel** cobre **Pedra**  
   - **Tesoura** corta **Papel**  

---

## **📥 Como Executar**  

### **Pré-requisitos**  
- Compilador **GCC** (ou outro compilador C).  
- Terminal (Linux/Mac) ou **Prompt de Comando** (Windows).  

### **Passos**  
1. **Clone o repositório** (ou baixe o arquivo `jogo.c`):  
   ```bash
   git clone https://github.com/seu-usuario/pedra-papel-tesoura.git
   cd pedra-papel-tesoura
   ```
2. **Compile o código**:  
   ```bash
   gcc jogo.c -o jogo
   ```
3. **Execute**:  
   ```bash
   ./jogo  # No Linux/Mac
   jogo.exe  # No Windows (se compilado lá)
   ```

---

## **📁 Estrutura do Código**  
```plaintext
pedra-papel-tesoura/
│── jogo.c          # Código fonte principal
│── README.md       # Este arquivo
```

---

## **🔍 Detalhes Técnicos**  
- **`rand()` e `srand(time(0))`** para gerar escolhas aleatórias do computador.  
- **`switch-case`** para tratar as opções do jogador.  
- **Limpeza de buffer** (`while (getchar() != '\n')`) para evitar loops infinitos.  

---

## **🤝 Como Contribuir**  
1. Faça um **fork** do projeto.  
2. Crie uma **branch** com sua melhoria:  
   ```bash
   git checkout -b minha-feature
   ```
3. Envie um **Pull Request** explicando suas alterações.  

---

## **📜 Licença**  
Este projeto está sob a licença **MIT**.  

--- 

<p align="center">
  ⭐️ **Deixe uma estrela no repositório se gostou!** ⭐️  
</p>

--- 

🔗 **Link para o repositório**: [github.com/seu-usuario/pedra-papel-tesoura](https://github.com/seu-usuario/pedra-papel-tesoura)  

--- 

✨ **Divirta-se jogando!** ✨  
