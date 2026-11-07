# MistyTemp + SDK + Photon Bots

## Implanted
- **SDK** headers under `app/src/main/cpp/Include/SDK/` (Il2Cpp dump for Gorilla Tag / Photon).
- **Bots** menu category (main menu → Bots) with controls from the Photon Bot GUI:
  - Spawn / Clear / Remove Some
  - Modes: Orbit, Follow, Spaz, Formation, Bee Swarm, Freeze, P777
  - Count +/-, Radius +/-, Bob, Spin, Rainbow flags
- Bots tick in `LateUpdate` via `BotMods::Tick`.

## Multi-Unity / multi-IL2CPP notes
- Class / Method lookups go through BNM (`Class("ns","name")`) so they resolve at runtime against whatever IL2CPP metadata is loaded.
- Prefab instantiate is best-effort (`TryRaiseInstantiate`); room must be joined.
- Rebuild against your target game dump if field offsets drift.

## GitHub Actions
Workflow: `.github/workflows/android-build.yml`
- Matrix ABIs: `arm64-v8a`, `armeabi-v7a`
- JDK 17, NDK 26, `assembleDebug`

## Build locally
```bash
./gradlew assembleDebug
```
