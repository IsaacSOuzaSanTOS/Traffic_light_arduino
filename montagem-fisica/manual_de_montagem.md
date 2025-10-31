# ⚙️ Documentação da Montagem Física do Semáforo

## 🧩 Visão Geral
Esta documentação descreve a montagem física do **semáforo controlado por Arduino**, que simula o funcionamento de um sistema de sinalização real.  
A montagem segue a **mesma lógica definida no código**, alternando as cores **vermelho**, **verde** e **amarelo** em tempos pré-determinados.

---

## 🔧 Componentes Utilizados
- **3 LEDs**: Vermelho, Amarelo e Verde  
- **4 Resistores de 1kΩ**  
- **6 Jumpers Macho–Fêmea** (ligação direta Arduino → LEDs)  
- **4 Jumpers Macho–Macho** (ligações entre trilhas da protoboard)  
- **1 Protoboard**  
- **1 Arduino UNO**  
- **1 Cabo USB** (alimentação e envio do código)

---

## 🔌 Esquema Geral de Conexões

| LED        | Pino Arduino | Tipo de Ligação | Resistor em Série | Observação |
|-------------|---------------|-----------------|--------------------|-------------|
| Vermelho    | 13            | Macho–Fêmea     | 1kΩ                | Representa a luz de **Pare** |
| Amarelo     | 12            | Macho–Fêmea     | 1kΩ                | Representa a luz de **Atenção** |
| Verde       | 11            | Macho–Fêmea     | 1kΩ                | Representa a luz de **Siga** |

> 💡 Os resistores estão conectados em série com o **terminal positivo (anodo)** de cada LED.

---

## ⚙️ Passo a Passo da Montagem

### 1️⃣ Preparação da Protoboard
- Posicione a **protoboard** em uma superfície estável.  
- Conecte o **GND do Arduino** ao **barramento negativo** da protoboard usando um **jumper macho–macho**.  
- Opcionalmente, conecte o **5V do Arduino** ao **barramento positivo** (não obrigatório neste circuito simples).

---

### 2️⃣ Instalação dos LEDs
- Insira os **3 LEDs** na protoboard, alinhados na ordem:
  **vermelho → amarelo → verde**.  
- Deixe uma pequena distância entre eles para facilitar a identificação.  
- **Identifique o anodo e o catodo** de cada LED:
  - **Anodo (perna maior)** → vai para o resistor e, depois, ao pino digital do Arduino.  
  - **Catodo (perna menor)** → vai para o **GND** (barramento negativo).

---

### 3️⃣ Inserção dos Resistores
- Conecte um **resistor de 1kΩ** em série com cada **anodo** dos LEDs.  
- A outra extremidade do resistor deve estar livre para receber o fio que vem do Arduino (via jumper macho–fêmea).  
- O **quarto resistor** pode ser mantido como reserva ou para testes adicionais.

---

### 4️⃣ Conexão dos Jumpers Macho–Fêmea
Como os jumpers **macho–fêmea** foram utilizados para **conectar diretamente nos terminais dos LEDs**, siga esta ordem:

| Cor do LED | Jumper Macho–Fêmea | Conexão no Arduino |
|-------------|--------------------|--------------------|
| Vermelho    | 2 jumpers (anodo e catodo) | Pino 13 (anodo) e GND (catodo) |
| Amarelo     | 2 jumpers (anodo e catodo) | Pino 12 (anodo) e GND (catodo) |
| Verde       | 2 jumpers (anodo e catodo) | Pino 11 (anodo) e GND (catodo) |

> 🔸 Total: **6 jumpers macho–fêmea** (2 por LED).  
> Cada par conecta diretamente o LED ao Arduino, sem depender do barramento da protoboard.

---

### 5️⃣ Conexão dos Jumpers Macho–Macho
- Use **4 jumpers macho–macho** para:
  - Interligar o **GND da protoboard** com o **GND do Arduino** (se desejar redundância).
  - Organizar o barramento negativo, caso mais de um LED compartilhe o mesmo trilho.
  - Fazer eventuais conexões de apoio entre trilhas na protoboard.

---

### 6️⃣ Ligação e Teste
- Conecte o **Arduino ao computador via cabo USB**.  
- Carregue o código `semaforo.ino` usando a **IDE Arduino**.  
- Após o upload, observe a seguinte sequência:
  1. LED vermelho acende por **6 segundos**.  
  2. LED verde acende por **4 segundos**.  
  3. LED amarelo acende por **2 segundos**.  
  4. O ciclo se repete continuamente.

---

## 🧠 Observações Técnicas
- O uso de **jumpers macho–fêmea** facilita a ligação direta ao **terminal do LED**, reduzindo o uso de trilhas na protoboard.  
- A escolha de **resistores de 1kΩ** garante brilho adequado e segurança aos LEDs.  
- O circuito é **alimentado apenas via USB**, não exigindo fonte externa.  
- A montagem segue rigorosamente a **mesma lógica de controle do código**, garantindo correspondência entre hardware e software.

---

## 🖼️ Como deve ficar

Segue 2 imagens do circuito montado para auxiliar

![Protoboard montada](/montagem-fisica/circuito2.jpg)

![Semáforo montado](/montagem-fisica/circuito1.jpg)
