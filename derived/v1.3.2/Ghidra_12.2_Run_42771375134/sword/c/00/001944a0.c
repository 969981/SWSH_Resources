/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001944a0; name: FUN_001944a0
 */


void FUN_001944a0(long *param_1,long param_2,undefined8 param_3,long *param_4,long param_5)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  
  puVar2 = PTR_DAT_02710c28;
  uVar9 = *(uint *)(param_4 + 1) & 0x7fffffff;
  if (uVar9 == 0) {
    return;
  }
  uVar4 = 0;
  uVar3 = 0;
  while (uVar5 = *(uint *)(*param_4 + uVar3 * 4), uVar5 == 0) {
    uVar3 = uVar3 + 1;
    uVar4 = uVar4 + 0x20;
    if (uVar9 <= uVar3) {
      return;
    }
  }
  uVar4 = *(uint *)(PTR_DAT_02710c28 + (ulong)((uVar5 & -uVar5) * 0x77cb531 >> 0x1b) * 4) | uVar4;
  uVar5 = uVar5 - 1 & uVar5;
  if (uVar5 == 0) {
    uVar8 = uVar3 + 1;
    do {
      uVar3 = uVar8 & 0xffffffff;
      if (uVar9 <= (uint)uVar8) {
        uVar5 = 0;
        break;
      }
      uVar5 = *(uint *)(*param_4 + (uVar8 & 0xffffffff) * 4);
      uVar8 = (ulong)((uint)uVar8 + 1);
    } while (uVar5 == 0);
  }
  if (uVar4 != 0xffffffff) {
    lVar6 = *param_1;
    lVar7 = *param_4;
    do {
      lVar1 = lVar6 + (ulong)*(ushort *)(param_5 + (ulong)uVar4 * 2) * 0x10;
      *(uint *)(param_2 + (ulong)(uint)(*(int *)(lVar1 + 8) + *(int *)(lVar1 + 0xc)) * 4) = uVar4;
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      if (uVar5 == 0) {
        return;
      }
      uVar9 = (uint)uVar3;
      uVar4 = *(uint *)(puVar2 + (ulong)((uVar5 & -uVar5) * 0x77cb531 >> 0x1b) * 4) | uVar9 << 5;
      uVar5 = uVar5 - 1 & uVar5;
      if (uVar5 == 0) {
        do {
          uVar9 = uVar9 + 1;
          uVar3 = (ulong)uVar9;
          if ((*(uint *)(param_4 + 1) & 0x7fffffff) <= uVar9) {
            uVar5 = 0;
            break;
          }
          uVar5 = *(uint *)(lVar7 + (ulong)uVar9 * 4);
        } while (uVar5 == 0);
      }
    } while (uVar4 != 0xffffffff);
  }
  return;
}


