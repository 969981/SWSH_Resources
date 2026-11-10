/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a4bcd0; name: FUN_00a4bcd0
 */


void FUN_00a4bcd0(long param_1,undefined8 *param_2,undefined4 param_3)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  undefined4 local_a0;
  undefined2 uStack_9c;
  undefined1 uStack_9a;
  undefined1 uStack_99;
  undefined7 local_98;
  undefined1 uStack_91;
  undefined7 local_90;
  undefined1 uStack_89;
  undefined7 local_88;
  undefined1 uStack_81;
  undefined7 uStack_80;
  undefined1 local_79;
  undefined7 uStack_78;
  undefined1 local_71;
  undefined7 uStack_70;
  undefined1 local_69;
  undefined7 uStack_68;
  undefined1 local_61;
  undefined7 uStack_60;
  undefined1 local_59;
  undefined7 uStack_58;
  undefined1 local_51;
  undefined7 uStack_50;
  undefined1 uStack_49;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 uStack_40;
  long local_38;
  
  local_a0 = 0x779fe786;
  uStack_9c = 0x6d2a;
  uStack_9a = 0x1d;
  uStack_99 = 0x82;
  local_98 = 0x1d0a769;
  uStack_91 = 0;
  local_90 = 0x12;
  uStack_89 = 0;
  local_88 = 0;
  uStack_81 = 0;
  FUN_00ff8620(&local_38,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),&local_a0,10);
  lVar3 = *(long *)(local_38 + 0x60);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  if (CONCAT17(uStack_81,local_88) != 0) {
    (**(code **)(*(long *)(CONCAT17(uStack_81,local_88) + 0x48) + 0x18))();
    local_88 = 0;
    uStack_81 = 0;
  }
  switch(param_3) {
  case 0:
    *param_2 = *(undefined8 *)(param_1 + 0x5e0);
    uStack_40 = 0;
    uStack_50 = 0;
    uStack_49 = 0;
    uStack_48 = 0;
    local_44 = 0;
    uStack_60 = 0;
    local_59 = 0;
    uStack_58 = 0;
    local_51 = 0;
    uStack_70 = 0;
    local_69 = 0;
    uStack_68 = 0;
    local_61 = 0;
    uStack_80 = 0;
    local_79 = 0;
    uStack_78 = 0;
    local_71 = 0;
    local_90 = 0;
    uStack_89 = 0;
    local_88 = 0;
    uStack_81 = 0;
    local_a0 = 0x656e5f4c;
    uStack_9c = 0x7261;
    uStack_9a = 0x31;
    uStack_99 = 0;
    local_98 = 0;
    uStack_91 = 0;
    *(undefined4 *)(param_2 + 0xd) = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[1] = 0x317261656e5f4c;
    param_2[2] = 0;
    param_2[7] = 0;
    param_2[8] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[0xb] = 0;
    param_2[0xc] = 0;
    param_2[9] = 0;
    param_2[10] = 0;
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    lVar1 = param_2[0xe];
    param_2[0xe] = lVar3;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
    uVar2 = 0;
    break;
  case 1:
    *param_2 = *(undefined8 *)(param_1 + 0x5e8);
    uStack_40 = 0;
    uStack_50 = 0;
    uStack_49 = 0;
    uStack_48 = 0;
    local_44 = 0;
    uStack_60 = 0;
    local_59 = 0;
    uStack_58 = 0;
    local_51 = 0;
    uStack_70 = 0;
    local_69 = 0;
    uStack_68 = 0;
    local_61 = 0;
    uStack_80 = 0;
    local_79 = 0;
    uStack_78 = 0;
    local_71 = 0;
    local_90 = 0;
    uStack_89 = 0;
    local_88 = 0;
    uStack_81 = 0;
    local_a0 = 0x656e5f4c;
    uStack_9c = 0x7261;
    uStack_9a = 0x32;
    uStack_99 = 0;
    local_98 = 0;
    uStack_91 = 0;
    *(undefined4 *)(param_2 + 0xd) = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[1] = 0x327261656e5f4c;
    param_2[2] = 0;
    param_2[7] = 0;
    param_2[8] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[0xb] = 0;
    param_2[0xc] = 0;
    param_2[9] = 0;
    param_2[10] = 0;
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    lVar1 = param_2[0xe];
    param_2[0xe] = lVar3;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
    uVar2 = 1;
    break;
  case 2:
    *param_2 = *(undefined8 *)(param_1 + 0x5f0);
    uStack_40 = 0;
    uStack_50 = 0;
    uStack_49 = 0;
    uStack_48 = 0;
    local_44 = 0;
    uStack_60 = 0;
    local_59 = 0;
    uStack_58 = 0;
    local_51 = 0;
    uStack_70 = 0;
    local_69 = 0;
    uStack_68 = 0;
    local_61 = 0;
    uStack_80 = 0;
    local_79 = 0;
    uStack_78 = 0;
    local_71 = 0;
    local_90 = 0;
    uStack_89 = 0;
    local_88 = 0;
    uStack_81 = 0;
    local_a0 = 0x656e5f4c;
    uStack_9c = 0x7261;
    uStack_9a = 0x33;
    uStack_99 = 0;
    local_98 = 0;
    uStack_91 = 0;
    *(undefined4 *)(param_2 + 0xd) = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[1] = 0x337261656e5f4c;
    param_2[2] = 0;
    param_2[7] = 0;
    param_2[8] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[0xb] = 0;
    param_2[0xc] = 0;
    param_2[9] = 0;
    param_2[10] = 0;
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    lVar1 = param_2[0xe];
    param_2[0xe] = lVar3;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
    uVar2 = 2;
    break;
  case 3:
    *param_2 = *(undefined8 *)(param_1 + 0x5f8);
    uStack_40 = 0;
    uStack_50 = 0;
    uStack_49 = 0;
    uStack_48 = 0;
    local_44 = 0;
    uStack_60 = 0;
    local_59 = 0;
    uStack_58 = 0;
    local_51 = 0;
    uStack_70 = 0;
    local_69 = 0;
    uStack_68 = 0;
    local_61 = 0;
    uStack_80 = 0;
    local_79 = 0;
    uStack_78 = 0;
    local_71 = 0;
    local_90 = 0;
    uStack_89 = 0;
    local_88 = 0;
    uStack_81 = 0;
    local_a0 = 0x656e5f4c;
    uStack_9c = 0x7261;
    uStack_9a = 0x34;
    uStack_99 = 0;
    local_98 = 0;
    uStack_91 = 0;
    *(undefined4 *)(param_2 + 0xd) = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[1] = 0x347261656e5f4c;
    param_2[2] = 0;
    param_2[7] = 0;
    param_2[8] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[0xb] = 0;
    param_2[0xc] = 0;
    param_2[9] = 0;
    param_2[10] = 0;
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    lVar1 = param_2[0xe];
    param_2[0xe] = lVar3;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
    uVar2 = 3;
    break;
  case 4:
    *param_2 = *(undefined8 *)(param_1 + 0x600);
    uStack_91 = 0;
    local_90 = 0;
    uStack_99 = 0;
    local_98 = 0;
    uStack_89 = 0;
    local_88 = 0;
    uStack_81 = 0;
    uStack_80 = 0;
    local_79 = 0;
    uStack_78 = 0;
    uStack_40 = 0;
    uStack_9c = 0x3172;
    local_a0 = 0x61665f4c;
    uStack_49 = 0;
    uStack_48 = 0;
    local_44 = 0;
    local_51 = 0;
    uStack_50 = 0;
    local_59 = 0;
    uStack_58 = 0;
    local_61 = 0;
    uStack_60 = 0;
    local_69 = 0;
    uStack_68 = 0;
    local_71 = 0;
    uStack_70 = 0;
    uStack_9a = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[8] = 0;
    param_2[9] = 0;
    param_2[6] = 0;
    param_2[7] = 0;
    *(undefined4 *)(param_2 + 0xd) = 0;
    param_2[10] = 0;
    param_2[0xb] = 0;
    param_2[0xc] = 0;
    param_2[1] = 0x317261665f4c;
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    lVar1 = param_2[0xe];
    param_2[0xe] = lVar3;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
    uVar2 = 4;
    break;
  case 5:
    *param_2 = *(undefined8 *)(param_1 + 0x608);
    uStack_91 = 0;
    local_90 = 0;
    uStack_99 = 0;
    local_98 = 0;
    uStack_89 = 0;
    local_88 = 0;
    uStack_81 = 0;
    uStack_80 = 0;
    local_79 = 0;
    uStack_78 = 0;
    uStack_40 = 0;
    uStack_9c = 0x3272;
    local_a0 = 0x61665f4c;
    uStack_49 = 0;
    uStack_48 = 0;
    local_44 = 0;
    local_51 = 0;
    uStack_50 = 0;
    local_59 = 0;
    uStack_58 = 0;
    local_61 = 0;
    uStack_60 = 0;
    local_69 = 0;
    uStack_68 = 0;
    local_71 = 0;
    uStack_70 = 0;
    uStack_9a = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[8] = 0;
    param_2[9] = 0;
    param_2[6] = 0;
    param_2[7] = 0;
    *(undefined4 *)(param_2 + 0xd) = 0;
    param_2[10] = 0;
    param_2[0xb] = 0;
    param_2[0xc] = 0;
    param_2[1] = 0x327261665f4c;
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    lVar1 = param_2[0xe];
    param_2[0xe] = lVar3;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
    uVar2 = 5;
    break;
  default:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  *(undefined4 *)(param_2 + 0x11) = uVar2;
  param_2[0xf] = 0xe88954670b1262c3;
  param_2[0x10] = 0xc8e9c2e05cb54a73;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  return;
}


