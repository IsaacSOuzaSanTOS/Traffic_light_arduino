# 📘 Documentação dos Componentes Utilizados

## 🧩 Visão Geral
A seguir estão listados todos os componentes utilizados na montagem do **semáforo com Arduino**, incluindo suas funções no circuito e observações sobre uso e ligação.

---

## 🔧 Tabela de Componentes

| Componente | Quantidade | Especificação | Função no Circuito | Observações |
|-------------|-------------|----------------|--------------------|--------------|
| **LED Verde** | 1 | 5mm | Indica a fase **“Siga”** do semáforo. | Conectado a um pino digital do Arduino, acende por 4 segundos. |
| **LED Amarelo** | 1 | 5mm | Indica a fase **“Atenção”**. | Acende por 2 segundos para alertar antes do vermelho. |
| **LED Vermelho** | 1 | 5mm | Indica a fase **“Pare”**. | Acende por 6 segundos, bloqueando o tráfego. |
| **Resistores** | 4 | 1kΩ (±5%) | Limitam a corrente que passa pelos LEDs, evitando que queimem. | Um resistor em série com cada LED; o quarto pode ser reserva/teste. |
| **Jumpers Macho–Fêmea** | 6 | 20cm (aprox.) | Conectam o Arduino aos terminais da protoboard. | Usados principalmente para ligar os pinos digitais aos LEDs. |
| **Jumpers Macho–Macho** | 4 | 10–20cm | Conectam componentes dentro da protoboard. | Usados para distribuir GND e 5V. |
| **Protoboard** | 1 | 400 pontos | Base para montagem do circuito sem solda. | Facilita ajustes e testes de conexão. |
| **Arduino UNO** | 1 | ATmega328P | Microcontrolador que controla o tempo e as fases do semáforo. | Alimentado via cabo USB e programado pela IDE Arduino. |
| **Cabo USB** | 1 | USB tipo A → B | Alimenta e transfere o código para o Arduino. | Mantém o Arduino ligado ao computador durante os testes. |

---

## ⚙️ Esquema Geral de Conexões

- Cada LED está ligado a um **pino digital** do Arduino:
  - Vermelho → pino **13**
  - Amarelo → pino **12**
  - Verde → pino **11**
- O terminal **GND** do Arduino está conectado ao **barramento negativo** da protoboard.
- Cada LED possui um **resistor de 1kΩ** em série no **terminal positivo (anodo)**.
- Os jumpers **macho-fêmea** conectam os pinos do Arduino aos pontos da protoboard.
- Os jumpers **macho-macho** interligam as trilhas da protoboard (GND e alimentação).

---

## 🧠 Justificativas Técnicas

- **Resistores de 1kΩ** foram escolhidos por fornecerem uma corrente segura (~5mA) aos LEDs, garantindo brilho suficiente sem risco de dano.  
- O uso de **protoboard** permite testar a sequência do semáforo sem necessidade de solda, ideal para prototipagem.  
- A separação entre **jumpers macho-fêmea** e **macho-macho** facilita o entendimento das conexões entre o Arduino e os componentes da protoboard.  
- A **alimentação via cabo USB** simplifica o uso, dispensando fontes externas.

---

## 🖼️ Sugestão de Organização Visual
Para melhor apresentação do circuito:
- Posicione os LEDs em linha, seguindo a ordem: **vermelho → amarelo → verde**.
- Mantenha os resistores próximos aos LEDs correspondentes.
- Use fios de **cores diferentes** (ex: vermelho para 5V, preto para GND, outras cores para sinais).
- Evite cruzar fios para facilitar o entendimento do circuito.

---

## 🧾 Conclusão
Os componentes escolhidos permitem montar um **semáforo funcional, seguro e didático**, simulando com fidelidade o comportamento de um sistema real de controle de tráfego urbano.  
A combinação de LEDs, resistores e Arduino garante simplicidade no circuito e facilidade na programação da sequência de luzes.

---