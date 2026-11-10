/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00416b70; name: FUN_00416b70
 */


undefined8 FUN_00416b70(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  uint uVar11;
  long local_58;
  undefined2 local_50;
  undefined1 uStack_4e;
  undefined5 uStack_4d;
  long *local_48;
  
  local_48 = (long *)0x0;
  local_50 = 0;
  uStack_4e = 0;
  iVar6 = FUN_00416690(&local_58);
  puVar5 = PTR_DAT_02712a90;
  if (iVar6 == 1) {
    uVar4 = *(uint *)(param_1 + 0x18);
    uVar11 = *(uint *)(param_1 + 0x1c);
    if (uVar11 <= uVar4) {
      uVar11 = uVar11 + 2;
      lVar7 = FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar11 * 0x18);
      if (lVar7 == 0) goto LAB_00416cb0;
      lVar8 = *(long *)(param_1 + 0x10);
      if ((lVar8 != 0) && (lVar8 != lVar7)) {
        uVar9 = (ulong)*(uint *)(param_1 + 0x18);
        if (*(uint *)(param_1 + 0x18) != 0) {
          lVar8 = 0;
          do {
            puVar1 = (undefined8 *)(lVar7 + lVar8);
            if (puVar1 != (undefined8 *)0x0) {
              lVar2 = lVar7 + lVar8;
              *(undefined2 *)(lVar2 + 8) = 0;
              *(byte *)(lVar2 + 10) = *(byte *)(lVar2 + 10) & 0xfc;
              *(undefined8 *)(lVar2 + 0x10) = 0;
            }
            puVar3 = (undefined8 *)(*(long *)(param_1 + 0x10) + lVar8);
            lVar8 = lVar8 + 0x18;
            puVar1[2] = puVar3[2];
            puVar1[1] = puVar3[1];
            uVar9 = uVar9 - 1;
            *puVar1 = *puVar3;
          } while (uVar9 != 0);
          lVar8 = *(long *)(param_1 + 0x10);
        }
        FUN_00404870(*(undefined4 *)puVar5,lVar8);
      }
      *(long *)(param_1 + 0x10) = lVar7;
      *(uint *)(param_1 + 0x1c) = uVar11;
    }
    if (uVar4 < uVar11) {
      uVar11 = *(uint *)(param_1 + 0x18);
      *(uint *)(param_1 + 0x18) = uVar11 + 1;
      plVar10 = (long *)(*(long *)(param_1 + 0x10) + (ulong)uVar11 * 0x18);
      if (plVar10 != (long *)0x0) {
        lVar7 = *(long *)(param_1 + 0x10) + (ulong)uVar11 * 0x18;
        *(undefined2 *)(lVar7 + 8) = 0;
        *(byte *)(lVar7 + 10) = *(byte *)(lVar7 + 10) & 0xfc;
        *(undefined8 *)(lVar7 + 0x10) = 0;
        plVar10[2] = (long)local_48;
        plVar10[1] = CONCAT53(uStack_4d,CONCAT12(uStack_4e,local_50));
        *plVar10 = local_58;
        return 1;
      }
    }
  }
LAB_00416cb0:
  if (((*(uint *)(local_58 + 0x30) | 2) == 2) && (local_48 != (long *)0x0)) {
    (**(code **)(*local_48 + 0x10))();
  }
  return 2;
}


