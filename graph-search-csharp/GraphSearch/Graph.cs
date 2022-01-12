using System;
using System.Collections.Generic;

namespace GraphSearch
{
    public class Graph<T>
    {
        public Graph(bool isDirected = true)
        {
            IsDirected = isDirected;
        }

        public Graph(IEnumerable<T> vertices, IEnumerable<Tuple<T, T>> edges, bool isDirected = true) : this(isDirected)
        {
            foreach (var vertex in vertices)
            {
                AddVertex(vertex);
            }

            foreach (var edge in edges)
            {
                AddEdge(edge);
            }
        }

        public Dictionary<T, HashSet<T>> AdjacencyList => new Dictionary<T, HashSet<T>>();
        public bool IsDirected { get; }

        public void AddVertex(T vertex)
        {
            AdjacencyList[vertex] = new HashSet<T>();
        }

        public void AddEdge(Tuple<T, T> edge)
        {
            if (!AdjacencyList.ContainsKey(edge.Item1))
            {
                AddVertex(edge.Item1);
            }

            AdjacencyList[edge.Item1].Add(edge.Item2);

            if (!IsDirected)
            {
                AdjacencyList[edge.Item2].Add(edge.Item1);
            }
        }
    }
}
