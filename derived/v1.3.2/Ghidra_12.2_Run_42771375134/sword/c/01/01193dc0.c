/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01193dc0; name: FUN_01193dc0
 */


void FUN_01193dc0(long param_1)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  undefined4 uVar4;
  long lVar5;
  long *plVar6;
  undefined1 *local_140;
  code *local_138;
  undefined1 *local_130;
  undefined1 *puStack_128;
  long local_120;
  long lStack_118;
  undefined8 local_c0;
  code *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  long local_a0;
  long lStack_98;
  
  lVar1 = param_1 + 0x60;
  FUN_01194ee0(lVar1);
  if (*(char *)(param_1 + 0x218) == '\0') {
    return;
  }
  local_a0 = param_1;
  switch(*(undefined4 *)(param_1 + 0x21c)) {
  case 0:
    uVar3 = FUN_012092f0(*(undefined8 *)PTR_DAT_02710880);
    if ((uVar3 & 1) == 0) {
      uVar4 = 6;
    }
    else {
      uVar4 = 3;
    }
    *(undefined4 *)(param_1 + 0x21c) = uVar4;
    goto LAB_01194154;
  default:
    goto switchD_01193e0c_caseD_1;
  case 3:
    local_c0 = &LAB_01194410;
    local_b8 = FUN_01194440;
    local_b0 = &LAB_01194450;
    local_a8 = &LAB_01194460;
    FUN_01195170(lVar1,param_1 + 0x200,param_1 + 0x1f0,param_1 + 0x1f8,&local_c0);
    pcVar2 = local_b8;
    break;
  case 4:
    lVar5 = *(long *)(param_1 + 0x58);
    lStack_98 = lVar5;
    if (lVar5 != 0) {
      plVar6 = (long *)(lVar5 + 0x48);
      (**(code **)(*plVar6 + 0x10))(plVar6);
      (**(code **)(*plVar6 + 0x10))(plVar6);
      if (lVar5 != 0) {
        local_a8 = (undefined1 *)0x0;
        local_b0 = (undefined1 *)0x0;
        local_b8 = (code *)0x0;
        local_c0 = (undefined1 *)0x0;
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
      }
    }
    local_c0 = &LAB_01194470;
    local_b8 = FUN_011944a0;
    local_b0 = &LAB_011944e0;
    local_a8 = &LAB_01194510;
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    }
    local_130 = (undefined1 *)0x0;
    puStack_128 = (undefined1 *)0x0;
    local_140 = (undefined1 *)0x0;
    local_138 = (code *)0x0;
    local_120 = param_1;
    lStack_118 = lVar5;
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    }
    local_140 = &LAB_01194540;
    local_138 = FUN_01194570;
    local_130 = &LAB_011945b0;
    puStack_128 = &LAB_011945e0;
    uVar3 = FUN_0125b090(1,&local_c0,&local_140,1,0);
    pcVar2 = local_138;
    if (local_138 != (code *)0x0) {
      local_130 = (undefined1 *)0x0;
      puStack_128 = (undefined1 *)0x0;
      local_140 = (undefined1 *)0x0;
      local_138 = (code *)0x0;
      (*pcVar2)(&local_120);
    }
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
    }
    pcVar2 = local_b8;
    if (local_b8 != (code *)0x0) {
      local_b0 = (undefined1 *)0x0;
      local_a8 = (undefined1 *)0x0;
      local_c0 = (undefined1 *)0x0;
      local_b8 = (code *)0x0;
      (*pcVar2)(&local_a0);
    }
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
    }
    if ((uVar3 & 1) != 0) {
      local_c0 = &LAB_01194610;
      local_b8 = FUN_01194630;
      local_b0 = &LAB_01194640;
      local_a8 = &LAB_01194650;
      local_a0 = param_1;
      FUN_011951a0(lVar1,param_1 + 0x208,&local_c0);
      pcVar2 = local_b8;
      if (local_b8 != (code *)0x0) {
        local_b0 = (undefined1 *)0x0;
        local_a8 = (undefined1 *)0x0;
        local_c0 = (undefined1 *)0x0;
        local_b8 = (code *)0x0;
        (*pcVar2)(&local_a0);
      }
      *(undefined4 *)(param_1 + 0x21c) = 2;
      *(undefined1 *)(param_1 + 0x218) = 1;
    }
    if (lVar5 == 0) {
      return;
    }
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
    return;
  case 5:
    lVar5 = *(long *)PTR_DAT_027107a8;
    local_140 = (undefined1 *)0x81428fd97dfc4999;
    local_138 = (code *)0x1d1b6f8;
    local_130 = (undefined1 *)0x15;
    FUN_006cf0a0(&local_c0,&local_140);
    FUN_008962c0(lVar5 + 0x108,&local_c0);
    if (local_a8 != (undefined1 *)0x0) {
      (**(code **)(*(long *)((long)local_a8 + 0x48) + 0x18))();
    }
    local_c0 = &LAB_01194660;
    local_b8 = FUN_01194680;
    local_b0 = &LAB_01194690;
    local_a8 = &LAB_011946a0;
    FUN_01194f60(lVar1,param_1 + 0x210,&local_c0);
    pcVar2 = local_b8;
    break;
  case 6:
    local_c0 = (undefined1 *)((ulong)local_c0._4_4_ << 0x20);
    goto LAB_01194130;
  case 7:
    local_c0 = (undefined1 *)CONCAT44(local_c0._4_4_,1);
LAB_01194130:
    (**(code **)(param_1 + 0x220))(param_1 + 0x240,&local_c0);
    *(undefined1 *)(param_1 + 0x218) = 0;
    goto switchD_01193e0c_caseD_1;
  }
  if (pcVar2 != (code *)0x0) {
    local_b0 = (undefined1 *)0x0;
    local_a8 = (undefined1 *)0x0;
    local_c0 = (undefined1 *)0x0;
    local_b8 = (code *)0x0;
    (*pcVar2)(&local_a0);
  }
  *(undefined4 *)(param_1 + 0x21c) = 1;
LAB_01194154:
  *(undefined1 *)(param_1 + 0x218) = 1;
switchD_01193e0c_caseD_1:
  return;
}


