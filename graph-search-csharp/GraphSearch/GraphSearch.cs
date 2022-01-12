// ------------------------------------------------------------------------------
// <copyright company="Microsoft Corporation">
//     Copyright (c) Microsoft Corporation. All rights reserved.
// </copyright>
// ------------------------------------------------------------------------------

using System.Collections.Generic;

namespace GraphSearch
{
    public static class GraphSearch
    {
        public static HashSet<T> DepthFirstSearch<T>(Graph<T> graph, T start)
        {
            var visited = new HashSet<T>();
            if (!graph.AdjacencyList.ContainsKey(start)) return visited;

            var stack = new Stack<T>();
            stack.Push(start);
            while (stack.Count > 0)
            {
                var vertex = stack.Pop();
                if (visited.Contains(vertex))
                    continue;

                visited.Add(vertex);
                foreach (var adjacent in graph.AdjacencyList[vertex])
                {
                    if (!visited.Contains(adjacent))
                    {
                        stack.Push(adjacent);
                    }
                }
            }

            return visited;
        }

        public static HashSet<T> BreadthFirstSearch<T>(Graph<T> graph, T start)
        {
            var visited = new HashSet<T>();
            if (!graph.AdjacencyList.ContainsKey(start)) return visited;

            var queue = new Queue<T>();
            queue.Enqueue(start);

            while (queue.Count > 0)
            {
                var vertex = queue.Dequeue();
                if (visited.Contains(vertex))
                    continue;

                visited.Add(vertex);
                foreach (var adjacent in graph.AdjacencyList[vertex])
                {
                    if (!visited.Contains(adjacent))
                    {
                        queue.Enqueue(adjacent);
                    }
                }
            }

            return visited;
        }
    }
}
