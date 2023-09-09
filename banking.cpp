#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <chrono>
#include <thread>
#include <cstdlib>
#include <conio.h>
using namespace std;
using namespace std::this_thread; // sleep_for, sleep_until
using namespace std::chrono; // nanoseconds, system_clock, seconds
int main()
{
    system("cls");
    cout << "\n-----------------------------------------";
    char ho_ten[100];
    int tuoi;
    cout << "\nVUI LONG NHAP USER NAME CUA BAN : ";
    cin >> ho_ten;
    sleep_for(nanoseconds(10));
    sleep_until(system_clock::now() + seconds(1));
    printf("VUI LONG NHAP TUOI CUA BAN : \n"); 
    cin >> tuoi;
    cout << "\n-----------------------------------------";
    system("CLS");
    printf("\n-----------------------------------------");
    int pass_word;
    int pass_word_again;
    cout << "\nVUI LONG NHAP MAT KHAU : ";
    cin >> pass_word;
    sleep_for(nanoseconds(10));
    sleep_until(system_clock::now() + seconds(1));
    if (pass_word < 1000){
        printf("\nBAN DA NHAP SAI MAT KHAU !");
        sleep_for(nanoseconds(10));
        sleep_until(system_clock::now() + seconds(1));
        printf("\nVUI LONG NHAP LAI MAT KHAU : ");
        cin >> pass_word_again;
        if (pass_word_again < 1000){
            printf("\nBAN DA NHAP SAI MAT KHAU !");
            sleep_for(nanoseconds(10));
            sleep_until(system_clock::now() + seconds(1));
            printf("\nHE THONG SE TU DONG OUT");
            sleep_for(nanoseconds(10));
            sleep_until(system_clock::now() + seconds(1));
            printf("\nDANG NHAP KHONG THANH CONG");
            exit(0);
        }
    }
    if (pass_word > 1000){
        if (pass_word_again > 1000){
            printf("LOGIN THANH CONG");
        }
    }
    printf("\n-----------------------------------------");
    system("cls");
    int key;
    char account_bank[100],account_bank_2[100];
    int age_bank,age_bank_2;
    int count_account_bank;
    int the_bank,the_bank_2,the_bank_3;
    int reg_bank;
    float money_pay , money_pay_again;
    int the_pay;
    char name_bank[100];
    float global_bank,global_bank_2;
    int sum_bank;
    int pass_word_check,pass_word_check_2;
    char user_name_check[100];
    int pass_word_reset;
    int key_cskh;
    char error_sever[100000000];
    int out_key;
    cout << "\n-----------------------------------------";
        cout << "\nBAN TEN LA "<<ho_ten<<" VUA DANG NHAP VAO HE THONG \n";
        printf("*************************MENU**************************\n");
        printf("* 1.TAO TAI KHOAN NGAN HANG                           *\n");
        printf("* 2.THEM TAI KHOAN NGAN HANG                          *\n");
        printf("* 3.THEM THE NGAN HANG                                *\n");
        printf("* 4.CHUYEN TIEN NOI DIA NGAN HANG                     *\n");
        printf("* 5.CHUYEN TIEN NGOAI NGAN HANG                       *\n");
        printf("* 6.LAY LAI MAT KHAU                                  *\n");
        printf("* 7.LIEN HE CHAN SOC KHACH HANG                       *\n");
        printf("*******************************************************\n");
        printf(" - MOI BAN NHAP TUY CHON : ");
        cin >> key;
        switch(key){
            case 1: 
                printf("1.TAO TAI KHOAN NGAN HANG\n");
                cout << "- MOI BAN NHAP USER NAME CAN TAO :\n"; 
                cin >> account_bank;
                sleep_for(nanoseconds(10));
                sleep_until(system_clock::now() + seconds(1));
                printf("- MOI BAN NHAP SO TUOI\n : ");
                cin >> age_bank;
                if (age_bank > 16){
                    printf("BAN DA TAO TAI KHOAN THANH CONG\n");
                }  else if (age_bank < 16){
                    printf("BAN CHUA DU TUOI TAO TAI KHOAN\n");
                    exit(0);
                }
                break;
            case 2:
                printf("2.THEM TAI KHOAN NGAN HANG\n");
                printf("- MOI BAN NHAP SO TAI KHOAN NGAN HANG DANG CO : \n"); cin >> count_account_bank;
                if (count_account_bank > 1){
                    printf("BAN DU TIEU CHUAN TAO THEM \n");
                    cout << " - MOI BAN NHAP USER NAME CAN TAO : \n";
                    cin >> account_bank_2;
                    sleep_for(nanoseconds(10));
                    sleep_until(system_clock::now() + seconds(1));
                    printf("- MOI BAN NHAP SO TUOI : \n");
                    cin >> age_bank_2;
                    }
                if (count_account_bank > 2){
                    printf("BAN KHONG DU DIEU KIEN TAO !\n");
                    sleep_for(nanoseconds(10));
                    sleep_until(system_clock::now() + seconds(1));
                    printf("BAN DA CO 2 TAI KHOAN\n");
                    exit(0);
                }
                break;
            case 3: 
                printf("3.THEM THE NGAN HANG\n");
                sleep_for(nanoseconds(10));
                sleep_until(system_clock::now() + seconds(1));
                printf("- MOI BAN NHAP MAT KHAU CUA BAN : \n");
                cin >> pass_word_check;
                if (pass_word = pass_word_check){
                    printf("BAN DA NHAP SAI MAT KHAU \n");
                    sleep_for(nanoseconds(10));
                    sleep_until(system_clock::now() + seconds(1));
                    printf("MOI BAN NHAP LAI MAT KHAU : \n");
                    cin >> pass_word_check_2;
                    if (pass_word_check_2 = pass_word){
                        printf("BAN DA NHAP MAT KHAU THANH CONG");
                        sleep_for(nanoseconds(10));
                        sleep_until(system_clock::now() + seconds(1));
                        printf("HE THONG SE TIEP TUC");
                    }
                }
                printf("- MOI BAN NHAP SO THE DANG CO : \n");
                cin >> the_bank;
                if (the_bank > 1){
                    printf("BAN DU DIEU KIEN TAO THEM THE NGAN HANG\n");
                }
                printf("- MOI BAN NHAP TAI KHOAN CAN TAO THE : \n"); cin >> reg_bank;
                if (reg_bank = 1){
                    printf("- MOI BAN NHAP SO THE CAN TAO : \n"); cin >> the_bank_2;
                    sleep_for(nanoseconds(10));
                    sleep_until(system_clock::now() + seconds(1));
                    printf("- BAN DA TAO THE THANH CONG \n");
                    cout << "TAI KHOAN "<<account_bank<<" TAO THANH CONG THE "<<the_bank_2<<"";
                } else if (reg_bank = 2){
                    printf("- MOI BAN NHAP SO THE CAN TAO : \n"); the_bank_3;
                    sleep_for(nanoseconds(10));
                    sleep_until(system_clock::now() + seconds(1));
                    printf("- BAN DA TAO THE THANH CONG \n");
                    sleep_for(nanoseconds(10));
                    sleep_until(system_clock::now() + seconds(1));
                    cout << "TAI KHOAN "<<account_bank_2<<" TAO THANH CONG THE "<<the_bank_3<<"";
                }
                break;
            case 4:
                printf("4.CHUYEN TIEN NOI DIA NGAN HANG\n");
                sleep_for(nanoseconds(10));
                sleep_until(system_clock::now() + seconds(1));
                printf("- MOI BAN NHAP MAT KHAU CUA BAN : \n");
                cin >> pass_word_check;
                if (pass_word = pass_word_check){
                    printf("BAN DA NHAP SAI MAT KHAU \n");
                    sleep_for(nanoseconds(10));
                    sleep_until(system_clock::now() + seconds(1));
                    printf("MOI BAN NHAP LAI MAT KHAU : \n");
                    cin >> pass_word_check_2;
                    if (pass_word_check_2 = pass_word){
                        printf("BAN DA NHAP MAT KHAU THANH CONG");
                        sleep_for(nanoseconds(10));
                        sleep_until(system_clock::now() + seconds(1));
                        printf("HE THONG SE TIEP TUC");
                    }
                }
                printf("- XIN CHAO BAN DEN VOI MUC CHUYEN TIEN NGAN HANG\n");
                sleep_for(nanoseconds(10));
                sleep_until(system_clock::now() + seconds(1));
                printf("- NHAP SO TIEN CAN CHUYEN : \n"); 
                cin >> money_pay;
                if (money_pay < 10.000){
                    printf("SO TIEN BAN NHAP DUOI 10.000 NGHIN DONG \n");
                    sleep_for(nanoseconds(10));
                    sleep_until(system_clock::now() + seconds(1));
                    printf("MOI BAN NHAP LAI SO TIEN CAN CHUYEN\n"); 
                    cin >> money_pay_again;
                } else if (money_pay_again < 10.000){
                    printf("SO TIEN BAN NHAP DUOI 10.000\n");
                    sleep_for(nanoseconds(10));
                    sleep_until(system_clock::now() + seconds(1));
                    printf("BAN DA NHAP KHONG HOP LE QUA NHIEU LAN \n");
                    sleep_for(nanoseconds(10));
                    sleep_until(system_clock::now() + seconds(1));
                    printf("HE THONG SE TU DONG OUT \n");
                }
                printf("- MOI BAN NHAP THE DE CHUYEN : \n"); 
                cin >> the_pay;
                if (the_pay = 1){
                    cout << "THE SO 1 DA CHUYEN VOI SO TIEN "<<money_pay<<" NGHIN DONG\n";
                    sleep_for(nanoseconds(10));
                    sleep_until(system_clock::now() + seconds(1));
                    cout << "DA TRU SO TIEN " <<money_pay<<" VAO THE 1 CUA BAN\n";
                } else if (the_pay = 2){
                    cout << "THE SO 2 DA CHUYEN VOI SO TIEN "<<money_pay<<" NGHIN DONG" << endl; 
                    sleep_for(nanoseconds(10));
                    sleep_until(system_clock::now() + seconds(1));
                    cout << "DA TRU SO TIEN " <<money_pay<< " VAO THE 2 CUA BAN" << endl;
                }
                break;
            case 5:
                printf("5.CHUYEN TIEN NGOAI NGAN HANG\n");
                sleep_for(nanoseconds(10));
                sleep_until(system_clock::now() + seconds(1));
                printf("- BAN DA DEN VOI CHUC NANG CHUYEN TIEN NGOAI NGAN HANG\n");
                sleep_for(nanoseconds(10));
                sleep_until(system_clock::now() + seconds(1));
                printf("- MOI BAN NHAP MAT KHAU CUA BAN : \n");
                cin >> pass_word_check;
                if (pass_word = pass_word_check){
                    printf("BAN DA NHAP SAI MAT KHAU \n");
                    sleep_for(nanoseconds(10));
                    sleep_until(system_clock::now() + seconds(1));
                    printf("MOI BAN NHAP LAI MAT KHAU : \n");
                    cin >> pass_word_check_2;
                    if (pass_word_check_2 = pass_word){
                        printf("BAN DA NHAP MAT KHAU THANH CONG");
                        sleep_for(nanoseconds(10));
                        sleep_until(system_clock::now() + seconds(1));
                        printf("HE THONG SE TIEP TUC");
                    }
                }
                printf("- MOI BAN NHAP TEN NGAN HANG : ");
                cin >> name_bank;
                sleep_for(nanoseconds(10));
                sleep_until(system_clock::now() + seconds(1));
                printf("- MOI BAN NHAP SO TAI KHOAN CAN CHUYEN : ");
                cin >> sum_bank;
                if (sum_bank > 1000000000){
                    printf("- NHAP THANH CONG \n");
                } else if (sum_bank < 1000000000) {
                    printf(" - BAN NHAP KHONG HOP LE\n");
                }
                printf("- MOI BAN NHAP SO TIEN CAN CHUYEN : "); cin >> global_bank;
                if (global_bank < 10.000){
                    printf("SO TIEN BAN NHAP KHONG HOP LE\n");
                    sleep_for(nanoseconds(10));
                    sleep_until(system_clock::now() + seconds(1));
                    printf("MOI BAN NHAP LAI SO TIEN : \n");
                    cin >> global_bank_2;
                } else if (global_bank_2 < 10.000){
                    printf("SO TIEN BAN NHAP KHONG HOP LE\n");
                    sleep_for(nanoseconds(10));
                    sleep_until(system_clock::now() + seconds(1));
                    printf("HE THONG SE TU DONG OUT\n");
                    exit(0);
                }
                if (global_bank > 10.000){
                    if (global_bank_2 > 10.000){
                        printf("BAN DA CHUYEN TIEN THANH CONG\n");
                        sleep_for(nanoseconds(10));
                        sleep_until(system_clock::now() + seconds(1));
                        cout << "BAN DA CHUYEN SO TIEN "<<global_bank<<" VAO TAI KHOAN "<<sum_bank;
                    }
                }
                break;
            case 6:
                printf("6.LAY LAI MAT KHAU\n ");
                sleep_for(nanoseconds(10));
                sleep_until(system_clock::now() + seconds(1));
                printf("- BAN DA DEN VOI PHAN LAY LAI MAT KHAU\n");   
                sleep_for(nanoseconds(10));
                sleep_until(system_clock::now() + seconds(1));
                printf("- MOI BAN NHAP LAI USER NAME\n"); cin >> user_name_check;
                sleep_for(nanoseconds(10));
                sleep_until(system_clock::now() + seconds(1)); 
                printf("- MOI BAN NHAP MAT KHAU : \n"); 
                cin >> pass_word_reset;
                if (pass_word_reset > 1000){
                    printf("- RESET MAT KHAU THANH CONG\n");
                } else if(pass_word_reset < 1000){
                    printf("- RESET KHONG THANH CONG\n");
                }
                break;
            case 7:
                printf("7.LIEN HE CHAN SOC KHACH HANG \n");
                printf("- CHAO MUNG BAN DEN VOI LIEN HE CHAN SOC KHACH HANG\n");
                printf("- MOI BAN NHAP SO 1 DE BAO CAO VAN DE\n");
                printf("- MOI BAN NHAP SO 2 DE THOAT RA TRANG CHU\n");
                printf("- MOI BAN NHAP SO 3 DE LIEN HE TRUC TIEP VOI NHAN VIEN CSKH\n");
                printf("- MOI BAN NHAP SO 4 DE THOAT RA HE THONG\n");
                printf("- MOI BAN NHAP SO 5 DE DOC DIEU KHOAN \n");
                printf("- MOI BAN NHAP LUA CHON VAO DAY : \n");
                cin >> key_cskh;
                switch (key_cskh)
                {
                case 1:
                    printf("- MOI BAN NHAP VAN DE VAO DAY : \n");
                    cin >> error_sever;
                    printf("- YEU CAU CUA BAN SE DUOC XU LY TRONG THOI GIAN SOM NHAT\n");
                    printf("- CAM ON BAN DA DONG GOP Y KIEN !\n");
                    break;
                case 2:
                    printf("- BAN MUON THOAT RA TRANG CHU KHONG\n");
                    printf("ENTER DE EXIT.\n");
                    sleep_for(nanoseconds(10));
                    sleep_until(system_clock::now() + seconds(1));
                    printf("SE THOAT TRONG : \n");
                    printf("1\n");
                    sleep_for(nanoseconds(10));
                    sleep_until(system_clock::now() + seconds(1));
                    printf("2\n");
                    sleep_for(nanoseconds(10));
                    sleep_until(system_clock::now() + seconds(1));
                    printf("3\n");
                    sleep_for(nanoseconds(10));
                    sleep_until(system_clock::now() + seconds(1));
                    exit(0);
                    break;
                case 3:
                    printf("- BAN SE DUOC LIEN HE VOI CSKH TRONG GIAY LAT \n");
                    sleep_for(nanoseconds(10));
                    sleep_until(system_clock::now() + seconds(1));
                    printf("- QUY KHACH VUI LONG DOI TRONG 10S DE DUOC LIEN HE VOI CSKH\n");
                    sleep_for(nanoseconds(10));
                    sleep_until(system_clock::now() + seconds(1));
                    printf("https://www.facebook.com/phannguyentuanthanh.info\n");
                    break;
                case 4:
                    printf("- BAN MUON THOAT RA KHOI HE THONG KHONG \n");
                    sleep_for(nanoseconds(10));
                    sleep_until(system_clock::now() + seconds(1));
                    printf("- CO THI BAM SO 1 \n");
                    sleep_for(nanoseconds(10));
                    sleep_until(system_clock::now() + seconds(1));
                    printf("- KHONG THI BAM SO 2\n");
                    sleep_for(nanoseconds(10));
                    sleep_until(system_clock::now() + seconds(1));
                    printf("- MOI BAN NHAP LUA CHON VAO DAY : \n"); 
                    cin >> out_key;
                    if (out_key = 1) {
                            printf(" BAN DA XAC NHAN ROI KHOI HE THONG\n");
                            sleep_for(nanoseconds(10));
                            sleep_until(system_clock::now() + seconds(1));
                            printf(" VUI LONG DOI TRONG GIAY LAT\n");
                            sleep_for(nanoseconds(10));
                            sleep_until(system_clock::now() + seconds(1));
                            printf("1\n");
                            sleep_for(nanoseconds(10));
                            sleep_until(system_clock::now() + seconds(1));
                            printf("2\n");
                            sleep_for(nanoseconds(10));
                            sleep_until(system_clock::now() + seconds(1));
                            printf("3\n");
                            sleep_for(nanoseconds(10));
                            sleep_until(system_clock::now() + seconds(1));
                            printf("HE THONG SE OUT NGAY.\n");
                            exit(0);
                    }
                    if (out_key = 2) {
                            printf(" BAN KHONG MUON ROI KHOI HE THONG.\n");
                            sleep_for(nanoseconds(10));
                            sleep_until(system_clock::now() + seconds(1));
                            printf("HAY ENTER DE TIEP TUC\n");
                            break;
                    }
                case 5:
                    printf("- BAN MUON DOC DIEU KHOAN KHONG.\n");
                    printf("- VUI LONG ENTER DE DOC DIEU KHOAN\n");
                    printf("- DAY LA DIEU KHOAN SU DUNG HE THONG\n");
                    printf("1.KHONG DUOC VI PHAM DIEU LE SU DUNG\n");
                    printf("2.GIAO DICH MINH BACH , AN TOAN\n");
                    printf("3.TU BAO VE TAI KHOAN CUA CA NHAN\n");
                    printf("4.NEN CHON LOC THONG TIN TRANH BI LUA DAO\n");
                    printf("5.KHONG NEN NHAP VAO LIEN KET LA\n");
                    printf("- DO LA TAT CA DIEU KHOAN SU DUNG CUA CHUNG TOI\n");
                    printf("- MONG BAN TUAN THEO VA KHONG VI PHAM TAT CA CAC DIEU LE TREN !\n");
                    break;
                default:
                    printf("- KHONG CO CHUC NANG NAY\n");
                    sleep_for(nanoseconds(10));
                    sleep_until(system_clock::now() + seconds(1));
                    printf("- ENTER DE OUT RA KHOI HE THONG\n");
                    exit(0);
                    break;
                }
    cout << "\n-----------------------------------------";
    }
    system("CLS");
    cout << "\n-----------------------------------------";
    int key_sv;
    printf("-BAN MUON TIEP TUC SU DUNG HAY EXIT\n");
    sleep_for(nanoseconds(10));
    sleep_until(system_clock::now() + seconds(1));
    printf("NHAP 1 DE TIEP TUC SU DUNG\n");
    sleep_for(nanoseconds(10));
    sleep_until(system_clock::now() + seconds(1));
    printf("NHAP 2 DE EXIT\n");
    sleep_for(nanoseconds(10));
    sleep_until(system_clock::now() + seconds(1));
    printf("- NHAP LUA CHON CUA BAN VAO DAY : \n");
    cin >> key_sv;
    if (key_sv = 1) {
        printf("- BAN SE TIEP TUC SU DUNG HE THONG \n");
        sleep_for(nanoseconds(10));
        sleep_until(system_clock::now() + seconds(1));
        printf("- DOI TRONG GIAY LAT\n");
        sleep_for(nanoseconds(10));
        sleep_until(system_clock::now() + seconds(1));
        printf("- ENTER DE TIEP TUC\n");
    } else if (key_sv = 2) {
        printf("- BAN MUON EXIT KHOI HE THONG\n");
        sleep_for(nanoseconds(10));
        sleep_until(system_clock::now() + seconds(1));
        printf("- DOI TRONG GIAY LAT\n");
        sleep_for(nanoseconds(10));
        sleep_until(system_clock::now() + seconds(1));
        printf("- ENTER DE ROI KHOI HE THONG\n");
        exit(0);
    }
    int key_pass_word_admin = 1462009;
    system("CLS");  
    printf("HE THONG NGAN HANG BANKING XIN CHAO \n");
    sleep_for(nanoseconds(10));
    sleep_until(system_clock::now() + seconds(1));
    printf("- DAY LA PHAN THEO DOI HE THONG CUA CHUNG TOI\n");
    sleep_for(nanoseconds(10));
    sleep_until(system_clock::now() + seconds(1));
    printf("- BAN MUON THEO DOI HE THONG CUA CHUNG TOI KHONG\n");
    sleep_for(nanoseconds(10));
    sleep_until(system_clock::now() + seconds(1));
    printf("- MOI BAN NHAP MAT KHAU ADMIN DE TIEP TUC : \n");
    if (key_pass_word_admin = 14062009) {
        printf("LOGIN HE THONG THANH CONG\n");
        sleep_for(nanoseconds(10));
        sleep_until(system_clock::now() + seconds(1));  
        printf("- HE THONG THEO DOI HOAT DONG CUA NGAN HANG\n");
        sleep_for(nanoseconds(10));
        sleep_until(system_clock::now() + seconds(1));
        printf("- CO TAT CA TAI KHOAN NGAN HANG: \n");
        cout << account_bank << endl;
        printf("- CO TAT CA CAC THE NGAN HANG : \n");
        cout << the_bank << endl;
        printf("- CO TAT CA SO LUONG TIEN GIAO DICH : \n");
        cout << money_pay << endl;
        printf("- CO TAT CA USERNAME DUOC TAO : \n");
        cout << ho_ten << endl;
    } else if (key_pass_word_admin != 14062009 ) {
        printf("- BAN DA NHAP MAT KHAU ADMIN KHONG HOP LE \n");
        sleep_for(nanoseconds(10));
        sleep_until(system_clock::now() + seconds(1));
        printf("- VUI LONG THOAT KHOI HE THONG THEO DOI \n");
       exit(0);
    }
    printf("HE THONG VAN HANH BANG C++\n");
    printf("DO BAO MAT 100%\n");
    printf("CAM ON BAN DA SU DUNG DICH VU !\n");
    exit(0);
    cout << "\n-----------------------------------------";
    return 0;
}
