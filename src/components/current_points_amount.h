class current_points_amount {
public:
    current_points_amount() : points_amount(0) {}

    int get_points_amount() const {
        return points_amount;
    }

    void set_points_amount(int pointsAmount) {
        points_amount = pointsAmount;
    }

private:
    int points_amount;
};
