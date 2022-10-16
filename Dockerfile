FROM archlinux

RUN pacman -Sy --noconfirm git vim make gcc curl zsh neofetch

RUN sh -c "$(curl -fsSL https://raw.github.com/ohmyzsh/ohmyzsh/master/tools/install.sh)"

COPY . checking_files

ENTRYPOINT [ "zsh" ]