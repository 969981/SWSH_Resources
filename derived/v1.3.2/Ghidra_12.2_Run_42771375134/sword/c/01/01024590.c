/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01024590; name: FUN_01024590
 */


void FUN_01024590(long param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  byte bVar8;
  long local_60;
  long local_58;
  int local_48;
  int local_44;
  
  lVar7 = *(long *)(param_1 + 0x20);
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar7 == lVar1) {
    bVar8 = 0;
  }
  else {
    bVar8 = 0;
    do {
      while (iVar2 = *(int *)(lVar7 + 0x3c), iVar2 == 0) {
joined_r0x01024740:
        lVar7 = lVar7 + 0x40;
        if (lVar1 == lVar7) goto LAB_01024774;
      }
      local_44 = *(int *)(lVar7 + 0x38);
      if (iVar2 == 2) {
LAB_01024690:
        FUN_0075b680(&local_58,*(undefined8 *)(param_1 + 8),&local_44);
        FUN_01023500(&local_58);
        uVar5 = FUN_0075a3e0();
        if ((uVar5 & 1) == 0) {
          uVar3 = 1;
          lVar6 = local_60;
        }
        else {
          local_48 = local_44 + 0x40;
          FUN_0075b680(&local_60,*(undefined8 *)(param_1 + 8),&local_48);
          FUN_01023500(&local_60);
          uVar3 = FUN_0075a3e0();
          uVar3 = uVar3 ^ 1;
          lVar6 = 0;
          if (local_60 != 0) {
            (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
            local_60 = 0;
            lVar6 = local_60;
          }
        }
        local_60 = lVar6;
        if (local_58 != 0) {
          (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
          local_58 = 0;
        }
        if ((uVar3 & 1) == 0) {
          *(undefined4 *)(lVar7 + 0x3c) = 0;
        }
        else {
          bVar8 = 1;
        }
        goto joined_r0x01024740;
      }
      if (iVar2 != 1) goto joined_r0x01024740;
      lVar6 = *(long *)(param_1 + (long)local_44 * 0x110 + 0x58);
      if (lVar6 != 0) {
        if (*(char *)(lVar6 + 0x170) != '\0') {
          FUN_0075b680(&local_58,*(undefined8 *)(param_1 + 8),&local_44);
          uVar4 = FUN_01023500(&local_58);
          FUN_0075a3b0(uVar4,param_1 + (long)local_44 * 0x110 + 0x50);
          if (local_58 != 0) {
            (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
            local_58 = 0;
          }
          local_60 = CONCAT44(local_60._4_4_,local_44 + 0x40);
          FUN_0075b680(&local_58,*(undefined8 *)(param_1 + 8),&local_60);
          uVar4 = FUN_01023500(&local_58);
          FUN_0075a3b0(uVar4,param_1 + (long)local_44 * 0x110 + 0x50);
          if (local_58 != 0) {
            (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
            local_58 = 0;
          }
          bVar8 = 1;
          *(undefined4 *)(lVar7 + 0x3c) = 2;
          goto LAB_01024690;
        }
        bVar8 = 1;
        goto joined_r0x01024740;
      }
      bVar8 = 1;
      lVar7 = lVar7 + 0x40;
    } while (lVar1 != lVar7);
  }
LAB_01024774:
  *(byte *)(param_1 + 0x4451) = ~bVar8 & 1;
  return;
}


