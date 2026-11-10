/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0048bcd0; name: FUN_0048bcd0
 */


/* WARNING: Removing unreachable block (ram,0x0048bda8) */

void FUN_0048bcd0(long param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  uint uVar10;
  undefined4 local_60 [2];
  undefined8 local_58;
  long *plStack_50;
  undefined4 local_48;
  undefined2 local_44;
  
  if (*(int *)(param_1 + 0x2b0) != 0) {
    return;
  }
  if ((*(byte *)(param_1 + 0x16d) >> 3 & 1) != 0) {
    return;
  }
  local_48 = 1;
  local_60[0] = 0;
  local_44 = 0x100;
  local_58 = *(undefined8 *)(param_1 + 0x28);
  plVar9 = (long *)(param_1 + 0x2a8);
  plStack_50 = plVar9;
  (**(code **)(**(long **)(param_1 + 0x160) + 0x118))(*(long **)(param_1 + 0x160),local_60,0,0);
  puVar4 = PTR_DAT_02712a90;
  uVar2 = *(uint *)(param_1 + 0x2b0);
  uVar10 = *(uint *)(param_1 + 0x2b4);
  if (uVar2 < uVar10) {
LAB_0048be18:
    if (uVar2 < uVar10) {
      puVar6 = (undefined8 *)(*(long *)(param_1 + 0x2a8) + (ulong)*(uint *)(param_1 + 0x2b0) * 8);
      iVar1 = *(uint *)(param_1 + 0x2b0) + 1;
      *(int *)(param_1 + 0x2b0) = iVar1;
      if (puVar6 == (undefined8 *)0x0) goto LAB_0048be48;
      *puVar6 = PTR_DAT_02712df8;
    }
  }
  else {
    uVar10 = uVar10 + 3;
    puVar6 = (undefined8 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar10 << 3);
    if (puVar6 != (undefined8 *)0x0) {
      puVar7 = *(undefined8 **)(param_1 + 0x2a8);
      if ((puVar7 != (undefined8 *)0x0) && (puVar7 != puVar6)) {
        uVar3 = *(uint *)(param_1 + 0x2b0);
        if (uVar3 != 0) {
          *puVar6 = *puVar7;
          if (uVar3 != 1) {
            if (uVar3 == 2) {
              lVar8 = 1;
            }
            else {
              lVar5 = 0;
              do {
                lVar8 = lVar5;
                puVar6[lVar8 + 1] = *(undefined8 *)(*plVar9 + lVar8 * 8 + 8);
                puVar6[lVar8 + 2] = *(undefined8 *)(*plVar9 + lVar8 * 8 + 0x10);
                lVar5 = lVar8 + 2;
              } while (((ulong)uVar3 - 1) - (ulong)(~uVar3 & 1) != lVar8 + 2);
              lVar8 = lVar8 + 3;
              if ((~uVar3 & 1) == 0) goto LAB_0048be04;
            }
            puVar6[lVar8] = *(undefined8 *)(*plVar9 + lVar8 * 8);
          }
LAB_0048be04:
          puVar7 = (undefined8 *)*plVar9;
        }
        FUN_00404870(*(undefined4 *)puVar4,puVar7);
      }
      *(undefined8 **)(param_1 + 0x2a8) = puVar6;
      *(uint *)(param_1 + 0x2b4) = uVar10;
      goto LAB_0048be18;
    }
  }
  iVar1 = *(int *)(param_1 + 0x2b0);
LAB_0048be48:
  if (iVar1 != 0) {
    plVar9 = *(long **)(param_1 + 0x2a8);
    do {
      FUN_00481210(*plVar9,param_1);
      if ((*(uint *)(param_1 + 0x26b) >> 0x1c & 1) != 0) {
        *(short *)(*plVar9 + 0x2a) = *(short *)(*plVar9 + 0x2a) + 1;
      }
      plVar9 = plVar9 + 1;
    } while (plVar9 != (long *)(*(long *)(param_1 + 0x2a8) + (ulong)*(uint *)(param_1 + 0x2b0) * 8))
    ;
  }
  return;
}


