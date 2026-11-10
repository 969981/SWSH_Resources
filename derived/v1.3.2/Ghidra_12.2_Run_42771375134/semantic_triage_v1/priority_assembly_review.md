# Sword / Shield 1.3.2 — priority assembly review

Only pairs with both exact-body-mapped caller and callee support are included. Same RVA is not identity proof. The branch signature compares source/target RVAs, not high-level CFG block topology.

## 0x00768c70 — EXACT_MAPPED_CALLEE_CHANGE (score 98)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 0.846154
- Branch-address signature same: True; exact mapped callees same: False; strings same: True
- C prototypes: Sword: undefined8 FUN_00768c70(undefined8 *param_1,undefined8 param_2,undefined4 param_3); Shield: undefined8 FUN_00768c70(undefined8 *param_1,undefined8 param_2,undefined4 param_3)
- 0x00768ca0: Sword: bl 0x019fee40; Shield: bl 0x019feed0
- 0x00768cac: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x00768cdc: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040
- 0x00768cf8: Sword: bl 0x019fee70; Shield: bl 0x019fef00
- 0x00768d74: Sword: bl 0x019fe1d0; Shield: bl 0x019fe260
- 0x00768db0: Sword: bl 0x019fdc10; Shield: bl 0x019fdca0
- 0x00768dc4: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040
- 0x00768dd4: Sword: bl 0x019fed00; Shield: bl 0x019fed90
- 0x00768e00: Sword: add x1,x1,#0x50d; Shield: add x1,x1,#0x540
- 0x00768e0c: Sword: bl 0x019fed60; Shield: bl 0x019fedf0
- 0x00768e24: Sword: add x1,x1,#0xe31; Shield: add x1,x1,#0xe5a
- 0x00768e34: Sword: bl 0x019fed60; Shield: bl 0x019fedf0
- 0x00768e70: Sword: add x1,x1,#0xc94; Shield: add x1,x1,#0xcec
- 0x00768e7c: Sword: bl 0x019fed60; Shield: bl 0x019fedf0
- 0x00768e84: Sword: add x1,x1,#0x146; Shield: add x1,x1,#0x179
- 0x00768e90: Sword: bl 0x019fed60; Shield: bl 0x019fedf0

## 0x007c3c70 — EXACT_MAPPED_CALLEE_CHANGE (score 98)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 0.95
- Branch-address signature same: True; exact mapped callees same: False; strings same: True
- C prototypes: Sword: undefined8 FUN_007c3c70(long param_1); Shield: undefined8 FUN_007c3c70(long param_1)
- 0x007c3cc8: Sword: bl 0x0186bd40; Shield: bl 0x0186bdd0
- 0x007c3cdc: Sword: bl 0x019416b0; Shield: bl 0x01941740
- 0x007c3cfc: Sword: bl 0x018724d0; Shield: bl 0x01872560
- 0x007c3d50: Sword: bl 0x018724d0; Shield: bl 0x01872560
- 0x007c3dc0: Sword: bl 0x01875ef0; Shield: bl 0x01875f80
- 0x007c3dcc: Sword: bl 0x01876300; Shield: bl 0x01876390
- 0x007c3dd8: Sword: bl 0x01937d20; Shield: bl 0x01937db0
- 0x007c3e04: Sword: bl 0x01876050; Shield: bl 0x018760e0
- 0x007c3e14: Sword: bl 0x0193fc80; Shield: bl 0x0193fd10
- 0x007c3e6c: Sword: bl 0x018724d0; Shield: bl 0x01872560
- 0x007c3e90: Sword: bl 0x01875f50; Shield: bl 0x01875fe0
- 0x007c3e9c: Sword: bl 0x01890290; Shield: bl 0x01890320
- 0x007c3ec8: Sword: bl 0x018903c0; Shield: bl 0x01890450
- 0x007c3f00: Sword: bl 0x01890460; Shield: bl 0x018904f0
- 0x007c3f10: Sword: bl 0x0193fc80; Shield: bl 0x0193fd10
- 0x007c3f68: Sword: bl 0x018724d0; Shield: bl 0x01872560

## 0x007c4550 — EXACT_MAPPED_CALLEE_CHANGE (score 98)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 0.933333
- Branch-address signature same: True; exact mapped callees same: False; strings same: True
- C prototypes: Sword: undefined8 FUN_007c4550(long param_1); Shield: undefined8 FUN_007c4550(long param_1)
- 0x007c45a8: Sword: bl 0x0186bd40; Shield: bl 0x0186bdd0
- 0x007c45bc: Sword: bl 0x019416b0; Shield: bl 0x01941740
- 0x007c45dc: Sword: bl 0x018724d0; Shield: bl 0x01872560
- 0x007c4630: Sword: bl 0x018724d0; Shield: bl 0x01872560
- 0x007c46a0: Sword: bl 0x0188e0d0; Shield: bl 0x0188e160
- 0x007c46ac: Sword: bl 0x0188e380; Shield: bl 0x0188e410
- 0x007c46c0: Sword: bl 0x01948770; Shield: bl 0x01948800
- 0x007c46d0: Sword: bl 0x0193fa30; Shield: bl 0x0193fac0
- 0x007c4728: Sword: bl 0x018724d0; Shield: bl 0x01872560
- 0x007c474c: Sword: bl 0x0188e1f0; Shield: bl 0x0188e280
- 0x007c4758: Sword: bl 0x01948700; Shield: bl 0x01948790
- 0x007c47ac: Sword: bl 0x01948770; Shield: bl 0x01948800
- 0x007c47bc: Sword: bl 0x0193fa30; Shield: bl 0x0193fac0
- 0x007c4814: Sword: bl 0x018724d0; Shield: bl 0x01872560
- 0x007c4838: Sword: bl 0x01948720; Shield: bl 0x019487b0
- 0x007c4844: Sword: bl 0x01948720; Shield: bl 0x019487b0

## 0x006e2420 — EXACT_MAPPED_CALLEE_CHANGE (score 96)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 0.5
- Branch-address signature same: True; exact mapped callees same: False; strings same: True
- C prototypes: Sword: void FUN_006e2420(long *param_1); Shield: void FUN_006e2420(long *param_1)
- 0x006e2468: Sword: bl 0x019fdff0; Shield: bl 0x019fe080
- 0x006e2470: Sword: bl 0x019fdd20; Shield: bl 0x019fddb0
- 0x006e2478: Sword: bl 0x019fdd20; Shield: bl 0x019fddb0
- 0x006e2518: Sword: add x8,x8,#0x550; Shield: add x8,x8,#0x57a

## 0x007aabf0 — EXACT_MAPPED_CALLEE_CHANGE (score 95)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 0.6
- Branch-address signature same: True; exact mapped callees same: False; strings same: True
- C prototypes: Sword: void FUN_007aabf0(long param_1); Shield: void FUN_007aabf0(long param_1)
- 0x007aac1c: Sword: bl 0x01965ba0; Shield: bl 0x01965c30
- 0x007aac28: Sword: bl 0x019ff1b0; Shield: bl 0x019ff240
- 0x007aac60: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x007aac64: Sword: bl 0x019ff1c0; Shield: bl 0x019ff250
- 0x007aac90: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040

## 0x0047bab0 — EXACT_MAPPED_CALLEE_CHANGE (score 90)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 0.714286
- Branch-address signature same: True; exact mapped callees same: False; strings same: True
- C prototypes: Sword: undefined4 FUN_0047bab0(long param_1); Shield: undefined4 FUN_0047bab0(long param_1)
- 0x0047bb38: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x0047bb70: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040
- 0x0047bf30: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040

## 0x00762270 — EXACT_MAPPED_CALLEE_CHANGE (score 90)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 0.833333
- Branch-address signature same: True; exact mapped callees same: False; strings same: True
- C prototypes: Sword: void FUN_00762270(long param_1); Shield: void FUN_00762270(long param_1)
- 0x00762294: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x007622a0: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040
- 0x007622bc: Sword: bl 0x019fe1d0; Shield: bl 0x019fe260
- 0x007622c8: Sword: bl 0x019fe0b0; Shield: bl 0x019fe140
- 0x007622d8: Sword: bl 0x019fe0a0; Shield: bl 0x019fe130
- 0x007622ec: Sword: bl 0x019fe800; Shield: bl 0x019fe890
- 0x007622f8: Sword: bl 0x019fe800; Shield: bl 0x019fe890
- 0x00762304: Sword: bl 0x019fe800; Shield: bl 0x019fe890
- 0x00762310: Sword: bl 0x019fe800; Shield: bl 0x019fe890
- 0x0076231c: Sword: bl 0x019fe800; Shield: bl 0x019fe890
- 0x00762324: Sword: bl 0x019fe7b0; Shield: bl 0x019fe840
- 0x0076232c: Sword: bl 0x019fe7b0; Shield: bl 0x019fe840
- 0x00762334: Sword: bl 0x019fe7b0; Shield: bl 0x019fe840
- 0x0076233c: Sword: bl 0x019fe7b0; Shield: bl 0x019fe840
- 0x00762344: Sword: bl 0x019fe7b0; Shield: bl 0x019fe840
- 0x0076234c: Sword: bl 0x019fe1b0; Shield: bl 0x019fe240

## 0x00763e80 — EXACT_MAPPED_CALLEE_CHANGE (score 90)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 0.75
- Branch-address signature same: True; exact mapped callees same: False; strings same: True
- C prototypes: Sword: undefined8 FUN_00763e80(long param_1); Shield: undefined8 FUN_00763e80(long param_1)
- 0x00763ea8: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x00763eb4: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x00763ec0: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040
- 0x00763ed0: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x00763edc: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040
- 0x00763f04: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x00763f10: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040
- 0x00763fa4: Sword: bl 0x019fed00; Shield: bl 0x019fed90
- 0x00763fc4: Sword: add x1,x1,#0x6ce; Shield: add x1,x1,#0x718
- 0x00763fd4: Sword: bl 0x019fed60; Shield: bl 0x019fedf0
- 0x00763fdc: Sword: add x1,x1,#0x12d; Shield: add x1,x1,#0x160
- 0x00763fe8: Sword: bl 0x019fed60; Shield: bl 0x019fedf0
- 0x00764014: Sword: bl 0x019fed70; Shield: bl 0x019fee00
- 0x00764040: Sword: bl 0x019fed10; Shield: bl 0x019feda0
- 0x00764050: Sword: bl 0x019fed00; Shield: bl 0x019fed90
- 0x00764070: Sword: add x1,x1,#0x50d; Shield: add x1,x1,#0x540

## 0x00405500 — EXACT_MAPPED_CALLEE_CHANGE (score 89)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 0.6
- Branch-address signature same: True; exact mapped callees same: False; strings same: True
- C prototypes: Sword: int FUN_00405500(undefined8 *param_1,uint param_2,uint param_3,uint param_4,uint param_5); Shield: int FUN_00405500(undefined8 *param_1,uint param_2,uint param_3,uint param_4,uint param_5)
- 0x00405578: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x00405588: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040
- 0x004056b8: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040
- 0x004056e4: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040

## 0x0042c660 — EXACT_MAPPED_CALLEE_CHANGE (score 89)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 0.666667
- Branch-address signature same: True; exact mapped callees same: False; strings same: True
- C prototypes: Sword: void FUN_0042c660(long param_1,long *param_2); Shield: void FUN_0042c660(long param_1,long *param_2)
- 0x0042c6bc: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x0042c70c: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040

## 0x00447160 — EXACT_MAPPED_CALLEE_CHANGE (score 89)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 0.6
- Branch-address signature same: True; exact mapped callees same: False; strings same: True
- C prototypes: Sword: int FUN_00447160(long param_1,long param_2,long param_3); Shield: int FUN_00447160(long param_1,long param_2,long param_3)
- 0x004471b4: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x004471ec: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040
- 0x004471f8: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x00447254: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040
- 0x004472bc: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040
- 0x004472d8: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030

## 0x00447460 — EXACT_MAPPED_CALLEE_CHANGE (score 89)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 0.666667
- Branch-address signature same: True; exact mapped callees same: False; strings same: True
- C prototypes: Sword: int FUN_00447460(long param_1,long param_2,long param_3); Shield: int FUN_00447460(long param_1,long param_2,long param_3)
- 0x004474dc: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x00447500: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040
- 0x00447540: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x00447580: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040
- 0x004475d0: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040

## 0x00447600 — EXACT_MAPPED_CALLEE_CHANGE (score 89)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 0.666667
- Branch-address signature same: True; exact mapped callees same: False; strings same: True
- C prototypes: Sword: int FUN_00447600(long param_1,long param_2,long param_3,MutexType *param_4); Shield: int FUN_00447600(long param_1,long param_2,long param_3,MutexType *param_4)
- 0x00447644: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x0044767c: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040
- 0x00447688: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x004476c4: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040
- 0x00447700: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040
- 0x00447728: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040

## 0x00447780 — EXACT_MAPPED_CALLEE_CHANGE (score 89)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 0.6
- Branch-address signature same: True; exact mapped callees same: False; strings same: True
- C prototypes: Sword: int FUN_00447780(long param_1,long param_2,long param_3,MutexType *param_4); Shield: int FUN_00447780(long param_1,long param_2,long param_3,MutexType *param_4)
- 0x004477c4: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x004477fc: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040
- 0x00447808: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x00447840: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040
- 0x0044787c: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040
- 0x004478a4: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040

## 0x004478f0 — EXACT_MAPPED_CALLEE_CHANGE (score 89)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 0.666667
- Branch-address signature same: True; exact mapped callees same: False; strings same: True
- C prototypes: Sword: int FUN_004478f0(long param_1,long param_2,long param_3,MutexType *param_4); Shield: int FUN_004478f0(long param_1,long param_2,long param_3,MutexType *param_4)
- 0x00447934: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x0044796c: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040
- 0x00447978: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x004479b0: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040
- 0x004479ec: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040
- 0x00447a14: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040

## 0x00447a60 — EXACT_MAPPED_CALLEE_CHANGE (score 89)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 0.666667
- Branch-address signature same: True; exact mapped callees same: False; strings same: True
- C prototypes: Sword: int FUN_00447a60(long param_1,long param_2,long param_3,MutexType *param_4); Shield: int FUN_00447a60(long param_1,long param_2,long param_3,MutexType *param_4)
- 0x00447aa4: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x00447adc: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040
- 0x00447ae8: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x00447b20: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040
- 0x00447b5c: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040
- 0x00447b84: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040

## 0x00447d40 — EXACT_MAPPED_CALLEE_CHANGE (score 89)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 0.714286
- Branch-address signature same: True; exact mapped callees same: False; strings same: True
- C prototypes: Sword: int FUN_00447d40(long param_1,long param_2,long param_3); Shield: int FUN_00447d40(long param_1,long param_2,long param_3)
- 0x00447dc0: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x00447df8: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040
- 0x00447e04: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x00447e44: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040
- 0x00447e90: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040
- 0x00447ea8: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040

## 0x00447fb0 — EXACT_MAPPED_CALLEE_CHANGE (score 89)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 0.6
- Branch-address signature same: True; exact mapped callees same: False; strings same: True
- C prototypes: Sword: int FUN_00447fb0(long param_1,long param_2,long param_3,MutexType *param_4); Shield: int FUN_00447fb0(long param_1,long param_2,long param_3,MutexType *param_4)
- 0x00447ff4: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x0044802c: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040
- 0x00448038: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x00448078: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040
- 0x004480b4: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040
- 0x004480dc: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040

## 0x00448710 — EXACT_MAPPED_CALLEE_CHANGE (score 89)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 0.6
- Branch-address signature same: True; exact mapped callees same: False; strings same: True
- C prototypes: Sword: int FUN_00448710(long param_1,long param_2,long param_3,MutexType *param_4); Shield: int FUN_00448710(long param_1,long param_2,long param_3,MutexType *param_4)
- 0x00448754: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x0044878c: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040
- 0x00448798: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x004487d0: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040
- 0x0044880c: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040
- 0x00448834: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040

## 0x00448880 — EXACT_MAPPED_CALLEE_CHANGE (score 89)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 0.6
- Branch-address signature same: True; exact mapped callees same: False; strings same: True
- C prototypes: Sword: int FUN_00448880(long param_1,long param_2,long param_3,MutexType *param_4); Shield: int FUN_00448880(long param_1,long param_2,long param_3,MutexType *param_4)
- 0x004488c4: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x004488fc: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040
- 0x00448908: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x00448940: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040
- 0x0044897c: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040
- 0x004489a4: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040

## 0x004489f0 — EXACT_MAPPED_CALLEE_CHANGE (score 89)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 0.6
- Branch-address signature same: True; exact mapped callees same: False; strings same: True
- C prototypes: Sword: int FUN_004489f0(long param_1,long param_2,long param_3,MutexType *param_4); Shield: int FUN_004489f0(long param_1,long param_2,long param_3,MutexType *param_4)
- 0x00448a34: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x00448a6c: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040
- 0x00448a78: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x00448ab0: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040
- 0x00448aec: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040
- 0x00448b14: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040

## 0x0044eed0 — EXACT_MAPPED_CALLEE_CHANGE (score 89)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 0.666667
- Branch-address signature same: True; exact mapped callees same: False; strings same: True
- C prototypes: Sword: int FUN_0044eed0(long *param_1,long *param_2); Shield: int FUN_0044eed0(long *param_1,long *param_2)
- 0x0044f070: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x0044f108: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040

## 0x0075af30 — EXACT_MAPPED_CALLEE_CHANGE (score 89)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 0.818182
- Branch-address signature same: True; exact mapped callees same: False; strings same: True
- C prototypes: Sword: void FUN_0075af30(long param_1); Shield: void FUN_0075af30(long param_1)
- 0x0075af5c: Sword: bl 0x019febe0; Shield: bl 0x019fec70
- 0x0075af90: Sword: bl 0x019febf0; Shield: bl 0x019fec80
- 0x0075afa8: Sword: bl 0x019fec00; Shield: bl 0x019fec90
- 0x0075b000: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x0075b028: Sword: bl 0x019fdc90; Shield: bl 0x019fdd20
- 0x0075b054: Sword: bl 0x019fec10; Shield: bl 0x019feca0
- 0x0075b06c: Sword: bl 0x019fec20; Shield: bl 0x019fecb0
- 0x0075b0ac: Sword: bl 0x019fdc90; Shield: bl 0x019fdd20
- 0x0075b0dc: Sword: bl 0x019fec30; Shield: bl 0x019fecc0
- 0x0075b0f8: Sword: bl 0x019fec40; Shield: bl 0x019fecd0
- 0x0075b148: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040
- 0x0075b180: Sword: bl 0x019fdc60; Shield: bl 0x019fdcf0

## 0x00404690 — EXACT_MAPPED_CALLEE_CHANGE (score 88)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 0.6
- Branch-address signature same: True; exact mapped callees same: False; strings same: True
- C prototypes: Sword: long FUN_00404690(int param_1,long param_2); Shield: long FUN_00404690(int param_1,long param_2)
- 0x004046cc: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x0040472c: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040

## 0x0048f020 — EXACT_MAPPED_CALLEE_CHANGE (score 88)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 0.5
- Branch-address signature same: True; exact mapped callees same: False; strings same: True
- C prototypes: Sword: void FUN_0048f020(long *param_1,uint param_2,undefined4 param_3,undefined8 param_4); Shield: void FUN_0048f020(long *param_1,uint param_2,undefined4 param_3,undefined8 param_4)
- 0x0048f050: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x0048f0a8: Sword: b 0x019fdfb0; Shield: b 0x019fe040
- 0x0048f0d0: Sword: bl 0x019fe240; Shield: bl 0x019fe2d0
- 0x0048f0d8: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040
- 0x0048f0ec: Sword: bl 0x019fe1d0; Shield: bl 0x019fe260

## 0x0048f220 — EXACT_MAPPED_CALLEE_CHANGE (score 88)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 0.5
- Branch-address signature same: True; exact mapped callees same: False; strings same: True
- C prototypes: Sword: void FUN_0048f220(long *param_1,uint param_2); Shield: void FUN_0048f220(long *param_1,uint param_2)
- 0x0048f244: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x0048f2ac: Sword: bl 0x019fe240; Shield: bl 0x019fe2d0
- 0x0048f2b4: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040
- 0x0048f2c8: Sword: bl 0x019fe1d0; Shield: bl 0x019fe260
- 0x0048f2f4: Sword: b 0x019fdfb0; Shield: b 0x019fe040

## 0x0048f300 — EXACT_MAPPED_CALLEE_CHANGE (score 88)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 0.5
- Branch-address signature same: True; exact mapped callees same: False; strings same: True
- C prototypes: Sword: void FUN_0048f300(long *param_1,uint param_2,undefined4 param_3,undefined4 param_4,; Shield: void FUN_0048f300(long *param_1,uint param_2,undefined4 param_3,undefined4 param_4,
- 0x0048f33c: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x0048f3b8: Sword: bl 0x019fe240; Shield: bl 0x019fe2d0
- 0x0048f3c0: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040
- 0x0048f3d4: Sword: bl 0x019fe1d0; Shield: bl 0x019fe260
- 0x0048f420: Sword: b 0x019fdfb0; Shield: b 0x019fe040

## 0x0048f430 — EXACT_MAPPED_CALLEE_CHANGE (score 88)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 0.5
- Branch-address signature same: True; exact mapped callees same: False; strings same: True
- C prototypes: Sword: void FUN_0048f430(long *param_1,long param_2,undefined4 *param_3); Shield: void FUN_0048f430(long *param_1,long param_2,undefined4 *param_3)
- 0x0048f458: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x0048f4dc: Sword: bl 0x019fe240; Shield: bl 0x019fe2d0
- 0x0048f4e4: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040
- 0x0048f4f8: Sword: bl 0x019fe1d0; Shield: bl 0x019fe260
- 0x0048f530: Sword: b 0x019fdfb0; Shield: b 0x019fe040

## 0x0048f540 — EXACT_MAPPED_CALLEE_CHANGE (score 88)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 0.5
- Branch-address signature same: True; exact mapped callees same: False; strings same: True
- C prototypes: Sword: void FUN_0048f540(long *param_1,uint param_2,undefined8 *param_3); Shield: void FUN_0048f540(long *param_1,uint param_2,undefined8 *param_3)
- 0x0048f564: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x0048f5b4: Sword: b 0x019fdfb0; Shield: b 0x019fe040
- 0x0048f5e0: Sword: bl 0x019fe240; Shield: bl 0x019fe2d0
- 0x0048f5e8: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040
- 0x0048f608: Sword: b 0x019fe1d0; Shield: b 0x019fe260

## 0x0048f680 — EXACT_MAPPED_CALLEE_CHANGE (score 88)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 0.6
- Branch-address signature same: True; exact mapped callees same: False; strings same: True
- C prototypes: Sword: void FUN_0048f680(long *param_1,uint param_2,uint param_3,void *param_4); Shield: void FUN_0048f680(long *param_1,uint param_2,uint param_3,void *param_4)
- 0x0048f6b0: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x0048f718: Sword: bl 0x019fddc0; Shield: bl 0x019fde50
- 0x0048f72c: Sword: bl 0x019fe240; Shield: bl 0x019fe2d0
- 0x0048f734: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040
- 0x0048f748: Sword: bl 0x019fe1d0; Shield: bl 0x019fe260
- 0x0048f788: Sword: b 0x019fdfb0; Shield: b 0x019fe040

## 0x0048f790 — EXACT_MAPPED_CALLEE_CHANGE (score 88)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 0.6
- Branch-address signature same: True; exact mapped callees same: False; strings same: True
- C prototypes: Sword: void FUN_0048f790(long *param_1,uint param_2,void *param_3,undefined8 param_4); Shield: void FUN_0048f790(long *param_1,uint param_2,void *param_3,undefined8 param_4)
- 0x0048f7c0: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x0048f824: Sword: bl 0x019fddc0; Shield: bl 0x019fde50
- 0x0048f83c: Sword: bl 0x019fe240; Shield: bl 0x019fe2d0
- 0x0048f844: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040
- 0x0048f858: Sword: bl 0x019fe1d0; Shield: bl 0x019fe260
- 0x0048f898: Sword: b 0x019fdfb0; Shield: b 0x019fe040

## 0x0048f8a0 — EXACT_MAPPED_CALLEE_CHANGE (score 88)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 0.5
- Branch-address signature same: True; exact mapped callees same: False; strings same: True
- C prototypes: Sword: void FUN_0048f8a0(long *param_1,uint param_2); Shield: void FUN_0048f8a0(long *param_1,uint param_2)
- 0x0048f8c4: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x0048f920: Sword: b 0x019fdfb0; Shield: b 0x019fe040
- 0x0048f944: Sword: bl 0x019fe240; Shield: bl 0x019fe2d0
- 0x0048f94c: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040
- 0x0048f960: Sword: bl 0x019fe1d0; Shield: bl 0x019fe260

## 0x0048f980 — EXACT_MAPPED_CALLEE_CHANGE (score 88)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 0.5
- Branch-address signature same: True; exact mapped callees same: False; strings same: True
- C prototypes: Sword: void FUN_0048f980(long *param_1,uint param_2,undefined4 *param_3); Shield: void FUN_0048f980(long *param_1,uint param_2,undefined4 *param_3)
- 0x0048f9ac: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x0048fa0c: Sword: b 0x019fdfb0; Shield: b 0x019fe040
- 0x0048fa38: Sword: bl 0x019fe240; Shield: bl 0x019fe2d0
- 0x0048fa40: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040
- 0x0048fa54: Sword: bl 0x019fe1d0; Shield: bl 0x019fe260

## 0x007dd7d0 — EXACT_MAPPED_CALLEE_CHANGE (score 88)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 0.5
- Branch-address signature same: True; exact mapped callees same: False; strings same: True
- C prototypes: Sword: void FUN_007dd7d0(long param_1); Shield: void FUN_007dd7d0(long param_1)
- 0x007dd850: Sword: bl 0x019fdfc0; Shield: bl 0x019fe050

## 0x00895770 — EXACT_MAPPED_CALLEE_CHANGE (score 88)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 0.5
- Branch-address signature same: True; exact mapped callees same: False; strings same: True
- C prototypes: Sword: uint FUN_00895770(long param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,; Shield: uint FUN_00895770(long param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
- 0x008957a4: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x00895818: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040

## 0x00404750 — EXACT_MAPPED_CALLEE_CHANGE (score 87)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 0.5
- Branch-address signature same: True; exact mapped callees same: False; strings same: True
- C prototypes: Sword: long FUN_00404750(int param_1,long param_2,undefined4 param_3); Shield: long FUN_00404750(int param_1,long param_2,undefined4 param_3)
- 0x00404790: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x004047d4: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040

## 0x004047f0 — EXACT_MAPPED_CALLEE_CHANGE (score 87)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 0.5
- Branch-address signature same: True; exact mapped callees same: False; strings same: True
- C prototypes: Sword: undefined8 FUN_004047f0(int param_1,long param_2); Shield: undefined8 FUN_004047f0(int param_1,long param_2)
- 0x00404824: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x00404854: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040

## 0x00404870 — EXACT_MAPPED_CALLEE_CHANGE (score 87)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 0.5
- Branch-address signature same: True; exact mapped callees same: False; strings same: True
- C prototypes: Sword: undefined8 FUN_00404870(int param_1,long param_2); Shield: undefined8 FUN_00404870(int param_1,long param_2)
- 0x004048a4: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x004048d4: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040

## 0x004ffc90 — EXACT_MAPPED_CALLEE_CHANGE (score 87)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 0.666667
- Branch-address signature same: True; exact mapped callees same: False; strings same: True
- C prototypes: Sword: void FUN_004ffc90(long param_1); Shield: void FUN_004ffc90(long param_1)
- 0x004ffca8: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x004ffcb4: Sword: bl 0x019fe390; Shield: bl 0x019fe420
- 0x004ffcbc: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040
- 0x004ffcd0: Sword: bl 0x019fe0b0; Shield: bl 0x019fe140
- 0x004ffcd8: Sword: bl 0x019fe0a0; Shield: bl 0x019fe130

## 0x008959c0 — EXACT_MAPPED_CALLEE_CHANGE (score 87)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 0.5
- Branch-address signature same: True; exact mapped callees same: False; strings same: True
- C prototypes: Sword: uint FUN_008959c0(float param_1,long param_2,undefined8 param_3,undefined8 param_4); Shield: uint FUN_008959c0(float param_1,long param_2,undefined8 param_3,undefined8 param_4)
- 0x008959ec: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x00895a00: Sword: bl 0x019fe130; Shield: bl 0x019fe1c0
- 0x00895a1c: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040

## 0x003ffb20 — EXACT_MAPPED_CALLEE_CHANGE (score 85)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 0.5
- Branch-address signature same: True; exact mapped callees same: False; strings same: True
- C prototypes: Sword: void FUN_003ffb20(ConditionVariableType *param_1); Shield: void FUN_003ffb20(ConditionVariableType *param_1)
- 0x003ffb30: Sword: bl 0x019fdff0; Shield: bl 0x019fe080
- 0x003ffb40: Sword: b 0x019fdd20; Shield: b 0x019fddb0

## 0x00a837f0 — OPERAND_OR_IMMEDIATE_CHANGE (score 21)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00a837f0(long *param_1); Shield: void FUN_00a837f0(long *param_1)
- 0x00a83918: Sword: bl 0x01052ab0; Shield: bl 0x01052ae0
- 0x00a83924: Sword: bl 0x01052ad0; Shield: bl 0x01052b00
- 0x00a83930: Sword: bl 0x01053370; Shield: bl 0x010533a0
- 0x00a8393c: Sword: bl 0x01052a80; Shield: bl 0x01052ab0
- 0x00a83948: Sword: bl 0x01052ad0; Shield: bl 0x01052b00
- 0x00a83954: Sword: bl 0x01052d00; Shield: bl 0x01052d30
- 0x00a83960: Sword: bl 0x01052cc0; Shield: bl 0x01052cf0
- 0x00a8396c: Sword: bl 0x01053370; Shield: bl 0x010533a0
- 0x00a83de8: Sword: bl 0x00dfb1f0; Shield: bl 0x00dfb220
- 0x00a83fe0: Sword: bl 0x00daaec0; Shield: bl 0x00daaef0
- 0x00a84020: Sword: bl 0x00dab450; Shield: bl 0x00dab480
- 0x00a8408c: Sword: bl 0x00dab430; Shield: bl 0x00dab460
- 0x00a840bc: Sword: bl 0x00daaec0; Shield: bl 0x00daaef0
- 0x00a840d8: Sword: bl 0x00dab450; Shield: bl 0x00dab480
- 0x00a840f8: Sword: bl 0x00dab430; Shield: bl 0x00dab460
- 0x00a84174: Sword: bl 0x00dab480; Shield: bl 0x00dab4b0

## 0x00a94770 — OPERAND_OR_IMMEDIATE_CHANGE (score 20)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00a94770(long param_1); Shield: void FUN_00a94770(long param_1)
- 0x00a94810: Sword: add x8,x8,#0x339; Shield: add x8,x8,#0x383
- 0x00a9482c: Sword: bl 0x012b4250; Shield: bl 0x012b4280
- 0x00a9483c: Sword: bl 0x012b4190; Shield: bl 0x012b41c0
- 0x00a94858: Sword: add x8,x8,#0x35c; Shield: add x8,x8,#0x385
- 0x00a94874: Sword: bl 0x012b4250; Shield: bl 0x012b4280
- 0x00a94880: Sword: bl 0x012b4420; Shield: bl 0x012b4450
- 0x00a9489c: Sword: add x8,x8,#0x6e7; Shield: add x8,x8,#0x718
- 0x00a948bc: Sword: bl 0x012b4250; Shield: bl 0x012b4280
- 0x00a948c8: Sword: bl 0x012b4420; Shield: bl 0x012b4450
- 0x00a949fc: Sword: add x8,x8,#0xf69; Shield: add x8,x8,#0xfc1
- 0x00a94a18: Sword: bl 0x012b4250; Shield: bl 0x012b4280
- 0x00a94a28: Sword: bl 0x012b4190; Shield: bl 0x012b41c0
- 0x00a94a34: Sword: bl 0x012b4630; Shield: bl 0x012b4660
- 0x00a94a5c: Sword: add x8,x8,#0xbdf; Shield: add x8,x8,#0xc1f
- 0x00a94a7c: Sword: bl 0x012b4250; Shield: bl 0x012b4280
- 0x00a94a88: Sword: bl 0x012b4420; Shield: bl 0x012b4450

## 0x00a0dbd0 — OPERAND_OR_IMMEDIATE_CHANGE (score 19)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00a0dbd0(long param_1,uint param_2,uint param_3); Shield: void FUN_00a0dbd0(long param_1,uint param_2,uint param_3)
- 0x00a0e114: Sword: bl 0x015f6330; Shield: bl 0x015f63a0
- 0x00a0e180: Sword: add x0,x0,#0x550; Shield: add x0,x0,#0x57a
- 0x00a0e190: Sword: bl 0x019fe840; Shield: bl 0x019fe8d0

## 0x00a10760 — OPERAND_OR_IMMEDIATE_CHANGE (score 19)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00a10760(long *param_1,undefined8 *param_2); Shield: void FUN_00a10760(long *param_1,undefined8 *param_2)
- 0x00a1084c: Sword: bl 0x00ffd700; Shield: bl 0x00ffd730
- 0x00a109d0: Sword: bl 0x016a7ae0; Shield: bl 0x016a7b70
- 0x00a109ec: Sword: bl 0x015f6330; Shield: bl 0x015f63a0
- 0x00a10bd8: Sword: bl 0x016a7910; Shield: bl 0x016a79a0
- 0x00a10c28: Sword: bl 0x016a7910; Shield: bl 0x016a79a0
- 0x00a10c90: Sword: bl 0x00ffd510; Shield: bl 0x00ffd540
- 0x00a10ce0: Sword: bl 0x016a6c90; Shield: bl 0x016a6d20
- 0x00a10d6c: Sword: bl 0x00ffd510; Shield: bl 0x00ffd540
- 0x00a10d8c: Sword: bl 0x00ffd840; Shield: bl 0x00ffd870

## 0x00a53b60 — OPERAND_OR_IMMEDIATE_CHANGE (score 19)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: undefined8 FUN_00a53b60(long param_1,uint param_2); Shield: undefined8 FUN_00a53b60(long param_1,uint param_2)
- 0x00a53c84: Sword: bl 0x00ffd510; Shield: bl 0x00ffd540
- 0x00a53e10: Sword: bl 0x019fdc90; Shield: bl 0x019fdd20
- 0x00a53e60: Sword: bl 0x00ffd430; Shield: bl 0x00ffd460
- 0x00a53e70: Sword: bl 0x00ffd010; Shield: bl 0x00ffd040
- 0x00a53e94: Sword: bl 0x00ffd430; Shield: bl 0x00ffd460
- 0x00a53ea4: Sword: bl 0x00ffd010; Shield: bl 0x00ffd040
- 0x00a53ee8: Sword: bl 0x019fdc90; Shield: bl 0x019fdd20
- 0x00a53f38: Sword: bl 0x00ffd430; Shield: bl 0x00ffd460
- 0x00a53f48: Sword: bl 0x00ffd010; Shield: bl 0x00ffd040
- 0x00a53f64: Sword: bl 0x00ffd430; Shield: bl 0x00ffd460
- 0x00a53f74: Sword: bl 0x00ffd010; Shield: bl 0x00ffd040
- 0x00a53fb8: Sword: bl 0x019fdc90; Shield: bl 0x019fdd20
- 0x00a540d0: Sword: bl 0x019a65b0; Shield: bl 0x019a6640
- 0x00a540d8: Sword: bl 0x019a65b0; Shield: bl 0x019a6640
- 0x00a54134: Sword: bl 0x019fdc60; Shield: bl 0x019fdcf0

## 0x00acf8d0 — OPERAND_OR_IMMEDIATE_CHANGE (score 19)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00acf8d0(long *param_1); Shield: void FUN_00acf8d0(long *param_1)
- 0x00acfaec: Sword: bl 0x00da16f0; Shield: bl 0x00da1720
- 0x00acfd4c: Sword: bl 0x00da16f0; Shield: bl 0x00da1720
- 0x00acfdc4: Sword: bl 0x019fdbe0; Shield: bl 0x019fdc70
- 0x00acfde4: Sword: bl 0x019fdbf0; Shield: bl 0x019fdc80
- 0x00acff80: Sword: add x10,x10,#0x339; Shield: add x10,x10,#0x383
- 0x00acff94: Sword: bl 0x012b4250; Shield: bl 0x012b4280
- 0x00acffa4: Sword: bl 0x012b4190; Shield: bl 0x012b41c0
- 0x00acffb4: Sword: bl 0x012b4070; Shield: bl 0x012b40a0
- 0x00acffd4: Sword: add x8,x8,#0x5c3; Shield: add x8,x8,#0x60d
- 0x00acfff0: Sword: bl 0x012b4250; Shield: bl 0x012b4280
- 0x00ad0000: Sword: bl 0x012b4630; Shield: bl 0x012b4660
- 0x00ad0018: Sword: add x9,x9,#0xc09; Shield: add x9,x9,#0xc53
- 0x00ad0034: Sword: bl 0x012b4250; Shield: bl 0x012b4280
- 0x00ad0040: Sword: bl 0x012b4630; Shield: bl 0x012b4660
- 0x00ad0058: Sword: add x9,x9,#0xbb5; Shield: add x9,x9,#0xbf6
- 0x00ad0074: Sword: bl 0x012b4250; Shield: bl 0x012b4280

## 0x00bef870 — OPERAND_OR_IMMEDIATE_CHANGE (score 19)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00bef870(long param_1); Shield: void FUN_00bef870(long param_1)
- 0x00bef88c: Sword: bl 0x016bbeb0; Shield: bl 0x016bbf40
- 0x00bef898: Sword: bl 0x016bbde0; Shield: bl 0x016bbe70
- 0x00bef8a4: Sword: bl 0x016bbde0; Shield: bl 0x016bbe70
- 0x00bef8b0: Sword: bl 0x016bbde0; Shield: bl 0x016bbe70
- 0x00bef8bc: Sword: bl 0x016bbde0; Shield: bl 0x016bbe70
- 0x00bef8c8: Sword: bl 0x016bbde0; Shield: bl 0x016bbe70
- 0x00befad4: Sword: bl 0x0108c840; Shield: bl 0x0108c870
- 0x00befbb8: Sword: bl 0x0108c840; Shield: bl 0x0108c870
- 0x00befc9c: Sword: bl 0x0108c840; Shield: bl 0x0108c870
- 0x00befd80: Sword: bl 0x0108c840; Shield: bl 0x0108c870
- 0x00befe34: Sword: add x0,x0,#0x550; Shield: add x0,x0,#0x57a
- 0x00befe44: Sword: bl 0x019fe840; Shield: bl 0x019fe8d0

## 0x00679d10 — OPERAND_OR_IMMEDIATE_CHANGE (score 18)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: undefined * FUN_00679d10(undefined8 param_1); Shield: undefined * FUN_00679d10(undefined8 param_1)
- 0x00679e0c: Sword: add x21,x21,#0xdcd; Shield: add x21,x21,#0xe0d
- 0x00679e1c: Sword: bl 0x019fe530; Shield: bl 0x019fe5c0
- 0x00679e28: Sword: bl 0x019fe530; Shield: bl 0x019fe5c0
- 0x00679e90: Sword: bl 0x019fe530; Shield: bl 0x019fe5c0
- 0x00679e9c: Sword: bl 0x019fe530; Shield: bl 0x019fe5c0
- 0x00679f08: Sword: add x26,x26,#0x529; Shield: add x26,x26,#0x56a
- 0x00679f18: Sword: bl 0x019fe530; Shield: bl 0x019fe5c0
- 0x00679f24: Sword: bl 0x019fe530; Shield: bl 0x019fe5c0
- 0x00679f90: Sword: bl 0x019fe530; Shield: bl 0x019fe5c0
- 0x00679f9c: Sword: bl 0x019fe530; Shield: bl 0x019fe5c0
- 0x00679ff4: Sword: add x1,x1,#0xdcd; Shield: add x1,x1,#0xe0d
- 0x0067a00c: Sword: add x1,x1,#0xdcd; Shield: add x1,x1,#0xe0d
- 0x0067a038: Sword: add x24,x24,#0x842; Shield: add x24,x24,#0x883
- 0x0067a048: Sword: bl 0x019fe530; Shield: bl 0x019fe5c0
- 0x0067a054: Sword: bl 0x019fe530; Shield: bl 0x019fe5c0
- 0x0067a0c0: Sword: bl 0x019fe530; Shield: bl 0x019fe5c0

## 0x00687c90 — OPERAND_OR_IMMEDIATE_CHANGE (score 18)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: undefined * FUN_00687c90(undefined8 param_1); Shield: undefined * FUN_00687c90(undefined8 param_1)
- 0x00687d8c: Sword: add x21,x21,#0xdcd; Shield: add x21,x21,#0xe0d
- 0x00687d9c: Sword: bl 0x019fe530; Shield: bl 0x019fe5c0
- 0x00687da8: Sword: bl 0x019fe530; Shield: bl 0x019fe5c0
- 0x00687e10: Sword: bl 0x019fe530; Shield: bl 0x019fe5c0
- 0x00687e1c: Sword: bl 0x019fe530; Shield: bl 0x019fe5c0
- 0x00687e88: Sword: add x26,x26,#0x529; Shield: add x26,x26,#0x56a
- 0x00687e98: Sword: bl 0x019fe530; Shield: bl 0x019fe5c0
- 0x00687ea4: Sword: bl 0x019fe530; Shield: bl 0x019fe5c0
- 0x00687f10: Sword: bl 0x019fe530; Shield: bl 0x019fe5c0
- 0x00687f1c: Sword: bl 0x019fe530; Shield: bl 0x019fe5c0
- 0x00687f74: Sword: add x1,x1,#0xdcd; Shield: add x1,x1,#0xe0d
- 0x00687f8c: Sword: add x1,x1,#0xdcd; Shield: add x1,x1,#0xe0d
- 0x00687fb8: Sword: add x24,x24,#0x842; Shield: add x24,x24,#0x883
- 0x00687fc8: Sword: bl 0x019fe530; Shield: bl 0x019fe5c0
- 0x00687fd4: Sword: bl 0x019fe530; Shield: bl 0x019fe5c0
- 0x00688040: Sword: bl 0x019fe530; Shield: bl 0x019fe5c0

## 0x00695390 — OPERAND_OR_IMMEDIATE_CHANGE (score 18)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: undefined * FUN_00695390(undefined8 param_1); Shield: undefined * FUN_00695390(undefined8 param_1)
- 0x0069548c: Sword: add x21,x21,#0xdcd; Shield: add x21,x21,#0xe0d
- 0x0069549c: Sword: bl 0x019fe530; Shield: bl 0x019fe5c0
- 0x006954a8: Sword: bl 0x019fe530; Shield: bl 0x019fe5c0
- 0x00695510: Sword: bl 0x019fe530; Shield: bl 0x019fe5c0
- 0x0069551c: Sword: bl 0x019fe530; Shield: bl 0x019fe5c0
- 0x00695588: Sword: add x26,x26,#0x529; Shield: add x26,x26,#0x56a
- 0x00695598: Sword: bl 0x019fe530; Shield: bl 0x019fe5c0
- 0x006955a4: Sword: bl 0x019fe530; Shield: bl 0x019fe5c0
- 0x00695610: Sword: bl 0x019fe530; Shield: bl 0x019fe5c0
- 0x0069561c: Sword: bl 0x019fe530; Shield: bl 0x019fe5c0
- 0x00695674: Sword: add x1,x1,#0xdcd; Shield: add x1,x1,#0xe0d
- 0x0069568c: Sword: add x1,x1,#0xdcd; Shield: add x1,x1,#0xe0d
- 0x006956b8: Sword: add x24,x24,#0x842; Shield: add x24,x24,#0x883
- 0x006956c8: Sword: bl 0x019fe530; Shield: bl 0x019fe5c0
- 0x006956d4: Sword: bl 0x019fe530; Shield: bl 0x019fe5c0
- 0x00695740: Sword: bl 0x019fe530; Shield: bl 0x019fe5c0

## 0x006968a0 — OPERAND_OR_IMMEDIATE_CHANGE (score 18)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: undefined * FUN_006968a0(undefined8 param_1); Shield: undefined * FUN_006968a0(undefined8 param_1)
- 0x0069699c: Sword: add x21,x21,#0xdcd; Shield: add x21,x21,#0xe0d
- 0x006969ac: Sword: bl 0x019fe530; Shield: bl 0x019fe5c0
- 0x006969b8: Sword: bl 0x019fe530; Shield: bl 0x019fe5c0
- 0x00696a20: Sword: bl 0x019fe530; Shield: bl 0x019fe5c0
- 0x00696a2c: Sword: bl 0x019fe530; Shield: bl 0x019fe5c0
- 0x00696a98: Sword: add x26,x26,#0x529; Shield: add x26,x26,#0x56a
- 0x00696aa8: Sword: bl 0x019fe530; Shield: bl 0x019fe5c0
- 0x00696ab4: Sword: bl 0x019fe530; Shield: bl 0x019fe5c0
- 0x00696b20: Sword: bl 0x019fe530; Shield: bl 0x019fe5c0
- 0x00696b2c: Sword: bl 0x019fe530; Shield: bl 0x019fe5c0
- 0x00696b84: Sword: add x1,x1,#0xdcd; Shield: add x1,x1,#0xe0d
- 0x00696b9c: Sword: add x1,x1,#0xdcd; Shield: add x1,x1,#0xe0d
- 0x00696bc8: Sword: add x24,x24,#0x842; Shield: add x24,x24,#0x883
- 0x00696bd8: Sword: bl 0x019fe530; Shield: bl 0x019fe5c0
- 0x00696be4: Sword: bl 0x019fe530; Shield: bl 0x019fe5c0
- 0x00696c50: Sword: bl 0x019fe530; Shield: bl 0x019fe5c0

## 0x006cc2d0 — OPERAND_OR_IMMEDIATE_CHANGE (score 18)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: bool FUN_006cc2d0(undefined8 param_1,int param_2,long param_3,long *param_4,undefined8 *param_5); Shield: bool FUN_006cc2d0(undefined8 param_1,int param_2,long param_3,long *param_4,undefined8 *param_5)
- 0x006cc348: Sword: bl 0x019fdbe0; Shield: bl 0x019fdc70
- 0x006cc350: Sword: bl 0x01590a70; Shield: bl 0x01590aa0
- 0x006cc35c: Sword: bl 0x019fdbf0; Shield: bl 0x019fdc80
- 0x006cc478: Sword: bl 0x019fdbe0; Shield: bl 0x019fdc70
- 0x006cc484: Sword: bl 0x01590a70; Shield: bl 0x01590aa0
- 0x006cc494: Sword: bl 0x019fdbf0; Shield: bl 0x019fdc80
- 0x006cc564: Sword: bl 0x019fdbe0; Shield: bl 0x019fdc70
- 0x006cc56c: Sword: bl 0x01590a70; Shield: bl 0x01590aa0
- 0x006cc57c: Sword: bl 0x019fdbf0; Shield: bl 0x019fdc80

## 0x006cc690 — OPERAND_OR_IMMEDIATE_CHANGE (score 18)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: bool FUN_006cc690(undefined8 param_1,long param_2,long *param_3,undefined8 *param_4,; Shield: bool FUN_006cc690(undefined8 param_1,long param_2,long *param_3,undefined8 *param_4,
- 0x006cc758: Sword: bl 0x019fdbe0; Shield: bl 0x019fdc70
- 0x006cc760: Sword: bl 0x01590a70; Shield: bl 0x01590aa0
- 0x006cc76c: Sword: bl 0x019fdbf0; Shield: bl 0x019fdc80
- 0x006cc850: Sword: bl 0x019fdbe0; Shield: bl 0x019fdc70
- 0x006cc858: Sword: bl 0x01590a70; Shield: bl 0x01590aa0
- 0x006cc864: Sword: bl 0x019fdbf0; Shield: bl 0x019fdc80
- 0x006cc914: Sword: bl 0x019fdbe0; Shield: bl 0x019fdc70
- 0x006cc91c: Sword: bl 0x01590a70; Shield: bl 0x01590aa0
- 0x006cc928: Sword: bl 0x019fdbf0; Shield: bl 0x019fdc80

## 0x006e33f0 — OPERAND_OR_IMMEDIATE_CHANGE (score 18)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_006e33f0(long param_1,undefined8 *param_2); Shield: void FUN_006e33f0(long param_1,undefined8 *param_2)
- 0x006e3434: Sword: bl 0x019fe8b0; Shield: bl 0x019fe940
- 0x006e343c: Sword: bl 0x019fe8c0; Shield: bl 0x019fe950
- 0x006e34a8: Sword: bl 0x019fe8d0; Shield: bl 0x019fe960
- 0x006e34bc: Sword: bl 0x019fdc90; Shield: bl 0x019fdd20
- 0x006e3568: Sword: add x1,x1,#0xf56; Shield: add x1,x1,#0xfa0
- 0x006e3588: Sword: bl 0x019fdc90; Shield: bl 0x019fdd20
- 0x006e3634: Sword: add x1,x1,#0x5c4; Shield: add x1,x1,#0x604
- 0x006e3650: Sword: add x0,x0,#0xf7c; Shield: add x0,x0,#0xfc6
- 0x006e36a8: Sword: add x8,x8,#0x550; Shield: add x8,x8,#0x57a
- 0x006e3714: Sword: bl 0x019fdc60; Shield: bl 0x019fdcf0

## 0x006ef3c0 — OPERAND_OR_IMMEDIATE_CHANGE (score 18)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_006ef3c0(long param_1); Shield: void FUN_006ef3c0(long param_1)
- 0x006ef420: Sword: bl 0x0199df70; Shield: bl 0x0199e000
- 0x006ef450: Sword: bl 0x0199df20; Shield: bl 0x0199dfb0
- 0x006ef474: Sword: bl 0x0199df20; Shield: bl 0x0199dfb0
- 0x006ef4d0: Sword: bl 0x0199db10; Shield: bl 0x0199dba0
- 0x006ef4fc: Sword: bl 0x0199dd20; Shield: bl 0x0199ddb0
- 0x006ef6cc: Sword: bl 0x0199dee0; Shield: bl 0x0199df70
- 0x006ef720: Sword: bl 0x0199df70; Shield: bl 0x0199e000

## 0x006ffa80 — OPERAND_OR_IMMEDIATE_CHANGE (score 18)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_006ffa80(long *param_1); Shield: void FUN_006ffa80(long *param_1)
- 0x006ffb4c: Sword: bl 0x0199db10; Shield: bl 0x0199dba0
- 0x006ffbac: Sword: bl 0x0199db10; Shield: bl 0x0199dba0
- 0x006ffbfc: Sword: bl 0x0199db10; Shield: bl 0x0199dba0
- 0x006ffc4c: Sword: bl 0x0199db10; Shield: bl 0x0199dba0
- 0x006ffc9c: Sword: bl 0x0199db10; Shield: bl 0x0199dba0
- 0x006ffcec: Sword: bl 0x0199db10; Shield: bl 0x0199dba0
- 0x006ffd3c: Sword: bl 0x0199db10; Shield: bl 0x0199dba0
- 0x006ffd8c: Sword: bl 0x0199db10; Shield: bl 0x0199dba0
- 0x006ffe44: Sword: bl 0x0199dfd0; Shield: bl 0x0199e060
- 0x006ffe64: Sword: bl 0x0199e0a0; Shield: bl 0x0199e130
- 0x006ffeb4: Sword: bl 0x0199dd20; Shield: bl 0x0199ddb0
- 0x006fff00: Sword: bl 0x0199d150; Shield: bl 0x0199d1e0
- 0x006fff40: Sword: bl 0x0199de60; Shield: bl 0x0199def0
- 0x006fff58: Sword: bl 0x0199de90; Shield: bl 0x0199df20

## 0x00713a20 — OPERAND_OR_IMMEDIATE_CHANGE (score 18)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00713a20(ulong *param_1,long param_2); Shield: void FUN_00713a20(ulong *param_1,long param_2)
- 0x00713a54: Sword: add x8,x8,#0x550; Shield: add x8,x8,#0x57a
- 0x00713b08: Sword: bl 0x019fdd00; Shield: bl 0x019fdd90

## 0x0073dfe0 — OPERAND_OR_IMMEDIATE_CHANGE (score 18)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_0073dfe0(long param_1,long param_2,int param_3); Shield: void FUN_0073dfe0(long param_1,long param_2,int param_3)
- 0x0073e0c0: Sword: bl 0x0199cb60; Shield: bl 0x0199cbf0
- 0x0073e0e0: Sword: bl 0x0199de60; Shield: bl 0x0199def0
- 0x0073e0ec: Sword: bl 0x0199cbc0; Shield: bl 0x0199cc50
- 0x0073e1e8: Sword: bl 0x0199cb60; Shield: bl 0x0199cbf0
- 0x0073e208: Sword: bl 0x0199de60; Shield: bl 0x0199def0
- 0x0073e228: Sword: bl 0x0199cb60; Shield: bl 0x0199cbf0
- 0x0073e23c: Sword: bl 0x0199de60; Shield: bl 0x0199def0
- 0x0073e248: Sword: bl 0x0199cbc0; Shield: bl 0x0199cc50
- 0x0073e298: Sword: bl 0x0199cb60; Shield: bl 0x0199cbf0
- 0x0073e2b8: Sword: bl 0x0199de60; Shield: bl 0x0199def0
- 0x0073e2c4: Sword: bl 0x0199cbc0; Shield: bl 0x0199cc50

## 0x00791180 — OPERAND_OR_IMMEDIATE_CHANGE (score 18)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00791180(long param_1,long param_2,int param_3,int param_4,int param_5,uint param_6,; Shield: void FUN_00791180(long param_1,long param_2,int param_3,int param_4,int param_5,uint param_6,
- 0x0079124c: Sword: bl 0x0199c2a0; Shield: bl 0x0199c330
- 0x00791290: Sword: bl 0x0199de60; Shield: bl 0x0199def0
- 0x007912b8: Sword: bl 0x0199c2b0; Shield: bl 0x0199c340
- 0x007912d8: Sword: bl 0x0199c2a0; Shield: bl 0x0199c330
- 0x0079131c: Sword: bl 0x0199c2b0; Shield: bl 0x0199c340
- 0x00791334: Sword: bl 0x0199c2a0; Shield: bl 0x0199c330
- 0x00791384: Sword: bl 0x0199d930; Shield: bl 0x0199d9c0
- 0x007913a4: Sword: bl 0x0199c2b0; Shield: bl 0x0199c340
- 0x007913cc: Sword: bl 0x0199c2a0; Shield: bl 0x0199c330
- 0x00791424: Sword: bl 0x0199d3e0; Shield: bl 0x0199d470
- 0x0079148c: Sword: bl 0x0199de60; Shield: bl 0x0199def0
- 0x007914b4: Sword: bl 0x0199c2b0; Shield: bl 0x0199c340
- 0x007914d4: Sword: bl 0x0199c2a0; Shield: bl 0x0199c330
- 0x00791518: Sword: bl 0x0199c2b0; Shield: bl 0x0199c340
- 0x00791530: Sword: bl 0x0199c2a0; Shield: bl 0x0199c330
- 0x00791580: Sword: bl 0x0199d930; Shield: bl 0x0199d9c0

## 0x00865c70 — OPERAND_OR_IMMEDIATE_CHANGE (score 18)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00865c70(void); Shield: void FUN_00865c70(void)
- 0x00865cf0: Sword: add x22,x22,#0x550; Shield: add x22,x22,#0x57a

## 0x009a75a0 — OPERAND_OR_IMMEDIATE_CHANGE (score 18)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: int FUN_009a75a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,; Shield: int FUN_009a75a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
- 0x009a7880: Sword: bl 0x0102ba70; Shield: bl 0x0102baa0

## 0x009cbee0 — OPERAND_OR_IMMEDIATE_CHANGE (score 18)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_009cbee0(long param_1); Shield: void FUN_009cbee0(long param_1)
- 0x009cc00c: Sword: bl 0x01940760; Shield: bl 0x019407f0

## 0x00a855e0 — OPERAND_OR_IMMEDIATE_CHANGE (score 18)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00a855e0(long param_1,byte param_2,int param_3); Shield: void FUN_00a855e0(long param_1,byte param_2,int param_3)
- 0x00a85680: Sword: bl 0x00dcd4a0; Shield: bl 0x00dcd4d0
- 0x00a856d4: Sword: bl 0x019fdc00; Shield: bl 0x019fdc90
- 0x00a85898: Sword: bl 0x019fdbe0; Shield: bl 0x019fdc70
- 0x00a858ac: Sword: bl 0x019fdbf0; Shield: bl 0x019fdc80

## 0x00a93780 — OPERAND_OR_IMMEDIATE_CHANGE (score 18)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00a93780(long param_1,ulong param_2); Shield: void FUN_00a93780(long param_1,ulong param_2)
- 0x00a937f0: Sword: bl 0x01052d20; Shield: bl 0x01052d50
- 0x00a937f8: Sword: bl 0x01052410; Shield: bl 0x01052440
- 0x00a93818: Sword: bl 0x01053890; Shield: bl 0x010538c0
- 0x00a939b0: Sword: bl 0x01052d00; Shield: bl 0x01052d30
- 0x00a939c0: Sword: bl 0x019fddc0; Shield: bl 0x019fde50
- 0x00a939fc: Sword: bl 0x01052d00; Shield: bl 0x01052d30
- 0x00a93a0c: Sword: bl 0x019fddc0; Shield: bl 0x019fde50
- 0x00a93a44: Sword: bl 0x01052cc0; Shield: bl 0x01052cf0
- 0x00a93a88: Sword: bl 0x01052d00; Shield: bl 0x01052d30
- 0x00a93a98: Sword: bl 0x019fddc0; Shield: bl 0x019fde50
- 0x00a93ab8: Sword: bl 0x01052cc0; Shield: bl 0x01052cf0
- 0x00a93acc: Sword: bl 0x01052d00; Shield: bl 0x01052d30
- 0x00a93adc: Sword: bl 0x019fddc0; Shield: bl 0x019fde50
- 0x00a93b18: Sword: bl 0x01052cc0; Shield: bl 0x01052cf0
- 0x00a93b64: Sword: bl 0x01067170; Shield: bl 0x010671a0
- 0x00a93b84: Sword: bl 0x01052cc0; Shield: bl 0x01052cf0

## 0x00bcf1f0 — OPERAND_OR_IMMEDIATE_CHANGE (score 18)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: undefined4; Shield: undefined4
- 0x00bcf3e0: Sword: bl 0x0150a670; Shield: bl 0x0150a6a0
- 0x00bcf44c: Sword: bl 0x01505e60; Shield: bl 0x01505e90

## 0x00bd26a0 — OPERAND_OR_IMMEDIATE_CHANGE (score 18)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00bd26a0(undefined1 param_1 [16],float param_2,long param_3,uint param_4,int param_5); Shield: void FUN_00bd26a0(undefined1 param_1 [16],float param_2,long param_3,uint param_4,int param_5)
- 0x00bd2784: Sword: bl 0x0167b760; Shield: bl 0x0167b7f0
- 0x00bd2798: Sword: bl 0x0167b760; Shield: bl 0x0167b7f0

## 0x00bf49d0 — OPERAND_OR_IMMEDIATE_CHANGE (score 18)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00bf49d0(long param_1); Shield: void FUN_00bf49d0(long param_1)
- 0x00bf4a7c: Sword: bl 0x010364c0; Shield: bl 0x010364f0
- 0x00bf4cc8: Sword: bl 0x010364c0; Shield: bl 0x010364f0
- 0x00bf4d4c: Sword: b 0x01037030; Shield: b 0x01037060

## 0x00c14440 — OPERAND_OR_IMMEDIATE_CHANGE (score 18)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00c14440(long param_1,undefined4 param_2); Shield: void FUN_00c14440(long param_1,undefined4 param_2)
- 0x00c14478: Sword: bl 0x0166fe50; Shield: bl 0x0166fee0
- 0x00c14514: Sword: bl 0x019fdc90; Shield: bl 0x019fdd20
- 0x00c14718: Sword: bl 0x016c2cb0; Shield: bl 0x016c2d40
- 0x00c1473c: Sword: bl 0x016c2ca0; Shield: bl 0x016c2d30
- 0x00c1474c: Sword: bl 0x016c2c80; Shield: bl 0x016c2d10
- 0x00c14758: Sword: bl 0x016c2c90; Shield: bl 0x016c2d20
- 0x00c14760: Sword: bl 0x016bef00; Shield: bl 0x016bef90
- 0x00c1477c: Sword: bl 0x016b2da0; Shield: bl 0x016b2e30
- 0x00c147f0: Sword: bl 0x019fdc60; Shield: bl 0x019fdcf0

## 0x00c72160 — OPERAND_OR_IMMEDIATE_CHANGE (score 18)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00c72160(long *param_1,long *param_2); Shield: void FUN_00c72160(long *param_1,long *param_2)
- 0x00c72260: Sword: bl 0x019fdbe0; Shield: bl 0x019fdc70
- 0x00c72294: Sword: bl 0x019fdbf0; Shield: bl 0x019fdc80
- 0x00c722c8: Sword: bl 0x01061270; Shield: bl 0x010612a0
- 0x00c722f0: Sword: bl 0x01061270; Shield: bl 0x010612a0
- 0x00c72384: Sword: bl 0x019fdbe0; Shield: bl 0x019fdc70
- 0x00c723b0: Sword: bl 0x019fdbf0; Shield: bl 0x019fdc80

## 0x00c7dc50 — OPERAND_OR_IMMEDIATE_CHANGE (score 18)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00c7dc50(undefined8 param_1,long param_2,uint param_3,long param_4); Shield: void FUN_00c7dc50(undefined8 param_1,long param_2,uint param_3,long param_4)
- 0x00c7de8c: Sword: bl 0x01524df0; Shield: bl 0x01524e20
- 0x00c7deac: Sword: bl 0x01524df0; Shield: bl 0x01524e20
- 0x00c7dec0: Sword: bl 0x019fddc0; Shield: bl 0x019fde50
- 0x00c7def0: Sword: bl 0x019fddc0; Shield: bl 0x019fde50

## 0x003276f0 — OPERAND_OR_IMMEDIATE_CHANGE (score 17)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_003276f0(long *param_1,undefined8 *param_2); Shield: void FUN_003276f0(long *param_1,undefined8 *param_2)
- 0x00327804: Sword: add x22,x22,#0xd80; Shield: add x22,x22,#0xdd8
- 0x00327840: Sword: add x23,x23,#0x65e; Shield: add x23,x23,#0x691
- 0x00327868: Sword: bl 0x019fdd00; Shield: bl 0x019fdd90
- 0x00327898: Sword: bl 0x019fdd00; Shield: bl 0x019fdd90

## 0x0032fd40 — OPERAND_OR_IMMEDIATE_CHANGE (score 17)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_0032fd40(long *param_1,ulong *param_2); Shield: void FUN_0032fd40(long *param_1,ulong *param_2)
- 0x0032fe54: Sword: add x22,x22,#0xd80; Shield: add x22,x22,#0xdd8
- 0x0032fe90: Sword: add x23,x23,#0x65e; Shield: add x23,x23,#0x691
- 0x0032feb8: Sword: bl 0x019fdd00; Shield: bl 0x019fdd90
- 0x0032fee8: Sword: bl 0x019fdd00; Shield: bl 0x019fdd90

## 0x003307c0 — OPERAND_OR_IMMEDIATE_CHANGE (score 17)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_003307c0(long *param_1,ulong *param_2); Shield: void FUN_003307c0(long *param_1,ulong *param_2)
- 0x003308d4: Sword: add x22,x22,#0xd80; Shield: add x22,x22,#0xdd8
- 0x00330910: Sword: add x23,x23,#0x65e; Shield: add x23,x23,#0x691
- 0x00330938: Sword: bl 0x019fdd00; Shield: bl 0x019fdd90
- 0x00330968: Sword: bl 0x019fdd00; Shield: bl 0x019fdd90

## 0x00331340 — OPERAND_OR_IMMEDIATE_CHANGE (score 17)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00331340(long *param_1,ulong *param_2); Shield: void FUN_00331340(long *param_1,ulong *param_2)
- 0x00331454: Sword: add x22,x22,#0xd80; Shield: add x22,x22,#0xdd8
- 0x00331490: Sword: add x23,x23,#0x65e; Shield: add x23,x23,#0x691
- 0x003314b8: Sword: bl 0x019fdd00; Shield: bl 0x019fdd90
- 0x003314e8: Sword: bl 0x019fdd00; Shield: bl 0x019fdd90

## 0x00337980 — OPERAND_OR_IMMEDIATE_CHANGE (score 17)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00337980(long *param_1,ulong *param_2); Shield: void FUN_00337980(long *param_1,ulong *param_2)
- 0x00337a94: Sword: add x22,x22,#0xd80; Shield: add x22,x22,#0xdd8
- 0x00337ad0: Sword: add x23,x23,#0x65e; Shield: add x23,x23,#0x691
- 0x00337af8: Sword: bl 0x019fdd00; Shield: bl 0x019fdd90
- 0x00337b28: Sword: bl 0x019fdd00; Shield: bl 0x019fdd90

## 0x00337f10 — OPERAND_OR_IMMEDIATE_CHANGE (score 17)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00337f10(long *param_1,ulong *param_2); Shield: void FUN_00337f10(long *param_1,ulong *param_2)
- 0x00338024: Sword: add x22,x22,#0xd80; Shield: add x22,x22,#0xdd8
- 0x00338060: Sword: add x23,x23,#0x65e; Shield: add x23,x23,#0x691
- 0x00338088: Sword: bl 0x019fdd00; Shield: bl 0x019fdd90
- 0x003380b8: Sword: bl 0x019fdd00; Shield: bl 0x019fdd90

## 0x00344170 — OPERAND_OR_IMMEDIATE_CHANGE (score 17)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00344170(long *param_1,ulong *param_2); Shield: void FUN_00344170(long *param_1,ulong *param_2)
- 0x00344284: Sword: add x22,x22,#0xd80; Shield: add x22,x22,#0xdd8
- 0x003442c0: Sword: add x23,x23,#0x65e; Shield: add x23,x23,#0x691
- 0x003442e8: Sword: bl 0x019fdd00; Shield: bl 0x019fdd90
- 0x00344318: Sword: bl 0x019fdd00; Shield: bl 0x019fdd90

## 0x00344700 — OPERAND_OR_IMMEDIATE_CHANGE (score 17)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00344700(long *param_1,ulong *param_2); Shield: void FUN_00344700(long *param_1,ulong *param_2)
- 0x00344814: Sword: add x22,x22,#0xd80; Shield: add x22,x22,#0xdd8
- 0x00344850: Sword: add x23,x23,#0x65e; Shield: add x23,x23,#0x691
- 0x00344878: Sword: bl 0x019fdd00; Shield: bl 0x019fdd90
- 0x003448a8: Sword: bl 0x019fdd00; Shield: bl 0x019fdd90

## 0x00349850 — OPERAND_OR_IMMEDIATE_CHANGE (score 17)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00349850(long *param_1,ulong *param_2); Shield: void FUN_00349850(long *param_1,ulong *param_2)
- 0x00349964: Sword: add x22,x22,#0xd80; Shield: add x22,x22,#0xdd8
- 0x003499a0: Sword: add x23,x23,#0x65e; Shield: add x23,x23,#0x691
- 0x003499c8: Sword: bl 0x019fdd00; Shield: bl 0x019fdd90
- 0x003499f8: Sword: bl 0x019fdd00; Shield: bl 0x019fdd90

## 0x00349de0 — OPERAND_OR_IMMEDIATE_CHANGE (score 17)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00349de0(long *param_1,ulong *param_2); Shield: void FUN_00349de0(long *param_1,ulong *param_2)
- 0x00349ef4: Sword: add x22,x22,#0xd80; Shield: add x22,x22,#0xdd8
- 0x00349f30: Sword: add x23,x23,#0x65e; Shield: add x23,x23,#0x691
- 0x00349f58: Sword: bl 0x019fdd00; Shield: bl 0x019fdd90
- 0x00349f88: Sword: bl 0x019fdd00; Shield: bl 0x019fdd90

## 0x0034f800 — OPERAND_OR_IMMEDIATE_CHANGE (score 17)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_0034f800(long *param_1,undefined8 *param_2); Shield: void FUN_0034f800(long *param_1,undefined8 *param_2)
- 0x0034f914: Sword: add x22,x22,#0xd80; Shield: add x22,x22,#0xdd8
- 0x0034f950: Sword: add x23,x23,#0x65e; Shield: add x23,x23,#0x691
- 0x0034f978: Sword: bl 0x019fdd00; Shield: bl 0x019fdd90
- 0x0034f9a8: Sword: bl 0x019fdd00; Shield: bl 0x019fdd90

## 0x00351760 — OPERAND_OR_IMMEDIATE_CHANGE (score 17)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00351760(long *param_1,ulong *param_2); Shield: void FUN_00351760(long *param_1,ulong *param_2)
- 0x00351874: Sword: add x22,x22,#0xd80; Shield: add x22,x22,#0xdd8
- 0x003518b0: Sword: add x23,x23,#0x65e; Shield: add x23,x23,#0x691
- 0x003518d8: Sword: bl 0x019fdd00; Shield: bl 0x019fdd90
- 0x00351908: Sword: bl 0x019fdd00; Shield: bl 0x019fdd90

## 0x00351cf0 — OPERAND_OR_IMMEDIATE_CHANGE (score 17)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00351cf0(long *param_1,ulong *param_2); Shield: void FUN_00351cf0(long *param_1,ulong *param_2)
- 0x00351e04: Sword: add x22,x22,#0xd80; Shield: add x22,x22,#0xdd8
- 0x00351e40: Sword: add x23,x23,#0x65e; Shield: add x23,x23,#0x691
- 0x00351e68: Sword: bl 0x019fdd00; Shield: bl 0x019fdd90
- 0x00351e98: Sword: bl 0x019fdd00; Shield: bl 0x019fdd90

## 0x00355b00 — OPERAND_OR_IMMEDIATE_CHANGE (score 17)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00355b00(long *param_1,ulong *param_2); Shield: void FUN_00355b00(long *param_1,ulong *param_2)
- 0x00355c14: Sword: add x22,x22,#0xd80; Shield: add x22,x22,#0xdd8
- 0x00355c50: Sword: add x23,x23,#0x65e; Shield: add x23,x23,#0x691
- 0x00355c78: Sword: bl 0x019fdd00; Shield: bl 0x019fdd90
- 0x00355ca8: Sword: bl 0x019fdd00; Shield: bl 0x019fdd90

## 0x00356090 — OPERAND_OR_IMMEDIATE_CHANGE (score 17)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00356090(long *param_1,ulong *param_2); Shield: void FUN_00356090(long *param_1,ulong *param_2)
- 0x003561a4: Sword: add x22,x22,#0xd80; Shield: add x22,x22,#0xdd8
- 0x003561e0: Sword: add x23,x23,#0x65e; Shield: add x23,x23,#0x691
- 0x00356208: Sword: bl 0x019fdd00; Shield: bl 0x019fdd90
- 0x00356238: Sword: bl 0x019fdd00; Shield: bl 0x019fdd90

## 0x00357020 — OPERAND_OR_IMMEDIATE_CHANGE (score 17)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00357020(long *param_1,ulong *param_2); Shield: void FUN_00357020(long *param_1,ulong *param_2)
- 0x00357134: Sword: add x22,x22,#0xd80; Shield: add x22,x22,#0xdd8
- 0x00357170: Sword: add x23,x23,#0x65e; Shield: add x23,x23,#0x691
- 0x00357198: Sword: bl 0x019fdd00; Shield: bl 0x019fdd90
- 0x003571c8: Sword: bl 0x019fdd00; Shield: bl 0x019fdd90

## 0x00358720 — OPERAND_OR_IMMEDIATE_CHANGE (score 17)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00358720(long *param_1,undefined8 *param_2); Shield: void FUN_00358720(long *param_1,undefined8 *param_2)
- 0x00358834: Sword: add x22,x22,#0xd80; Shield: add x22,x22,#0xdd8
- 0x00358870: Sword: add x23,x23,#0x65e; Shield: add x23,x23,#0x691
- 0x00358898: Sword: bl 0x019fdd00; Shield: bl 0x019fdd90
- 0x003588c8: Sword: bl 0x019fdd00; Shield: bl 0x019fdd90

## 0x0036c9b0 — OPERAND_OR_IMMEDIATE_CHANGE (score 17)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_0036c9b0(long *param_1,undefined8 *param_2); Shield: void FUN_0036c9b0(long *param_1,undefined8 *param_2)
- 0x0036cac4: Sword: add x22,x22,#0xd80; Shield: add x22,x22,#0xdd8
- 0x0036cb00: Sword: add x23,x23,#0x65e; Shield: add x23,x23,#0x691
- 0x0036cb28: Sword: bl 0x019fdd00; Shield: bl 0x019fdd90
- 0x0036cb58: Sword: bl 0x019fdd00; Shield: bl 0x019fdd90

## 0x00371600 — OPERAND_OR_IMMEDIATE_CHANGE (score 17)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00371600(long *param_1,undefined8 *param_2); Shield: void FUN_00371600(long *param_1,undefined8 *param_2)
- 0x00371714: Sword: add x22,x22,#0xd80; Shield: add x22,x22,#0xdd8
- 0x00371750: Sword: add x23,x23,#0x65e; Shield: add x23,x23,#0x691
- 0x00371778: Sword: bl 0x019fdd00; Shield: bl 0x019fdd90
- 0x003717a8: Sword: bl 0x019fdd00; Shield: bl 0x019fdd90

## 0x0037b490 — OPERAND_OR_IMMEDIATE_CHANGE (score 17)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_0037b490(long *param_1,undefined8 *param_2); Shield: void FUN_0037b490(long *param_1,undefined8 *param_2)
- 0x0037b5a4: Sword: add x22,x22,#0xd80; Shield: add x22,x22,#0xdd8
- 0x0037b5e0: Sword: add x23,x23,#0x65e; Shield: add x23,x23,#0x691
- 0x0037b608: Sword: bl 0x019fdd00; Shield: bl 0x019fdd90
- 0x0037b638: Sword: bl 0x019fdd00; Shield: bl 0x019fdd90

## 0x00385db0 — OPERAND_OR_IMMEDIATE_CHANGE (score 17)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00385db0(long *param_1,undefined8 *param_2); Shield: void FUN_00385db0(long *param_1,undefined8 *param_2)
- 0x00385ec4: Sword: add x22,x22,#0xd80; Shield: add x22,x22,#0xdd8
- 0x00385f00: Sword: add x23,x23,#0x65e; Shield: add x23,x23,#0x691
- 0x00385f28: Sword: bl 0x019fdd00; Shield: bl 0x019fdd90
- 0x00385f58: Sword: bl 0x019fdd00; Shield: bl 0x019fdd90

## 0x0038c510 — OPERAND_OR_IMMEDIATE_CHANGE (score 17)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_0038c510(long *param_1,undefined8 *param_2); Shield: void FUN_0038c510(long *param_1,undefined8 *param_2)
- 0x0038c624: Sword: add x22,x22,#0xd80; Shield: add x22,x22,#0xdd8
- 0x0038c660: Sword: add x23,x23,#0x65e; Shield: add x23,x23,#0x691
- 0x0038c688: Sword: bl 0x019fdd00; Shield: bl 0x019fdd90
- 0x0038c6b8: Sword: bl 0x019fdd00; Shield: bl 0x019fdd90

## 0x00391b40 — OPERAND_OR_IMMEDIATE_CHANGE (score 17)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00391b40(long *param_1,undefined8 *param_2); Shield: void FUN_00391b40(long *param_1,undefined8 *param_2)
- 0x00391c54: Sword: add x22,x22,#0xd80; Shield: add x22,x22,#0xdd8
- 0x00391c90: Sword: add x23,x23,#0x65e; Shield: add x23,x23,#0x691
- 0x00391cb8: Sword: bl 0x019fdd00; Shield: bl 0x019fdd90
- 0x00391ce8: Sword: bl 0x019fdd00; Shield: bl 0x019fdd90

## 0x0054b050 — OPERAND_OR_IMMEDIATE_CHANGE (score 17)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: undefined8 FUN_0054b050(long param_1); Shield: undefined8 FUN_0054b050(long param_1)
- 0x0054b068: Sword: add x20,x20,#0x550; Shield: add x20,x20,#0x57a

## 0x006e5a40 — OPERAND_OR_IMMEDIATE_CHANGE (score 17)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_006e5a40(long param_1,int param_2,undefined8 param_3,undefined8 *param_4,; Shield: void FUN_006e5a40(long param_1,int param_2,undefined8 param_3,undefined8 *param_4,
- 0x006e5a5c: Sword: add x9,x9,#0x550; Shield: add x9,x9,#0x57a
- 0x006e5a98: Sword: adrp x2,0x1cfc000; Shield: adrp x2,0x1cfd000
- 0x006e5a9c: Sword: add x2,x2,#0xfec; Shield: add x2,x2,#0x2c
- 0x006e5aac: Sword: bl 0x019fe230; Shield: bl 0x019fe2c0
- 0x006e5bf8: Sword: bl 0x019fdbe0; Shield: bl 0x019fdc70
- 0x006e5c44: Sword: bl 0x019fdbf0; Shield: bl 0x019fdc80

## 0x00703f20 — OPERAND_OR_IMMEDIATE_CHANGE (score 17)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00703f20(long param_1); Shield: void FUN_00703f20(long param_1)
- 0x007040b4: Sword: bl 0x019fdbe0; Shield: bl 0x019fdc70
- 0x007040d0: Sword: bl 0x019fdbf0; Shield: bl 0x019fdc80
- 0x00704164: Sword: bl 0x0199dee0; Shield: bl 0x0199df70

## 0x0072ee90 — OPERAND_OR_IMMEDIATE_CHANGE (score 17)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_0072ee90(long *param_1,ulong param_2,undefined1 param_3,undefined1 param_4); Shield: void FUN_0072ee90(long *param_1,ulong param_2,undefined1 param_3,undefined1 param_4)
- 0x0072effc: Sword: bl 0x0199c0e0; Shield: bl 0x0199c170
- 0x0072f084: Sword: bl 0x0199c0e0; Shield: bl 0x0199c170

## 0x0072f130 — OPERAND_OR_IMMEDIATE_CHANGE (score 17)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_0072f130(long *param_1,ulong param_2,undefined1 param_3,undefined1 param_4); Shield: void FUN_0072f130(long *param_1,ulong param_2,undefined1 param_3,undefined1 param_4)
- 0x0072f290: Sword: bl 0x0199c0e0; Shield: bl 0x0199c170
- 0x0072f318: Sword: bl 0x0199c0e0; Shield: bl 0x0199c170

## 0x007881c0 — OPERAND_OR_IMMEDIATE_CHANGE (score 17)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_007881c0(long param_1); Shield: void FUN_007881c0(long param_1)
- 0x007881fc: Sword: bl 0x0199cf00; Shield: bl 0x0199cf90
- 0x00788218: Sword: bl 0x0199cfb0; Shield: bl 0x0199d040
- 0x00788234: Sword: bl 0x0199ce00; Shield: bl 0x0199ce90
- 0x00788284: Sword: bl 0x019b39e0; Shield: bl 0x019b3a70
- 0x00788314: Sword: bl 0x019fdbe0; Shield: bl 0x019fdc70
- 0x00788344: Sword: bl 0x019fdbf0; Shield: bl 0x019fdc80
- 0x007883b8: Sword: bl 0x0199d150; Shield: bl 0x0199d1e0
- 0x00788400: Sword: bl 0x0199dfd0; Shield: bl 0x0199e060
- 0x00788420: Sword: bl 0x0199e0a0; Shield: bl 0x0199e130
- 0x0078843c: Sword: bl 0x0199cf00; Shield: bl 0x0199cf90

## 0x007abef0 — OPERAND_OR_IMMEDIATE_CHANGE (score 17)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_007abef0(long param_1); Shield: void FUN_007abef0(long param_1)
- 0x007abf24: Sword: bl 0x017cd7a0; Shield: bl 0x017cd830
- 0x007abf48: Sword: bl 0x017cd7a0; Shield: bl 0x017cd830
- 0x007abf6c: Sword: bl 0x017cd7a0; Shield: bl 0x017cd830
- 0x007abf90: Sword: bl 0x017cd7a0; Shield: bl 0x017cd830
- 0x007abfb4: Sword: bl 0x017cd7a0; Shield: bl 0x017cd830
- 0x007abfd8: Sword: bl 0x017cd7a0; Shield: bl 0x017cd830
- 0x007abffc: Sword: bl 0x017cd7a0; Shield: bl 0x017cd830
- 0x007ac020: Sword: bl 0x017cd7a0; Shield: bl 0x017cd830
- 0x007ac044: Sword: bl 0x017cd7a0; Shield: bl 0x017cd830
- 0x007ac04c: Sword: bl 0x017d44e0; Shield: bl 0x017d4570
- 0x007ac058: Sword: bl 0x017d43b0; Shield: bl 0x017d4440
- 0x007ac064: Sword: bl 0x017b5440; Shield: bl 0x017b54d0

## 0x007b9320 — OPERAND_OR_IMMEDIATE_CHANGE (score 17)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_007b9320(long param_1); Shield: void FUN_007b9320(long param_1)
- 0x007b94a4: Sword: bl 0x018724d0; Shield: bl 0x01872560

## 0x0080c430 — OPERAND_OR_IMMEDIATE_CHANGE (score 17)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_0080c430(int param_1,int param_2,int param_3,long *param_4); Shield: void FUN_0080c430(int param_1,int param_2,int param_3,long *param_4)
- 0x0080c45c: Sword: add x2,x2,#0x67b; Shield: add x2,x2,#0x6ac
- 0x0080c474: Sword: add x1,x1,#0xe04; Shield: add x1,x1,#0xe2d
- 0x0080c4a8: Sword: add x1,x1,#0x727; Shield: add x1,x1,#0x77f
- 0x0080c4e0: Sword: add x2,x2,#0x67b; Shield: add x2,x2,#0x6ac
- 0x0080c4f8: Sword: add x1,x1,#0x96c; Shield: add x1,x1,#0x987
- 0x0080c508: Sword: add x1,x1,#0xbc2; Shield: add x1,x1,#0xc1a
- 0x0080c538: Sword: add x1,x1,#0xc9a; Shield: add x1,x1,#0xcb5
- 0x0080c568: Sword: add x2,x2,#0x67b; Shield: add x2,x2,#0x6ac
- 0x0080c580: Sword: add x1,x1,#0xba1; Shield: add x1,x1,#0xbeb

## 0x009a3a00 — OPERAND_OR_IMMEDIATE_CHANGE (score 17)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: bool FUN_009a3a00(undefined8 param_1,undefined8 param_2,uint param_3); Shield: bool FUN_009a3a00(undefined8 param_1,undefined8 param_2,uint param_3)
- 0x009a3acc: Sword: bl 0x01524da0; Shield: bl 0x01524dd0

## 0x009a54d0 — OPERAND_OR_IMMEDIATE_CHANGE (score 17)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_009a54d0(undefined4 *param_1,undefined8 param_2,undefined8 param_3,long param_4,; Shield: void FUN_009a54d0(undefined4 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
- 0x009a5528: Sword: bl 0x01524c00; Shield: bl 0x01524c30
- 0x009a5624: Sword: bl 0x01524c50; Shield: bl 0x01524c80

## 0x009ce960 — OPERAND_OR_IMMEDIATE_CHANGE (score 17)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_009ce960(long param_1,undefined8 *param_2); Shield: void FUN_009ce960(long param_1,undefined8 *param_2)
- 0x009cea54: Sword: bl 0x019fdc90; Shield: bl 0x019fdd20
- 0x009ceb10: Sword: bl 0x01524f20; Shield: bl 0x01524f50
- 0x009ceb20: Sword: bl 0x01524f20; Shield: bl 0x01524f50
- 0x009ceb6c: Sword: bl 0x019fdc60; Shield: bl 0x019fdcf0

## 0x009fde50 — OPERAND_OR_IMMEDIATE_CHANGE (score 17)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: uint FUN_009fde50(long param_1,undefined8 *param_2); Shield: uint FUN_009fde50(long param_1,undefined8 *param_2)
- 0x009fe018: Sword: bl 0x014adfd0; Shield: bl 0x014ae000

## 0x00a3a1d0 — OPERAND_OR_IMMEDIATE_CHANGE (score 17)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00a3a1d0(long param_1,ulong param_2); Shield: void FUN_00a3a1d0(long param_1,ulong param_2)
- 0x00a3a240: Sword: bl 0x016b2da0; Shield: bl 0x016b2e30
- 0x00a3a300: Sword: bl 0x019fdbe0; Shield: bl 0x019fdc70
- 0x00a3a310: Sword: bl 0x0108ca20; Shield: bl 0x0108ca50
- 0x00a3a31c: Sword: bl 0x019fdbf0; Shield: bl 0x019fdc80

## 0x00a556f0 — OPERAND_OR_IMMEDIATE_CHANGE (score 17)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00a556f0(long param_1,int param_2); Shield: void FUN_00a556f0(long param_1,int param_2)
- 0x00a55764: Sword: bl 0x0167b6b0; Shield: bl 0x0167b740
- 0x00a557b4: Sword: bl 0x0167b6b0; Shield: bl 0x0167b740
- 0x00a55800: Sword: bl 0x019fdbe0; Shield: bl 0x019fdc70
- 0x00a55814: Sword: bl 0x019fdbf0; Shield: bl 0x019fdc80
- 0x00a55828: Sword: bl 0x019fdbe0; Shield: bl 0x019fdc70
- 0x00a5583c: Sword: bl 0x019fdbf0; Shield: bl 0x019fdc80
- 0x00a558e8: Sword: bl 0x00ffd010; Shield: bl 0x00ffd040
- 0x00a558fc: Sword: bl 0x00ffd430; Shield: bl 0x00ffd460
- 0x00a55908: Sword: bl 0x00ffd010; Shield: bl 0x00ffd040

## 0x00a584b0 — OPERAND_OR_IMMEDIATE_CHANGE (score 17)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00a584b0(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,; Shield: void FUN_00a584b0(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
- 0x00a5851c: Sword: bl 0x00ffa3d0; Shield: bl 0x00ffa400
- 0x00a58680: Sword: add x0,x0,#0x550; Shield: add x0,x0,#0x57a
- 0x00a58690: Sword: bl 0x019fe840; Shield: bl 0x019fe8d0

## 0x00a71c60 — OPERAND_OR_IMMEDIATE_CHANGE (score 17)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00a71c60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,; Shield: void FUN_00a71c60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
- 0x00a71cc8: Sword: bl 0x019fdc90; Shield: bl 0x019fdd20
- 0x00a71db4: Sword: bl 0x015f6330; Shield: bl 0x015f63a0
- 0x00a71e5c: Sword: bl 0x019fdc60; Shield: bl 0x019fdcf0

## 0x00a79350 — OPERAND_OR_IMMEDIATE_CHANGE (score 17)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00a79350(long param_1,int param_2,uint param_3); Shield: void FUN_00a79350(long param_1,int param_2,uint param_3)
- 0x00a793cc: Sword: add x8,x8,#0x339; Shield: add x8,x8,#0x383
- 0x00a793e8: Sword: bl 0x012b4250; Shield: bl 0x012b4280
- 0x00a793f8: Sword: bl 0x012b4190; Shield: bl 0x012b41c0
- 0x00a79414: Sword: add x8,x8,#0xb27; Shield: add x8,x8,#0xb68
- 0x00a79430: Sword: bl 0x012b4250; Shield: bl 0x012b4280
- 0x00a7943c: Sword: bl 0x012b4a30; Shield: bl 0x012b4a60
- 0x00a79448: Sword: add x2,x2,#0x791; Shield: add x2,x2,#0x7db
- 0x00a79454: Sword: bl 0x019fe230; Shield: bl 0x019fe2c0
- 0x00a794b0: Sword: add x8,x8,#0x550; Shield: add x8,x8,#0x57a

## 0x00a7a5a0 — OPERAND_OR_IMMEDIATE_CHANGE (score 17)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00a7a5a0(long param_1,byte param_2); Shield: void FUN_00a7a5a0(long param_1,byte param_2)
- 0x00a7a5f4: Sword: bl 0x00dab450; Shield: bl 0x00dab480
- 0x00a7a634: Sword: bl 0x00dab450; Shield: bl 0x00dab480
- 0x00a7a674: Sword: bl 0x00dab450; Shield: bl 0x00dab480
- 0x00a7a6f0: Sword: bl 0x00dab450; Shield: bl 0x00dab480
- 0x00a7a70c: Sword: bl 0x00dab450; Shield: bl 0x00dab480
- 0x00a7a728: Sword: bl 0x00dab450; Shield: bl 0x00dab480

## 0x00aa73f0 — OPERAND_OR_IMMEDIATE_CHANGE (score 17)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00aa73f0(undefined8 *param_1,undefined8 param_2,undefined1 param_3); Shield: void FUN_00aa73f0(undefined8 *param_1,undefined8 param_2,undefined1 param_3)
- 0x00aa7420: Sword: add x9,x9,#0xc41; Shield: add x9,x9,#0xc81
- 0x00aa7448: Sword: add x9,x9,#0xb9d; Shield: add x9,x9,#0xbde
- 0x00aa7470: Sword: add x9,x9,#0x9d; Shield: add x9,x9,#0xf5
- 0x00aa7498: Sword: add x9,x9,#0x911; Shield: add x9,x9,#0x969
- 0x00aa74c0: Sword: add x9,x9,#0xc5b; Shield: add x9,x9,#0xc9b
- 0x00aa74e8: Sword: add x9,x9,#0x13b; Shield: add x9,x9,#0x16c
- 0x00aa7510: Sword: add x9,x9,#0x3d1; Shield: add x9,x9,#0x412
- 0x00aa7588: Sword: bl 0x019fdbe0; Shield: bl 0x019fdc70
- 0x00aa75a8: Sword: add x8,x8,#0x550; Shield: add x8,x8,#0x57a
- 0x00aa75d8: Sword: bl 0x019fdbf0; Shield: bl 0x019fdc80

## 0x00ad8a10 — OPERAND_OR_IMMEDIATE_CHANGE (score 17)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: int FUN_00ad8a10(char *param_1,long *param_2,long param_3,int param_4); Shield: int FUN_00ad8a10(char *param_1,long *param_2,long param_3,int param_4)
- 0x00ad8ab8: Sword: add x8,x8,#0xbe4; Shield: add x8,x8,#0xc25
- 0x00ad8afc: Sword: add x2,x2,#0x93b; Shield: add x2,x2,#0x993
- 0x00ad8b08: Sword: bl 0x019fe230; Shield: bl 0x019fe2c0
- 0x00ad8b38: Sword: add x8,x8,#0x31d; Shield: add x8,x8,#0x338
- 0x00ad8b80: Sword: add x2,x2,#0x4a8; Shield: add x2,x2,#0x4f2
- 0x00ad8b90: Sword: bl 0x019fe230; Shield: bl 0x019fe2c0
- 0x00ad8ba0: Sword: add x2,x2,#0x5e8; Shield: add x2,x2,#0x61b
- 0x00ad8ba8: Sword: bl 0x019fe230; Shield: bl 0x019fe2c0
- 0x00ad8bb8: Sword: add x2,x2,#0xcee; Shield: add x2,x2,#0xd38
- 0x00ad8bc4: Sword: bl 0x019fe230; Shield: bl 0x019fe2c0

## 0x00b948c0 — OPERAND_OR_IMMEDIATE_CHANGE (score 17)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00b948c0(long *param_1,undefined8 param_2,undefined8 *param_3); Shield: void FUN_00b948c0(long *param_1,undefined8 param_2,undefined8 *param_3)
- 0x00b94900: Sword: bl 0x019fdc90; Shield: bl 0x019fdd20
- 0x00b94a1c: Sword: bl 0x01019670; Shield: bl 0x010196a0
- 0x00b94a54: Sword: bl 0x019fdc60; Shield: bl 0x019fdcf0

## 0x00bc41f0 — OPERAND_OR_IMMEDIATE_CHANGE (score 17)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00bc41f0(long param_1); Shield: void FUN_00bc41f0(long param_1)
- 0x00bc4360: Sword: bl 0x0167b9b0; Shield: bl 0x0167ba40
- 0x00bc4370: Sword: bl 0x0167b630; Shield: bl 0x0167b6c0
- 0x00bc4380: Sword: bl 0x0167b630; Shield: bl 0x0167b6c0
- 0x00bc4390: Sword: bl 0x0167b830; Shield: bl 0x0167b8c0
- 0x00bc43c0: Sword: bl 0x0167b9b0; Shield: bl 0x0167ba40
- 0x00bc43d0: Sword: bl 0x0167b630; Shield: bl 0x0167b6c0
- 0x00bc43e0: Sword: bl 0x0167b630; Shield: bl 0x0167b6c0
- 0x00bc43f0: Sword: bl 0x0167b830; Shield: bl 0x0167b8c0

## 0x00bc80e0 — OPERAND_OR_IMMEDIATE_CHANGE (score 17)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00bc80e0(undefined1 param_1 [16],undefined4 param_2,long param_3,ulong param_4,int param_5); Shield: void FUN_00bc80e0(undefined1 param_1 [16],undefined4 param_2,long param_3,ulong param_4,int param_5)
- 0x00bc8160: Sword: bl 0x01509eb0; Shield: bl 0x01509ee0
- 0x00bc81a0: Sword: add x2,x2,#0xd36; Shield: add x2,x2,#0xd76
- 0x00bc81c0: Sword: bl 0x019fe230; Shield: bl 0x019fe2c0
- 0x00bc8214: Sword: bl 0x0167b720; Shield: bl 0x0167b7b0
- 0x00bc8268: Sword: bl 0x01509eb0; Shield: bl 0x01509ee0

## 0x00bd1a80 — OPERAND_OR_IMMEDIATE_CHANGE (score 17)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: int FUN_00bd1a80(long param_1,ulong param_2); Shield: int FUN_00bd1a80(long param_1,ulong param_2)
- 0x00bd1b4c: Sword: bl 0x0167b9f0; Shield: bl 0x0167ba80
- 0x00bd1c60: Sword: bl 0x0167c250; Shield: bl 0x0167c2e0
- 0x00bd1c70: Sword: bl 0x0167bfe0; Shield: bl 0x0167c070
- 0x00bd1c84: Sword: bl 0x0167b630; Shield: bl 0x0167b6c0

## 0x00be0d10 — OPERAND_OR_IMMEDIATE_CHANGE (score 17)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: undefined8 FUN_00be0d10(undefined4 *param_1,long *param_2,long param_3); Shield: undefined8 FUN_00be0d10(undefined4 *param_1,long *param_2,long param_3)
- 0x00be0db4: Sword: bl 0x017d1040; Shield: bl 0x017d10d0
- 0x00be0e88: Sword: bl 0x017d0720; Shield: bl 0x017d07b0

## 0x00be0ec0 — OPERAND_OR_IMMEDIATE_CHANGE (score 17)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: undefined8 FUN_00be0ec0(undefined4 *param_1,long *param_2,long param_3); Shield: undefined8 FUN_00be0ec0(undefined4 *param_1,long *param_2,long param_3)
- 0x00be0f64: Sword: bl 0x017d1040; Shield: bl 0x017d10d0
- 0x00be1030: Sword: bl 0x017d0720; Shield: bl 0x017d07b0

## 0x00be1d60 — OPERAND_OR_IMMEDIATE_CHANGE (score 17)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: bool FUN_00be1d60(int *param_1,long param_2,long *param_3); Shield: bool FUN_00be1d60(int *param_1,long param_2,long *param_3)
- 0x00be1db0: Sword: bl 0x019fdc90; Shield: bl 0x019fdd20
- 0x00be1ea4: Sword: bl 0x017cbe80; Shield: bl 0x017cbf10
- 0x00be1eb0: Sword: bl 0x0185c210; Shield: bl 0x0185c2a0
- 0x00be1ebc: Sword: bl 0x017cc550; Shield: bl 0x017cc5e0
- 0x00be1ff0: Sword: bl 0x019fdc60; Shield: bl 0x019fdcf0

## 0x00bef170 — OPERAND_OR_IMMEDIATE_CHANGE (score 17)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00bef170(long param_1); Shield: void FUN_00bef170(long param_1)
- 0x00bef224: Sword: bl 0x016bb930; Shield: bl 0x016bb9c0
- 0x00bef278: Sword: bl 0x016bb930; Shield: bl 0x016bb9c0
- 0x00bef2d0: Sword: bl 0x016bb930; Shield: bl 0x016bb9c0
- 0x00bef328: Sword: bl 0x016bb930; Shield: bl 0x016bb9c0
- 0x00bef380: Sword: bl 0x016bb930; Shield: bl 0x016bb9c0
- 0x00bef3c0: Sword: bl 0x019fdc60; Shield: bl 0x019fdcf0

## 0x00bf3cb0 — OPERAND_OR_IMMEDIATE_CHANGE (score 17)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00bf3cb0(long param_1); Shield: void FUN_00bf3cb0(long param_1)
- 0x00bf3cd4: Sword: bl 0x00ffa3f0; Shield: bl 0x00ffa420
- 0x00bf3ce4: Sword: bl 0x00ffa3f0; Shield: bl 0x00ffa420
- 0x00bf3cf4: Sword: bl 0x00ffa3f0; Shield: bl 0x00ffa420
- 0x00bf3d78: Sword: bl 0x00ffa3d0; Shield: bl 0x00ffa400
- 0x00bf3e38: Sword: bl 0x00ffa3d0; Shield: bl 0x00ffa400
- 0x00bf3e48: Sword: bl 0x016d20d0; Shield: bl 0x016d2160
- 0x00bf3e58: Sword: bl 0x00ffa3d0; Shield: bl 0x00ffa400
- 0x00bf3e68: Sword: bl 0x016d20d0; Shield: bl 0x016d2160
- 0x00bf3e78: Sword: bl 0x00ffa3d0; Shield: bl 0x00ffa400
- 0x00bf3e90: Sword: b 0x016d20d0; Shield: b 0x016d2160

## 0x00bfdee0 — OPERAND_OR_IMMEDIATE_CHANGE (score 17)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00bfdee0(long param_1,int param_2); Shield: void FUN_00bfdee0(long param_1,int param_2)
- 0x00bfdf00: Sword: bl 0x016bbeb0; Shield: bl 0x016bbf40
- 0x00bfdf0c: Sword: bl 0x016bbde0; Shield: bl 0x016bbe70
- 0x00bfdf18: Sword: bl 0x016bbde0; Shield: bl 0x016bbe70
- 0x00bfdf24: Sword: bl 0x016bbde0; Shield: bl 0x016bbe70
- 0x00bfdf30: Sword: bl 0x016bbde0; Shield: bl 0x016bbe70
- 0x00bfdf3c: Sword: bl 0x016bbde0; Shield: bl 0x016bbe70
- 0x00bfe044: Sword: bl 0x016bb930; Shield: bl 0x016bb9c0
- 0x00bfe0a4: Sword: bl 0x016bb930; Shield: bl 0x016bb9c0
- 0x00bfe15c: Sword: bl 0x016bb930; Shield: bl 0x016bb9c0

## 0x00c97360 — OPERAND_OR_IMMEDIATE_CHANGE (score 17)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: long FUN_00c97360(undefined8 param_1,int param_2,int param_3); Shield: long FUN_00c97360(undefined8 param_1,int param_2,int param_3)
- 0x00c97374: Sword: bl 0x010295e0; Shield: bl 0x01029610

## 0x00d14cc0 — OPERAND_OR_IMMEDIATE_CHANGE (score 17)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00d14cc0(long param_1,int param_2); Shield: void FUN_00d14cc0(long param_1,int param_2)
- 0x00d14d70: Sword: bl 0x010312b0; Shield: bl 0x010312e0
- 0x00d14d94: Sword: bl 0x010312b0; Shield: bl 0x010312e0
- 0x00d14e3c: Sword: bl 0x010312b0; Shield: bl 0x010312e0

## 0x00d6e6b0 — OPERAND_OR_IMMEDIATE_CHANGE (score 17)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00d6e6b0(undefined8 *param_1,long *param_2); Shield: void FUN_00d6e6b0(undefined8 *param_1,long *param_2)
- 0x00d6e6ec: Sword: bl 0x019fdc90; Shield: bl 0x019fdd20
- 0x00d6e740: Sword: add x8,x8,#0x550; Shield: add x8,x8,#0x57a
- 0x00d6e8b4: Sword: bl 0x019fdc60; Shield: bl 0x019fdcf0

## 0x00d867c0 — OPERAND_OR_IMMEDIATE_CHANGE (score 17)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00d867c0(long *param_1,undefined8 param_2,undefined8 *param_3); Shield: void FUN_00d867c0(long *param_1,undefined8 param_2,undefined8 *param_3)
- 0x00d86800: Sword: bl 0x019fdc90; Shield: bl 0x019fdd20
- 0x00d8691c: Sword: bl 0x01019670; Shield: bl 0x010196a0
- 0x00d86954: Sword: bl 0x019fdc60; Shield: bl 0x019fdcf0

## 0x005ecc70 — OPERAND_OR_IMMEDIATE_CHANGE (score 16)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_005ecc70(long *param_1,long param_2); Shield: void FUN_005ecc70(long *param_1,long param_2)
- 0x005eccf4: Sword: add x1,x1,#0xac4; Shield: add x1,x1,#0xaf5
- 0x005ecd08: Sword: add x1,x1,#0x998; Shield: add x1,x1,#0x9f0

## 0x005ffe20 — OPERAND_OR_IMMEDIATE_CHANGE (score 16)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_005ffe20(long *param_1,long param_2); Shield: void FUN_005ffe20(long *param_1,long param_2)
- 0x005ffef4: Sword: add x2,x2,#0xaa2; Shield: add x2,x2,#0xae3
- 0x005fff14: Sword: add x1,x1,#0x550; Shield: add x1,x1,#0x57a
- 0x005fff60: Sword: add x2,x2,#0xaa2; Shield: add x2,x2,#0xae3

## 0x006b9210 — OPERAND_OR_IMMEDIATE_CHANGE (score 16)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: undefined * FUN_006b9210(long *param_1); Shield: undefined * FUN_006b9210(long *param_1)
- 0x006b9260: Sword: bl 0x019fdbe0; Shield: bl 0x019fdc70
- 0x006b9288: Sword: add x9,x9,#0x550; Shield: add x9,x9,#0x57a
- 0x006b92b0: Sword: bl 0x019fdbf0; Shield: bl 0x019fdc80

## 0x006e3010 — OPERAND_OR_IMMEDIATE_CHANGE (score 16)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: byte FUN_006e3010(long *param_1,long param_2,void *param_3); Shield: byte FUN_006e3010(long *param_1,long param_2,void *param_3)
- 0x006e30b4: Sword: bl 0x019652c0; Shield: bl 0x01965350
- 0x006e30d0: Sword: bl 0x019fddc0; Shield: bl 0x019fde50
- 0x006e30f4: Sword: bl 0x019fe8a0; Shield: bl 0x019fe930

## 0x006fbf60 — OPERAND_OR_IMMEDIATE_CHANGE (score 16)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_006fbf60(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,; Shield: void FUN_006fbf60(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
- 0x006fbf84: Sword: add x8,x8,#0x550; Shield: add x8,x8,#0x57a
- 0x006fc09c: Sword: bl 0x0199bfe0; Shield: bl 0x0199c070

## 0x00769c80 — OPERAND_OR_IMMEDIATE_CHANGE (score 16)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00769c80(long param_1); Shield: void FUN_00769c80(long param_1)
- 0x00769cac: Sword: bl 0x0199c160; Shield: bl 0x0199c1f0
- 0x00769cd0: Sword: bl 0x0199c130; Shield: bl 0x0199c1c0
- 0x00769cdc: Sword: bl 0x0199c130; Shield: bl 0x0199c1c0
- 0x00769ce8: Sword: add x9,x9,#0x739; Shield: add x9,x9,#0x754
- 0x00769d00: Sword: add x8,x8,#0xa6a; Shield: add x8,x8,#0xaab
- 0x00769d24: Sword: bl 0x0199c150; Shield: bl 0x0199c1e0
- 0x00769d34: Sword: bl 0x0199c150; Shield: bl 0x0199c1e0
- 0x00769d4c: Sword: bl 0x019a4920; Shield: bl 0x019a49b0
- 0x00769d7c: Sword: bl 0x019a49b0; Shield: bl 0x019a4a40
- 0x00769d94: Sword: bl 0x019a49d0; Shield: bl 0x019a4a60

## 0x00790be0 — OPERAND_OR_IMMEDIATE_CHANGE (score 16)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: undefined8; Shield: undefined8
- 0x00790c14: Sword: bl 0x019fdc00; Shield: bl 0x019fdc90
- 0x00790c6c: Sword: bl 0x019f43f0; Shield: bl 0x019f4480
- 0x00790c94: Sword: bl 0x019f3400; Shield: bl 0x019f3490
- 0x00790cbc: Sword: bl 0x019d68b0; Shield: bl 0x019d6940
- 0x00790cc4: Sword: bl 0x019d6690; Shield: bl 0x019d6720

## 0x007910a0 — OPERAND_OR_IMMEDIATE_CHANGE (score 16)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_007910a0(long param_1,int param_2,int param_3,undefined8 param_4,int param_5,uint param_6,; Shield: void FUN_007910a0(long param_1,int param_2,int param_3,undefined8 param_4,int param_5,uint param_6,
- 0x0079112c: Sword: bl 0x019f3dd0; Shield: bl 0x019f3e60
- 0x00791160: Sword: b 0x019f3e80; Shield: b 0x019f3f10

## 0x007aaac0 — OPERAND_OR_IMMEDIATE_CHANGE (score 16)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_007aaac0(long param_1,UserHandle *param_2); Shield: void FUN_007aaac0(long param_1,UserHandle *param_2)
- 0x007aab08: Sword: bl 0x019ff190; Shield: bl 0x019ff220
- 0x007aab84: Sword: bl 0x019ff1a0; Shield: bl 0x019ff230
- 0x007aabc0: Sword: bl 0x01965a90; Shield: bl 0x01965b20

## 0x007c3a50 — OPERAND_OR_IMMEDIATE_CHANGE (score 16)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: undefined8 FUN_007c3a50(long param_1); Shield: undefined8 FUN_007c3a50(long param_1)
- 0x007c3abc: Sword: bl 0x0193f060; Shield: bl 0x0193f0f0
- 0x007c3ac4: Sword: bl 0x019ff2f0; Shield: bl 0x019ff380
- 0x007c3ad8: Sword: bl 0x019ff300; Shield: bl 0x019ff390
- 0x007c3b1c: Sword: bl 0x0193f060; Shield: bl 0x0193f0f0
- 0x007c3b24: Sword: bl 0x019ff2f0; Shield: bl 0x019ff380
- 0x007c3b38: Sword: bl 0x019ff300; Shield: bl 0x019ff390

## 0x007da520 — OPERAND_OR_IMMEDIATE_CHANGE (score 16)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_007da520(long param_1,undefined4 *param_2); Shield: void FUN_007da520(long param_1,undefined4 *param_2)
- 0x007da550: Sword: bl 0x018666b0; Shield: bl 0x01866740
- 0x007da5d4: Sword: bl 0x019ff2c0; Shield: bl 0x019ff350
- 0x007da5e8: Sword: bl 0x019ff2d0; Shield: bl 0x019ff360
- 0x007da5f8: Sword: bl 0x018724d0; Shield: bl 0x01872560

## 0x007db9c0 — OPERAND_OR_IMMEDIATE_CHANGE (score 16)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: undefined8 FUN_007db9c0(long param_1,long *param_2,undefined4 param_3); Shield: undefined8 FUN_007db9c0(long param_1,long *param_2,undefined4 param_3)
- 0x007dba54: Sword: bl 0x019ff2c0; Shield: bl 0x019ff350
- 0x007dba64: Sword: bl 0x019ff2d0; Shield: bl 0x019ff360
- 0x007dba84: Sword: bl 0x019ff2c0; Shield: bl 0x019ff350
- 0x007dba94: Sword: bl 0x019ff2d0; Shield: bl 0x019ff360
- 0x007dbac4: Sword: bl 0x018724d0; Shield: bl 0x01872560

## 0x008f90a0 — OPERAND_OR_IMMEDIATE_CHANGE (score 16)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_008f90a0(long param_1,long param_2); Shield: void FUN_008f90a0(long param_1,long param_2)
- 0x008f91d0: Sword: b 0x015351d0; Shield: b 0x01535200

## 0x0095f150 — OPERAND_OR_IMMEDIATE_CHANGE (score 16)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_0095f150(undefined8 param_1,undefined8 param_2); Shield: void FUN_0095f150(undefined8 param_1,undefined8 param_2)
- 0x0095f1e4: Sword: bl 0x016ac470; Shield: bl 0x016ac500

## 0x009a3c80 — OPERAND_OR_IMMEDIATE_CHANGE (score 16)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: bool FUN_009a3c80(undefined8 param_1,undefined8 param_2,uint param_3); Shield: bool FUN_009a3c80(undefined8 param_1,undefined8 param_2,uint param_3)
- 0x009a3cd0: Sword: bl 0x01524da0; Shield: bl 0x01524dd0

## 0x009c4380 — OPERAND_OR_IMMEDIATE_CHANGE (score 16)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_009c4380(long param_1); Shield: void FUN_009c4380(long param_1)
- 0x009c43a4: Sword: bl 0x011faed0; Shield: bl 0x011faf00

## 0x009dd160 — OPERAND_OR_IMMEDIATE_CHANGE (score 16)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_009dd160(long param_1); Shield: void FUN_009dd160(long param_1)
- 0x009dd1f4: Sword: bl 0x011faeb0; Shield: bl 0x011faee0

## 0x009dd2c0 — OPERAND_OR_IMMEDIATE_CHANGE (score 16)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_009dd2c0(long param_1); Shield: void FUN_009dd2c0(long param_1)
- 0x009dd2e4: Sword: bl 0x011faed0; Shield: bl 0x011faf00

## 0x00a08990 — OPERAND_OR_IMMEDIATE_CHANGE (score 16)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00a08990(long param_1,byte param_2); Shield: void FUN_00a08990(long param_1,byte param_2)
- 0x00a08a50: Sword: bl 0x00ffa290; Shield: bl 0x00ffa2c0

## 0x00a08a70 — OPERAND_OR_IMMEDIATE_CHANGE (score 16)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00a08a70(long param_1); Shield: void FUN_00a08a70(long param_1)
- 0x00a08b18: Sword: bl 0x00ffa290; Shield: bl 0x00ffa2c0

## 0x00a37980 — OPERAND_OR_IMMEDIATE_CHANGE (score 16)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00a37980(long param_1,byte param_2,uint param_3); Shield: void FUN_00a37980(long param_1,byte param_2,uint param_3)
- 0x00a379b0: Sword: bl 0x016b2da0; Shield: bl 0x016b2e30
- 0x00a379bc: Sword: bl 0x016b2d70; Shield: bl 0x016b2e00
- 0x00a379e0: Sword: bl 0x016b7700; Shield: bl 0x016b7790
- 0x00a37a18: Sword: bl 0x016b81d0; Shield: bl 0x016b8260

## 0x00a37a70 — OPERAND_OR_IMMEDIATE_CHANGE (score 16)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00a37a70(long param_1,uint param_2); Shield: void FUN_00a37a70(long param_1,uint param_2)
- 0x00a37ae0: Sword: bl 0x016b8190; Shield: bl 0x016b8220
- 0x00a37afc: Sword: bl 0x00ffd510; Shield: bl 0x00ffd540
- 0x00a37b08: Sword: bl 0x016b2da0; Shield: bl 0x016b2e30
- 0x00a37b14: Sword: bl 0x016b2d70; Shield: bl 0x016b2e00
- 0x00a37b1c: Sword: bl 0x016b2eb0; Shield: bl 0x016b2f40
- 0x00a37b28: Sword: bl 0x016b2da0; Shield: bl 0x016b2e30
- 0x00a37b44: Sword: b 0x016b2d70; Shield: b 0x016b2e00

## 0x00a586a0 — OPERAND_OR_IMMEDIATE_CHANGE (score 16)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00a586a0(long param_1,undefined8 *param_2); Shield: void FUN_00a586a0(long param_1,undefined8 *param_2)
- 0x00a5874c: Sword: bl 0x00ffa3d0; Shield: bl 0x00ffa400
- 0x00a58770: Sword: add x0,x0,#0x550; Shield: add x0,x0,#0x57a
- 0x00a58780: Sword: bl 0x019fe840; Shield: bl 0x019fe8d0

## 0x00a79b40 — OPERAND_OR_IMMEDIATE_CHANGE (score 16)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00a79b40(long *param_1,uint param_2); Shield: void FUN_00a79b40(long *param_1,uint param_2)
- 0x00a79c14: Sword: bl 0x016ac470; Shield: bl 0x016ac500

## 0x00aa4f60 — OPERAND_OR_IMMEDIATE_CHANGE (score 16)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: undefined8 * FUN_00aa4f60(void); Shield: undefined8 * FUN_00aa4f60(void)
- 0x00aa4f74: Sword: bl 0x016ae300; Shield: bl 0x016ae390
- 0x00aa503c: Sword: bl 0x019fdbe0; Shield: bl 0x019fdc70
- 0x00aa5064: Sword: bl 0x019fdbf0; Shield: bl 0x019fdc80
- 0x00aa5078: Sword: add x0,x0,#0x550; Shield: add x0,x0,#0x57a
- 0x00aa5088: Sword: bl 0x019fe840; Shield: bl 0x019fe8d0

## 0x00aa5180 — OPERAND_OR_IMMEDIATE_CHANGE (score 16)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: undefined8 * FUN_00aa5180(void); Shield: undefined8 * FUN_00aa5180(void)
- 0x00aa5194: Sword: bl 0x016ae700; Shield: bl 0x016ae790
- 0x00aa525c: Sword: bl 0x019fdbe0; Shield: bl 0x019fdc70
- 0x00aa5284: Sword: bl 0x019fdbf0; Shield: bl 0x019fdc80
- 0x00aa5298: Sword: add x0,x0,#0x550; Shield: add x0,x0,#0x57a
- 0x00aa52a8: Sword: bl 0x019fe840; Shield: bl 0x019fe8d0

## 0x00aaa740 — OPERAND_OR_IMMEDIATE_CHANGE (score 16)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00aaa740(long param_1); Shield: void FUN_00aaa740(long param_1)
- 0x00aaa7a8: Sword: bl 0x00da1bc0; Shield: bl 0x00da1bf0
- 0x00aaa7c0: Sword: bl 0x00da1bc0; Shield: bl 0x00da1bf0
- 0x00aaa85c: Sword: bl 0x019fdbe0; Shield: bl 0x019fdc70
- 0x00aaa884: Sword: bl 0x019fdbf0; Shield: bl 0x019fdc80

## 0x00aad6e0 — OPERAND_OR_IMMEDIATE_CHANGE (score 16)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00aad6e0(long param_1); Shield: void FUN_00aad6e0(long param_1)
- 0x00aad748: Sword: bl 0x00da1bc0; Shield: bl 0x00da1bf0
- 0x00aad760: Sword: bl 0x00da1bc0; Shield: bl 0x00da1bf0
- 0x00aad7fc: Sword: bl 0x019fdbe0; Shield: bl 0x019fdc70
- 0x00aad824: Sword: bl 0x019fdbf0; Shield: bl 0x019fdc80

## 0x00bcb210 — OPERAND_OR_IMMEDIATE_CHANGE (score 16)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00bcb210(long param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4); Shield: void FUN_00bcb210(long param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)
- 0x00bcb238: Sword: add x1,x1,#0xd94; Shield: add x1,x1,#0xdd5
- 0x00bcb244: Sword: bl 0x00ffdc80; Shield: bl 0x00ffdcb0
- 0x00bcb248: Sword: bl 0x016b8190; Shield: bl 0x016b8220
- 0x00bcb2bc: Sword: bl 0x0150b350; Shield: bl 0x0150b380
- 0x00bcb354: Sword: bl 0x0150b350; Shield: bl 0x0150b380

## 0x00bcb370 — OPERAND_OR_IMMEDIATE_CHANGE (score 16)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: undefined8 FUN_00bcb370(long param_1,undefined4 param_2); Shield: undefined8 FUN_00bcb370(long param_1,undefined4 param_2)
- 0x00bcb3a0: Sword: bl 0x011ffb60; Shield: bl 0x011ffb90
- 0x00bcb3bc: Sword: bl 0x0120e870; Shield: bl 0x0120e8a0
- 0x00bcb3d4: Sword: bl 0x01524ba0; Shield: bl 0x01524bd0
- 0x00bcb434: Sword: bl 0x01524bf0; Shield: bl 0x01524c20
- 0x00bcb444: Sword: bl 0x01524c00; Shield: bl 0x01524c30
- 0x00bcb45c: Sword: bl 0x014c9110; Shield: bl 0x014c9140

## 0x00bcb720 — OPERAND_OR_IMMEDIATE_CHANGE (score 16)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: long * FUN_00bcb720(long param_1); Shield: long * FUN_00bcb720(long param_1)
- 0x00bcb764: Sword: bl 0x0167b6b0; Shield: bl 0x0167b740
- 0x00bcb7e0: Sword: bl 0x019fdbe0; Shield: bl 0x019fdc70
- 0x00bcb7fc: Sword: bl 0x019fdbf0; Shield: bl 0x019fdc80

## 0x00bce510 — OPERAND_OR_IMMEDIATE_CHANGE (score 16)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: undefined8 FUN_00bce510(undefined8 param_1,undefined8 param_2,undefined4 param_3); Shield: undefined8 FUN_00bce510(undefined8 param_1,undefined8 param_2,undefined4 param_3)
- 0x00bce5f8: Sword: bl 0x015351d0; Shield: bl 0x01535200

## 0x00bce610 — OPERAND_OR_IMMEDIATE_CHANGE (score 16)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00bce610(long param_1,int param_2,int param_3,undefined4 param_4); Shield: void FUN_00bce610(long param_1,int param_2,int param_3,undefined4 param_4)
- 0x00bce668: Sword: bl 0x0150a590; Shield: bl 0x0150a5c0
- 0x00bce67c: Sword: bl 0x0150a5c0; Shield: bl 0x0150a5f0
- 0x00bce690: Sword: bl 0x01505ea0; Shield: bl 0x01505ed0
- 0x00bce6dc: Sword: bl 0x01505ea0; Shield: bl 0x01505ed0

## 0x00bd2520 — OPERAND_OR_IMMEDIATE_CHANGE (score 16)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00bd2520(undefined1 param_1 [16],float param_2,long param_3,float *param_4); Shield: void FUN_00bd2520(undefined1 param_1 [16],float param_2,long param_3,float *param_4)
- 0x00bd2564: Sword: bl 0x0167b720; Shield: bl 0x0167b7b0
- 0x00bd2590: Sword: bl 0x0167b630; Shield: bl 0x0167b6c0
- 0x00bd25cc: Sword: bl 0x0167b9b0; Shield: bl 0x0167ba40

## 0x00bde790 — OPERAND_OR_IMMEDIATE_CHANGE (score 16)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00bde790(char *param_1,char *param_2); Shield: void FUN_00bde790(char *param_1,char *param_2)
- 0x00bde7b0: Sword: bl 0x017c4240; Shield: bl 0x017c42d0

## 0x00c78410 — OPERAND_OR_IMMEDIATE_CHANGE (score 16)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: undefined8 FUN_00c78410(undefined8 param_1,long *param_2); Shield: undefined8 FUN_00c78410(undefined8 param_1,long *param_2)
- 0x00c78420: Sword: bl 0x010295e0; Shield: bl 0x01029610

## 0x00c784f0 — OPERAND_OR_IMMEDIATE_CHANGE (score 16)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: undefined8 FUN_00c784f0(undefined8 param_1,long *param_2); Shield: undefined8 FUN_00c784f0(undefined8 param_1,long *param_2)
- 0x00c78500: Sword: bl 0x010295e0; Shield: bl 0x01029610

## 0x00c97270 — OPERAND_OR_IMMEDIATE_CHANGE (score 16)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: long FUN_00c97270(undefined8 param_1,long *param_2); Shield: long FUN_00c97270(undefined8 param_1,long *param_2)
- 0x00c97280: Sword: bl 0x010295e0; Shield: bl 0x01029610

## 0x00ccc040 — OPERAND_OR_IMMEDIATE_CHANGE (score 16)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00ccc040(long param_1); Shield: void FUN_00ccc040(long param_1)
- 0x00ccc128: Sword: bl 0x016bb930; Shield: bl 0x016bb9c0

## 0x00cce790 — OPERAND_OR_IMMEDIATE_CHANGE (score 16)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00cce790(long param_1,int param_2,uint param_3,uint param_4,long param_5,undefined8 param_6; Shield: void FUN_00cce790(long param_1,int param_2,uint param_3,uint param_4,long param_5,undefined8 param_6
- 0x00cce7f4: Sword: bl 0x016b81d0; Shield: bl 0x016b8260
- 0x00cce808: Sword: bl 0x016b2d70; Shield: bl 0x016b2e00
- 0x00cce814: Sword: bl 0x016b2da0; Shield: bl 0x016b2e30

## 0x00cf1d20 — OPERAND_OR_IMMEDIATE_CHANGE (score 16)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: long FUN_00cf1d20(undefined8 param_1,long *param_2,undefined8 *param_3,long *param_4); Shield: long FUN_00cf1d20(undefined8 param_1,long *param_2,undefined8 *param_3,long *param_4)
- 0x00cf1d4c: Sword: bl 0x019fdc90; Shield: bl 0x019fdd20
- 0x00cf1dc8: Sword: bl 0x014cec00; Shield: bl 0x014cec30
- 0x00cf1e18: Sword: bl 0x019fdc60; Shield: bl 0x019fdcf0

## 0x00d38f30 — OPERAND_OR_IMMEDIATE_CHANGE (score 16)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00d38f30(long param_1,undefined8 *param_2); Shield: void FUN_00d38f30(long param_1,undefined8 *param_2)
- 0x00d38f54: Sword: bl 0x01679c40; Shield: bl 0x01679cd0
- 0x00d38fbc: Sword: add x8,x8,#0x8e9; Shield: add x8,x8,#0x913
- 0x00d3902c: Sword: bl 0x01679b10; Shield: bl 0x01679ba0

## 0x00d89e00 — OPERAND_OR_IMMEDIATE_CHANGE (score 16)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: long FUN_00d89e00(undefined8 param_1,long *param_2); Shield: long FUN_00d89e00(undefined8 param_1,long *param_2)
- 0x00d89e20: Sword: bl 0x019fdc90; Shield: bl 0x019fdd20
- 0x00d89e68: Sword: bl 0x01609fc0; Shield: bl 0x0160a030
- 0x00d89e94: Sword: bl 0x01609fc0; Shield: bl 0x0160a030
- 0x00d89edc: Sword: bl 0x019fdc60; Shield: bl 0x019fdcf0

## 0x006008c0 — OPERAND_OR_IMMEDIATE_CHANGE (score 15)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_006008c0(long param_1); Shield: void FUN_006008c0(long param_1)
- 0x00600908: Sword: add x1,x1,#0x550; Shield: add x1,x1,#0x57a

## 0x007888a0 — OPERAND_OR_IMMEDIATE_CHANGE (score 15)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: byte FUN_007888a0(long param_1); Shield: byte FUN_007888a0(long param_1)
- 0x007888f8: Sword: bl 0x019a9320; Shield: bl 0x019a93b0
- 0x00788908: Sword: bl 0x019a9350; Shield: bl 0x019a93e0

## 0x007a8c10 — OPERAND_OR_IMMEDIATE_CHANGE (score 15)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_007a8c10(long param_1,undefined4 param_2); Shield: void FUN_007a8c10(long param_1,undefined4 param_2)
- 0x007a8c34: Sword: bl 0x0193e800; Shield: bl 0x0193e890
- 0x007a8c38: Sword: bl 0x01936f40; Shield: bl 0x01936fd0
- 0x007a8c50: Sword: bl 0x01871bf0; Shield: bl 0x01871c80
- 0x007a8c54: Sword: bl 0x0186bc20; Shield: bl 0x0186bcb0
- 0x007a8c58: Sword: bl 0x01870d80; Shield: bl 0x01870e10
- 0x007a8c5c: Sword: bl 0x01866ad0; Shield: bl 0x01866b60

## 0x007b5340 — OPERAND_OR_IMMEDIATE_CHANGE (score 15)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_007b5340(long param_1); Shield: void FUN_007b5340(long param_1)
- 0x007b5364: Sword: bl 0x01940f80; Shield: bl 0x01941010
- 0x007b536c: Sword: bl 0x01941410; Shield: bl 0x019414a0

## 0x007b8180 — OPERAND_OR_IMMEDIATE_CHANGE (score 15)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: ulong FUN_007b8180(void); Shield: ulong FUN_007b8180(void)
- 0x007b81a0: Sword: bl 0x01940800; Shield: bl 0x01940890
- 0x007b81b0: Sword: bl 0x01940800; Shield: bl 0x01940890
- 0x007b81e0: Sword: bl 0x01940800; Shield: bl 0x01940890

## 0x008f9260 — OPERAND_OR_IMMEDIATE_CHANGE (score 15)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_008f9260(long param_1,undefined8 param_2); Shield: void FUN_008f9260(long param_1,undefined8 param_2)
- 0x008f92f8: Sword: b 0x01534930; Shield: b 0x01534960

## 0x008f9940 — OPERAND_OR_IMMEDIATE_CHANGE (score 15)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: undefined8 FUN_008f9940(long param_1,char param_2,undefined4 param_3); Shield: undefined8 FUN_008f9940(long param_1,char param_2,undefined4 param_3)
- 0x008f99d4: Sword: bl 0x01520b70; Shield: bl 0x01520ba0

## 0x009a1fd0 — OPERAND_OR_IMMEDIATE_CHANGE (score 15)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: uint FUN_009a1fd0(undefined8 param_1,undefined8 param_2); Shield: uint FUN_009a1fd0(undefined8 param_1,undefined8 param_2)
- 0x009a203c: Sword: bl 0x01524c50; Shield: bl 0x01524c80

## 0x009a7a90 — OPERAND_OR_IMMEDIATE_CHANGE (score 15)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: undefined8 FUN_009a7a90(undefined8 param_1); Shield: undefined8 FUN_009a7a90(undefined8 param_1)
- 0x009a7ab8: Sword: bl 0x01521090; Shield: bl 0x015210c0

## 0x009c4120 — OPERAND_OR_IMMEDIATE_CHANGE (score 15)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_009c4120(long param_1); Shield: void FUN_009c4120(long param_1)
- 0x009c4140: Sword: bl 0x011faf20; Shield: bl 0x011faf50

## 0x00a412c0 — OPERAND_OR_IMMEDIATE_CHANGE (score 15)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00a412c0(long param_1,long param_2); Shield: void FUN_00a412c0(long param_1,long param_2)
- 0x00a41344: Sword: bl 0x016bef00; Shield: bl 0x016bef90
- 0x00a41354: Sword: bl 0x016bff10; Shield: bl 0x016bffa0

## 0x00a58050 — OPERAND_OR_IMMEDIATE_CHANGE (score 15)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00a58050(long param_1,undefined8 param_2,undefined4 param_3); Shield: void FUN_00a58050(long param_1,undefined8 param_2,undefined4 param_3)
- 0x00a58098: Sword: bl 0x00ffa3d0; Shield: bl 0x00ffa400
- 0x00a580b4: Sword: add x0,x0,#0x550; Shield: add x0,x0,#0x57a
- 0x00a580c4: Sword: bl 0x019fe840; Shield: bl 0x019fe8d0

## 0x00a5a980 — OPERAND_OR_IMMEDIATE_CHANGE (score 15)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00a5a980(long param_1,long *param_2); Shield: void FUN_00a5a980(long param_1,long *param_2)
- 0x00a5a9ac: Sword: bl 0x00ffa290; Shield: bl 0x00ffa2c0
- 0x00a5a9b8: Sword: bl 0x016b2d70; Shield: bl 0x016b2e00
- 0x00a5a9c4: Sword: bl 0x01038b80; Shield: bl 0x01038bb0
- 0x00a5a9e0: Sword: b 0x00ffa160; Shield: b 0x00ffa190
- 0x00a5a9e8: Sword: add x0,x0,#0x550; Shield: add x0,x0,#0x57a
- 0x00a5a9f8: Sword: bl 0x019fe840; Shield: bl 0x019fe8d0

## 0x00bf7410 — OPERAND_OR_IMMEDIATE_CHANGE (score 15)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00bf7410(long param_1); Shield: void FUN_00bf7410(long param_1)
- 0x00bf7428: Sword: add x21,x21,#0xe17; Shield: add x21,x21,#0xe58
- 0x00bf7438: Sword: bl 0x00ffdc80; Shield: bl 0x00ffdcb0
- 0x00bf744c: Sword: bl 0x016b7990; Shield: bl 0x016b7a20
- 0x00bf7464: Sword: bl 0x00ffdc80; Shield: bl 0x00ffdcb0

## 0x00bf8110 — OPERAND_OR_IMMEDIATE_CHANGE (score 15)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00bf8110(long param_1,int param_2); Shield: void FUN_00bf8110(long param_1,int param_2)
- 0x00bf8144: Sword: add x1,x1,#0xc8c; Shield: add x1,x1,#0xccd
- 0x00bf8148: Sword: bl 0x00ffdc80; Shield: bl 0x00ffdcb0
- 0x00bf8154: Sword: b 0x016b2eb0; Shield: b 0x016b2f40
- 0x00bf816c: Sword: add x1,x1,#0xc96; Shield: add x1,x1,#0xcd7
- 0x00bf8170: Sword: bl 0x00ffdc80; Shield: bl 0x00ffdcb0
- 0x00bf817c: Sword: b 0x016b2eb0; Shield: b 0x016b2f40
- 0x00bf8194: Sword: add x1,x1,#0x6c0; Shield: add x1,x1,#0x700
- 0x00bf8198: Sword: bl 0x00ffdc80; Shield: bl 0x00ffdcb0
- 0x00bf81a4: Sword: b 0x016b2eb0; Shield: b 0x016b2f40

## 0x00bf97f0 — OPERAND_OR_IMMEDIATE_CHANGE (score 15)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00bf97f0(long param_1,int param_2); Shield: void FUN_00bf97f0(long param_1,int param_2)
- 0x00bf9820: Sword: add x21,x21,#0xc8c; Shield: add x21,x21,#0xccd
- 0x00bf9830: Sword: add x21,x21,#0xc96; Shield: add x21,x21,#0xcd7
- 0x00bf9840: Sword: add x21,x21,#0x6c0; Shield: add x21,x21,#0x700
- 0x00bf984c: Sword: bl 0x00ffdc80; Shield: bl 0x00ffdcb0
- 0x00bf9860: Sword: bl 0x016b7990; Shield: bl 0x016b7a20
- 0x00bf9878: Sword: bl 0x00ffdc80; Shield: bl 0x00ffdcb0

## 0x00c08ad0 — OPERAND_OR_IMMEDIATE_CHANGE (score 15)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00c08ad0(long param_1,uint param_2); Shield: void FUN_00c08ad0(long param_1,uint param_2)
- 0x00c08b0c: Sword: add x1,x1,#0xc96; Shield: add x1,x1,#0xcd7
- 0x00c08b10: Sword: bl 0x00ffdc80; Shield: bl 0x00ffdcb0
- 0x00c08b1c: Sword: b 0x016b2eb0; Shield: b 0x016b2f40
- 0x00c08b2c: Sword: add x1,x1,#0x854; Shield: add x1,x1,#0x87e
- 0x00c08b30: Sword: bl 0x00ffdc80; Shield: bl 0x00ffdcb0
- 0x00c08b3c: Sword: b 0x016b2eb0; Shield: b 0x016b2f40
- 0x00c08b44: Sword: add x1,x1,#0x6c0; Shield: add x1,x1,#0x700
- 0x00c08b48: Sword: bl 0x00ffdc80; Shield: bl 0x00ffdcb0
- 0x00c08b54: Sword: b 0x016b2eb0; Shield: b 0x016b2f40

## 0x00c09530 — OPERAND_OR_IMMEDIATE_CHANGE (score 15)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00c09530(long param_1,uint param_2); Shield: void FUN_00c09530(long param_1,uint param_2)
- 0x00c09578: Sword: add x1,x1,#0xc96; Shield: add x1,x1,#0xcd7
- 0x00c09598: Sword: add x1,x1,#0x854; Shield: add x1,x1,#0x87e
- 0x00c095a4: Sword: add x1,x1,#0x6c0; Shield: add x1,x1,#0x700
- 0x00c095a8: Sword: bl 0x00ffdc80; Shield: bl 0x00ffdcb0

## 0x00c106e0 — OPERAND_OR_IMMEDIATE_CHANGE (score 15)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00c106e0(long param_1); Shield: void FUN_00c106e0(long param_1)
- 0x00c106f8: Sword: add x21,x21,#0xc8c; Shield: add x21,x21,#0xccd
- 0x00c10708: Sword: bl 0x00ffdc80; Shield: bl 0x00ffdcb0
- 0x00c1071c: Sword: bl 0x016b7990; Shield: bl 0x016b7a20
- 0x00c10734: Sword: bl 0x00ffdc80; Shield: bl 0x00ffdcb0

## 0x00c970b0 — OPERAND_OR_IMMEDIATE_CHANGE (score 15)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: long FUN_00c970b0(void); Shield: long FUN_00c970b0(void)
- 0x00c970b8: Sword: bl 0x010295e0; Shield: bl 0x01029610

## 0x00c97120 — OPERAND_OR_IMMEDIATE_CHANGE (score 15)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: long FUN_00c97120(void); Shield: long FUN_00c97120(void)
- 0x00c97128: Sword: bl 0x010295e0; Shield: bl 0x01029610

## 0x00c97190 — OPERAND_OR_IMMEDIATE_CHANGE (score 15)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: long FUN_00c97190(void); Shield: long FUN_00c97190(void)
- 0x00c97198: Sword: bl 0x010295e0; Shield: bl 0x01029610

## 0x00c97200 — OPERAND_OR_IMMEDIATE_CHANGE (score 15)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: long FUN_00c97200(void); Shield: long FUN_00c97200(void)
- 0x00c97208: Sword: bl 0x010295e0; Shield: bl 0x01029610

## 0x00c97640 — OPERAND_OR_IMMEDIATE_CHANGE (score 15)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: undefined4 FUN_00c97640(undefined8 param_1); Shield: undefined4 FUN_00c97640(undefined8 param_1)
- 0x00c97650: Sword: bl 0x01029540; Shield: bl 0x01029570
- 0x00c9765c: Sword: bl 0x010295e0; Shield: bl 0x01029610

## 0x00cbd3c0 — OPERAND_OR_IMMEDIATE_CHANGE (score 15)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: undefined8 * FUN_00cbd3c0(void); Shield: undefined8 * FUN_00cbd3c0(void)
- 0x00cbd3fc: Sword: bl 0x019fdbe0; Shield: bl 0x019fdc70
- 0x00cbd41c: Sword: add x9,x9,#0x104; Shield: add x9,x9,#0x145
- 0x00cbd448: Sword: bl 0x019fdbf0; Shield: bl 0x019fdc80

## 0x00d70990 — OPERAND_OR_IMMEDIATE_CHANGE (score 15)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00d70990(long *param_1,undefined8 param_2); Shield: void FUN_00d70990(long *param_1,undefined8 param_2)
- 0x00d709a8: Sword: bl 0x00ff86a0; Shield: bl 0x00ff86d0

## 0x00141630 — OPERAND_OR_IMMEDIATE_CHANGE (score 14)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00141630(long param_1); Shield: void FUN_00141630(long param_1)
- 0x00141654: Sword: add x2,x2,#0x550; Shield: add x2,x2,#0x57a
- 0x0014165c: Sword: adrp x3,0x1d12000; Shield: adrp x3,0x1d13000
- 0x00141660: Sword: add x3,x3,#0xfc3; Shield: add x3,x3,#0x1b

## 0x006f6670 — OPERAND_OR_IMMEDIATE_CHANGE (score 14)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- Branch-address signature same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_006f6670(long param_1); Shield: void FUN_006f6670(long param_1)
- 0x006f6688: Sword: bl 0x0199c7a0; Shield: bl 0x0199c830
- 0x006f66c4: Sword: b 0x0199c6a0; Shield: b 0x0199c730
