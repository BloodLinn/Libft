# Libft

Bu proje, C programlama dilinde temel kütüphane fonksiyonlarının kendi başınıza yeniden yazılması amacıyla hazırlanmıştır. `libft` klasörü içerisinde, string, bellek ve karakter işlemleri için çeşitli fonksiyonların kendi implementasyonları yer almaktadır.

## İçerik

Aşağıdaki fonksiyonlar ve daha fazlası bu kütüphanede bulunmaktadır:

- Karakter Kontrol Fonksiyonları:
  - `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`
- String Fonksiyonları:
  - `ft_strlen`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strdup`, `ft_strlcpy`, `ft_strlcat`, `ft_strjoin`, `ft_strtrim`, `ft_substr`, `ft_split`, `ft_strmapi`, `ft_striteri`
- Bellek Fonksiyonları:
  - `ft_memset`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc`, `ft_bzero`
- Dönüştürme Fonksiyonları:
  - `ft_atoi`, `ft_itoa`, `ft_tolower`, `ft_toupper`
- Yazdırma Fonksiyonları:
  - `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`

## Kurulum

Projeyi klonladıktan sonra `libft` klasörüne girip aşağıdaki komutu çalıştırarak statik kütüphaneyi oluşturabilirsiniz:

```sh
make
```

Oluşan `libft.a` dosyasını kendi projelerinizde kullanabilirsiniz.

## Kullanım

Kendi projenizde aşağıdaki gibi kullanabilirsiniz:

```c
#include "libft.h"
```

ve derlerken `libft.a` dosyasını eklemeyi unutmayın.

## Dosya Yapısı

- [libft/](libft/)  
  Tüm kaynak dosyalar ve başlık dosyası (`libft.h`) burada bulunur.

## Katkı

Katkıda bulunmak isterseniz, lütfen önce bir issue açınız veya doğrudan pull request gönderiniz.

## Lisans

Bu proje 42 okulu eğitim amaçlı hazırlanmıştır.