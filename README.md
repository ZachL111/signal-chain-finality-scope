# signal-chain-finality-scope

`signal-chain-finality-scope` explores blockchain tooling with a small C codebase and local fixtures. The technical goal is to implement a C blockchain tooling project for finality stream reduction, using windowed input fixtures and late-data behavior checks.

## Purpose

The project exists to keep a narrow engineering decision visible and testable. For this repo, that decision is how event finality and settlement risk should influence a review result.

## Signal Chain Finality Scope Review Notes

For a quick review, compare `nonce pressure` with `proof depth` before reading the middle cases.

## What Is Covered

- `fixtures/domain_review.csv` adds cases for event finality and nonce pressure.
- `metadata/domain-review.json` records the same cases in structured form.
- `config/review-profile.json` captures the read order and the two review questions.
- `examples/signal-chain-finality-walkthrough.md` walks through the case spread.
- The C code includes a review path for `nonce pressure` and `proof depth`.
- `docs/field-notes.md` explains the strongest and weakest cases.

## Implementation Notes

The implementation keeps the scoring rule plain: reward signal and confidence, preserve slack, penalize drag, then classify the result into a review lane.

The C code keeps the review rule close to the tests.

## Command

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File scripts/verify.ps1
```

## Audit Path

The verifier is intentionally local. It should fail if the fixture score math, lane assignment, or language-specific test drifts.

## Limits

No external service is required. A deeper version would add more negative cases and a clearer boundary around invalid input.
