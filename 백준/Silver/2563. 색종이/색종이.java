import java.io.*;
import java.util.HashMap;
import java.util.HashSet;
import java.util.StringTokenizer;

public class Main {

    public static void main(String[] args) throws NumberFormatException, IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st;

        int N = Integer.parseInt(br.readLine());
        int[][] arr = new int[101][101];
        int answer = 0;
        for (int i = 0; i < N; i++) {
            st = new StringTokenizer(br.readLine());
            int x = Integer.parseInt(st.nextToken());
            int y = Integer.parseInt(st.nextToken());
            for (int x1 = x; x1 < x + 10; x1++)
                for (int y1 = y; y1 < y + 10; y1++)
                    arr[x1][y1] = 1;
        }
        for (int j = 0; j < 100; j++) {
            for (int k = 0; k < 100; k++) {
                answer += arr[j][k];
            }
        }
        System.out.println(answer);
        bw.flush();
        bw.close();
    }

}