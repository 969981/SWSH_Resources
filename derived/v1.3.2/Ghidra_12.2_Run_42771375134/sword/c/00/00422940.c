/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00422940; name: FUN_00422940
 */


void FUN_00422940(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  
  lVar2 = *(long *)(param_1 + 0x158);
  local_50 = *(float *)(lVar2 + 0xb4);
  fVar7 = *(float *)(lVar2 + 0xb8);
  fVar3 = *(float *)(lVar2 + 0xb0) * DAT_01d4c4d4;
  local_4c = fVar3 * local_50;
  local_50 = local_50 + fVar7 * local_50 * DAT_01d4c638;
  fVar6 = fVar3 * local_4c;
  local_4c = local_4c + DAT_01d4c77c * fVar7 * local_4c;
  local_48 = fVar6 + fVar6 * fVar7 * DAT_01d4bd9c;
  local_44 = fVar3 * fVar6 + fVar3 * fVar6 * fVar7 * DAT_01d4c1dc;
  qsort(&local_50,4,4,(__compar_fn_t)&LAB_00428560);
  FUN_00428440(&local_50,*(undefined4 *)(param_1 + 0x130),4,&local_60);
  uVar5 = DAT_01d4c0c8;
  fVar3 = DAT_01d4bd2c;
  fVar6 = DAT_01d4be00 + DAT_01d4bd2c * *(float *)(*(long *)(param_1 + 0x158) + 0x10);
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  uVar4 = NEON_fminnm(fVar6,DAT_01d4c0c8);
  iVar1 = FUN_0042ac40(uVar4,param_1 + 8,param_2,local_60);
  if (iVar1 == 1) {
    fVar6 = DAT_01d4bf2c + fVar3 * *(float *)(*(long *)(param_1 + 0x158) + 0x10);
    if (fVar6 <= 0.0) {
      fVar6 = 0.0;
    }
    uVar4 = NEON_fminnm(fVar6,uVar5);
    iVar1 = FUN_0042ac40(uVar4,param_1 + 0x20,param_2,local_5c);
    if (iVar1 == 1) {
      fVar6 = DAT_01d4bed4 + fVar3 * *(float *)(*(long *)(param_1 + 0x158) + 0x10);
      if (fVar6 <= 0.0) {
        fVar6 = 0.0;
      }
      uVar4 = NEON_fminnm(fVar6,uVar5);
      iVar1 = FUN_0042ac40(uVar4,param_1 + 0x38,param_2,local_58);
      if (iVar1 == 1) {
        fVar3 = *(float *)(*(long *)(param_1 + 0x158) + 0x10) * fVar3;
        if (fVar3 <= 0.0) {
          fVar3 = 0.0;
        }
        uVar5 = NEON_fminnm(fVar3,uVar5);
        FUN_0042ac40(uVar5,param_1 + 0x50,param_2,local_54);
      }
    }
  }
  return;
}


