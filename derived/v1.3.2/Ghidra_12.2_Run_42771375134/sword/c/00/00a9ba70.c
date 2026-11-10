/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a9ba70; name: FUN_00a9ba70
 */


void FUN_00a9ba70(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long local_48 [2];
  char *pcStack_38;
  undefined8 local_30;
  long local_28;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if (iVar1 == 3) {
    if (*(long *)(param_1 + 8) != 0) {
      uVar2 = FUN_008f35c0(*(long *)(param_1 + 8),0x4000000);
      if ((uVar2 & 1) != 0) {
        lVar3 = *(long *)PTR_DAT_027107a8;
        FUN_0010d170(local_48,"Play_Audience_cheer_positive_defeat");
        FUN_006cf0c0(local_48 + 1,local_48);
        FUN_008962c0(lVar3 + 0x108,local_48 + 1);
        if (local_28 != 0) {
          (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
          local_28 = 0;
        }
        if (local_48[0] != 0) {
          (**(code **)(*(long *)(local_48[0] + 0x48) + 0x18))();
          local_48[0] = 0;
        }
      }
      if ((*(long *)(param_1 + 8) != 0) &&
         (uVar2 = FUN_008f35c0(*(long *)(param_1 + 8),0x4000000), (uVar2 & 1) != 0)) {
        local_30 = 0x10;
        local_28 = 0;
        local_48[1] = 0x4e39ea4b54348ed6;
        pcStack_38 = "Audience_Tension";
        FUN_008962a0(DAT_01d4c6b8,*(long *)PTR_DAT_027107a8 + 0x108,local_48 + 1,0);
        if (local_28 != 0) {
          (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
        }
      }
    }
    return;
  }
  if (iVar1 == 2) {
    if (*(long *)(param_1 + 8) != 0) {
      uVar2 = FUN_008f35c0(*(long *)(param_1 + 8),0x4000000);
      if ((uVar2 & 1) != 0) {
        lVar3 = *(long *)PTR_DAT_027107a8;
        FUN_0010d170(local_48,"Play_Audience_cheer_positive_rnd");
        FUN_006cf0c0(local_48 + 1,local_48);
        FUN_008962c0(lVar3 + 0x108,local_48 + 1);
        if (local_28 != 0) {
          (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
          local_28 = 0;
        }
        if (local_48[0] != 0) {
          (**(code **)(*(long *)(local_48[0] + 0x48) + 0x18))();
          local_48[0] = 0;
        }
      }
      if ((*(long *)(param_1 + 8) != 0) &&
         (uVar2 = FUN_008f35c0(*(long *)(param_1 + 8),0x4000000), (uVar2 & 1) != 0)) {
        local_30 = 0x10;
        local_28 = 0;
        local_48[1] = 0x4e39ea4b54348ed6;
        pcStack_38 = "Audience_Tension";
        FUN_008962a0(DAT_01d4c6b8,*(long *)PTR_DAT_027107a8 + 0x108,local_48 + 1,0);
        if (local_28 != 0) {
          (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
        }
      }
    }
    *(undefined8 *)(param_1 + 0x18) = 100;
    *(undefined8 *)(param_1 + 0x20) = 300;
    return;
  }
  if (iVar1 != 1) {
    return;
  }
  if (*(long *)(param_1 + 8) != 0) {
    uVar2 = FUN_008f35c0(*(long *)(param_1 + 8),0x4000000);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)PTR_DAT_027107a8;
      FUN_0010d170(local_48,"Play_Audience_cheer_negative_rnd");
      FUN_006cf0c0(local_48 + 1,local_48);
      FUN_008962c0(lVar3 + 0x108,local_48 + 1);
      if (local_28 != 0) {
        (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
        local_28 = 0;
      }
      if (local_48[0] != 0) {
        (**(code **)(*(long *)(local_48[0] + 0x48) + 0x18))();
        local_48[0] = 0;
      }
    }
    if ((*(long *)(param_1 + 8) != 0) &&
       (uVar2 = FUN_008f35c0(*(long *)(param_1 + 8),0x4000000), (uVar2 & 1) != 0)) {
      local_48[1] = 0x4e39ea4b54348ed6;
      pcStack_38 = "Audience_Tension";
      local_30 = 0x10;
      local_28 = 0;
      FUN_008962a0(0x41f00000,*(long *)PTR_DAT_027107a8 + 0x108,local_48 + 1,0);
      if (local_28 != 0) {
        (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
      }
    }
  }
  *(undefined8 *)(param_1 + 0x18) = 0x1e;
  *(undefined8 *)(param_1 + 0x20) = 0x96;
  return;
}


