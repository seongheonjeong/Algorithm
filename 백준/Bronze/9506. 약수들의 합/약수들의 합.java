import java.io.*;
import java.util.StringTokenizer;

public class Main {

    public static void main(String[] args) throws NumberFormatException, IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st;

        while (true) {
            int M = Integer.parseInt(br.readLine());
            if (M == -1) break;

            int sum = 0;
            StringBuilder output = new StringBuilder();

            for (int i = 1; i < M; i++) {
                if (M % i == 0) {
                    sum += i;
                    output.append(i).append(" + ");
                }
            }

            if (sum == M) {
                output.insert(0, M + " = ");
                output.setLength(output.length() - 3); // Remove the last " + "
                bw.write(output.toString());
                bw.newLine();
            }
            else
            {
                bw.write(M+" is NOT perfect."+"\n");
            }
        }

        bw.flush();
        bw.close();
    }
}
