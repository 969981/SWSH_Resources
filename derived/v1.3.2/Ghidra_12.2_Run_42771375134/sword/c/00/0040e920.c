/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0040e920; name: FUN_0040e920
 */


int FUN_0040e920(long param_1,int param_2,int param_3,uint param_4,undefined4 *param_5)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  
  uVar1 = *(uint *)(param_1 + 0xf0);
  puVar3 = *(undefined4 **)(param_1 + 0xe8);
  param_4 = param_4 & 1;
  uVar2 = uVar1 - 1;
  if (param_4 < uVar2) {
    do {
      if ((uint)(puVar3[1] + param_2) <= (uint)puVar3[(ulong)param_4 * 4 + 1]) break;
      param_4 = param_4 + 1;
    } while (param_4 < uVar2);
  }
  if (param_3 == 0) {
    uVar4 = uVar2 - param_4;
  }
  else {
    uVar6 = param_4;
    if (param_4 == 0) {
      uVar6 = 1;
    }
    uVar4 = (uint)(param_4 == 0);
    if (uVar6 < uVar2) {
      uVar9 = (ulong)uVar6;
      uVar7 = uVar9;
      if (((uVar2 - uVar6 & 1) != 0) && (uVar7 = uVar9 + 1, puVar3[uVar9 * 4] == param_3)) {
        uVar4 = uVar4 + 1;
      }
      if ((ulong)uVar2 - 1 != uVar9) {
        piVar10 = puVar3 + uVar7 * 4 + 4;
        do {
          if (piVar10[-4] == param_3) {
            uVar4 = uVar4 + 1;
          }
          uVar7 = uVar7 + 2;
          if (*piVar10 == param_3) {
            uVar4 = uVar4 + 1;
          }
          piVar10 = piVar10 + 8;
        } while (uVar7 < uVar2);
      }
    }
  }
  if (uVar4 == 0) {
    *param_5 = *puVar3;
    return 0;
  }
  lVar8 = *(long *)PTR_DAT_02712b80 * 0x5851f42d4c957f2d + 1;
  *(long *)PTR_DAT_02712b80 = lVar8;
  uVar2 = 0;
  uVar6 = (uint)((ulong)lVar8 >> 0x21);
  if (uVar4 != 0) {
    uVar2 = uVar6 / uVar4;
  }
  iVar5 = uVar6 - uVar2 * uVar4;
  if (param_3 == 0) {
    param_4 = iVar5 + param_4;
    goto LAB_0040ea78;
  }
  if (param_4 == 0) {
    if (iVar5 != 0) {
      iVar5 = iVar5 + -1;
      param_4 = 1;
      goto LAB_0040ea44;
    }
  }
  else {
LAB_0040ea44:
    do {
      if (puVar3[(ulong)param_4 * 4] == param_3) {
        if (iVar5 == 0) goto LAB_0040ea78;
        iVar5 = iVar5 + -1;
      }
      param_4 = param_4 + 1;
    } while (param_4 < uVar1);
  }
  param_4 = 0;
LAB_0040ea78:
  *param_5 = puVar3[(ulong)param_4 * 4];
  return *(int *)(*(long *)(param_1 + 0xe8) + (ulong)param_4 * 0x10 + 4) -
         *(int *)(*(long *)(param_1 + 0xe8) + 4);
}


