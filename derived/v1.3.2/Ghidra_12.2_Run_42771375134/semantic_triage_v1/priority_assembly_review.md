# Sword / Shield 1.3.2 — priority assembly review

Only pairs with both exact-body-mapped caller and callee support are included. Same RVA is not identity proof.

## 0x017764b0 — CONTROL_FLOW_OR_BRANCH_TARGET_CHANGE (score 191)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 0.5; callee Jaccard 1.0
- CFG same: False; exact mapped callees same: True; strings same: True
- C prototypes: Sword: ulong FUN_017764b0(long *param_1); Shield: void FUN_017764b0(long *param_1,uint *param_2,uint param_3)
- 0x017764b0: Sword: str x21,[sp, #-0x30]!; Shield: cmn w2,#0x1
- 0x017764b4: Sword: stp x20,x19,[sp, #0x10]; Shield: b.eq 0x0177651c
- 0x017764b8: Sword: stp x29,x30,[sp, #0x20]; Shield: ldr w10,[x1]
- 0x017764bc: Sword: add x29,sp,#0x20; Shield: cmn w10,#0x1
- 0x017764c0: Sword: ldr w20,[x0, #0x28]; Shield: b.eq 0x01776520
- 0x017764c4: Sword: mov w21,#0xffffffff; Shield: ldr x8,[x0]
- 0x017764c8: Sword: mov w1,#0x801e; Shield: ldr x8,[x8, #0x38]
- 0x017764cc: Sword: movk w1,#0x7fff, LSL #16; Shield: orr w11,wzr,#0xfffe0001
- 0x017764d0: Sword: mov x19,x0; Shield: mov w12,#0xffffffff
- 0x017764d4: Sword: str w21,[x0, #0x28]; Shield: ldr w9,[x8, w10, SXTW #0x2]
- 0x017764d8: Sword: bl 0x01776850; Shield: mov w13,w10
- 0x017764dc: Sword: cmn w20,#0x1; Shield: add w10,w11,w9, LSR #0xe
- 0x017764e0: Sword: b.eq 0x01776544; Shield: add w14,w13,w10
- 0x017764e4: Sword: cmn w0,#0x1; Shield: cmn w10,#0x1
- 0x017764e8: Sword: b.eq 0x01776554; Shield: csinc w10,w12,w14,eq
- 0x017764ec: Sword: ldr x8,[x19]; Shield: cmn w10,#0x1

## 0x00768c70 — EXACT_MAPPED_CALLEE_CHANGE (score 98)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 0.846154
- CFG same: True; exact mapped callees same: False; strings same: True
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
- CFG same: True; exact mapped callees same: False; strings same: True
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
- CFG same: True; exact mapped callees same: False; strings same: True
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
- CFG same: True; exact mapped callees same: False; strings same: True
- C prototypes: Sword: void FUN_006e2420(long *param_1); Shield: void FUN_006e2420(long *param_1)
- 0x006e2468: Sword: bl 0x019fdff0; Shield: bl 0x019fe080
- 0x006e2470: Sword: bl 0x019fdd20; Shield: bl 0x019fddb0
- 0x006e2478: Sword: bl 0x019fdd20; Shield: bl 0x019fddb0
- 0x006e2518: Sword: add x8,x8,#0x550; Shield: add x8,x8,#0x57a

## 0x007aabf0 — EXACT_MAPPED_CALLEE_CHANGE (score 95)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 0.6
- CFG same: True; exact mapped callees same: False; strings same: True
- C prototypes: Sword: void FUN_007aabf0(long param_1); Shield: void FUN_007aabf0(long param_1)
- 0x007aac1c: Sword: bl 0x01965ba0; Shield: bl 0x01965c30
- 0x007aac28: Sword: bl 0x019ff1b0; Shield: bl 0x019ff240
- 0x007aac60: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x007aac64: Sword: bl 0x019ff1c0; Shield: bl 0x019ff250
- 0x007aac90: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040

## 0x00779300 — EXACT_MAPPED_CALLEE_CHANGE (score 91)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 0.5
- CFG same: True; exact mapped callees same: False; strings same: True
- C prototypes: Sword: ulong FUN_00779300(long *param_1,uint param_2,long param_3,ulong param_4,long param_5); Shield: ulong FUN_00779300(long *param_1,uint param_2,long param_3,ulong param_4,long param_5)
- 0x00779340: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x0077943c: Sword: bl 0x019fdc90; Shield: bl 0x019fdd20
- 0x007796c0: Sword: bl 0x019fdc90; Shield: bl 0x019fdd20
- 0x00779910: Sword: bl 0x019fdc90; Shield: bl 0x019fdd20
- 0x00779a98: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040
- 0x00779ac0: Sword: bl 0x019fdc60; Shield: bl 0x019fdcf0

## 0x00432480 — EXACT_MAPPED_CALLEE_CHANGE (score 90)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 0.5
- CFG same: True; exact mapped callees same: False; strings same: True
- C prototypes: Sword: int FUN_00432480(code *param_1,uint param_2,undefined8 param_3); Shield: int FUN_00432480(code *param_1,uint param_2,undefined8 param_3)
- 0x004324b4: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x00432730: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040
- 0x00432758: Sword: bl 0x019fdbe0; Shield: bl 0x019fdc70
- 0x00432774: Sword: bl 0x019fdbf0; Shield: bl 0x019fdc80

## 0x0047bab0 — EXACT_MAPPED_CALLEE_CHANGE (score 90)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 0.714286
- CFG same: True; exact mapped callees same: False; strings same: True
- C prototypes: Sword: undefined4 FUN_0047bab0(long param_1); Shield: undefined4 FUN_0047bab0(long param_1)
- 0x0047bb38: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x0047bb70: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040
- 0x0047bf30: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040

## 0x00762270 — EXACT_MAPPED_CALLEE_CHANGE (score 90)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 0.833333
- CFG same: True; exact mapped callees same: False; strings same: True
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
- CFG same: True; exact mapped callees same: False; strings same: True
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

## 0x007757e0 — EXACT_MAPPED_CALLEE_CHANGE (score 90)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 0.5
- CFG same: True; exact mapped callees same: False; strings same: True
- C prototypes: Sword: void FUN_007757e0(long param_1,ulong param_2,long *param_3); Shield: void FUN_007757e0(long param_1,ulong param_2,long *param_3)
- 0x00775814: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x007759bc: Sword: bl 0x019fdc90; Shield: bl 0x019fdd20
- 0x00775b44: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040
- 0x00775b94: Sword: bl 0x019fdc60; Shield: bl 0x019fdcf0

## 0x00405500 — EXACT_MAPPED_CALLEE_CHANGE (score 89)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 0.6
- CFG same: True; exact mapped callees same: False; strings same: True
- C prototypes: Sword: int FUN_00405500(undefined8 *param_1,uint param_2,uint param_3,uint param_4,uint param_5); Shield: int FUN_00405500(undefined8 *param_1,uint param_2,uint param_3,uint param_4,uint param_5)
- 0x00405578: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x00405588: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040
- 0x004056b8: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040
- 0x004056e4: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040

## 0x0041b630 — EXACT_MAPPED_CALLEE_CHANGE (score 89)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 0.5
- CFG same: True; exact mapped callees same: False; strings same: True
- C prototypes: Sword: undefined8 FUN_0041b630(long *param_1,int param_2); Shield: undefined8 FUN_0041b630(long *param_1,int param_2)
- 0x0041b660: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x0041b70c: Sword: bl 0x019fddc0; Shield: bl 0x019fde50
- 0x0041b768: Sword: bl 0x019fddc0; Shield: bl 0x019fde50
- 0x0041b780: Sword: bl 0x019fddc0; Shield: bl 0x019fde50
- 0x0041b7bc: Sword: bl 0x019fddc0; Shield: bl 0x019fde50
- 0x0041b814: Sword: bl 0x019fe020; Shield: bl 0x019fe0b0
- 0x0041b82c: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040

## 0x0042c660 — EXACT_MAPPED_CALLEE_CHANGE (score 89)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 0.666667
- CFG same: True; exact mapped callees same: False; strings same: True
- C prototypes: Sword: void FUN_0042c660(long param_1,long *param_2); Shield: void FUN_0042c660(long param_1,long *param_2)
- 0x0042c6bc: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x0042c70c: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040

## 0x0043d200 — EXACT_MAPPED_CALLEE_CHANGE (score 89)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 0.5
- CFG same: True; exact mapped callees same: False; strings same: True
- C prototypes: Sword: void FUN_0043d200(long *param_1,undefined4 param_2,long param_3,undefined4 param_4); Shield: void FUN_0043d200(long *param_1,undefined4 param_2,long param_3,undefined4 param_4)
- 0x0043d298: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x0043d334: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040
- 0x0043d340: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040

## 0x00447160 — EXACT_MAPPED_CALLEE_CHANGE (score 89)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 0.6
- CFG same: True; exact mapped callees same: False; strings same: True
- C prototypes: Sword: int FUN_00447160(long param_1,long param_2,long param_3); Shield: int FUN_00447160(long param_1,long param_2,long param_3)
- 0x004471b4: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x004471ec: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040
- 0x004471f8: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x00447254: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040
- 0x004472bc: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040
- 0x004472d8: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030

## 0x004472e0 — EXACT_MAPPED_CALLEE_CHANGE (score 89)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 0.6
- CFG same: True; exact mapped callees same: False; strings same: True
- C prototypes: Sword: int FUN_004472e0(long param_1,long param_2,long param_3); Shield: int FUN_004472e0(long param_1,long param_2,long param_3)
- 0x00447330: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x00447368: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040
- 0x00447384: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x004473b4: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040
- 0x004473f0: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040
- 0x00447408: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040

## 0x00447460 — EXACT_MAPPED_CALLEE_CHANGE (score 89)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 0.666667
- CFG same: True; exact mapped callees same: False; strings same: True
- C prototypes: Sword: int FUN_00447460(long param_1,long param_2,long param_3); Shield: int FUN_00447460(long param_1,long param_2,long param_3)
- 0x004474dc: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x00447500: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040
- 0x00447540: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x00447580: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040
- 0x004475d0: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040

## 0x00447600 — EXACT_MAPPED_CALLEE_CHANGE (score 89)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 0.666667
- CFG same: True; exact mapped callees same: False; strings same: True
- C prototypes: Sword: int FUN_00447600(long param_1,long param_2,long param_3,MutexType *param_4); Shield: int FUN_00447600(long param_1,long param_2,long param_3,MutexType *param_4)
- 0x00447644: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x0044767c: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040
- 0x00447688: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x004476c4: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040
- 0x00447700: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040
- 0x00447728: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040

## 0x00447780 — EXACT_MAPPED_CALLEE_CHANGE (score 89)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 0.6
- CFG same: True; exact mapped callees same: False; strings same: True
- C prototypes: Sword: int FUN_00447780(long param_1,long param_2,long param_3,MutexType *param_4); Shield: int FUN_00447780(long param_1,long param_2,long param_3,MutexType *param_4)
- 0x004477c4: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x004477fc: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040
- 0x00447808: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x00447840: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040
- 0x0044787c: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040
- 0x004478a4: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040

## 0x004478f0 — EXACT_MAPPED_CALLEE_CHANGE (score 89)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 0.666667
- CFG same: True; exact mapped callees same: False; strings same: True
- C prototypes: Sword: int FUN_004478f0(long param_1,long param_2,long param_3,MutexType *param_4); Shield: int FUN_004478f0(long param_1,long param_2,long param_3,MutexType *param_4)
- 0x00447934: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x0044796c: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040
- 0x00447978: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x004479b0: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040
- 0x004479ec: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040
- 0x00447a14: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040

## 0x00447a60 — EXACT_MAPPED_CALLEE_CHANGE (score 89)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 0.666667
- CFG same: True; exact mapped callees same: False; strings same: True
- C prototypes: Sword: int FUN_00447a60(long param_1,long param_2,long param_3,MutexType *param_4); Shield: int FUN_00447a60(long param_1,long param_2,long param_3,MutexType *param_4)
- 0x00447aa4: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x00447adc: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040
- 0x00447ae8: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x00447b20: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040
- 0x00447b5c: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040
- 0x00447b84: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040

## 0x00447bd0 — EXACT_MAPPED_CALLEE_CHANGE (score 89)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 0.5
- CFG same: True; exact mapped callees same: False; strings same: True
- C prototypes: Sword: int FUN_00447bd0(long param_1,long param_2,long param_3); Shield: int FUN_00447bd0(long param_1,long param_2,long param_3)
- 0x00447c20: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x00447c58: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040
- 0x00447c64: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x00447c9c: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040
- 0x00447cd8: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040
- 0x00447cf0: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040

## 0x00447d40 — EXACT_MAPPED_CALLEE_CHANGE (score 89)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 0.714286
- CFG same: True; exact mapped callees same: False; strings same: True
- C prototypes: Sword: int FUN_00447d40(long param_1,long param_2,long param_3); Shield: int FUN_00447d40(long param_1,long param_2,long param_3)
- 0x00447dc0: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x00447df8: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040
- 0x00447e04: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x00447e44: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040
- 0x00447e90: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040
- 0x00447ea8: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040

## 0x00447fb0 — EXACT_MAPPED_CALLEE_CHANGE (score 89)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 0.6
- CFG same: True; exact mapped callees same: False; strings same: True
- C prototypes: Sword: int FUN_00447fb0(long param_1,long param_2,long param_3,MutexType *param_4); Shield: int FUN_00447fb0(long param_1,long param_2,long param_3,MutexType *param_4)
- 0x00447ff4: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x0044802c: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040
- 0x00448038: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x00448078: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040
- 0x004480b4: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040
- 0x004480dc: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040

## 0x00448130 — EXACT_MAPPED_CALLEE_CHANGE (score 89)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 0.5
- CFG same: True; exact mapped callees same: False; strings same: True
- C prototypes: Sword: int FUN_00448130(long param_1,long param_2,long param_3,MutexType *param_4); Shield: int FUN_00448130(long param_1,long param_2,long param_3,MutexType *param_4)
- 0x00448174: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x004481ac: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040
- 0x004481b8: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x004481f0: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040
- 0x0044822c: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040
- 0x00448254: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040

## 0x004482a0 — EXACT_MAPPED_CALLEE_CHANGE (score 89)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 0.5
- CFG same: True; exact mapped callees same: False; strings same: True
- C prototypes: Sword: int FUN_004482a0(long param_1,long param_2,long param_3,MutexType *param_4); Shield: int FUN_004482a0(long param_1,long param_2,long param_3,MutexType *param_4)
- 0x004482e4: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x0044831c: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040
- 0x00448328: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x0044836c: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040
- 0x004483a8: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040
- 0x004483d0: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040

## 0x00448420 — EXACT_MAPPED_CALLEE_CHANGE (score 89)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 0.5
- CFG same: True; exact mapped callees same: False; strings same: True
- C prototypes: Sword: int FUN_00448420(long param_1,long param_2,long param_3,MutexType *param_4); Shield: int FUN_00448420(long param_1,long param_2,long param_3,MutexType *param_4)
- 0x00448464: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x0044849c: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040
- 0x004484a8: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x004484ec: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040
- 0x00448528: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040
- 0x00448550: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040

## 0x004485a0 — EXACT_MAPPED_CALLEE_CHANGE (score 89)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 0.5
- CFG same: True; exact mapped callees same: False; strings same: True
- C prototypes: Sword: int FUN_004485a0(long param_1,long param_2,long param_3,MutexType *param_4); Shield: int FUN_004485a0(long param_1,long param_2,long param_3,MutexType *param_4)
- 0x004485e4: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x0044861c: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040
- 0x00448628: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x00448660: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040
- 0x0044869c: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040
- 0x004486c4: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040

## 0x00448710 — EXACT_MAPPED_CALLEE_CHANGE (score 89)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 0.6
- CFG same: True; exact mapped callees same: False; strings same: True
- C prototypes: Sword: int FUN_00448710(long param_1,long param_2,long param_3,MutexType *param_4); Shield: int FUN_00448710(long param_1,long param_2,long param_3,MutexType *param_4)
- 0x00448754: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x0044878c: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040
- 0x00448798: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x004487d0: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040
- 0x0044880c: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040
- 0x00448834: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040

## 0x00448880 — EXACT_MAPPED_CALLEE_CHANGE (score 89)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 0.6
- CFG same: True; exact mapped callees same: False; strings same: True
- C prototypes: Sword: int FUN_00448880(long param_1,long param_2,long param_3,MutexType *param_4); Shield: int FUN_00448880(long param_1,long param_2,long param_3,MutexType *param_4)
- 0x004488c4: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x004488fc: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040
- 0x00448908: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x00448940: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040
- 0x0044897c: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040
- 0x004489a4: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040

## 0x004489f0 — EXACT_MAPPED_CALLEE_CHANGE (score 89)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 0.6
- CFG same: True; exact mapped callees same: False; strings same: True
- C prototypes: Sword: int FUN_004489f0(long param_1,long param_2,long param_3,MutexType *param_4); Shield: int FUN_004489f0(long param_1,long param_2,long param_3,MutexType *param_4)
- 0x00448a34: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x00448a6c: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040
- 0x00448a78: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x00448ab0: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040
- 0x00448aec: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040
- 0x00448b14: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040

## 0x004497a0 — EXACT_MAPPED_CALLEE_CHANGE (score 89)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 0.666667
- CFG same: True; exact mapped callees same: False; strings same: True
- C prototypes: Sword: int FUN_004497a0(long param_1,uint *param_2); Shield: int FUN_004497a0(long param_1,uint *param_2)
- 0x004497d0: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x00449914: Sword: bl 0x019fddc0; Shield: bl 0x019fde50
- 0x0044996c: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040
- 0x00449988: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x004499b8: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040

## 0x0044d500 — EXACT_MAPPED_CALLEE_CHANGE (score 89)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 0.5
- CFG same: True; exact mapped callees same: False; strings same: True
- C prototypes: Sword: void FUN_0044d500(undefined8 *param_1,code *param_2,undefined4 param_3,undefined8 param_4,; Shield: void FUN_0044d500(undefined8 *param_1,code *param_2,undefined4 param_3,undefined8 param_4,
- 0x0044d544: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x0044d618: Sword: b 0x019fdfb0; Shield: b 0x019fe040
- 0x0044d6fc: Sword: bl 0x019fe240; Shield: bl 0x019fe2d0
- 0x0044d704: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040
- 0x0044d740: Sword: b 0x019fe1d0; Shield: b 0x019fe260

## 0x0044eed0 — EXACT_MAPPED_CALLEE_CHANGE (score 89)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 0.666667
- CFG same: True; exact mapped callees same: False; strings same: True
- C prototypes: Sword: int FUN_0044eed0(long *param_1,long *param_2); Shield: int FUN_0044eed0(long *param_1,long *param_2)
- 0x0044f070: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x0044f108: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040

## 0x00451600 — EXACT_MAPPED_CALLEE_CHANGE (score 89)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 0.666667
- CFG same: True; exact mapped callees same: False; strings same: True
- C prototypes: Sword: ushort FUN_00451600(long *param_1); Shield: ushort FUN_00451600(long *param_1)
- 0x0045181c: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x00451854: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040
- 0x00451890: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040

## 0x00490ac0 — EXACT_MAPPED_CALLEE_CHANGE (score 89)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 0.5
- CFG same: True; exact mapped callees same: False; strings same: True
- C prototypes: Sword: void FUN_00490ac0(long *param_1,uint param_2,undefined8 *param_3,long param_4); Shield: void FUN_00490ac0(long *param_1,uint param_2,undefined8 *param_3,long param_4)
- 0x00490b44: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x00490b8c: Sword: b 0x019fdfb0; Shield: b 0x019fe040
- 0x00490c40: Sword: bl 0x019fddc0; Shield: bl 0x019fde50
- 0x00490c9c: Sword: bl 0x019fddc0; Shield: bl 0x019fde50
- 0x00490cb8: Sword: bl 0x019fddc0; Shield: bl 0x019fde50
- 0x00490cfc: Sword: bl 0x019fddc0; Shield: bl 0x019fde50
- 0x00490d58: Sword: bl 0x019fe020; Shield: bl 0x019fe0b0

## 0x006d5e20 — EXACT_MAPPED_CALLEE_CHANGE (score 89)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 0.6
- CFG same: True; exact mapped callees same: False; strings same: True
- C prototypes: Sword: undefined8 FUN_006d5e20(long param_1,undefined8 param_2); Shield: undefined8 FUN_006d5e20(long param_1,undefined8 param_2)
- 0x006d5e58: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x006d5e7c: Sword: bl 0x019fdc90; Shield: bl 0x019fdd20
- 0x006d5ec8: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x006d5eec: Sword: bl 0x019fdc90; Shield: bl 0x019fdd20
- 0x006d5f54: Sword: bl 0x019fe390; Shield: bl 0x019fe420
- 0x006d5f5c: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040
- 0x006d5f88: Sword: bl 0x019fdc60; Shield: bl 0x019fdcf0

## 0x006e1e70 — EXACT_MAPPED_CALLEE_CHANGE (score 89)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 0.6
- CFG same: True; exact mapped callees same: False; strings same: True
- C prototypes: Sword: void FUN_006e1e70(long param_1,long *param_2,int param_3); Shield: void FUN_006e1e70(long param_1,long *param_2,int param_3)
- 0x006e1ea8: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x006e1f18: Sword: bl 0x019fdc10; Shield: bl 0x019fdca0
- 0x006e1fb4: Sword: bl 0x019fdc90; Shield: bl 0x019fdd20
- 0x006e20ac: Sword: bl 0x019fdc10; Shield: bl 0x019fdca0
- 0x006e20d0: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040
- 0x006e20f4: Sword: bl 0x019fdc60; Shield: bl 0x019fdcf0

## 0x006e2100 — EXACT_MAPPED_CALLEE_CHANGE (score 89)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 0.666667
- CFG same: True; exact mapped callees same: False; strings same: True
- C prototypes: Sword: void FUN_006e2100(long param_1,long param_2); Shield: void FUN_006e2100(long param_1,long param_2)
- 0x006e212c: Sword: bl 0x019fe770; Shield: bl 0x019fe800
- 0x006e2150: Sword: bl 0x019fdc90; Shield: bl 0x019fdd20
- 0x006e2198: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x006e21ec: Sword: bl 0x019fdc10; Shield: bl 0x019fdca0
- 0x006e2258: Sword: bl 0x019fdc10; Shield: bl 0x019fdca0
- 0x006e2290: Sword: b 0x019fdfb0; Shield: b 0x019fe040
- 0x006e22b8: Sword: bl 0x019fdc60; Shield: bl 0x019fdcf0

## 0x0075af30 — EXACT_MAPPED_CALLEE_CHANGE (score 89)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 0.818182
- CFG same: True; exact mapped callees same: False; strings same: True
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
- CFG same: True; exact mapped callees same: False; strings same: True
- C prototypes: Sword: long FUN_00404690(int param_1,long param_2); Shield: long FUN_00404690(int param_1,long param_2)
- 0x004046cc: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x0040472c: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040

## 0x00405710 — EXACT_MAPPED_CALLEE_CHANGE (score 88)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 0.6
- CFG same: True; exact mapped callees same: False; strings same: True
- C prototypes: Sword: int FUN_00405710(int param_1); Shield: int FUN_00405710(int param_1)
- 0x00405758: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x004057b4: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040

## 0x0045cf20 — EXACT_MAPPED_CALLEE_CHANGE (score 88)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 0.5
- CFG same: True; exact mapped callees same: False; strings same: True
- C prototypes: Sword: undefined8 FUN_0045cf20(long param_1,int param_2,undefined4 param_3,undefined4 param_4); Shield: undefined8 FUN_0045cf20(long param_1,int param_2,undefined4 param_3,undefined4 param_4)
- 0x0045cfb8: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x0045cfc8: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040

## 0x00466330 — EXACT_MAPPED_CALLEE_CHANGE (score 88)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 0.5
- CFG same: True; exact mapped callees same: False; strings same: True
- C prototypes: Sword: long * FUN_00466330(undefined4 param_1); Shield: long * FUN_00466330(undefined4 param_1)
- 0x0046639c: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x00466414: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040

## 0x0048f020 — EXACT_MAPPED_CALLEE_CHANGE (score 88)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 0.5
- CFG same: True; exact mapped callees same: False; strings same: True
- C prototypes: Sword: void FUN_0048f020(long *param_1,uint param_2,undefined4 param_3,undefined8 param_4); Shield: void FUN_0048f020(long *param_1,uint param_2,undefined4 param_3,undefined8 param_4)
- 0x0048f050: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x0048f0a8: Sword: b 0x019fdfb0; Shield: b 0x019fe040
- 0x0048f0d0: Sword: bl 0x019fe240; Shield: bl 0x019fe2d0
- 0x0048f0d8: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040
- 0x0048f0ec: Sword: bl 0x019fe1d0; Shield: bl 0x019fe260

## 0x0048f220 — EXACT_MAPPED_CALLEE_CHANGE (score 88)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 0.5
- CFG same: True; exact mapped callees same: False; strings same: True
- C prototypes: Sword: void FUN_0048f220(long *param_1,uint param_2); Shield: void FUN_0048f220(long *param_1,uint param_2)
- 0x0048f244: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x0048f2ac: Sword: bl 0x019fe240; Shield: bl 0x019fe2d0
- 0x0048f2b4: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040
- 0x0048f2c8: Sword: bl 0x019fe1d0; Shield: bl 0x019fe260
- 0x0048f2f4: Sword: b 0x019fdfb0; Shield: b 0x019fe040

## 0x0048f300 — EXACT_MAPPED_CALLEE_CHANGE (score 88)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 0.5
- CFG same: True; exact mapped callees same: False; strings same: True
- C prototypes: Sword: void FUN_0048f300(long *param_1,uint param_2,undefined4 param_3,undefined4 param_4,; Shield: void FUN_0048f300(long *param_1,uint param_2,undefined4 param_3,undefined4 param_4,
- 0x0048f33c: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x0048f3b8: Sword: bl 0x019fe240; Shield: bl 0x019fe2d0
- 0x0048f3c0: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040
- 0x0048f3d4: Sword: bl 0x019fe1d0; Shield: bl 0x019fe260
- 0x0048f420: Sword: b 0x019fdfb0; Shield: b 0x019fe040

## 0x0048f430 — EXACT_MAPPED_CALLEE_CHANGE (score 88)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 0.5
- CFG same: True; exact mapped callees same: False; strings same: True
- C prototypes: Sword: void FUN_0048f430(long *param_1,long param_2,undefined4 *param_3); Shield: void FUN_0048f430(long *param_1,long param_2,undefined4 *param_3)
- 0x0048f458: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x0048f4dc: Sword: bl 0x019fe240; Shield: bl 0x019fe2d0
- 0x0048f4e4: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040
- 0x0048f4f8: Sword: bl 0x019fe1d0; Shield: bl 0x019fe260
- 0x0048f530: Sword: b 0x019fdfb0; Shield: b 0x019fe040

## 0x0048f540 — EXACT_MAPPED_CALLEE_CHANGE (score 88)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 0.5
- CFG same: True; exact mapped callees same: False; strings same: True
- C prototypes: Sword: void FUN_0048f540(long *param_1,uint param_2,undefined8 *param_3); Shield: void FUN_0048f540(long *param_1,uint param_2,undefined8 *param_3)
- 0x0048f564: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x0048f5b4: Sword: b 0x019fdfb0; Shield: b 0x019fe040
- 0x0048f5e0: Sword: bl 0x019fe240; Shield: bl 0x019fe2d0
- 0x0048f5e8: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040
- 0x0048f608: Sword: b 0x019fe1d0; Shield: b 0x019fe260

## 0x0048f680 — EXACT_MAPPED_CALLEE_CHANGE (score 88)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 0.6
- CFG same: True; exact mapped callees same: False; strings same: True
- C prototypes: Sword: void FUN_0048f680(long *param_1,uint param_2,uint param_3,void *param_4); Shield: void FUN_0048f680(long *param_1,uint param_2,uint param_3,void *param_4)
- 0x0048f6b0: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x0048f718: Sword: bl 0x019fddc0; Shield: bl 0x019fde50
- 0x0048f72c: Sword: bl 0x019fe240; Shield: bl 0x019fe2d0
- 0x0048f734: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040
- 0x0048f748: Sword: bl 0x019fe1d0; Shield: bl 0x019fe260
- 0x0048f788: Sword: b 0x019fdfb0; Shield: b 0x019fe040

## 0x0048f790 — EXACT_MAPPED_CALLEE_CHANGE (score 88)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 0.6
- CFG same: True; exact mapped callees same: False; strings same: True
- C prototypes: Sword: void FUN_0048f790(long *param_1,uint param_2,void *param_3,undefined8 param_4); Shield: void FUN_0048f790(long *param_1,uint param_2,void *param_3,undefined8 param_4)
- 0x0048f7c0: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x0048f824: Sword: bl 0x019fddc0; Shield: bl 0x019fde50
- 0x0048f83c: Sword: bl 0x019fe240; Shield: bl 0x019fe2d0
- 0x0048f844: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040
- 0x0048f858: Sword: bl 0x019fe1d0; Shield: bl 0x019fe260
- 0x0048f898: Sword: b 0x019fdfb0; Shield: b 0x019fe040

## 0x0048f8a0 — EXACT_MAPPED_CALLEE_CHANGE (score 88)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 0.5
- CFG same: True; exact mapped callees same: False; strings same: True
- C prototypes: Sword: void FUN_0048f8a0(long *param_1,uint param_2); Shield: void FUN_0048f8a0(long *param_1,uint param_2)
- 0x0048f8c4: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x0048f920: Sword: b 0x019fdfb0; Shield: b 0x019fe040
- 0x0048f944: Sword: bl 0x019fe240; Shield: bl 0x019fe2d0
- 0x0048f94c: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040
- 0x0048f960: Sword: bl 0x019fe1d0; Shield: bl 0x019fe260

## 0x0048f980 — EXACT_MAPPED_CALLEE_CHANGE (score 88)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 0.5
- CFG same: True; exact mapped callees same: False; strings same: True
- C prototypes: Sword: void FUN_0048f980(long *param_1,uint param_2,undefined4 *param_3); Shield: void FUN_0048f980(long *param_1,uint param_2,undefined4 *param_3)
- 0x0048f9ac: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x0048fa0c: Sword: b 0x019fdfb0; Shield: b 0x019fe040
- 0x0048fa38: Sword: bl 0x019fe240; Shield: bl 0x019fe2d0
- 0x0048fa40: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040
- 0x0048fa54: Sword: bl 0x019fe1d0; Shield: bl 0x019fe260

## 0x0075efb0 — EXACT_MAPPED_CALLEE_CHANGE (score 88)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 0.714286
- CFG same: True; exact mapped callees same: False; strings same: True
- C prototypes: Sword: void FUN_0075efb0(undefined8 param_1,undefined8 param_2,byte param_3,byte param_4); Shield: void FUN_0075efb0(undefined8 param_1,undefined8 param_2,byte param_3,byte param_4)
- 0x0075efec: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x0075eff0: Sword: bl 0x019fdc00; Shield: bl 0x019fdc90
- 0x0075eff4: Sword: bl 0x019fece0; Shield: bl 0x019fed70
- 0x0075f03c: Sword: b 0x019fdfb0; Shield: b 0x019fe040
- 0x0075f04c: Sword: bl 0x019fdbe0; Shield: bl 0x019fdc70
- 0x0075f068: Sword: bl 0x019fdd10; Shield: bl 0x019fdda0
- 0x0075f08c: Sword: bl 0x019fdbf0; Shield: bl 0x019fdc80

## 0x0075f0a0 — EXACT_MAPPED_CALLEE_CHANGE (score 88)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 0.6
- CFG same: True; exact mapped callees same: False; strings same: True
- C prototypes: Sword: void FUN_0075f0a0(void); Shield: void FUN_0075f0a0(void)
- 0x0075f0c8: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x0075f10c: Sword: b 0x019fdfb0; Shield: b 0x019fe040
- 0x0075f11c: Sword: bl 0x019fdbe0; Shield: bl 0x019fdc70
- 0x0075f134: Sword: bl 0x019fdd10; Shield: bl 0x019fdda0
- 0x0075f154: Sword: bl 0x019fdbf0; Shield: bl 0x019fdc80

## 0x00764420 — EXACT_MAPPED_CALLEE_CHANGE (score 88)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 0.5
- CFG same: True; exact mapped callees same: False; strings same: True
- C prototypes: Sword: undefined8 FUN_00764420(long param_1); Shield: undefined8 FUN_00764420(long param_1)
- 0x00764440: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x0076444c: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x00764458: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040
- 0x00764468: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x00764474: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040
- 0x007644d4: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x007644e8: Sword: bl 0x019fe1d0; Shield: bl 0x019fe260
- 0x007644f0: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040
- 0x007644fc: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040

## 0x00767a40 — EXACT_MAPPED_CALLEE_CHANGE (score 88)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 0.5
- CFG same: True; exact mapped callees same: False; strings same: True
- C prototypes: Sword: void FUN_00767a40(long param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4); Shield: void FUN_00767a40(long param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)
- 0x00767a74: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x00767b58: Sword: bl 0x019fddc0; Shield: bl 0x019fde50
- 0x00767b78: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040
- 0x00767ba4: Sword: bl 0x019fe3e0; Shield: bl 0x019fe470

## 0x007dd7d0 — EXACT_MAPPED_CALLEE_CHANGE (score 88)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 0.5
- CFG same: True; exact mapped callees same: False; strings same: True
- C prototypes: Sword: void FUN_007dd7d0(long param_1); Shield: void FUN_007dd7d0(long param_1)
- 0x007dd850: Sword: bl 0x019fdfc0; Shield: bl 0x019fe050

## 0x00895770 — EXACT_MAPPED_CALLEE_CHANGE (score 88)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 0.5
- CFG same: True; exact mapped callees same: False; strings same: True
- C prototypes: Sword: uint FUN_00895770(long param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,; Shield: uint FUN_00895770(long param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
- 0x008957a4: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x00895818: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040

## 0x00404750 — EXACT_MAPPED_CALLEE_CHANGE (score 87)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 0.5
- CFG same: True; exact mapped callees same: False; strings same: True
- C prototypes: Sword: long FUN_00404750(int param_1,long param_2,undefined4 param_3); Shield: long FUN_00404750(int param_1,long param_2,undefined4 param_3)
- 0x00404790: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x004047d4: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040

## 0x004047f0 — EXACT_MAPPED_CALLEE_CHANGE (score 87)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 0.5
- CFG same: True; exact mapped callees same: False; strings same: True
- C prototypes: Sword: undefined8 FUN_004047f0(int param_1,long param_2); Shield: undefined8 FUN_004047f0(int param_1,long param_2)
- 0x00404824: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x00404854: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040

## 0x00404870 — EXACT_MAPPED_CALLEE_CHANGE (score 87)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 0.5
- CFG same: True; exact mapped callees same: False; strings same: True
- C prototypes: Sword: undefined8 FUN_00404870(int param_1,long param_2); Shield: undefined8 FUN_00404870(int param_1,long param_2)
- 0x004048a4: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x004048d4: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040

## 0x004ffc90 — EXACT_MAPPED_CALLEE_CHANGE (score 87)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 0.666667
- CFG same: True; exact mapped callees same: False; strings same: True
- C prototypes: Sword: void FUN_004ffc90(long param_1); Shield: void FUN_004ffc90(long param_1)
- 0x004ffca8: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x004ffcb4: Sword: bl 0x019fe390; Shield: bl 0x019fe420
- 0x004ffcbc: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040
- 0x004ffcd0: Sword: bl 0x019fe0b0; Shield: bl 0x019fe140
- 0x004ffcd8: Sword: bl 0x019fe0a0; Shield: bl 0x019fe130

## 0x008959c0 — EXACT_MAPPED_CALLEE_CHANGE (score 87)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 0.5
- CFG same: True; exact mapped callees same: False; strings same: True
- C prototypes: Sword: uint FUN_008959c0(float param_1,long param_2,undefined8 param_3,undefined8 param_4); Shield: uint FUN_008959c0(float param_1,long param_2,undefined8 param_3,undefined8 param_4)
- 0x008959ec: Sword: bl 0x019fdfa0; Shield: bl 0x019fe030
- 0x00895a00: Sword: bl 0x019fe130; Shield: bl 0x019fe1c0
- 0x00895a1c: Sword: bl 0x019fdfb0; Shield: bl 0x019fe040

## 0x003ff5a0 — EXACT_MAPPED_CALLEE_CHANGE (score 86)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 0.5
- CFG same: True; exact mapped callees same: False; strings same: True
- C prototypes: Sword: void FUN_003ff5a0(MutexType *param_1); Shield: void FUN_003ff5a0(MutexType *param_1)
- 0x003ff5cc: Sword: b 0x019fdfb0; Shield: b 0x019fe040
- 0x003ff5dc: Sword: add x2,x2,#0xd91; Shield: add x2,x2,#0xdd2
- 0x003ff5e4: Sword: add x4,x4,#0x89e; Shield: add x4,x4,#0x8f6

## 0x003ffb20 — EXACT_MAPPED_CALLEE_CHANGE (score 85)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 0.5
- CFG same: True; exact mapped callees same: False; strings same: True
- C prototypes: Sword: void FUN_003ffb20(ConditionVariableType *param_1); Shield: void FUN_003ffb20(ConditionVariableType *param_1)
- 0x003ffb30: Sword: bl 0x019fdff0; Shield: bl 0x019fe080
- 0x003ffb40: Sword: b 0x019fdd20; Shield: b 0x019fddb0

## 0x00a837f0 — OPERAND_OR_IMMEDIATE_CHANGE (score 21)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- CFG same: True; exact mapped callees same: True; strings same: True
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

## 0x007f2560 — OPERAND_OR_IMMEDIATE_CHANGE (score 20)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- CFG same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_007f2560(long *param_1,byte *param_2,long param_3); Shield: void FUN_007f2560(long *param_1,byte *param_2,long param_3)
- 0x007f2684: Sword: bl 0x019fdd00; Shield: bl 0x019fdd90
- 0x007f26e0: Sword: add x0,x0,#0xc78; Shield: add x0,x0,#0xca1
- 0x007f2750: Sword: add x4,x4,#0x4d2; Shield: add x4,x4,#0x503
- 0x007f27f8: Sword: add x0,x0,#0x162; Shield: add x0,x0,#0x1ba
- 0x007f2800: Sword: bl 0x019ff4d0; Shield: bl 0x019ff560
- 0x007f2808: Sword: add x1,x1,#0x702; Shield: add x1,x1,#0x742
- 0x007f2810: Sword: bl 0x019ff460; Shield: bl 0x019ff4f0
- 0x007f2888: Sword: add x8,x8,#0x5cf; Shield: add x8,x8,#0x627
- 0x007f2924: Sword: add x4,x4,#0x353; Shield: add x4,x4,#0x384
- 0x007f2a58: Sword: add x4,x4,#0x71b; Shield: add x4,x4,#0x75b
- 0x007f2b20: Sword: bl 0x019fdd00; Shield: bl 0x019fdd90
- 0x007f2c00: Sword: add x0,x0,#0x6f3; Shield: add x0,x0,#0x726
- 0x007f2c90: Sword: bl 0x019fdd00; Shield: bl 0x019fdd90
- 0x007f2d44: Sword: add x0,x0,#0xefc; Shield: add x0,x0,#0xf26
- 0x007f2d58: Sword: add x0,x0,#0x162; Shield: add x0,x0,#0x1ba
- 0x007f2d60: Sword: bl 0x019ff4d0; Shield: bl 0x019ff560

## 0x008d1a50 — OPERAND_OR_IMMEDIATE_CHANGE (score 20)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- CFG same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_008d1a50(long param_1); Shield: void FUN_008d1a50(long param_1)
- 0x008d1a84: Sword: add x21,x21,#0x550; Shield: add x21,x21,#0x57a
- 0x008d1b98: Sword: add x9,x9,#0x6ad; Shield: add x9,x9,#0x705
- 0x008d1ba4: Sword: add x8,x8,#0xbf4; Shield: add x8,x8,#0xc4c
- 0x008d1bb0: Sword: add x9,x9,#0x7b3; Shield: add x9,x9,#0x7f4
- 0x008d1bb8: Sword: add x8,x8,#0x614; Shield: add x8,x8,#0x645
- 0x008d1bc4: Sword: add x9,x9,#0xa45; Shield: add x9,x9,#0xa85
- 0x008d1bcc: Sword: add x8,x8,#0x7c5; Shield: add x8,x8,#0x806
- 0x008d1bdc: Sword: add x9,x9,#0x7d7; Shield: add x9,x9,#0x818
- 0x008d1bf0: Sword: bl 0x014bfd20; Shield: bl 0x014bfd50
- 0x008d1cd8: Sword: bl 0x014bfd20; Shield: bl 0x014bfd50
- 0x008d1dc0: Sword: bl 0x014bfd20; Shield: bl 0x014bfd50
- 0x008d1ea8: Sword: bl 0x014bfd20; Shield: bl 0x014bfd50
- 0x008d1f90: Sword: bl 0x014bfd20; Shield: bl 0x014bfd50
- 0x008d2078: Sword: bl 0x014bfd20; Shield: bl 0x014bfd50
- 0x008d2160: Sword: bl 0x014bfd20; Shield: bl 0x014bfd50
- 0x008d2258: Sword: bl 0x014bfd20; Shield: bl 0x014bfd50

## 0x00a94770 — OPERAND_OR_IMMEDIATE_CHANGE (score 20)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- CFG same: True; exact mapped callees same: True; strings same: True
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

## 0x00824470 — OPERAND_OR_IMMEDIATE_CHANGE (score 19)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- CFG same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00824470(long *param_1,long *param_2); Shield: void FUN_00824470(long *param_1,long *param_2)
- 0x008244a4: Sword: add x2,x2,#0x960; Shield: add x2,x2,#0x9a1
- 0x008244bc: Sword: add x1,x1,#0xbd3; Shield: add x1,x1,#0xc14
- 0x0082450c: Sword: add x2,x2,#0x960; Shield: add x2,x2,#0x9a1
- 0x00824524: Sword: add x1,x1,#0xc8f; Shield: add x1,x1,#0xce7
- 0x00824534: Sword: add x1,x1,#0xb4a; Shield: add x1,x1,#0xba2
- 0x00824540: Sword: add x1,x1,#0x788; Shield: add x1,x1,#0x7c9
- 0x00824554: Sword: add x1,x1,#0x1d2; Shield: add x1,x1,#0x21c
- 0x00824580: Sword: add x1,x1,#0xc7d; Shield: add x1,x1,#0xcae

## 0x00a0dbd0 — OPERAND_OR_IMMEDIATE_CHANGE (score 19)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- CFG same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00a0dbd0(long param_1,uint param_2,uint param_3); Shield: void FUN_00a0dbd0(long param_1,uint param_2,uint param_3)
- 0x00a0e114: Sword: bl 0x015f6330; Shield: bl 0x015f63a0
- 0x00a0e180: Sword: add x0,x0,#0x550; Shield: add x0,x0,#0x57a
- 0x00a0e190: Sword: bl 0x019fe840; Shield: bl 0x019fe8d0

## 0x00a10760 — OPERAND_OR_IMMEDIATE_CHANGE (score 19)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- CFG same: True; exact mapped callees same: True; strings same: True
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
- CFG same: True; exact mapped callees same: True; strings same: True
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

## 0x00a713b0 — OPERAND_OR_IMMEDIATE_CHANGE (score 19)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- CFG same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00a713b0(long param_1,uint param_2,int param_3,undefined4 param_4); Shield: void FUN_00a713b0(long param_1,uint param_2,int param_3,undefined4 param_4)
- 0x00a714f0: Sword: bl 0x015f6330; Shield: bl 0x015f63a0
- 0x00a715c8: Sword: bl 0x015f6330; Shield: bl 0x015f63a0
- 0x00a716a0: Sword: bl 0x015f6330; Shield: bl 0x015f63a0
- 0x00a71780: Sword: bl 0x015f6330; Shield: bl 0x015f63a0
- 0x00a71860: Sword: bl 0x015f6330; Shield: bl 0x015f63a0

## 0x00acf8d0 — OPERAND_OR_IMMEDIATE_CHANGE (score 19)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- CFG same: True; exact mapped callees same: True; strings same: True
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
- CFG same: True; exact mapped callees same: True; strings same: True
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

## 0x00bf4050 — OPERAND_OR_IMMEDIATE_CHANGE (score 19)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- CFG same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00bf4050(long param_1); Shield: void FUN_00bf4050(long param_1)
- 0x00bf428c: Sword: bl 0x01042330; Shield: bl 0x01042360
- 0x00bf4400: Sword: bl 0x0169ce10; Shield: bl 0x0169cea0
- 0x00bf442c: Sword: bl 0x0169ce10; Shield: bl 0x0169cea0
- 0x00bf4828: Sword: bl 0x01042330; Shield: bl 0x01042360
- 0x00bf484c: Sword: bl 0x0169ce10; Shield: bl 0x0169cea0
- 0x00bf49b0: Sword: bl 0x01039f80; Shield: bl 0x01039fb0

## 0x00c71a20 — OPERAND_OR_IMMEDIATE_CHANGE (score 19)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- CFG same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00c71a20(long *param_1,long *param_2,undefined8 param_3); Shield: void FUN_00c71a20(long *param_1,long *param_2,undefined8 param_3)
- 0x00c71b2c: Sword: bl 0x019fdbe0; Shield: bl 0x019fdc70
- 0x00c71b58: Sword: bl 0x019fdbf0; Shield: bl 0x019fdc80
- 0x00c71c24: Sword: bl 0x019fdbe0; Shield: bl 0x019fdc70
- 0x00c71c50: Sword: bl 0x019fdbf0; Shield: bl 0x019fdc80
- 0x00c71d60: Sword: bl 0x019fdbe0; Shield: bl 0x019fdc70
- 0x00c71d8c: Sword: bl 0x019fdbf0; Shield: bl 0x019fdc80
- 0x00c71e1c: Sword: bl 0x01063d80; Shield: bl 0x01063db0
- 0x00c71ef8: Sword: bl 0x019fdbe0; Shield: bl 0x019fdc70
- 0x00c71f24: Sword: bl 0x019fdbf0; Shield: bl 0x019fdc80
- 0x00c7206c: Sword: bl 0x019fdbe0; Shield: bl 0x019fdc70
- 0x00c72080: Sword: bl 0x019fdbf0; Shield: bl 0x019fdc80
- 0x00c720ec: Sword: bl 0x01061030; Shield: bl 0x01061060
- 0x00c72114: Sword: bl 0x01061030; Shield: bl 0x01061060

## 0x00c8ff20 — OPERAND_OR_IMMEDIATE_CHANGE (score 19)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- CFG same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: undefined8 FUN_00c8ff20(long *param_1); Shield: undefined8 FUN_00c8ff20(long *param_1)
- 0x00c8ffec: Sword: bl 0x019fdbe0; Shield: bl 0x019fdc70
- 0x00c90004: Sword: bl 0x019fdbf0; Shield: bl 0x019fdc80
- 0x00c9001c: Sword: bl 0x019fdbe0; Shield: bl 0x019fdc70
- 0x00c90044: Sword: bl 0x019fdbf0; Shield: bl 0x019fdc80
- 0x00c90160: Sword: bl 0x019fdbe0; Shield: bl 0x019fdc70
- 0x00c90178: Sword: bl 0x019fdbf0; Shield: bl 0x019fdc80
- 0x00c903c8: Sword: bl 0x019fdbe0; Shield: bl 0x019fdc70
- 0x00c903e0: Sword: bl 0x019fdbf0; Shield: bl 0x019fdc80
- 0x00c904b8: Sword: bl 0x019fdbe0; Shield: bl 0x019fdc70
- 0x00c904d0: Sword: bl 0x019fdbf0; Shield: bl 0x019fdc80
- 0x00c90714: Sword: bl 0x01061030; Shield: bl 0x01061060
- 0x00c9072c: Sword: bl 0x01061030; Shield: bl 0x01061060

## 0x00527cc0 — OPERAND_OR_IMMEDIATE_CHANGE (score 18)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- CFG same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: int FUN_00527cc0(long param_1,ulong param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5; Shield: int FUN_00527cc0(long param_1,ulong param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
- 0x00527e24: Sword: adrp x2,0x1d13000; Shield: adrp x2,0x1d14000
- 0x00527e28: Sword: add x2,x2,#0xffb; Shield: add x2,x2,#0x53
- 0x00527ebc: Sword: add x1,x1,#0x9f8; Shield: add x1,x1,#0xa21
- 0x00527ee8: Sword: add x1,x1,#0xd7d; Shield: add x1,x1,#0xdae
- 0x00527f18: Sword: add x1,x1,#0xc78; Shield: add x1,x1,#0xcd0
- 0x00527f64: Sword: add x2,x2,#0x98d; Shield: add x2,x2,#0x9ce
- 0x0052803c: Sword: adrp x2,0x1d13000; Shield: adrp x2,0x1d14000
- 0x00528040: Sword: add x2,x2,#0xffb; Shield: add x2,x2,#0x53

## 0x00679d10 — OPERAND_OR_IMMEDIATE_CHANGE (score 18)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- CFG same: True; exact mapped callees same: True; strings same: True
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
- CFG same: True; exact mapped callees same: True; strings same: True
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
- CFG same: True; exact mapped callees same: True; strings same: True
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
- CFG same: True; exact mapped callees same: True; strings same: True
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

## 0x006c8060 — OPERAND_OR_IMMEDIATE_CHANGE (score 18)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- CFG same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: int FUN_006c8060(long param_1,undefined8 *param_2,undefined8 param_3,uint param_4,undefined8 param_5; Shield: int FUN_006c8060(long param_1,undefined8 *param_2,undefined8 param_3,uint param_4,undefined8 param_5
- 0x006c81a0: Sword: bl 0x019fdbe0; Shield: bl 0x019fdc70
- 0x006c81a8: Sword: bl 0x01590a70; Shield: bl 0x01590aa0
- 0x006c81b4: Sword: bl 0x019fdbf0; Shield: bl 0x019fdc80
- 0x006c8258: Sword: bl 0x019fdbe0; Shield: bl 0x019fdc70
- 0x006c8260: Sword: bl 0x01590a70; Shield: bl 0x01590aa0
- 0x006c826c: Sword: bl 0x019fdbf0; Shield: bl 0x019fdc80

## 0x006cc2d0 — OPERAND_OR_IMMEDIATE_CHANGE (score 18)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- CFG same: True; exact mapped callees same: True; strings same: True
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
- CFG same: True; exact mapped callees same: True; strings same: True
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
- CFG same: True; exact mapped callees same: True; strings same: True
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
- CFG same: True; exact mapped callees same: True; strings same: True
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
- CFG same: True; exact mapped callees same: True; strings same: True
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
- CFG same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00713a20(ulong *param_1,long param_2); Shield: void FUN_00713a20(ulong *param_1,long param_2)
- 0x00713a54: Sword: add x8,x8,#0x550; Shield: add x8,x8,#0x57a
- 0x00713b08: Sword: bl 0x019fdd00; Shield: bl 0x019fdd90

## 0x0072b360 — OPERAND_OR_IMMEDIATE_CHANGE (score 18)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- CFG same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_0072b360(long param_1,long param_2); Shield: void FUN_0072b360(long param_1,long param_2)
- 0x0072b384: Sword: bl 0x019fdc00; Shield: bl 0x019fdc90
- 0x0072b460: Sword: bl 0x019a44c0; Shield: bl 0x019a4550
- 0x0072b470: Sword: bl 0x019a42f0; Shield: bl 0x019a4380
- 0x0072b494: Sword: bl 0x0199ce00; Shield: bl 0x0199ce90
- 0x0072b4b4: Sword: bl 0x019a4910; Shield: bl 0x019a49a0
- 0x0072b4c4: Sword: bl 0x019a4760; Shield: bl 0x019a47f0
- 0x0072b4e8: Sword: bl 0x0199cfb0; Shield: bl 0x0199d040
- 0x0072b508: Sword: bl 0x019a4730; Shield: bl 0x019a47c0
- 0x0072b538: Sword: bl 0x019a44d0; Shield: bl 0x019a4560
- 0x0072b5b4: Sword: bl 0x019a4500; Shield: bl 0x019a4590
- 0x0072b5c8: Sword: bl 0x019a4520; Shield: bl 0x019a45b0
- 0x0072b5ec: Sword: bl 0x0199cf00; Shield: bl 0x0199cf90
- 0x0072b64c: Sword: bl 0x0199e180; Shield: bl 0x0199e210

## 0x0073d860 — OPERAND_OR_IMMEDIATE_CHANGE (score 18)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- CFG same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: uint FUN_0073d860(long param_1,undefined4 *param_2,undefined8 *param_3,ulong *param_4,long param_5,; Shield: uint FUN_0073d860(long param_1,undefined4 *param_2,undefined8 *param_3,ulong *param_4,long param_5,
- 0x0073d8c4: Sword: bl 0x019fdc90; Shield: bl 0x019fdd20
- 0x0073d9a8: Sword: bl 0x019fdc90; Shield: bl 0x019fdd20
- 0x0073db90: Sword: bl 0x019fdc90; Shield: bl 0x019fdd20
- 0x0073dd08: Sword: bl 0x019fdc60; Shield: bl 0x019fdcf0

## 0x0073dfe0 — OPERAND_OR_IMMEDIATE_CHANGE (score 18)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- CFG same: True; exact mapped callees same: True; strings same: True
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

## 0x00751820 — OPERAND_OR_IMMEDIATE_CHANGE (score 18)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- CFG same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00751820(undefined8 param_1,long param_2,int *param_3,undefined8 param_4,uint param_5,; Shield: void FUN_00751820(undefined8 param_1,long param_2,int *param_3,undefined8 param_4,uint param_5,
- 0x007519b4: Sword: bl 0x019fdd00; Shield: bl 0x019fdd90
- 0x00751a54: Sword: bl 0x019fdd50; Shield: bl 0x019fdde0
- 0x00751a64: Sword: bl 0x019fdd00; Shield: bl 0x019fdd90
- 0x00751abc: Sword: bl 0x019fdd00; Shield: bl 0x019fdd90
- 0x00751b1c: Sword: add x2,x2,#0xc8a; Shield: add x2,x2,#0xce2
- 0x00751d18: Sword: add x8,x8,#0x550; Shield: add x8,x8,#0x57a

## 0x00769890 — OPERAND_OR_IMMEDIATE_CHANGE (score 18)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- CFG same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00769890(long param_1); Shield: void FUN_00769890(long param_1)
- 0x007698c0: Sword: add x22,x22,#0x550; Shield: add x22,x22,#0x57a
- 0x007698c8: Sword: add x1,x1,#0xc03; Shield: add x1,x1,#0xc36
- 0x00769a00: Sword: bl 0x019fdc90; Shield: bl 0x019fdd20
- 0x00769b38: Sword: bl 0x019fdc90; Shield: bl 0x019fdd20
- 0x00769c7c: Sword: bl 0x019fdc60; Shield: bl 0x019fdcf0

## 0x0076a170 — OPERAND_OR_IMMEDIATE_CHANGE (score 18)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- CFG same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_0076a170(long param_1,uint param_2,int param_3); Shield: void FUN_0076a170(long param_1,uint param_2,int param_3)
- 0x0076a240: Sword: bl 0x019fdc90; Shield: bl 0x019fdd20
- 0x0076a39c: Sword: bl 0x0199c810; Shield: bl 0x0199c8a0
- 0x0076a3a4: Sword: bl 0x0199c800; Shield: bl 0x0199c890
- 0x0076a3d8: Sword: bl 0x019fdc90; Shield: bl 0x019fdd20
- 0x0076a514: Sword: bl 0x019fdc90; Shield: bl 0x019fdd20
- 0x0076a60c: Sword: bl 0x019fdc90; Shield: bl 0x019fdd20
- 0x0076a6ec: Sword: bl 0x019fdc60; Shield: bl 0x019fdcf0

## 0x00791180 — OPERAND_OR_IMMEDIATE_CHANGE (score 18)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- CFG same: True; exact mapped callees same: True; strings same: True
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

## 0x008073d0 — OPERAND_OR_IMMEDIATE_CHANGE (score 18)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- CFG same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: undefined8 FUN_008073d0(long param_1); Shield: undefined8 FUN_008073d0(long param_1)
- 0x00807748: Sword: bl 0x019ff450; Shield: bl 0x019ff4e0
- 0x0080780c: Sword: add x3,x3,#0xd59; Shield: add x3,x3,#0xd74
- 0x00807820: Sword: bl 0x019ff4e0; Shield: bl 0x019ff570
- 0x0080784c: Sword: add x3,x3,#0xe0; Shield: add x3,x3,#0x10a
- 0x00807860: Sword: bl 0x019ff4e0; Shield: bl 0x019ff570
- 0x0080788c: Sword: add x3,x3,#0x976; Shield: add x3,x3,#0x9ce
- 0x008078a0: Sword: bl 0x019ff4e0; Shield: bl 0x019ff570
- 0x008078ac: Sword: add x0,x0,#0x251; Shield: add x0,x0,#0x27a
- 0x008078b8: Sword: bl 0x019ff4d0; Shield: bl 0x019ff560

## 0x00842de0 — OPERAND_OR_IMMEDIATE_CHANGE (score 18)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- CFG same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: undefined8 FUN_00842de0(undefined4 *param_1); Shield: undefined8 FUN_00842de0(undefined4 *param_1)
- 0x00842e14: Sword: bl 0x019ff320; Shield: bl 0x019ff3b0
- 0x00842e44: Sword: add x25,x25,#0x278; Shield: add x25,x25,#0x2c2
- 0x008430b8: Sword: bl 0x019ff470; Shield: bl 0x019ff500
- 0x0084317c: Sword: add x8,x8,#0x22e; Shield: add x8,x8,#0x278
- 0x00843248: Sword: add x0,x0,#0xf89; Shield: add x0,x0,#0xfa4

## 0x00863060 — OPERAND_OR_IMMEDIATE_CHANGE (score 18)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- CFG same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00863060(byte *param_1,byte *param_2,long param_3,undefined8 param_4,undefined8 param_5,; Shield: void FUN_00863060(byte *param_1,byte *param_2,long param_3,undefined8 param_4,undefined8 param_5,
- 0x00863140: Sword: bl 0x019ff520; Shield: bl 0x019ff5b0
- 0x00863170: Sword: add x2,x2,#0xf6b; Shield: add x2,x2,#0xf94
- 0x00863188: Sword: add x1,x1,#0x9bd; Shield: add x1,x1,#0x9fd
- 0x008631a0: Sword: add x1,x1,#0x8ed; Shield: add x1,x1,#0x945
- 0x008631d8: Sword: adrp x1,0x1cf2000; Shield: adrp x1,0x1cf3000
- 0x008631dc: Sword: add x1,x1,#0xfdc; Shield: add x1,x1,#0x5
- 0x008631e8: Sword: add x2,x2,#0xf6b; Shield: add x2,x2,#0xf94
- 0x00863200: Sword: add x1,x1,#0x87a; Shield: add x1,x1,#0x8bb
- 0x0086321c: Sword: bl 0x019fdd00; Shield: bl 0x019fdd90
- 0x00863278: Sword: bl 0x019fddc0; Shield: bl 0x019fde50
- 0x0086329c: Sword: add x1,x1,#0xaa1; Shield: add x1,x1,#0xae2
- 0x00863350: Sword: bl 0x019fddc0; Shield: bl 0x019fde50
- 0x008633ac: Sword: bl 0x019fedd0; Shield: bl 0x019fee60

## 0x00865c70 — OPERAND_OR_IMMEDIATE_CHANGE (score 18)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- CFG same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00865c70(void); Shield: void FUN_00865c70(void)
- 0x00865cf0: Sword: add x22,x22,#0x550; Shield: add x22,x22,#0x57a

## 0x008d2910 — OPERAND_OR_IMMEDIATE_CHANGE (score 18)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- CFG same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_008d2910(long param_1); Shield: void FUN_008d2910(long param_1)
- 0x008d2938: Sword: add x0,x0,#0x902; Shield: add x0,x0,#0x95a
- 0x008d2b18: Sword: bl 0x019fdc90; Shield: bl 0x019fdd20
- 0x008d2d60: Sword: add x8,x8,#0x550; Shield: add x8,x8,#0x57a
- 0x008d2dac: Sword: bl 0x019fdc60; Shield: bl 0x019fdcf0

## 0x009a75a0 — OPERAND_OR_IMMEDIATE_CHANGE (score 18)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- CFG same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: int FUN_009a75a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,; Shield: int FUN_009a75a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
- 0x009a7880: Sword: bl 0x0102ba70; Shield: bl 0x0102baa0

## 0x009cbee0 — OPERAND_OR_IMMEDIATE_CHANGE (score 18)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- CFG same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_009cbee0(long param_1); Shield: void FUN_009cbee0(long param_1)
- 0x009cc00c: Sword: bl 0x01940760; Shield: bl 0x019407f0

## 0x00a0f5f0 — OPERAND_OR_IMMEDIATE_CHANGE (score 18)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- CFG same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00a0f5f0(long param_1); Shield: void FUN_00a0f5f0(long param_1)
- 0x00a0f60c: Sword: bl 0x00ff93d0; Shield: bl 0x00ff9400
- 0x00a0f6a0: Sword: bl 0x019fdc90; Shield: bl 0x019fdd20
- 0x00a0f750: Sword: bl 0x019fdc90; Shield: bl 0x019fdd20
- 0x00a0f800: Sword: bl 0x019fdc90; Shield: bl 0x019fdd20
- 0x00a0f8b0: Sword: bl 0x019fdc90; Shield: bl 0x019fdd20
- 0x00a0f960: Sword: bl 0x019fdc90; Shield: bl 0x019fdd20
- 0x00a0fa10: Sword: bl 0x019fdc90; Shield: bl 0x019fdd20
- 0x00a0fad4: Sword: bl 0x019fdc60; Shield: bl 0x019fdcf0

## 0x00a187b0 — OPERAND_OR_IMMEDIATE_CHANGE (score 18)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- CFG same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00a187b0(long param_1,long *param_2,undefined8 param_3); Shield: void FUN_00a187b0(long param_1,long *param_2,undefined8 param_3)
- 0x00a188f8: Sword: bl 0x00ffd510; Shield: bl 0x00ffd540
- 0x00a18b08: Sword: bl 0x019a65b0; Shield: bl 0x019a6640
- 0x00a18b10: Sword: bl 0x019a65b0; Shield: bl 0x019a6640
- 0x00a18b38: Sword: add x0,x0,#0x550; Shield: add x0,x0,#0x57a
- 0x00a18b48: Sword: bl 0x019fe840; Shield: bl 0x019fe8d0

## 0x00a25ea0 — OPERAND_OR_IMMEDIATE_CHANGE (score 18)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- CFG same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00a25ea0(long param_1,undefined8 param_2); Shield: void FUN_00a25ea0(long param_1,undefined8 param_2)
- 0x00a26054: Sword: bl 0x00ffd510; Shield: bl 0x00ffd540
- 0x00a26064: Sword: bl 0x00ffd840; Shield: bl 0x00ffd870
- 0x00a260d0: Sword: bl 0x00ffd510; Shield: bl 0x00ffd540
- 0x00a260e0: Sword: bl 0x00ffd840; Shield: bl 0x00ffd870
- 0x00a2614c: Sword: bl 0x00ffd510; Shield: bl 0x00ffd540
- 0x00a2615c: Sword: bl 0x00ffd840; Shield: bl 0x00ffd870
- 0x00a261c8: Sword: bl 0x00ffd510; Shield: bl 0x00ffd540
- 0x00a261d8: Sword: bl 0x00ffd840; Shield: bl 0x00ffd870
- 0x00a26248: Sword: bl 0x00ffd510; Shield: bl 0x00ffd540
- 0x00a26258: Sword: bl 0x00ffd840; Shield: bl 0x00ffd870
- 0x00a262c8: Sword: bl 0x00ffd510; Shield: bl 0x00ffd540
- 0x00a262d8: Sword: bl 0x00ffd840; Shield: bl 0x00ffd870

## 0x00a37620 — OPERAND_OR_IMMEDIATE_CHANGE (score 18)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- CFG same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00a37620(long param_1,long *param_2); Shield: void FUN_00a37620(long param_1,long *param_2)
- 0x00a3772c: Sword: bl 0x016b81d0; Shield: bl 0x016b8260
- 0x00a37740: Sword: bl 0x016b81d0; Shield: bl 0x016b8260
- 0x00a377c0: Sword: bl 0x016b81d0; Shield: bl 0x016b8260
- 0x00a377d4: Sword: bl 0x016b81d0; Shield: bl 0x016b8260
- 0x00a3785c: Sword: bl 0x016b81d0; Shield: bl 0x016b8260
- 0x00a37870: Sword: bl 0x016b81d0; Shield: bl 0x016b8260
- 0x00a378f4: Sword: bl 0x016b81d0; Shield: bl 0x016b8260
- 0x00a37908: Sword: bl 0x016b81d0; Shield: bl 0x016b8260
- 0x00a37910: Sword: bl 0x019a65b0; Shield: bl 0x019a6640
- 0x00a37918: Sword: bl 0x019a65b0; Shield: bl 0x019a6640
- 0x00a37930: Sword: bl 0x00ffd510; Shield: bl 0x00ffd540
- 0x00a37958: Sword: bl 0x010364c0; Shield: bl 0x010364f0

## 0x00a38f80 — OPERAND_OR_IMMEDIATE_CHANGE (score 18)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- CFG same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00a38f80(long *param_1,long param_2); Shield: void FUN_00a38f80(long *param_1,long param_2)
- 0x00a38fc0: Sword: bl 0x016b2da0; Shield: bl 0x016b2e30
- 0x00a38fe8: Sword: bl 0x016b2d70; Shield: bl 0x016b2e00
- 0x00a390f4: Sword: bl 0x014ca220; Shield: bl 0x014ca250
- 0x00a39110: Sword: bl 0x014ca220; Shield: bl 0x014ca250
- 0x00a39130: Sword: bl 0x016b2da0; Shield: bl 0x016b2e30
- 0x00a39158: Sword: b 0x016b2d70; Shield: b 0x016b2e00
- 0x00a39194: Sword: bl 0x014ca220; Shield: bl 0x014ca250
- 0x00a391b0: Sword: bl 0x014ca220; Shield: bl 0x014ca250
- 0x00a391c0: Sword: bl 0x0167cce0; Shield: bl 0x0167cd70
- 0x00a391ec: Sword: bl 0x016ac4c0; Shield: bl 0x016ac550
- 0x00a39218: Sword: bl 0x00ffd510; Shield: bl 0x00ffd540
- 0x00a39290: Sword: bl 0x00ffd510; Shield: bl 0x00ffd540
- 0x00a392ec: Sword: bl 0x016a7910; Shield: bl 0x016a79a0
- 0x00a392fc: Sword: bl 0x00ffd510; Shield: bl 0x00ffd540

## 0x00a855e0 — OPERAND_OR_IMMEDIATE_CHANGE (score 18)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- CFG same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00a855e0(long param_1,byte param_2,int param_3); Shield: void FUN_00a855e0(long param_1,byte param_2,int param_3)
- 0x00a85680: Sword: bl 0x00dcd4a0; Shield: bl 0x00dcd4d0
- 0x00a856d4: Sword: bl 0x019fdc00; Shield: bl 0x019fdc90
- 0x00a85898: Sword: bl 0x019fdbe0; Shield: bl 0x019fdc70
- 0x00a858ac: Sword: bl 0x019fdbf0; Shield: bl 0x019fdc80

## 0x00a93780 — OPERAND_OR_IMMEDIATE_CHANGE (score 18)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- CFG same: True; exact mapped callees same: True; strings same: True
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

## 0x00a9cbd0 — OPERAND_OR_IMMEDIATE_CHANGE (score 18)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- CFG same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00a9cbd0(long *param_1,ulong param_2); Shield: void FUN_00a9cbd0(long *param_1,ulong param_2)
- 0x00a9cc8c: Sword: add x23,x23,#0x550; Shield: add x23,x23,#0x57a
- 0x00a9cd1c: Sword: add x0,x0,#0x57b; Shield: add x0,x0,#0x5c5
- 0x00a9cd3c: Sword: add x0,x0,#0x7e3; Shield: add x0,x0,#0x80c
- 0x00a9ce9c: Sword: add x0,x0,#0xdfe; Shield: add x0,x0,#0xe3f
- 0x00a9cf14: Sword: add x0,x0,#0x3ad; Shield: add x0,x0,#0x3ee
- 0x00a9cf34: Sword: add x0,x0,#0xf73; Shield: add x0,x0,#0xfcb
- 0x00a9cf50: Sword: add x0,x0,#0xf97; Shield: add x0,x0,#0xfef
- 0x00a9cf6c: Sword: add x0,x0,#0xbe4; Shield: add x0,x0,#0xc2e

## 0x00a9cf90 — OPERAND_OR_IMMEDIATE_CHANGE (score 18)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- CFG same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00a9cf90(long *param_1); Shield: void FUN_00a9cf90(long *param_1)
- 0x00a9cfb8: Sword: add x22,x22,#0x550; Shield: add x22,x22,#0x57a
- 0x00a9d01c: Sword: add x0,x0,#0xbd7; Shield: add x0,x0,#0xc2f
- 0x00a9d0d8: Sword: add x0,x0,#0xbd7; Shield: add x0,x0,#0xc2f
- 0x00a9d230: Sword: add x0,x0,#0xbec; Shield: add x0,x0,#0xc2c
- 0x00a9d278: Sword: add x0,x0,#0x32; Shield: add x0,x0,#0x8a
- 0x00a9d294: Sword: add x0,x0,#0x288; Shield: add x0,x0,#0x2a3
- 0x00a9d2f0: Sword: add x0,x0,#0x59f; Shield: add x0,x0,#0x5e9
- 0x00a9d3b8: Sword: add x0,x0,#0xd20; Shield: add x0,x0,#0xd78

## 0x00aa5ef0 — OPERAND_OR_IMMEDIATE_CHANGE (score 18)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- CFG same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00aa5ef0(ulong param_1); Shield: void FUN_00aa5ef0(ulong param_1)
- 0x00aa5f5c: Sword: add x20,x20,#0x550; Shield: add x20,x20,#0x57a
- 0x00aa60b4: Sword: bl 0x019fdd50; Shield: bl 0x019fdde0
- 0x00aa60c4: Sword: bl 0x019fdd00; Shield: bl 0x019fdd90

## 0x00acda00 — OPERAND_OR_IMMEDIATE_CHANGE (score 18)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- CFG same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00acda00(long *param_1); Shield: void FUN_00acda00(long *param_1)
- 0x00acdb68: Sword: bl 0x01050390; Shield: bl 0x010503c0
- 0x00acdc9c: Sword: bl 0x019fdbe0; Shield: bl 0x019fdc70
- 0x00acdcb8: Sword: bl 0x019fdbf0; Shield: bl 0x019fdc80
- 0x00acdce4: Sword: bl 0x01050390; Shield: bl 0x010503c0
- 0x00acddb4: Sword: bl 0x019fdbe0; Shield: bl 0x019fdc70
- 0x00acddd0: Sword: bl 0x019fdbf0; Shield: bl 0x019fdc80
- 0x00acddfc: Sword: bl 0x01050390; Shield: bl 0x010503c0

## 0x00bc46a0 — OPERAND_OR_IMMEDIATE_CHANGE (score 18)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- CFG same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00bc46a0(long param_1,int param_2,undefined4 param_3); Shield: void FUN_00bc46a0(long param_1,int param_2,undefined4 param_3)
- 0x00bc46dc: Sword: bl 0x00ff86a0; Shield: bl 0x00ff86d0
- 0x00bc4784: Sword: bl 0x014c9900; Shield: bl 0x014c9930
- 0x00bc4794: Sword: add x1,x1,#0xd94; Shield: add x1,x1,#0xdd5
- 0x00bc4798: Sword: bl 0x00ffdc80; Shield: bl 0x00ffdcb0
- 0x00bc479c: Sword: bl 0x016b8190; Shield: bl 0x016b8220
- 0x00bc4814: Sword: bl 0x0150b350; Shield: bl 0x0150b380
- 0x00bc4840: Sword: add x1,x1,#0xd94; Shield: add x1,x1,#0xdd5
- 0x00bc4844: Sword: bl 0x00ffdc80; Shield: bl 0x00ffdcb0
- 0x00bc4848: Sword: bl 0x016b8190; Shield: bl 0x016b8220
- 0x00bc48c0: Sword: bl 0x0150b350; Shield: bl 0x0150b380
- 0x00bc4938: Sword: bl 0x014c7bf0; Shield: bl 0x014c7c20
- 0x00bc4998: Sword: bl 0x014c84c0; Shield: bl 0x014c84f0
- 0x00bc4a78: Sword: bl 0x014c62d0; Shield: bl 0x014c6300
- 0x00bc4b38: Sword: bl 0x0150b350; Shield: bl 0x0150b380
- 0x00bc4b74: Sword: bl 0x0150b350; Shield: bl 0x0150b380

## 0x00bc8500 — OPERAND_OR_IMMEDIATE_CHANGE (score 18)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- CFG same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: undefined8 FUN_00bc8500(long param_1,int param_2,int param_3,undefined4 param_4); Shield: undefined8 FUN_00bc8500(long param_1,int param_2,int param_3,undefined4 param_4)
- 0x00bc86dc: Sword: bl 0x0150a730; Shield: bl 0x0150a760

## 0x00bcf1f0 — OPERAND_OR_IMMEDIATE_CHANGE (score 18)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- CFG same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: undefined4; Shield: undefined4
- 0x00bcf3e0: Sword: bl 0x0150a670; Shield: bl 0x0150a6a0
- 0x00bcf44c: Sword: bl 0x01505e60; Shield: bl 0x01505e90

## 0x00bd26a0 — OPERAND_OR_IMMEDIATE_CHANGE (score 18)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- CFG same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00bd26a0(undefined1 param_1 [16],float param_2,long param_3,uint param_4,int param_5); Shield: void FUN_00bd26a0(undefined1 param_1 [16],float param_2,long param_3,uint param_4,int param_5)
- 0x00bd2784: Sword: bl 0x0167b760; Shield: bl 0x0167b7f0
- 0x00bd2798: Sword: bl 0x0167b760; Shield: bl 0x0167b7f0

## 0x00bef3d0 — OPERAND_OR_IMMEDIATE_CHANGE (score 18)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- CFG same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00bef3d0(long param_1); Shield: void FUN_00bef3d0(long param_1)
- 0x00bef438: Sword: bl 0x0108c840; Shield: bl 0x0108c870
- 0x00bef548: Sword: bl 0x0108c840; Shield: bl 0x0108c870
- 0x00bef658: Sword: bl 0x0108c840; Shield: bl 0x0108c870
- 0x00bef768: Sword: bl 0x0108c840; Shield: bl 0x0108c870
- 0x00bef840: Sword: add x0,x0,#0x550; Shield: add x0,x0,#0x57a
- 0x00bef850: Sword: bl 0x019fe840; Shield: bl 0x019fe8d0

## 0x00bf49d0 — OPERAND_OR_IMMEDIATE_CHANGE (score 18)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- CFG same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00bf49d0(long param_1); Shield: void FUN_00bf49d0(long param_1)
- 0x00bf4a7c: Sword: bl 0x010364c0; Shield: bl 0x010364f0
- 0x00bf4cc8: Sword: bl 0x010364c0; Shield: bl 0x010364f0
- 0x00bf4d4c: Sword: b 0x01037030; Shield: b 0x01037060

## 0x00bf7490 — OPERAND_OR_IMMEDIATE_CHANGE (score 18)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- CFG same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00bf7490(long param_1,int param_2); Shield: void FUN_00bf7490(long param_1,int param_2)
- 0x00bf74b0: Sword: add x1,x1,#0x77a; Shield: add x1,x1,#0x7a4
- 0x00bf75f8: Sword: bl 0x0108c840; Shield: bl 0x0108c870
- 0x00bf7620: Sword: bl 0x016b2d70; Shield: bl 0x016b2e00
- 0x00bf7678: Sword: bl 0x00ffda40; Shield: bl 0x00ffda70
- 0x00bf76ec: Sword: bl 0x00ffda40; Shield: bl 0x00ffda70
- 0x00bf7760: Sword: bl 0x00ffda40; Shield: bl 0x00ffda70
- 0x00bf77d4: Sword: bl 0x00ffda40; Shield: bl 0x00ffda70
- 0x00bf7848: Sword: bl 0x00ffda40; Shield: bl 0x00ffda70
- 0x00bf78d4: Sword: add x0,x0,#0x550; Shield: add x0,x0,#0x57a
- 0x00bf78e4: Sword: bl 0x019fe840; Shield: bl 0x019fe8d0

## 0x00c097c0 — OPERAND_OR_IMMEDIATE_CHANGE (score 18)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- CFG same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00c097c0(long param_1,int param_2,uint param_3); Shield: void FUN_00c097c0(long param_1,int param_2,uint param_3)
- 0x00c097e0: Sword: add x1,x1,#0x77a; Shield: add x1,x1,#0x7a4
- 0x00c0992c: Sword: bl 0x0108c840; Shield: bl 0x0108c870
- 0x00c09954: Sword: bl 0x016b2d70; Shield: bl 0x016b2e00
- 0x00c099c4: Sword: bl 0x00ffda40; Shield: bl 0x00ffda70
- 0x00c09a38: Sword: bl 0x00ffda40; Shield: bl 0x00ffda70
- 0x00c09ad0: Sword: bl 0x00ffda40; Shield: bl 0x00ffda70
- 0x00c09b44: Sword: bl 0x00ffda40; Shield: bl 0x00ffda70
- 0x00c09bb8: Sword: bl 0x00ffda40; Shield: bl 0x00ffda70
- 0x00c09c48: Sword: bl 0x00ffda40; Shield: bl 0x00ffda70
- 0x00c09cbc: Sword: bl 0x00ffda40; Shield: bl 0x00ffda70
- 0x00c09d4c: Sword: add x0,x0,#0x550; Shield: add x0,x0,#0x57a
- 0x00c09d5c: Sword: bl 0x019fe840; Shield: bl 0x019fe8d0

## 0x00c0fc80 — OPERAND_OR_IMMEDIATE_CHANGE (score 18)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- CFG same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00c0fc80(long param_1,undefined1 param_2,undefined8 *param_3,undefined8 *param_4); Shield: void FUN_00c0fc80(long param_1,undefined1 param_2,undefined8 *param_3,undefined8 *param_4)
- 0x00c0fd40: Sword: bl 0x014ca220; Shield: bl 0x014ca250
- 0x00c0fdb8: Sword: bl 0x014c62d0; Shield: bl 0x014c6300
- 0x00c0fe28: Sword: add x1,x1,#0x265; Shield: add x1,x1,#0x2bd
- 0x00c0fe34: Sword: bl 0x00ffd6a0; Shield: bl 0x00ffd6d0
- 0x00c0fe80: Sword: bl 0x014ca220; Shield: bl 0x014ca250
- 0x00c0fea4: Sword: add x1,x1,#0x265; Shield: add x1,x1,#0x2bd
- 0x00c0feb0: Sword: bl 0x00ffd6a0; Shield: bl 0x00ffd6d0

## 0x00c10960 — OPERAND_OR_IMMEDIATE_CHANGE (score 18)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- CFG same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00c10960(long param_1,int param_2); Shield: void FUN_00c10960(long param_1,int param_2)
- 0x00c10ab8: Sword: bl 0x0108c840; Shield: bl 0x0108c870
- 0x00c10ae0: Sword: bl 0x016b2d70; Shield: bl 0x016b2e00
- 0x00c10b38: Sword: bl 0x00ffda40; Shield: bl 0x00ffda70
- 0x00c10bac: Sword: bl 0x00ffda40; Shield: bl 0x00ffda70
- 0x00c10c64: Sword: bl 0x0108c840; Shield: bl 0x0108c870
- 0x00c10d40: Sword: add x0,x0,#0x550; Shield: add x0,x0,#0x57a
- 0x00c10d50: Sword: bl 0x019fe840; Shield: bl 0x019fe8d0

## 0x00c14440 — OPERAND_OR_IMMEDIATE_CHANGE (score 18)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- CFG same: True; exact mapped callees same: True; strings same: True
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

## 0x00c6c510 — OPERAND_OR_IMMEDIATE_CHANGE (score 18)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- CFG same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00c6c510(long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5; Shield: void FUN_00c6c510(long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
- 0x00c6c7c0: Sword: bl 0x019fdbe0; Shield: bl 0x019fdc70
- 0x00c6c7e4: Sword: bl 0x019fdbf0; Shield: bl 0x019fdc80
- 0x00c6c810: Sword: bl 0x01025980; Shield: bl 0x010259b0
- 0x00c6c86c: Sword: bl 0x01025970; Shield: bl 0x010259a0

## 0x00c72160 — OPERAND_OR_IMMEDIATE_CHANGE (score 18)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- CFG same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00c72160(long *param_1,long *param_2); Shield: void FUN_00c72160(long *param_1,long *param_2)
- 0x00c72260: Sword: bl 0x019fdbe0; Shield: bl 0x019fdc70
- 0x00c72294: Sword: bl 0x019fdbf0; Shield: bl 0x019fdc80
- 0x00c722c8: Sword: bl 0x01061270; Shield: bl 0x010612a0
- 0x00c722f0: Sword: bl 0x01061270; Shield: bl 0x010612a0
- 0x00c72384: Sword: bl 0x019fdbe0; Shield: bl 0x019fdc70
- 0x00c723b0: Sword: bl 0x019fdbf0; Shield: bl 0x019fdc80

## 0x00c7dc50 — OPERAND_OR_IMMEDIATE_CHANGE (score 18)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- CFG same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00c7dc50(undefined8 param_1,long param_2,uint param_3,long param_4); Shield: void FUN_00c7dc50(undefined8 param_1,long param_2,uint param_3,long param_4)
- 0x00c7de8c: Sword: bl 0x01524df0; Shield: bl 0x01524e20
- 0x00c7deac: Sword: bl 0x01524df0; Shield: bl 0x01524e20
- 0x00c7dec0: Sword: bl 0x019fddc0; Shield: bl 0x019fde50
- 0x00c7def0: Sword: bl 0x019fddc0; Shield: bl 0x019fde50

## 0x00c85db0 — OPERAND_OR_IMMEDIATE_CHANGE (score 18)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- CFG same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00c85db0(long param_1,long param_2,long param_3,undefined8 param_4); Shield: void FUN_00c85db0(long param_1,long param_2,long param_3,undefined8 param_4)
- 0x00c86034: Sword: bl 0x019fdbe0; Shield: bl 0x019fdc70
- 0x00c8605c: Sword: bl 0x019fdbf0; Shield: bl 0x019fdc80
- 0x00c8608c: Sword: bl 0x01025980; Shield: bl 0x010259b0
- 0x00c860e4: Sword: bl 0x01025970; Shield: bl 0x010259a0

## 0x00d84bf0 — OPERAND_OR_IMMEDIATE_CHANGE (score 18)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- CFG same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00d84bf0(long param_1,int param_2); Shield: void FUN_00d84bf0(long param_1,int param_2)
- 0x00d84d28: Sword: bl 0x00da16f0; Shield: bl 0x00da1720
- 0x00d84e30: Sword: bl 0x019fdbe0; Shield: bl 0x019fdc70
- 0x00d84e4c: Sword: bl 0x019fdbf0; Shield: bl 0x019fdc80

## 0x003276f0 — OPERAND_OR_IMMEDIATE_CHANGE (score 17)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- CFG same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_003276f0(long *param_1,undefined8 *param_2); Shield: void FUN_003276f0(long *param_1,undefined8 *param_2)
- 0x00327804: Sword: add x22,x22,#0xd80; Shield: add x22,x22,#0xdd8
- 0x00327840: Sword: add x23,x23,#0x65e; Shield: add x23,x23,#0x691
- 0x00327868: Sword: bl 0x019fdd00; Shield: bl 0x019fdd90
- 0x00327898: Sword: bl 0x019fdd00; Shield: bl 0x019fdd90

## 0x0032fd40 — OPERAND_OR_IMMEDIATE_CHANGE (score 17)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- CFG same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_0032fd40(long *param_1,ulong *param_2); Shield: void FUN_0032fd40(long *param_1,ulong *param_2)
- 0x0032fe54: Sword: add x22,x22,#0xd80; Shield: add x22,x22,#0xdd8
- 0x0032fe90: Sword: add x23,x23,#0x65e; Shield: add x23,x23,#0x691
- 0x0032feb8: Sword: bl 0x019fdd00; Shield: bl 0x019fdd90
- 0x0032fee8: Sword: bl 0x019fdd00; Shield: bl 0x019fdd90

## 0x003307c0 — OPERAND_OR_IMMEDIATE_CHANGE (score 17)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- CFG same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_003307c0(long *param_1,ulong *param_2); Shield: void FUN_003307c0(long *param_1,ulong *param_2)
- 0x003308d4: Sword: add x22,x22,#0xd80; Shield: add x22,x22,#0xdd8
- 0x00330910: Sword: add x23,x23,#0x65e; Shield: add x23,x23,#0x691
- 0x00330938: Sword: bl 0x019fdd00; Shield: bl 0x019fdd90
- 0x00330968: Sword: bl 0x019fdd00; Shield: bl 0x019fdd90

## 0x00331340 — OPERAND_OR_IMMEDIATE_CHANGE (score 17)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- CFG same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00331340(long *param_1,ulong *param_2); Shield: void FUN_00331340(long *param_1,ulong *param_2)
- 0x00331454: Sword: add x22,x22,#0xd80; Shield: add x22,x22,#0xdd8
- 0x00331490: Sword: add x23,x23,#0x65e; Shield: add x23,x23,#0x691
- 0x003314b8: Sword: bl 0x019fdd00; Shield: bl 0x019fdd90
- 0x003314e8: Sword: bl 0x019fdd00; Shield: bl 0x019fdd90

## 0x00337980 — OPERAND_OR_IMMEDIATE_CHANGE (score 17)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- CFG same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00337980(long *param_1,ulong *param_2); Shield: void FUN_00337980(long *param_1,ulong *param_2)
- 0x00337a94: Sword: add x22,x22,#0xd80; Shield: add x22,x22,#0xdd8
- 0x00337ad0: Sword: add x23,x23,#0x65e; Shield: add x23,x23,#0x691
- 0x00337af8: Sword: bl 0x019fdd00; Shield: bl 0x019fdd90
- 0x00337b28: Sword: bl 0x019fdd00; Shield: bl 0x019fdd90

## 0x00337f10 — OPERAND_OR_IMMEDIATE_CHANGE (score 17)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- CFG same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00337f10(long *param_1,ulong *param_2); Shield: void FUN_00337f10(long *param_1,ulong *param_2)
- 0x00338024: Sword: add x22,x22,#0xd80; Shield: add x22,x22,#0xdd8
- 0x00338060: Sword: add x23,x23,#0x65e; Shield: add x23,x23,#0x691
- 0x00338088: Sword: bl 0x019fdd00; Shield: bl 0x019fdd90
- 0x003380b8: Sword: bl 0x019fdd00; Shield: bl 0x019fdd90

## 0x00344170 — OPERAND_OR_IMMEDIATE_CHANGE (score 17)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- CFG same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00344170(long *param_1,ulong *param_2); Shield: void FUN_00344170(long *param_1,ulong *param_2)
- 0x00344284: Sword: add x22,x22,#0xd80; Shield: add x22,x22,#0xdd8
- 0x003442c0: Sword: add x23,x23,#0x65e; Shield: add x23,x23,#0x691
- 0x003442e8: Sword: bl 0x019fdd00; Shield: bl 0x019fdd90
- 0x00344318: Sword: bl 0x019fdd00; Shield: bl 0x019fdd90

## 0x00344700 — OPERAND_OR_IMMEDIATE_CHANGE (score 17)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- CFG same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00344700(long *param_1,ulong *param_2); Shield: void FUN_00344700(long *param_1,ulong *param_2)
- 0x00344814: Sword: add x22,x22,#0xd80; Shield: add x22,x22,#0xdd8
- 0x00344850: Sword: add x23,x23,#0x65e; Shield: add x23,x23,#0x691
- 0x00344878: Sword: bl 0x019fdd00; Shield: bl 0x019fdd90
- 0x003448a8: Sword: bl 0x019fdd00; Shield: bl 0x019fdd90

## 0x00349850 — OPERAND_OR_IMMEDIATE_CHANGE (score 17)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- CFG same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00349850(long *param_1,ulong *param_2); Shield: void FUN_00349850(long *param_1,ulong *param_2)
- 0x00349964: Sword: add x22,x22,#0xd80; Shield: add x22,x22,#0xdd8
- 0x003499a0: Sword: add x23,x23,#0x65e; Shield: add x23,x23,#0x691
- 0x003499c8: Sword: bl 0x019fdd00; Shield: bl 0x019fdd90
- 0x003499f8: Sword: bl 0x019fdd00; Shield: bl 0x019fdd90

## 0x00349de0 — OPERAND_OR_IMMEDIATE_CHANGE (score 17)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- CFG same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00349de0(long *param_1,ulong *param_2); Shield: void FUN_00349de0(long *param_1,ulong *param_2)
- 0x00349ef4: Sword: add x22,x22,#0xd80; Shield: add x22,x22,#0xdd8
- 0x00349f30: Sword: add x23,x23,#0x65e; Shield: add x23,x23,#0x691
- 0x00349f58: Sword: bl 0x019fdd00; Shield: bl 0x019fdd90
- 0x00349f88: Sword: bl 0x019fdd00; Shield: bl 0x019fdd90

## 0x0034f800 — OPERAND_OR_IMMEDIATE_CHANGE (score 17)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- CFG same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_0034f800(long *param_1,undefined8 *param_2); Shield: void FUN_0034f800(long *param_1,undefined8 *param_2)
- 0x0034f914: Sword: add x22,x22,#0xd80; Shield: add x22,x22,#0xdd8
- 0x0034f950: Sword: add x23,x23,#0x65e; Shield: add x23,x23,#0x691
- 0x0034f978: Sword: bl 0x019fdd00; Shield: bl 0x019fdd90
- 0x0034f9a8: Sword: bl 0x019fdd00; Shield: bl 0x019fdd90

## 0x00351760 — OPERAND_OR_IMMEDIATE_CHANGE (score 17)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- CFG same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00351760(long *param_1,ulong *param_2); Shield: void FUN_00351760(long *param_1,ulong *param_2)
- 0x00351874: Sword: add x22,x22,#0xd80; Shield: add x22,x22,#0xdd8
- 0x003518b0: Sword: add x23,x23,#0x65e; Shield: add x23,x23,#0x691
- 0x003518d8: Sword: bl 0x019fdd00; Shield: bl 0x019fdd90
- 0x00351908: Sword: bl 0x019fdd00; Shield: bl 0x019fdd90

## 0x00351cf0 — OPERAND_OR_IMMEDIATE_CHANGE (score 17)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- CFG same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00351cf0(long *param_1,ulong *param_2); Shield: void FUN_00351cf0(long *param_1,ulong *param_2)
- 0x00351e04: Sword: add x22,x22,#0xd80; Shield: add x22,x22,#0xdd8
- 0x00351e40: Sword: add x23,x23,#0x65e; Shield: add x23,x23,#0x691
- 0x00351e68: Sword: bl 0x019fdd00; Shield: bl 0x019fdd90
- 0x00351e98: Sword: bl 0x019fdd00; Shield: bl 0x019fdd90

## 0x00355b00 — OPERAND_OR_IMMEDIATE_CHANGE (score 17)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- CFG same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00355b00(long *param_1,ulong *param_2); Shield: void FUN_00355b00(long *param_1,ulong *param_2)
- 0x00355c14: Sword: add x22,x22,#0xd80; Shield: add x22,x22,#0xdd8
- 0x00355c50: Sword: add x23,x23,#0x65e; Shield: add x23,x23,#0x691
- 0x00355c78: Sword: bl 0x019fdd00; Shield: bl 0x019fdd90
- 0x00355ca8: Sword: bl 0x019fdd00; Shield: bl 0x019fdd90

## 0x00356090 — OPERAND_OR_IMMEDIATE_CHANGE (score 17)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- CFG same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00356090(long *param_1,ulong *param_2); Shield: void FUN_00356090(long *param_1,ulong *param_2)
- 0x003561a4: Sword: add x22,x22,#0xd80; Shield: add x22,x22,#0xdd8
- 0x003561e0: Sword: add x23,x23,#0x65e; Shield: add x23,x23,#0x691
- 0x00356208: Sword: bl 0x019fdd00; Shield: bl 0x019fdd90
- 0x00356238: Sword: bl 0x019fdd00; Shield: bl 0x019fdd90

## 0x00357020 — OPERAND_OR_IMMEDIATE_CHANGE (score 17)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- CFG same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00357020(long *param_1,ulong *param_2); Shield: void FUN_00357020(long *param_1,ulong *param_2)
- 0x00357134: Sword: add x22,x22,#0xd80; Shield: add x22,x22,#0xdd8
- 0x00357170: Sword: add x23,x23,#0x65e; Shield: add x23,x23,#0x691
- 0x00357198: Sword: bl 0x019fdd00; Shield: bl 0x019fdd90
- 0x003571c8: Sword: bl 0x019fdd00; Shield: bl 0x019fdd90

## 0x00358720 — OPERAND_OR_IMMEDIATE_CHANGE (score 17)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- CFG same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00358720(long *param_1,undefined8 *param_2); Shield: void FUN_00358720(long *param_1,undefined8 *param_2)
- 0x00358834: Sword: add x22,x22,#0xd80; Shield: add x22,x22,#0xdd8
- 0x00358870: Sword: add x23,x23,#0x65e; Shield: add x23,x23,#0x691
- 0x00358898: Sword: bl 0x019fdd00; Shield: bl 0x019fdd90
- 0x003588c8: Sword: bl 0x019fdd00; Shield: bl 0x019fdd90

## 0x0036c9b0 — OPERAND_OR_IMMEDIATE_CHANGE (score 17)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- CFG same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_0036c9b0(long *param_1,undefined8 *param_2); Shield: void FUN_0036c9b0(long *param_1,undefined8 *param_2)
- 0x0036cac4: Sword: add x22,x22,#0xd80; Shield: add x22,x22,#0xdd8
- 0x0036cb00: Sword: add x23,x23,#0x65e; Shield: add x23,x23,#0x691
- 0x0036cb28: Sword: bl 0x019fdd00; Shield: bl 0x019fdd90
- 0x0036cb58: Sword: bl 0x019fdd00; Shield: bl 0x019fdd90

## 0x00371600 — OPERAND_OR_IMMEDIATE_CHANGE (score 17)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- CFG same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00371600(long *param_1,undefined8 *param_2); Shield: void FUN_00371600(long *param_1,undefined8 *param_2)
- 0x00371714: Sword: add x22,x22,#0xd80; Shield: add x22,x22,#0xdd8
- 0x00371750: Sword: add x23,x23,#0x65e; Shield: add x23,x23,#0x691
- 0x00371778: Sword: bl 0x019fdd00; Shield: bl 0x019fdd90
- 0x003717a8: Sword: bl 0x019fdd00; Shield: bl 0x019fdd90

## 0x0037b490 — OPERAND_OR_IMMEDIATE_CHANGE (score 17)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- CFG same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_0037b490(long *param_1,undefined8 *param_2); Shield: void FUN_0037b490(long *param_1,undefined8 *param_2)
- 0x0037b5a4: Sword: add x22,x22,#0xd80; Shield: add x22,x22,#0xdd8
- 0x0037b5e0: Sword: add x23,x23,#0x65e; Shield: add x23,x23,#0x691
- 0x0037b608: Sword: bl 0x019fdd00; Shield: bl 0x019fdd90
- 0x0037b638: Sword: bl 0x019fdd00; Shield: bl 0x019fdd90

## 0x00385db0 — OPERAND_OR_IMMEDIATE_CHANGE (score 17)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- CFG same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00385db0(long *param_1,undefined8 *param_2); Shield: void FUN_00385db0(long *param_1,undefined8 *param_2)
- 0x00385ec4: Sword: add x22,x22,#0xd80; Shield: add x22,x22,#0xdd8
- 0x00385f00: Sword: add x23,x23,#0x65e; Shield: add x23,x23,#0x691
- 0x00385f28: Sword: bl 0x019fdd00; Shield: bl 0x019fdd90
- 0x00385f58: Sword: bl 0x019fdd00; Shield: bl 0x019fdd90

## 0x0038c510 — OPERAND_OR_IMMEDIATE_CHANGE (score 17)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- CFG same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_0038c510(long *param_1,undefined8 *param_2); Shield: void FUN_0038c510(long *param_1,undefined8 *param_2)
- 0x0038c624: Sword: add x22,x22,#0xd80; Shield: add x22,x22,#0xdd8
- 0x0038c660: Sword: add x23,x23,#0x65e; Shield: add x23,x23,#0x691
- 0x0038c688: Sword: bl 0x019fdd00; Shield: bl 0x019fdd90
- 0x0038c6b8: Sword: bl 0x019fdd00; Shield: bl 0x019fdd90

## 0x00391b40 — OPERAND_OR_IMMEDIATE_CHANGE (score 17)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- CFG same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00391b40(long *param_1,undefined8 *param_2); Shield: void FUN_00391b40(long *param_1,undefined8 *param_2)
- 0x00391c54: Sword: add x22,x22,#0xd80; Shield: add x22,x22,#0xdd8
- 0x00391c90: Sword: add x23,x23,#0x65e; Shield: add x23,x23,#0x691
- 0x00391cb8: Sword: bl 0x019fdd00; Shield: bl 0x019fdd90
- 0x00391ce8: Sword: bl 0x019fdd00; Shield: bl 0x019fdd90

## 0x0054b050 — OPERAND_OR_IMMEDIATE_CHANGE (score 17)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- CFG same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: undefined8 FUN_0054b050(long param_1); Shield: undefined8 FUN_0054b050(long param_1)
- 0x0054b068: Sword: add x20,x20,#0x550; Shield: add x20,x20,#0x57a

## 0x006e5a40 — OPERAND_OR_IMMEDIATE_CHANGE (score 17)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- CFG same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_006e5a40(long param_1,int param_2,undefined8 param_3,undefined8 *param_4,; Shield: void FUN_006e5a40(long param_1,int param_2,undefined8 param_3,undefined8 *param_4,
- 0x006e5a5c: Sword: add x9,x9,#0x550; Shield: add x9,x9,#0x57a
- 0x006e5a98: Sword: adrp x2,0x1cfc000; Shield: adrp x2,0x1cfd000
- 0x006e5a9c: Sword: add x2,x2,#0xfec; Shield: add x2,x2,#0x2c
- 0x006e5aac: Sword: bl 0x019fe230; Shield: bl 0x019fe2c0
- 0x006e5bf8: Sword: bl 0x019fdbe0; Shield: bl 0x019fdc70
- 0x006e5c44: Sword: bl 0x019fdbf0; Shield: bl 0x019fdc80

## 0x00703f20 — OPERAND_OR_IMMEDIATE_CHANGE (score 17)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- CFG same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00703f20(long param_1); Shield: void FUN_00703f20(long param_1)
- 0x007040b4: Sword: bl 0x019fdbe0; Shield: bl 0x019fdc70
- 0x007040d0: Sword: bl 0x019fdbf0; Shield: bl 0x019fdc80
- 0x00704164: Sword: bl 0x0199dee0; Shield: bl 0x0199df70

## 0x0072ee90 — OPERAND_OR_IMMEDIATE_CHANGE (score 17)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- CFG same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_0072ee90(long *param_1,ulong param_2,undefined1 param_3,undefined1 param_4); Shield: void FUN_0072ee90(long *param_1,ulong param_2,undefined1 param_3,undefined1 param_4)
- 0x0072effc: Sword: bl 0x0199c0e0; Shield: bl 0x0199c170
- 0x0072f084: Sword: bl 0x0199c0e0; Shield: bl 0x0199c170

## 0x0072f130 — OPERAND_OR_IMMEDIATE_CHANGE (score 17)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- CFG same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_0072f130(long *param_1,ulong param_2,undefined1 param_3,undefined1 param_4); Shield: void FUN_0072f130(long *param_1,ulong param_2,undefined1 param_3,undefined1 param_4)
- 0x0072f290: Sword: bl 0x0199c0e0; Shield: bl 0x0199c170
- 0x0072f318: Sword: bl 0x0199c0e0; Shield: bl 0x0199c170

## 0x0073c7b0 — OPERAND_OR_IMMEDIATE_CHANGE (score 17)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- CFG same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_0073c7b0(long param_1,int *param_2,uint *param_3); Shield: void FUN_0073c7b0(long param_1,int *param_2,uint *param_3)
- 0x0073c868: Sword: bl 0x019fdbe0; Shield: bl 0x019fdc70
- 0x0073c88c: Sword: add x8,x8,#0x550; Shield: add x8,x8,#0x57a
- 0x0073c8ac: Sword: bl 0x019fdbf0; Shield: bl 0x019fdc80
- 0x0073c8c0: Sword: bl 0x019fdc60; Shield: bl 0x019fdcf0
- 0x0073c970: Sword: bl 0x019fdbe0; Shield: bl 0x019fdc70
- 0x0073c98c: Sword: add x8,x8,#0x550; Shield: add x8,x8,#0x57a
- 0x0073c9bc: Sword: bl 0x019fdbf0; Shield: bl 0x019fdc80
- 0x0073c9c8: Sword: bl 0x019fe660; Shield: bl 0x019fe6f0

## 0x0073eee0 — OPERAND_OR_IMMEDIATE_CHANGE (score 17)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- CFG same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_0073eee0(long param_1,long param_2); Shield: void FUN_0073eee0(long param_1,long param_2)
- 0x0073ef34: Sword: bl 0x0199dfb0; Shield: bl 0x0199e040
- 0x0073ef78: Sword: bl 0x0199ce00; Shield: bl 0x0199ce90
- 0x0073ef9c: Sword: bl 0x0199cfb0; Shield: bl 0x0199d040
- 0x0073efc0: Sword: bl 0x0199cf00; Shield: bl 0x0199cf90
- 0x0073f014: Sword: bl 0x0199e180; Shield: bl 0x0199e210
- 0x0073f088: Sword: bl 0x0199cce0; Shield: bl 0x0199cd70
- 0x0073f0d4: Sword: bl 0x0199cc20; Shield: bl 0x0199ccb0

## 0x007881c0 — OPERAND_OR_IMMEDIATE_CHANGE (score 17)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- CFG same: True; exact mapped callees same: True; strings same: True
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
- CFG same: True; exact mapped callees same: True; strings same: True
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

## 0x007ac120 — OPERAND_OR_IMMEDIATE_CHANGE (score 17)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- CFG same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: undefined8 FUN_007ac120(long param_1,undefined4 param_2); Shield: undefined8 FUN_007ac120(long param_1,undefined4 param_2)
- 0x007ac21c: Sword: bl 0x017d41c0; Shield: bl 0x017d4250
- 0x007ac224: Sword: bl 0x017cdd60; Shield: bl 0x017cddf0
- 0x007ac238: Sword: bl 0x017cd750; Shield: bl 0x017cd7e0
- 0x007ac248: Sword: bl 0x017ae540; Shield: bl 0x017ae5d0

## 0x007b9320 — OPERAND_OR_IMMEDIATE_CHANGE (score 17)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- CFG same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_007b9320(long param_1); Shield: void FUN_007b9320(long param_1)
- 0x007b94a4: Sword: bl 0x018724d0; Shield: bl 0x01872560

## 0x0080c430 — OPERAND_OR_IMMEDIATE_CHANGE (score 17)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- CFG same: True; exact mapped callees same: True; strings same: True
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

## 0x00861e80 — OPERAND_OR_IMMEDIATE_CHANGE (score 17)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- CFG same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: undefined8 FUN_00861e80(long param_1,long param_2,undefined8 param_3,undefined8 param_4); Shield: undefined8 FUN_00861e80(long param_1,long param_2,undefined8 param_3,undefined8 param_4)
- 0x00861f14: Sword: bl 0x019fedc0; Shield: bl 0x019fee50
- 0x00861f94: Sword: add x2,x2,#0xa64; Shield: add x2,x2,#0xaa5
- 0x00861fac: Sword: add x1,x1,#0x287; Shield: add x1,x1,#0x2d1
- 0x00861fc4: Sword: add x1,x1,#0x5af; Shield: add x1,x1,#0x5f9
- 0x00861fd8: Sword: add x1,x1,#0xabc; Shield: add x1,x1,#0xafd
- 0x00861fec: Sword: add x1,x1,#0xbd9; Shield: add x1,x1,#0xc31

## 0x00880430 — OPERAND_OR_IMMEDIATE_CHANGE (score 17)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- CFG same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00880430(undefined8 *param_1,undefined4 param_2); Shield: void FUN_00880430(undefined8 *param_1,undefined4 param_2)
- 0x0088063c: Sword: add x8,x8,#0x550; Shield: add x8,x8,#0x57a
- 0x00880680: Sword: add x0,x0,#0x550; Shield: add x0,x0,#0x57a
- 0x00880690: Sword: bl 0x019fe840; Shield: bl 0x019fe8d0

## 0x00886150 — OPERAND_OR_IMMEDIATE_CHANGE (score 17)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- CFG same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00886150(long param_1,int param_2,uint param_3); Shield: void FUN_00886150(long param_1,int param_2,uint param_3)
- 0x00886390: Sword: add x8,x8,#0x550; Shield: add x8,x8,#0x57a
- 0x008863d8: Sword: add x0,x0,#0x550; Shield: add x0,x0,#0x57a
- 0x008863e8: Sword: bl 0x019fe840; Shield: bl 0x019fe8d0

## 0x00886d00 — OPERAND_OR_IMMEDIATE_CHANGE (score 17)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- CFG same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00886d00(long param_1,int param_2); Shield: void FUN_00886d00(long param_1,int param_2)
- 0x00886e2c: Sword: bl 0x019fddc0; Shield: bl 0x019fde50
- 0x00886f00: Sword: add x8,x8,#0x550; Shield: add x8,x8,#0x57a
- 0x00886f48: Sword: add x0,x0,#0x550; Shield: add x0,x0,#0x57a
- 0x00886f58: Sword: bl 0x019fe840; Shield: bl 0x019fe8d0

## 0x008c86c0 — OPERAND_OR_IMMEDIATE_CHANGE (score 17)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- CFG same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_008c86c0(long param_1,long *param_2,undefined4 param_3); Shield: void FUN_008c86c0(long param_1,long *param_2,undefined4 param_3)
- 0x008c87e0: Sword: bl 0x00ff86a0; Shield: bl 0x00ff86d0
- 0x008c884c: Sword: bl 0x016b4ab0; Shield: bl 0x016b4b40

## 0x008d08d0 — OPERAND_OR_IMMEDIATE_CHANGE (score 17)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- CFG same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_008d08d0(long param_1,int param_2); Shield: void FUN_008d08d0(long param_1,int param_2)
- 0x008d0940: Sword: bl 0x00ff9390; Shield: bl 0x00ff93c0
- 0x008d095c: Sword: add x8,x8,#0xe23; Shield: add x8,x8,#0xe54
- 0x008d0978: Sword: bl 0x00ff8620; Shield: bl 0x00ff8650
- 0x008d09fc: Sword: bl 0x0168c190; Shield: bl 0x0168c220

## 0x008d46b0 — OPERAND_OR_IMMEDIATE_CHANGE (score 17)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- CFG same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: undefined8 FUN_008d46b0(long param_1,uint param_2); Shield: undefined8 FUN_008d46b0(long param_1,uint param_2)
- 0x008d4714: Sword: bl 0x019fdd00; Shield: bl 0x019fdd90
- 0x008d4760: Sword: bl 0x019fdd00; Shield: bl 0x019fdd90
- 0x008d4878: Sword: add x8,x8,#0x550; Shield: add x8,x8,#0x57a

## 0x008f26c0 — OPERAND_OR_IMMEDIATE_CHANGE (score 17)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- CFG same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_008f26c0(long param_1); Shield: void FUN_008f26c0(long param_1)
- 0x008f2908: Sword: bl 0x011faab0; Shield: bl 0x011faae0

## 0x009a3a00 — OPERAND_OR_IMMEDIATE_CHANGE (score 17)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- CFG same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: bool FUN_009a3a00(undefined8 param_1,undefined8 param_2,uint param_3); Shield: bool FUN_009a3a00(undefined8 param_1,undefined8 param_2,uint param_3)
- 0x009a3acc: Sword: bl 0x01524da0; Shield: bl 0x01524dd0

## 0x009a54d0 — OPERAND_OR_IMMEDIATE_CHANGE (score 17)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- CFG same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_009a54d0(undefined4 *param_1,undefined8 param_2,undefined8 param_3,long param_4,; Shield: void FUN_009a54d0(undefined4 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
- 0x009a5528: Sword: bl 0x01524c00; Shield: bl 0x01524c30
- 0x009a5624: Sword: bl 0x01524c50; Shield: bl 0x01524c80

## 0x009ce960 — OPERAND_OR_IMMEDIATE_CHANGE (score 17)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- CFG same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_009ce960(long param_1,undefined8 *param_2); Shield: void FUN_009ce960(long param_1,undefined8 *param_2)
- 0x009cea54: Sword: bl 0x019fdc90; Shield: bl 0x019fdd20
- 0x009ceb10: Sword: bl 0x01524f20; Shield: bl 0x01524f50
- 0x009ceb20: Sword: bl 0x01524f20; Shield: bl 0x01524f50
- 0x009ceb6c: Sword: bl 0x019fdc60; Shield: bl 0x019fdcf0

## 0x009fde50 — OPERAND_OR_IMMEDIATE_CHANGE (score 17)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- CFG same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: uint FUN_009fde50(long param_1,undefined8 *param_2); Shield: uint FUN_009fde50(long param_1,undefined8 *param_2)
- 0x009fe018: Sword: bl 0x014adfd0; Shield: bl 0x014ae000

## 0x00a1b110 — OPERAND_OR_IMMEDIATE_CHANGE (score 17)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- CFG same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00a1b110(long param_1,long *param_2,undefined4 param_3,uint param_4); Shield: void FUN_00a1b110(long param_1,long *param_2,undefined4 param_3,uint param_4)
- 0x00a1b234: Sword: bl 0x00ffd430; Shield: bl 0x00ffd460
- 0x00a1b240: Sword: bl 0x00ffd430; Shield: bl 0x00ffd460
- 0x00a1b254: Sword: bl 0x00ffd430; Shield: bl 0x00ffd460
- 0x00a1b260: Sword: bl 0x00ffd430; Shield: bl 0x00ffd460
- 0x00a1b26c: Sword: bl 0x00ffd430; Shield: bl 0x00ffd460
- 0x00a1b278: Sword: bl 0x00ffd010; Shield: bl 0x00ffd040
- 0x00a1b2ac: Sword: bl 0x00ffd430; Shield: bl 0x00ffd460
- 0x00a1b2b8: Sword: bl 0x00ffd430; Shield: bl 0x00ffd460
- 0x00a1b2cc: Sword: bl 0x00ffd430; Shield: bl 0x00ffd460
- 0x00a1b2d8: Sword: bl 0x00ffd430; Shield: bl 0x00ffd460
- 0x00a1b2e4: Sword: bl 0x00ffd430; Shield: bl 0x00ffd460
- 0x00a1b2f0: Sword: bl 0x00ffd010; Shield: bl 0x00ffd040
- 0x00a1b310: Sword: bl 0x00ffd430; Shield: bl 0x00ffd460
- 0x00a1b31c: Sword: bl 0x00ffd430; Shield: bl 0x00ffd460
- 0x00a1b330: Sword: bl 0x00ffd430; Shield: bl 0x00ffd460
- 0x00a1b33c: Sword: bl 0x00ffd430; Shield: bl 0x00ffd460

## 0x00a1b470 — OPERAND_OR_IMMEDIATE_CHANGE (score 17)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- CFG same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00a1b470(long param_1); Shield: void FUN_00a1b470(long param_1)
- 0x00a1b488: Sword: bl 0x00ff93d0; Shield: bl 0x00ff9400
- 0x00a1b4b4: Sword: bl 0x019fdc90; Shield: bl 0x019fdd20
- 0x00a1b568: Sword: bl 0x00ff93d0; Shield: bl 0x00ff9400
- 0x00a1b58c: Sword: bl 0x019fdc90; Shield: bl 0x019fdd20
- 0x00a1b6d8: Sword: bl 0x019fdc60; Shield: bl 0x019fdcf0

## 0x00a3a1d0 — OPERAND_OR_IMMEDIATE_CHANGE (score 17)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- CFG same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00a3a1d0(long param_1,ulong param_2); Shield: void FUN_00a3a1d0(long param_1,ulong param_2)
- 0x00a3a240: Sword: bl 0x016b2da0; Shield: bl 0x016b2e30
- 0x00a3a300: Sword: bl 0x019fdbe0; Shield: bl 0x019fdc70
- 0x00a3a310: Sword: bl 0x0108ca20; Shield: bl 0x0108ca50
- 0x00a3a31c: Sword: bl 0x019fdbf0; Shield: bl 0x019fdc80

## 0x00a556f0 — OPERAND_OR_IMMEDIATE_CHANGE (score 17)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- CFG same: True; exact mapped callees same: True; strings same: True
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
- CFG same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00a584b0(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,; Shield: void FUN_00a584b0(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
- 0x00a5851c: Sword: bl 0x00ffa3d0; Shield: bl 0x00ffa400
- 0x00a58680: Sword: add x0,x0,#0x550; Shield: add x0,x0,#0x57a
- 0x00a58690: Sword: bl 0x019fe840; Shield: bl 0x019fe8d0

## 0x00a71c60 — OPERAND_OR_IMMEDIATE_CHANGE (score 17)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- CFG same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00a71c60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,; Shield: void FUN_00a71c60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
- 0x00a71cc8: Sword: bl 0x019fdc90; Shield: bl 0x019fdd20
- 0x00a71db4: Sword: bl 0x015f6330; Shield: bl 0x015f63a0
- 0x00a71e5c: Sword: bl 0x019fdc60; Shield: bl 0x019fdcf0

## 0x00a79350 — OPERAND_OR_IMMEDIATE_CHANGE (score 17)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- CFG same: True; exact mapped callees same: True; strings same: True
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
- CFG same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00a7a5a0(long param_1,byte param_2); Shield: void FUN_00a7a5a0(long param_1,byte param_2)
- 0x00a7a5f4: Sword: bl 0x00dab450; Shield: bl 0x00dab480
- 0x00a7a634: Sword: bl 0x00dab450; Shield: bl 0x00dab480
- 0x00a7a674: Sword: bl 0x00dab450; Shield: bl 0x00dab480
- 0x00a7a6f0: Sword: bl 0x00dab450; Shield: bl 0x00dab480
- 0x00a7a70c: Sword: bl 0x00dab450; Shield: bl 0x00dab480
- 0x00a7a728: Sword: bl 0x00dab450; Shield: bl 0x00dab480

## 0x00aa73f0 — OPERAND_OR_IMMEDIATE_CHANGE (score 17)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- CFG same: True; exact mapped callees same: True; strings same: True
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
- CFG same: True; exact mapped callees same: True; strings same: True
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
- CFG same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00b948c0(long *param_1,undefined8 param_2,undefined8 *param_3); Shield: void FUN_00b948c0(long *param_1,undefined8 param_2,undefined8 *param_3)
- 0x00b94900: Sword: bl 0x019fdc90; Shield: bl 0x019fdd20
- 0x00b94a1c: Sword: bl 0x01019670; Shield: bl 0x010196a0
- 0x00b94a54: Sword: bl 0x019fdc60; Shield: bl 0x019fdcf0

## 0x00bc41f0 — OPERAND_OR_IMMEDIATE_CHANGE (score 17)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- CFG same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00bc41f0(long param_1); Shield: void FUN_00bc41f0(long param_1)
- 0x00bc4360: Sword: bl 0x0167b9b0; Shield: bl 0x0167ba40
- 0x00bc4370: Sword: bl 0x0167b630; Shield: bl 0x0167b6c0
- 0x00bc4380: Sword: bl 0x0167b630; Shield: bl 0x0167b6c0
- 0x00bc4390: Sword: bl 0x0167b830; Shield: bl 0x0167b8c0
- 0x00bc43c0: Sword: bl 0x0167b9b0; Shield: bl 0x0167ba40
- 0x00bc43d0: Sword: bl 0x0167b630; Shield: bl 0x0167b6c0
- 0x00bc43e0: Sword: bl 0x0167b630; Shield: bl 0x0167b6c0
- 0x00bc43f0: Sword: bl 0x0167b830; Shield: bl 0x0167b8c0

## 0x00bc4460 — OPERAND_OR_IMMEDIATE_CHANGE (score 17)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- CFG same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00bc4460(long param_1,long param_2,uint param_3,undefined8 param_4,byte param_5,; Shield: void FUN_00bc4460(long param_1,long param_2,uint param_3,undefined8 param_4,byte param_5,
- 0x00bc44a4: Sword: bl 0x00ff86a0; Shield: bl 0x00ff86d0
- 0x00bc45e4: Sword: bl 0x014c62d0; Shield: bl 0x014c6300

## 0x00bc80e0 — OPERAND_OR_IMMEDIATE_CHANGE (score 17)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- CFG same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00bc80e0(undefined1 param_1 [16],undefined4 param_2,long param_3,ulong param_4,int param_5); Shield: void FUN_00bc80e0(undefined1 param_1 [16],undefined4 param_2,long param_3,ulong param_4,int param_5)
- 0x00bc8160: Sword: bl 0x01509eb0; Shield: bl 0x01509ee0
- 0x00bc81a0: Sword: add x2,x2,#0xd36; Shield: add x2,x2,#0xd76
- 0x00bc81c0: Sword: bl 0x019fe230; Shield: bl 0x019fe2c0
- 0x00bc8214: Sword: bl 0x0167b720; Shield: bl 0x0167b7b0
- 0x00bc8268: Sword: bl 0x01509eb0; Shield: bl 0x01509ee0

## 0x00bccb30 — OPERAND_OR_IMMEDIATE_CHANGE (score 17)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- CFG same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: undefined8 FUN_00bccb30(long param_1,int param_2,uint param_3,uint param_4); Shield: undefined8 FUN_00bccb30(long param_1,int param_2,uint param_3,uint param_4)
- 0x00bccb9c: Sword: bl 0x01505e60; Shield: bl 0x01505e90
- 0x00bccbdc: Sword: bl 0x0150a610; Shield: bl 0x0150a640
- 0x00bccbf0: Sword: bl 0x0150a590; Shield: bl 0x0150a5c0
- 0x00bccc04: Sword: bl 0x0150a5c0; Shield: bl 0x0150a5f0
- 0x00bccc38: Sword: bl 0x01505e60; Shield: bl 0x01505e90

## 0x00bcfef0 — OPERAND_OR_IMMEDIATE_CHANGE (score 17)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- CFG same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: void FUN_00bcfef0(long param_1,uint param_2,int param_3,ulong param_4); Shield: void FUN_00bcfef0(long param_1,uint param_2,int param_3,ulong param_4)
- 0x00bcff70: Sword: bl 0x0168c190; Shield: bl 0x0168c220
- 0x00bcffa4: Sword: bl 0x0167b9b0; Shield: bl 0x0167ba40
- 0x00bcfff0: Sword: bl 0x0168c190; Shield: bl 0x0168c220
- 0x00bd002c: Sword: bl 0x0167b9b0; Shield: bl 0x0167ba40
- 0x00bd0058: Sword: b 0x0167b9b0; Shield: b 0x0167ba40

## 0x00bd1a80 — OPERAND_OR_IMMEDIATE_CHANGE (score 17)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- CFG same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: int FUN_00bd1a80(long param_1,ulong param_2); Shield: int FUN_00bd1a80(long param_1,ulong param_2)
- 0x00bd1b4c: Sword: bl 0x0167b9f0; Shield: bl 0x0167ba80
- 0x00bd1c60: Sword: bl 0x0167c250; Shield: bl 0x0167c2e0
- 0x00bd1c70: Sword: bl 0x0167bfe0; Shield: bl 0x0167c070
- 0x00bd1c84: Sword: bl 0x0167b630; Shield: bl 0x0167b6c0

## 0x00be0d10 — OPERAND_OR_IMMEDIATE_CHANGE (score 17)

- Identity support: STRONG_CALLER_AND_CALLEE_CONTEXT; caller Jaccard 1.0; callee Jaccard 1.0
- CFG same: True; exact mapped callees same: True; strings same: True
- C prototypes: Sword: undefined8 FUN_00be0d10(undefined4 *param_1,long *param_2,long param_3); Shield: undefined8 FUN_00be0d10(undefined4 *param_1,long *param_2,long param_3)
- 0x00be0db4: Sword: bl 0x017d1040; Shield: bl 0x017d10d0
- 0x00be0e88: Sword: bl 0x017d0720; Shield: bl 0x017d07b0
