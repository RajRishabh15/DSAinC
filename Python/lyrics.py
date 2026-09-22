import time
def type_lyric(line, char_delay=0.065):
    for char in line:
        print(char, end='', flush=True)
        time.sleep(char_delay)
    print()

def print_lyrics():
    lyrics = [
        "Baato-baato me hi, khwabo-khwabo me hi mere qareeb hai tu",
        "Teri talab mujhko, teri talab, jaana, ho to kabhi ru-ba-ru",
        "Shor-sharaba jo seene me hai mere, kaise bayaan mai karu?",
        "Haal jo mera hai, mai kis ko batau?",
        "Mere sahiba, dil na kiraaye ka, thoda to sambhalo na",
        "Nazuk hai yeh, toot jaata hai",
        "Sahiba, neende-veende aaye na,",
        "raate kaati jaaye na",
        "Tera hi khayal din-rain aata hai"
    ]
    delays = [2.0, 1.8, 2.1, 2.4, 1.7, 2.0, 2.0, 1.7, 2.3]
    print("\n🎵 Now Playing - Sahiba❤️\n")
    time.sleep(1.5)
    for i, line in enumerate(lyrics):
        type_lyric(line)
        time.sleep(delays[i])

if __name__ == "__main__":
    print_lyrics()
    time.sleep(0.02)