#pragma once
#include <SFML/Audio.hpp>
#include <string>

using namespace std;
namespace Sound
{
    enum class SoundType
    {
        BALL_BOUNCE
    };

    class SoundManager
    {
    private:
        static sf::Music backgroundMusic;
        static sf::Sound soundEffect;
        static sf::SoundBuffer ballBounce;
        static const string bgmPath;
        static const std::string ballBouncePath;
        static float backgroundMusicVolume;

        static void LoadSoundFromFile();

    public:
        static void Initialize();
        static void PlaySoundEffect(SoundType soundType);
        static void PlayBackgroundMusic();
    };
}
