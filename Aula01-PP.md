# Aula 01 Processamento Paralelo
## Processamento de alto desempenho Computacao heterogenia:
    - https://top500.org/
    - Alto processamento em pequenos componentes
        * Permite processamento de algoritmos em sistemas embarcados
    - Transistores compoe o núcleo do processador
    - Lei de amdahl
    - " uma forma eficiente do processamento de informação com enfase na execução de tarefas concorrentes"
    - Eventos pararelos
	    ============
	        ======
	=================
    - Eventos simultaneos
	============
	=======
	===============
    - Eventos Sobreposto (Divisão em funções)
	        |==f1==|==f2==|==f3==|
	    |==f1==|==f2==|==f3==|
	|==f1==|==f2==|==f3==|
		as vzs uma função depende do fim da outra 

## Niveis de paralelismo: complexidade/desempenho
	1-programas
	2-Threads
	3-Dados
	4-Instruções
	5-Intra-instruções
Sempre haverá um main e um cod paralelo
    - A limitação do sequencial é que depende da velocidade do processador chegará um momento que não haverá ganho de velocidade
    - A depender do problema, "Realmente necessário usar Prog. Paralela"
    - Nao existe somente uma alternativa: somente CPU ou somente GPU

## classificação dos computadores paralelos taxonomia de Flyn
	SISD -> Single Instruction Stream, Single Data Stream -> sequencial
	SIMD -> Single Instruction Stream, Multiple Data Stream -> unica instrução e multiplos dados.
	MISD -> Multiple Instruction Stream, Single Data Stream -> n existem
	MIMD -> Multiple Instruction Stream, Multiple Data Stream -> arquiteturas com multiplos processadores independentes
pipeline aplicado ao processamento de imagens
pipeline de filtros.

## desafios
	Mais controle do codigo mas o software deve ser adaptado, tudo será controlado, qual memoria, quantidade de memoria. Definir a organização dos dados.
	Particionamento.... como juntar, como trocar os dados com os processadores
	Coordenação ... quem irá processar primeiro
## Soluções:
	processamento multi-thread
	Interconexao
	Hierarquias de Memória -> velocidade
	multiprocessamento massivo e heterogenio

Tamanho do batch superior a capacidade da memoria
Como quebrar?
 	