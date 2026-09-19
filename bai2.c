#include <stdio.h>

int main() {
    int vehicle_type;
    double distance;
    int is_peak_or_rain;
    double base_fare = 0.0;
    double total_fare = 0.0;

    printf("Nhap ma loai xe (1: GrabBike, 2: GrabCar): ");
    scanf("%d", &vehicle_type);
    printf("Nhap quang duong di chuyen (km): ");
    scanf("%lf", &distance);
    printf("Trang thai phu phi (1: Co, 0: Khong): ");
    scanf("%d", &is_peak_or_rain);

    if (distance <= 0.0 || distance > 300.0) {
        printf("Loi: Khoang cach khong hop le.\n");
        return 0;
    }

    if (vehicle_type != 1 && vehicle_type != 2) {
        printf("Loi: Ma loai xe khong hop le.\n");
        return 0;
    }

    if (is_peak_or_rain != 0 && is_peak_or_rain != 1) {
        printf("Loi: Trang thai phu phi khong hop le.\n");
        return 0;}
    if (vehicle_type == 1) {
        if (distance <= 2.0) {
            base_fare = 12000.0;
        } else {
            base_fare = 12000.0 + (distance - 2.0) * 4500.0;
        }
    } else if (vehicle_type == 2) {
        if (distance <= 2.0) {
            base_fare = 25000.0;} 
            else {
            base_fare = 25000.0 + (distance - 2.0) * 10000.0;}}
    if (is_peak_or_rain == 1) {
        total_fare = base_fare * 1.2;
    } else {
        total_fare = base_fare;}
    printf("Tong cuoc phi chuyen xe: %.0f VND\n", total_fare);
    return 0;
}
