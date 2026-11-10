/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0042c4c0; name: FUN_0042c4c0
 */


void FUN_0042c4c0(long param_1,undefined8 param_2,undefined4 param_3,ulong param_4,long param_5)

{
  int iVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar7 = *(float *)(param_1 + 0x110);
  if (((((*(float *)(param_1 + 0x120) == fVar7) &&
        (*(float *)(param_1 + 0x124) == *(float *)(param_1 + 0x114))) &&
       (*(float *)(param_1 + 0x128) == *(float *)(param_1 + 0x118))) &&
      ((*(char *)(param_1 + 300) == *(char *)(param_1 + 0x11c) &&
       (*(char *)(param_1 + 0x12d) == *(char *)(param_1 + 0x11d))))) &&
     (((param_4 & 1) == 0 && ((*(byte *)(param_5 + 0x2a4) >> 1 & 1) == 0)))) {
    iVar1 = *(int *)(param_5 + 0x29c);
    uVar3 = FUN_004699c0(param_5);
    uVar3 = ((uVar3 & 0xff) + 3 & 0x1fc) * iVar1;
    if (uVar3 == 0) {
      return;
    }
    memcpy(*(void **)(param_5 + 0x30),*(void **)(param_5 + 0x38),(ulong)uVar3 << 2);
    return;
  }
  FUN_004699d0(param_5);
  uVar5 = FUN_0047d760();
  fVar6 = (fVar7 + DAT_01d4c6b8) * DAT_01d4c6b4;
  fVar7 = 1.0;
  if (fVar6 <= 1.0) {
    fVar7 = fVar6;
  }
  fVar8 = 0.0;
  if (0.0 <= fVar6) {
    fVar8 = fVar7;
  }
  fVar6 = (*(float *)(param_1 + 0x114) + DAT_01d4c6b8) * DAT_01d4c6b4;
  fVar7 = 0.0;
  if ((0.0 <= fVar6) && (fVar7 = 1.0, fVar6 <= 1.0)) {
    fVar7 = fVar6;
  }
  uVar2 = *(undefined1 *)(param_1 + 0x11c);
  fVar6 = *(float *)(param_1 + 0x118) * DAT_01d4c4d4;
  uVar4 = FUN_004699c0(param_5);
  FUN_004ad1f0(fVar8,fVar7,fVar6,uVar2,param_3,uVar4,*(undefined8 *)(param_5 + 0x30),uVar5);
  return;
}


