import networkx as nx
import matplotlib.pyplot as plt

def read_adjacency_list(file_path):
    graph = nx.DiGraph()
    with open(file_path, "r") as file:
        for line in file:
            parts = line.strip().split(" -> ")
            source = int(parts[0])
            for dest in parts[1:]:
                graph.add_edge(source, int(dest))
    return graph

def plot_graph(graph, output_image="graph.png"):
    plt.figure(figsize=(8, 6))
    pos = nx.spring_layout(graph)  # Layout for better visualization
    nx.draw(graph, pos, with_labels=True, node_color='lightblue', node_size=1500, font_size=12, font_weight='bold', edge_color='gray')
    plt.title("Graph Visualization")
    plt.savefig(output_image)
    print(f"Graph image saved as {output_image}")
    plt.show()

if __name__ == "__main__":
    adjacency_list_file = "instances_adjacency_list_files/graph_1.txt"  # Arquivo gerado no C++
    graph = read_adjacency_list(adjacency_list_file)
    plot_graph(graph)
