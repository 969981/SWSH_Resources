/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cd53f0; name: FUN_00cd53f0
 */


void FUN_00cd53f0(long param_1,long *param_2)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 local_70 [16];
  long local_58;
  
  lVar4 = *(long *)PTR_DAT_027185f8;
  if (lVar4 == 0) {
    return;
  }
  lVar5 = *(long *)PTR_DAT_02718f20;
  if (lVar5 == 0) {
    return;
  }
  auVar7 = FUN_01025b70(*(undefined8 *)PTR_DAT_02710878);
  lVar6 = *param_2;
  if (lVar6 != 0) {
    FUN_011ffbe0(&local_58,lVar5,lVar6);
    local_70 = FUN_0120e870(lVar4,lVar6);
    if (((local_70._0_8_ != 0 || local_70._8_8_ != 0) && (auVar7 != local_70)) && (local_58 != 0)) {
      lVar6 = *(long *)(local_58 + 8);
      if (lVar6 != 0) {
        (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
      }
      uVar2 = FUN_011f4020(*(long *)(param_1 + 0xd0) + 0x2d8,local_70);
      bVar1 = (uVar2 & 1) == 0;
      if (bVar1) {
        FUN_010439d0(*(long *)(param_1 + 0xd0) + 0x158,lVar6,local_70._0_8_,local_70._8_8_);
      }
      uVar2 = (ulong)bVar1;
      if (lVar6 != 0) {
        (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
      }
      lVar6 = param_2[1];
      auVar8 = local_70;
      goto joined_r0x00cd54f0;
    }
  }
  uVar2 = 0;
  lVar6 = param_2[1];
  auVar8 = local_70;
joined_r0x00cd54f0:
  if (lVar6 != 0) {
    local_70 = auVar8;
    FUN_011ffbe0(&local_58,lVar5,lVar6);
    auVar8 = FUN_0120e870(lVar4,lVar6);
    if (((auVar8._0_8_ != 0 || auVar8._8_8_ != 0) && (auVar8 != auVar7)) && (local_58 != 0)) {
      lVar6 = *(long *)(local_58 + 8);
      local_70 = auVar8;
      if (lVar6 != 0) {
        (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
      }
      uVar3 = FUN_011f4020(*(long *)(param_1 + 0xd0) + 0x2d8,local_70);
      if ((uVar3 & 1) == 0) {
        FUN_010439d0(*(long *)(param_1 + 0xd0) + uVar2 * 0x80 + 0x158,lVar6,local_70._0_8_,
                     local_70._8_8_);
        uVar2 = (ulong)((int)uVar2 + 1);
      }
      auVar8 = local_70;
      if (lVar6 != 0) {
        (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
        auVar8 = local_70;
      }
    }
  }
  lVar6 = param_2[2];
  if (lVar6 != 0) {
    local_70 = auVar8;
    FUN_011ffbe0(&local_58,lVar5,lVar6);
    auVar8 = FUN_0120e870(lVar4,lVar6);
    if (((auVar8._0_8_ != 0 || auVar8._8_8_ != 0) && (auVar8 != auVar7)) && (local_58 != 0)) {
      lVar6 = *(long *)(local_58 + 8);
      local_70 = auVar8;
      if (lVar6 != 0) {
        (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
      }
      uVar3 = FUN_011f4020(*(long *)(param_1 + 0xd0) + 0x2d8,local_70);
      if ((uVar3 & 1) == 0) {
        FUN_010439d0(*(long *)(param_1 + 0xd0) + uVar2 * 0x80 + 0x158,lVar6,local_70._0_8_,
                     local_70._8_8_);
        uVar2 = (ulong)((int)uVar2 + 1);
      }
      auVar8 = local_70;
      if (lVar6 != 0) {
        (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
        auVar8 = local_70;
      }
    }
  }
  lVar6 = param_2[3];
  if (lVar6 != 0) {
    local_70 = auVar8;
    FUN_011ffbe0(&local_58,lVar5,lVar6);
    auVar8 = FUN_0120e870(lVar4,lVar6);
    if (((auVar8._0_8_ != 0 || auVar8._8_8_ != 0) && (auVar8 != auVar7)) && (local_58 != 0)) {
      lVar4 = *(long *)(local_58 + 8);
      local_70 = auVar8;
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
      }
      uVar3 = FUN_011f4020(*(long *)(param_1 + 0xd0) + 0x2d8,local_70);
      if ((uVar3 & 1) == 0) {
        if (2 < (uint)uVar2) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        FUN_010439d0(*(long *)(param_1 + 0xd0) + uVar2 * 0x80 + 0x158,lVar4,local_70._0_8_,
                     local_70._8_8_);
      }
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
      }
    }
  }
  return;
}


