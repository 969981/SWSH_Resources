/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004033a0; name: FUN_004033a0
 */


long FUN_004033a0(long param_1,undefined8 *param_2,undefined1 *param_3)

{
  long lVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  
  if (*(int *)(param_1 + 0x24) == 0) {
    uVar4 = 0;
  }
  else {
    pbVar3 = (byte *)*param_2;
    uVar6 = (uint)*pbVar3;
    if (*pbVar3 == 0) {
      uVar4 = 0x1505;
    }
    else {
      uVar4 = 0x1505;
      pbVar5 = pbVar3;
      do {
        pbVar5 = pbVar5 + 1;
        uVar4 = uVar4 * 0x21 ^ uVar6;
        uVar6 = (uint)*pbVar5;
      } while (uVar6 != 0);
    }
    uVar4 = uVar4 & *(int *)(param_1 + 0x24) - 1U;
    uVar6 = *(uint *)(*(long *)(param_1 + 0x18) + (ulong)uVar4 * 4);
    uVar8 = (ulong)uVar6;
    if (uVar6 != 0xffffffff) {
      iVar2 = strcmp(*(char **)(*(long *)(param_1 + 8) + uVar8 * 0x10),(char *)pbVar3);
      while (iVar2 != 0) {
        uVar6 = *(uint *)(*(long *)(param_1 + 0x10) + uVar8 * 4);
        uVar8 = (ulong)uVar6;
        if (uVar6 == 0xffffffff) goto LAB_0040345c;
        iVar2 = strcmp(*(char **)(*(long *)(param_1 + 8) + uVar8 * 0x10),(char *)*param_2);
      }
      *param_3 = 1;
      goto LAB_00403518;
    }
  }
LAB_0040345c:
  *param_3 = 0;
  if (*(int *)(param_1 + 0x34) == *(int *)(param_1 + 0x20)) {
    uVar6 = *(uint *)(param_1 + 0x24);
    uVar4 = 0x10;
    if (uVar6 != 0) {
      uVar4 = uVar6 << 1;
    }
    if (uVar6 < uVar4) {
      FUN_00403200(param_1);
      uVar6 = *(uint *)(param_1 + 0x24);
    }
    pbVar3 = (byte *)*param_2;
    uVar7 = (uint)*pbVar3;
    if (*pbVar3 == 0) {
      uVar4 = 0x1505;
    }
    else {
      uVar4 = 0x1505;
      do {
        pbVar3 = pbVar3 + 1;
        uVar4 = uVar4 * 0x21 ^ uVar7;
        uVar7 = (uint)*pbVar3;
      } while (uVar7 != 0);
    }
    uVar4 = uVar4 & uVar6 - 1;
  }
  uVar6 = *(uint *)(param_1 + 0x2c);
  uVar8 = (ulong)uVar6;
  lVar1 = *(long *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x2c) = uVar6 + 1;
  *(undefined4 *)(*(long *)(param_1 + 0x10) + uVar8 * 4) = *(undefined4 *)(lVar1 + (ulong)uVar4 * 4)
  ;
  *(uint *)(lVar1 + (ulong)uVar4 * 4) = uVar6;
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
LAB_00403518:
  return *(long *)(param_1 + 8) + uVar8 * 0x10;
}


