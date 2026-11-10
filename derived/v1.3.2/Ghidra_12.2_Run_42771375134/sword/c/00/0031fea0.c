/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0031fea0; name: FUN_0031fea0
 */


undefined8 FUN_0031fea0(long param_1,int *param_2)

{
  int *piVar1;
  uint *puVar2;
  int *piVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  uint *puVar11;
  
  if (*(int *)(param_1 + 0x3c) == 0) {
    return 0;
  }
  iVar6 = *param_2;
  uVar8 = iVar6 + (iVar6 << 0xf ^ 0xffffffffU);
  uVar8 = (uVar8 ^ uVar8 >> 10) * 9;
  uVar8 = uVar8 ^ uVar8 >> 6;
  uVar8 = uVar8 + (uVar8 << 0xb ^ 0xffffffff);
  lVar10 = *(long *)(param_1 + 0x20);
  puVar11 = (uint *)(lVar10 + (ulong)((uVar8 ^ uVar8 >> 0x10) & *(int *)(param_1 + 0x2c) - 1U) * 4);
  uVar8 = *puVar11;
  if (uVar8 == 0xffffffff) {
    return 0;
  }
  lVar4 = *(long *)(param_1 + 0x10);
  lVar5 = *(long *)(param_1 + 0x18);
  do {
    piVar1 = (int *)(lVar4 + (ulong)uVar8 * 0x10);
    puVar2 = (uint *)(lVar5 + (ulong)uVar8 * 4);
    uVar7 = *puVar2;
    if (*piVar1 == iVar6) {
      *puVar11 = uVar7;
      uVar7 = *(int *)(param_1 + 0x3c) - 1;
      *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
      *(uint *)(param_1 + 0x3c) = uVar7;
      if (uVar8 != uVar7) {
        piVar3 = (int *)(lVar4 + (ulong)uVar7 * 0x10);
        *piVar1 = *piVar3;
        *(undefined8 *)(piVar1 + 2) = *(undefined8 *)(piVar3 + 2);
        *puVar2 = *(uint *)(lVar5 + (ulong)uVar7 * 4);
        uVar7 = *piVar1 + (*piVar1 << 0xf ^ 0xffffffffU);
        uVar7 = (uVar7 ^ uVar7 >> 10) * 9;
        uVar7 = uVar7 ^ uVar7 >> 6;
        uVar7 = uVar7 + (uVar7 << 0xb ^ 0xffffffff);
        puVar11 = (uint *)(lVar10 + (ulong)((uVar7 ^ uVar7 >> 0x10) & *(int *)(param_1 + 0x2c) - 1U)
                                    * 4);
        uVar7 = *puVar11;
        if (*puVar11 != *(uint *)(param_1 + 0x3c)) {
          do {
            uVar9 = uVar7;
            uVar7 = *(uint *)(lVar5 + (ulong)uVar9 * 4);
          } while (uVar7 != *(uint *)(param_1 + 0x3c));
          puVar11 = (uint *)(lVar5 + (ulong)uVar9 * 4);
        }
        *puVar11 = uVar8;
      }
      *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + -1;
      return 1;
    }
    puVar11 = puVar2;
    uVar8 = uVar7;
  } while (uVar7 != 0xffffffff);
  return 0;
}


