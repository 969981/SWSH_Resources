/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0134d5a0; name: FUN_0134d5a0
 */


undefined8 FUN_0134d5a0(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  ulong *puVar10;
  int iVar11;
  ulong uVar12;
  ulong uVar13;
  long local_30;
  long local_28;
  
  FUN_01346e80();
  FUN_012e8a50(&local_28);
  if (local_28 == 0) {
    return 0;
  }
  FUN_01316d10(&local_30);
  uVar4 = FUN_013140d0(local_30);
  if (local_30 != 0) {
    (**(code **)(*(long *)(local_30 + 0x48) + 0x18))();
    local_30 = 0;
  }
  if ((uVar4 & 1) == 0) {
LAB_0134d724:
    uVar7 = 1;
  }
  else {
    lVar5 = FUN_01314e80(local_28);
    if (lVar5 == 2) {
      FUN_01314ea0(local_28,0);
      puVar6 = (undefined8 *)FUN_012e3520();
      iVar2 = FUN_012b67d0(*puVar6);
      FUN_01314ea0(local_28,1);
      puVar6 = (undefined8 *)FUN_012e3520();
      iVar3 = FUN_012b67d0(*puVar6);
      iVar3 = iVar3 + iVar2;
      if (iVar3 < 0x1fe) {
        if (299 < iVar3) {
          puVar9 = &UNK_0216c25c;
          goto LAB_0134d690;
        }
        if (99 < iVar3) {
          puVar9 = &UNK_0216c264;
          goto LAB_0134d690;
        }
        if (0 < iVar3) {
          puVar9 = &UNK_0216c26c;
          goto LAB_0134d690;
        }
        if (-1 < iVar3) {
          puVar9 = &UNK_0216c274;
          goto LAB_0134d690;
        }
        iVar3 = 0;
      }
      else {
        puVar9 = &UNK_0216c254;
LAB_0134d690:
        iVar3 = *(int *)(puVar9 + 4);
      }
      puVar10 = *(ulong **)(*(long *)PTR_DAT_02710848 + 0x98);
      uVar4 = *puVar10;
      uVar12 = puVar10[1];
      do {
        uVar13 = uVar4 ^ uVar12;
        iVar11 = (int)uVar12;
        iVar2 = (int)uVar4;
        uVar12 = uVar13 >> 0x1b | uVar13 << 0x25;
        uVar4 = uVar13 ^ (uVar4 >> 0x28 | uVar4 << 0x18) ^ uVar13 << 0x10;
        uVar1 = iVar2 + iVar11 & 0x7f;
      } while (99 < uVar1);
      *puVar10 = uVar4;
      puVar10[1] = uVar12;
      if ((int)uVar1 < iVar3) {
        FUN_01316d10(&local_30,local_28);
        lVar5 = local_30;
        uVar7 = FUN_01314ea0(local_28,0);
        uVar8 = FUN_01314ea0(local_28,1);
        FUN_013146d0(lVar5,uVar7,uVar8);
        if (local_30 != 0) {
          (**(code **)(*(long *)(local_30 + 0x48) + 0x18))();
          local_30 = 0;
        }
        goto LAB_0134d724;
      }
    }
    uVar7 = 0;
  }
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  return uVar7;
}


