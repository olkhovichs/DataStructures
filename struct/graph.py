from queue import Queue

def graph():
    a, b, c, d, e, f, g, h = range(8)
    n = [
        {b, c, d, e, f}, # a
        {c, e}, # b
        {d}, # c
        {e}, # d
        {f}, # e
        {c, g, h}, # f
        {f, h}, # g
        {f, g}, # h
    ]
    return n

def bfs():
    letters = 'abcdefgh'
    queue = Queue()
    visited_nodes = dict()
    begin_node = graph()[0]
    target_node = graph()[-1]

    queue.put(begin_node)
    visited_nodes = {begin_node}

    while True:
        temp = queue.get()
        print('Обходим узел', letters[temp])

        if temp == target_node:
            print('Поиск завершен')
            break
        else:
            for node in n[temp]:
                print('Смотрим ребро', letters[node])
                if not(node in visited_nodes):
                    print('Узел: ', letters[node], 'добавили в очередь')
                    visited_nodes.add(node)
                    queue.put(node)
        
        if queue.empty():
            print('Вершина: ', letters[temp], 'не найдена')

