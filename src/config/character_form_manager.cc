// 1. まず PreeditCharacterFormManagerImpl の部分（118行目付近）を探してこう書き換えます
// （#%&@... となっている部分を書き換えます）
    AddRule("#%&$^_|`\\", Config::FULL_WIDTH);
    AddRule("@", Config::HALF_WIDTH);

// 2. 次に ConversionCharacterFormManagerImpl の部分（140行目付近）を探してこう書き換えます
    AddRule("#%&$^_|`\\", Config::LAST_FORM);
    AddRule("@", Config::HALF_WIDTH);
