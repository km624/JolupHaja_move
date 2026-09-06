# Jol Up (졸업하자)

대학 졸업작품으로 만든 **하이퍼 캐주얼 게임**입니다. Google Play에 실제 출시했습니다.

- **기간** 2023.08 ~ 2023.10
- **엔진 / 언어** Unity · C#
- **연동** Firebase · Google Play Games Services
- **역할** 개인 프로젝트 (기획 · 프로그래밍 전담)

---

## 직접 작성한 코드

> 이 저장소에는 에셋스토어 패키지가 함께 포함되어 있습니다.
> **제가 작성한 코드는 아래 두 폴더입니다.**

| 경로 | 내용 |
|---|---|
| [`Assets/Scripts/`](Assets/Scripts) | 게임 로직 전반 |
| [`Assets/CreateMAp/`](Assets/CreateMAp) | 맵 생성 |

*(`Assets/Plugins`, `Assets/Cainos`, `Assets/GooglePlayGames`, `Assets/Effects`, `Assets/DamageNumbersPro` 등은 외부 에셋·플러그인입니다.)*

### 주요 파일

| 파일 | 내용 |
|---|---|
| [`GameManager.cs`](Assets/Scripts/GameManager.cs) | 게임 전체 흐름 관리 |
| [`MapSpawner.cs`](Assets/Scripts/MapSpawner.cs) · [`Map.cs`](Assets/Scripts/Map.cs) | 맵 생성과 배치 |
| [`PlayerCtrl/`](Assets/Scripts/PlayerCtrl) | 플레이어 조작과 상태 |
| [`Monster/`](Assets/Scripts/Monster) · [`Spawner.cs`](Assets/Scripts/Spawner.cs) | 몬스터와 스폰 |
| [`DataBase.cs`](Assets/Scripts/DataBase.cs) · [`DataStruct.cs`](Assets/Scripts/DataStruct.cs) | 게임 데이터 구조 |
| [`GameCenterManager.cs`](Assets/Scripts/GameCenterManager.cs) · [`GoogleLogin.cs`](Assets/Scripts/GoogleLogin.cs) | Google Play Games 로그인·리더보드 연동 |
| [`UIManager.cs`](Assets/Scripts/UIManager.cs) · [`SoundManager.cs`](Assets/Scripts/SoundManager.cs) | UI · 사운드 관리 |

---

## 실행 화면

<!-- 스크린샷 / 스토어 링크를 이 아래에 추가하세요 -->
