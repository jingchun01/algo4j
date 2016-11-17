package org.ice1000.graph;

/**
 * Created by ice1000 on 2016/11/17.
 *
 * @author ice1000
 */
public final class FrontStarGraph {
	private long[] next;
	private long[] head;
	private long[] target;
	private long[] value;
	private int nodeCount;
	private int edgeCount;
	private int addingEdgeIndex = 0;

	public static final int INFINITY = 0x7f7f7f7f;
	public static final int INFINITY_FILLING = 0x7f;

	public FrontStarGraph(int nodeCount, int edgeCount) {
		this.nodeCount = nodeCount;
		this.edgeCount = edgeCount;
		next = new long[edgeCount];
		target = new long[edgeCount];
		value = new long[edgeCount];
		head = new long[nodeCount];
	}

	public void addEdge(int from, int to, int val) {
		target[addingEdgeIndex] = to;
		value[addingEdgeIndex] = val;
		next[addingEdgeIndex] = head[from];
		head[from] = addingEdgeIndex++;
	}

	public long[] spfa(int source) {
		return spfa(source, next, head, target, value, edgeCount, nodeCount);
	}

	/**
	 * The Kruskal algorithm, minimum spanning tree
	 *
	 * @return the length of the minimum spanning tree
	 */
	public long kruskal() {
		return kruskal(next, head, target, value, edgeCount, nodeCount);
	}

	/**
	 * @param source    start node id
	 * @param next      memset(next, -1, sizeof(next))
	 * @param head      memset(next, -1, sizeof(next))
	 * @param target    memset(next, -1, sizeof(next))
	 * @param value     memset(next, -1, sizeof(next))
	 * @param edgeCount edges
	 * @param nodeCount nodes
	 */
	private native long[] spfa(int source, long[] next, long[] head, long[] target, long[] value, int edgeCount, int nodeCount);

	/**
	 * @param next      memset(next, -1, sizeof(next))
	 * @param head      memset(next, -1, sizeof(next))
	 * @param target    memset(next, -1, sizeof(next))
	 * @param value     memset(next, -1, sizeof(next))
	 * @param edgeCount edges
	 * @param nodeCount nodes
	 */
	private native long kruskal(long[] next, long[] head, long[] target, long[] value, int edgeCount, int nodeCount);
}
