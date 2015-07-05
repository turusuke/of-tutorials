## ofSetColor 描画色を設定

```cpp
ofSetColor(255, 255, 255); // 描画色の設定
ofCircle(100, 100, 100);
```

## ofBackground 背景色を設定

```cpp
ofBackground(0, 180, 0); // 背景色の設定
```

## ofEnableAlphaBlending アルファチャンネルを有効化

```cpp
ofEnableAlphaBlending(); // アルファチャンネルを有効化する
```

![](https://i.gyazo.com/1f43a5051045251312cebe2d1f1a75df.png)

## HSBカラーを利用する

ofColor のインスタンスを作成して、 setHsb で値を設定する

```cpp
ofColor c;
c.setHsb(50, 105, 255);
ofSetColor(c);
ofCircle(250, 250, 50);
```

![HSBカラーを利用した場合](https://i.gyazo.com/6822145d023bc5be33f993a3831dd785.png)