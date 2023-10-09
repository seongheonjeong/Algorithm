import java.io.*;
import java.util.StringTokenizer;

class Stack {
    int[] stack = new int[1000001];
    int top = -1;

    public void push(int n) {
        stack[++top] = n;
    }

    public int pop() {
        if (empty() == 0)
            return stack[top--];
        else
            return -1;
    }

    public int size() {
        return top + 1;
    }

    public int empty() {
        if (top == -1)
            return 1;
        else
            return 0;
    }

    public int top() {
        if (empty() == 0)
            return stack[top];
        else
            return -1;
    }
}

public class Main {
    public static void main(String[] args) throws NumberFormatException, IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        int N = Integer.parseInt(br.readLine());
        StringTokenizer st;
        Stack s = new Stack();
        for (int i = 0; i < N; i++) {
            st = new StringTokenizer(br.readLine());

            int num = Integer.parseInt(st.nextToken());
            switch (num) {
                case 1:
                    s.push(Integer.parseInt(st.nextToken()));
                    break;
                case 2:
                    bw.write(s.pop() + "\n");
                    break;
                case 3:
                    bw.write(s.size() + "\n");
                    break;
                case 4:
                    bw.write(s.empty() + "\n");
                    break;
                case 5:
                    bw.write(s.top() + "\n");
                    break;
            }
        }

        br.close();
        bw.close();
    }
}
