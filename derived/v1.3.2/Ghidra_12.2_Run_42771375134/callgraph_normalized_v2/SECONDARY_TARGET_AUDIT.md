# Sword / Shield 1.3.2 — secondary direct-call target audit

Source: [Ghidra full run #42771375134](https://github.com/969981/SWSH_Resources/actions/runs/42771375134), [normalized call comparison](../callgraph_normalized_v2/summary.json). All values below are computed from the actual committed Ghidra cross-version call delta CSV.

- All **15 original mapped-callee differences** have **identical caller-relative target offsets**: false positives due to incomplete target mapping and address relocation.
- Among the **779 relative-offset discrepancy records**, **770** point to the **same absolute target RVA** in both editions despite caller address changes.
- Only **9** have distinct observed absolute target RVAs; all are **16-byte function bodies** around `0x019FFF70–0x019FFFF0` in Sword. These are targets for manual thunk/PLT/GOT and relocation review, **not proven gameplay logic differences**.

| Sword entry | Shield entry | Sword target RVA | Shield target RVA |
|---|---|---|---|
| `0x019fff70` | `0x019fe000` | `0x2a85dc0` | `0x2a863e0` |
| `0x019fff80` | `0x019fe010` | `0x2a85dd8` | `0x2a863e8` |
| `0x019fff90` | `0x019fe020` | `0x2a85de0` | `0x2a863f0` |
| `0x019fffa0` | `0x019fe030` | `0x2a85dd0` | `0x2a85148` |
| `0x019fffb0` | `0x019fe040` | `0x2a85dc8` | `0x2a85140` |
| `0x019fffc0` | `0x019fe050` | `0x2a85e18` | `0x2a857d8` |
| `0x019fffd0` | `0x019fe060` | `0x2a86078` | `0x2a85150` |
| `0x019fffe0` | `0x019fe070` | `0x2a86070` | `0x2a851f0` |
| `0x019ffff0` | `0x019fe080` | `0x2a86018` | `0x2a851e0` |

Machine-readable proof: [`secondary_target_audit.json`](./secondary_target_audit.json). These are static direct-call references only and exclude indirect calls. Do not infer Nintendo's original function identity from identical bytes alone.
