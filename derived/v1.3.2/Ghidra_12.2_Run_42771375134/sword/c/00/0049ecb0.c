/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0049ecb0; name: FUN_0049ecb0
 */


/* WARNING: Removing unreachable block (ram,0x0049ed50) */

void FUN_0049ecb0(long param_1,ulong param_2,undefined4 param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  long lVar8;
  uint *puVar9;
  long *plVar10;
  uint uVar11;
  
  lVar1 = param_1 + (param_2 & 0xffffffff) * 0x10;
  FUN_0049ee00(param_1,param_3);
  puVar4 = PTR_DAT_02712a90;
  puVar9 = (uint *)(lVar1 + 0x38);
  uVar3 = *puVar9;
  uVar11 = *(uint *)(lVar1 + 0x3c);
  plVar10 = (long *)(lVar1 + 0x30);
  if (uVar3 < uVar11) goto LAB_0049edc0;
  uVar11 = uVar11 + 1;
  puVar6 = (undefined4 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar11 << 2);
  if (puVar6 == (undefined4 *)0x0) {
    return;
  }
  puVar7 = (undefined4 *)*plVar10;
  if (puVar7 != (undefined4 *)0x0 && puVar7 != puVar6) {
    uVar2 = *puVar9;
    if (uVar2 != 0) {
      *puVar6 = *puVar7;
      if (uVar2 != 1) {
        if (uVar2 == 2) {
          lVar8 = 1;
        }
        else {
          lVar5 = 0;
          do {
            lVar8 = lVar5;
            puVar6[lVar8 + 1] = *(undefined4 *)(*plVar10 + lVar8 * 4 + 4);
            puVar6[lVar8 + 2] = *(undefined4 *)(*plVar10 + lVar8 * 4 + 8);
            lVar5 = lVar8 + 2;
          } while (((ulong)uVar2 - 1) - (ulong)(~uVar2 & 1) != lVar8 + 2);
          lVar8 = lVar8 + 3;
          if ((~uVar2 & 1) == 0) goto LAB_0049edac;
        }
        puVar6[lVar8] = *(undefined4 *)(*plVar10 + lVar8 * 4);
      }
LAB_0049edac:
      puVar7 = (undefined4 *)*plVar10;
    }
    FUN_00404870(*(undefined4 *)puVar4,puVar7);
  }
  *plVar10 = (long)puVar6;
  *(uint *)(lVar1 + 0x3c) = uVar11;
LAB_0049edc0:
  if (uVar3 < uVar11) {
    puVar6 = (undefined4 *)(*plVar10 + (ulong)*puVar9 * 4);
    *puVar9 = *puVar9 + 1;
    if (puVar6 != (undefined4 *)0x0) {
      *puVar6 = param_3;
    }
  }
  return;
}


