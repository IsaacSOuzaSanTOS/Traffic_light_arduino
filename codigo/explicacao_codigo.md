# Classe `Led`

A classe `Led` é uma abstração para controlar LEDs em placas compatíveis com Arduino. Ela permite ligar, desligar e fazer o LED piscar por um determinado tempo, de forma simples e reutilizável.

## Atributos

- **pin**: Número do pino digital onde o LED está conectado.  
- **time**: Intervalo de tempo (em milissegundos) usado para controlar a duração das piscadas do LED.  
- **state**: Estado atual do LED, podendo ser ligado (`true`) ou desligado (`false`).  
- **color**: Cor do LED, utilizada apenas como informação descritiva.

## Construtor

O construtor da classe `Led` inicializa um novo objeto LED, definindo os atributos `pin`, `time` e `color` com os valores fornecidos pelo usuário.  

Ele também define o estado inicial do LED como desligado e configura o pino correspondente como saída digital, permitindo que o LED seja controlado posteriormente pelos métodos da classe.

## Métodos

- **turnOn()**: Liga o LED, atualizando o estado interno para ligado e configurando o pino digital correspondente como HIGH.  

- **turnOff()**: Desliga o LED, atualizando o estado interno para desligado e configurando o pino digital correspondente como LOW.  

- **blinkOnce()**: Faz o LED piscar uma única vez. Primeiro liga o LED, aguarda o tempo definido, depois desliga o LED e aguarda novamente o mesmo intervalo de tempo.  

- **blink(times)**: Faz o LED piscar múltiplas vezes, executando `blinkOnce()` repetidamente pelo número de vezes especificado pelo usuário.

## Funcionamento Geral

A classe `Led` abstrai as operações de controle de um LED em Arduino, permitindo que o usuário:

1. Inicialize um LED em um pino específico com uma cor e tempo de delay configuráveis.  
2. Ligue e desligue o LED de forma direta.  
3. Faça o LED piscar uma ou várias vezes com intervalos definidos.  

Essa abstração facilita o reuso de código e mantém a lógica de controle do LED encapsulada, permitindo que projetos Arduino manipulem LEDs de maneira consistente e organizada.

# Controle de LEDs com Ponteiros

O código demonstra como controlar múltiplos LEDs em um Arduino utilizando **ponteiros para objetos** da classe `Led`. Cada LED é instanciado dinamicamente e controlado individualmente no loop principal.

## Objetivos

- Criar instâncias de LEDs utilizando ponteiros.  
- Configurar diferentes pinos, tempos de delay e cores para cada LED.  
- Ligar e desligar cada LED sequencialmente com tempos distintos.

## Estrutura do Código

### Declaração de Ponteiros

Três ponteiros para objetos `Led` são declarados:

- **red**: ponteiro para o LED vermelho.  
- **green**: ponteiro para o LED verde.  
- **yellow**: ponteiro para o LED amarelo.

### Função `setup()`

No `setup()`, os LEDs são instanciados dinamicamente usando `new`, passando como parâmetros:

1. O **pino digital** do LED.  
2. O **tempo de delay** que será usado para o controle do LED.  
3. A **cor do LED**, usada apenas como informação descritiva.

Isso inicializa cada objeto LED e configura o pino correspondente como saída digital.

### Função `loop()`

No `loop()`, os LEDs são ligados e desligados sequencialmente:

1. **LED vermelho (`red`)**:  
   - Ligado por 6000 ms.  
   - Desligado em seguida.  

2. **LED verde (`green`)**:  
   - Ligado por 4000 ms.  
   - Desligado em seguida.  

3. **LED amarelo (`yellow`)**:  
   - Ligado por 2000 ms.  
   - Desligado em seguida.  

O loop se repete indefinidamente, criando um ciclo contínuo de acionamento dos LEDs com tempos distintos.

## Funcionamento Geral

O uso de ponteiros permite:

- Instanciar objetos dinamicamente durante a execução do programa.  
- Controlar cada LED individualmente, chamando métodos diretamente pelos ponteiros.  
- Gerenciar LEDs com diferentes tempos e cores de maneira organizada.

Essa abordagem é útil em projetos Arduino que envolvem múltiplos LEDs ou outros dispositivos que precisam de controle individual por objetos.
