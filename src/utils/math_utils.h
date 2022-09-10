class math_utils {
public:
    static int triangle_num(int num){
        return num * (num + 1) / 2;
    }

    static int cantor_func(int fir_num, int sec_num) {
        return triangle_num(fir_num + sec_num) + sec_num;
    }
};

