/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00582e20; name: FUN_00582e20
 */


undefined8
FUN_00582e20(undefined1 param_1 [16],float param_2,undefined8 param_3,long param_4,long param_5,
            undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined4 param_9,
            undefined8 param_10,uint param_11,undefined4 *param_12,undefined4 *param_13,
            undefined4 *param_14,float *param_15,float *param_16)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  float __x;
  float fVar8;
  float fVar9;
  float local_94;
  undefined4 local_58;
  undefined4 local_54;
  
  fVar6 = (float)FUN_00582860(param_4,param_6,param_7,param_8);
  fVar9 = (float)NEON_ucvtf(*(undefined4 *)(param_5 + 0x58));
  fVar7 = (float)NEON_ucvtf(*(undefined4 *)(param_5 + 0x54));
  if (*(char *)(*(long *)(param_4 + 0x20) + 0x58) != '\0') {
    param_2 = -param_2;
  }
  fVar9 = param_2 * fVar9;
  fVar7 = fVar6 * fVar7;
  __x = fVar7 * fVar7 + fVar9 * fVar9;
  bVar1 = true;
  if ((__x != 0.0) && (bVar1 = false, !NAN(__x))) {
    bVar1 = __x == 1.0;
  }
  fVar8 = __x;
  if ((!bVar1) && (fVar8 = SQRT(__x), NAN(SQRT(__x)))) {
    fVar8 = sqrtf(__x);
  }
  iVar3 = 5;
  if (1 < *(int *)(param_4 + 0x29a64)) {
    iVar3 = *(int *)(param_4 + 0x29a64) + 1;
  }
  piVar2 = (int *)(param_4 + (-(ulong)(param_11 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_11 << 2
                             ) + (long)iVar3 * 0x58 + 0x98);
  uVar4 = (long)iVar3;
  do {
    iVar3 = *piVar2;
    uVar5 = uVar4 - 1;
    if ((long)uVar4 < 3) break;
    piVar2 = piVar2 + -0x16;
    uVar4 = uVar5;
  } while (iVar3 == 0);
  FUN_00511d20(fVar8,param_3,uVar5 & 0xffffffff,0,param_9,&local_54,&local_58,&local_94);
  if (param_12 != (undefined4 *)0x0) {
    *param_12 = (int)uVar5;
  }
  if (param_13 != (undefined4 *)0x0) {
    *param_13 = local_54;
  }
  if (param_14 != (undefined4 *)0x0) {
    *param_14 = local_58;
  }
  if (param_16 != (float *)0x0) {
    *param_16 = -(fVar7 * (local_94 / fVar8));
    param_16[1] = -(fVar9 * (local_94 / fVar8));
  }
  if (param_15 != (float *)0x0) {
    *param_15 = fVar6;
    param_15[1] = param_2;
  }
  return 0;
}


