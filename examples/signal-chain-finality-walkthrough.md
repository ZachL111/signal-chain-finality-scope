# Signal Chain Finality Scope Walkthrough

I use this file as a small checklist before changing the C implementation.

| Case | Focus | Score | Lane |
| --- | --- | ---: | --- |
| baseline | event finality | 198 | ship |
| stress | nonce pressure | 217 | ship |
| edge | settlement risk | 196 | ship |
| recovery | proof depth | 177 | ship |
| stale | event finality | 187 | ship |

Start with `stress` and `recovery`. They create the widest contrast in this repository's fixture set, which makes them better review anchors than the middle cases.

The next useful expansion would be a malformed fixture around nonce pressure and proof depth.
