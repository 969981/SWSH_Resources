/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a5a750; name: FUN_00a5a750
 */


void FUN_00a5a750(long param_1,undefined4 param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long local_a0;
  long local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined1 local_54;
  undefined4 local_52;
  
  local_a0 = 0;
  local_60 = 0x8abaf272a347e952;
  local_54 = 1;
  local_68 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_58 = 4;
  local_52 = 0xffff;
  local_98 = 0;
  uStack_90 = 0;
  switch(param_2) {
  case 0:
    lVar4 = *(long *)(param_1 + 0x5e0);
    if (lVar4 != 0) {
      plVar3 = (long *)(lVar4 + 0x48);
      (**(code **)(*plVar3 + 0x10))(plVar3);
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
    lVar5 = *(long *)(param_1 + 0x5e8);
    local_a0 = lVar4;
    if (lVar5 != 0) {
      plVar3 = (long *)(lVar5 + 0x48);
      (**(code **)(*plVar3 + 0x10))(plVar3);
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
    uVar2 = 1;
    uVar1 = 1;
    local_54 = 1;
    break;
  case 1:
    lVar4 = *(long *)(param_1 + 0x5f0);
    if (lVar4 != 0) {
      plVar3 = (long *)(lVar4 + 0x48);
      (**(code **)(*plVar3 + 0x10))(plVar3);
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
    lVar5 = *(long *)(param_1 + 0x5f8);
    local_a0 = lVar4;
    goto joined_r0x00a5a910;
  case 2:
    lVar4 = *(long *)(param_1 + 0x600);
    if (lVar4 != 0) {
      plVar3 = (long *)(lVar4 + 0x48);
      (**(code **)(*plVar3 + 0x10))(plVar3);
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
    lVar5 = *(long *)(param_1 + 0x608);
    local_a0 = lVar4;
    if (lVar5 != 0) {
      plVar3 = (long *)(lVar5 + 0x48);
      (**(code **)(*plVar3 + 0x10))(plVar3);
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
    uVar1 = 0;
    uVar2 = 1;
    local_54 = 1;
    break;
  case 3:
    lVar4 = *(long *)(param_1 + 0x610);
    if (lVar4 != 0) {
      plVar3 = (long *)(lVar4 + 0x48);
      (**(code **)(*plVar3 + 0x10))(plVar3);
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
    lVar5 = *(long *)(param_1 + 0x618);
    local_a0 = lVar4;
joined_r0x00a5a910:
    if (lVar5 != 0) {
      plVar3 = (long *)(lVar5 + 0x48);
      (**(code **)(*plVar3 + 0x10))(plVar3);
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
    uVar1 = 0;
    local_54 = 0;
    uVar2 = 0xffff;
    break;
  default:
    goto switchD_00a5a7c4_default;
  }
  local_52 = CONCAT22(uVar1,uVar2);
  local_98 = lVar5;
switchD_00a5a7c4_default:
  local_68 = 4;
  local_58 = 0;
  FUN_00a5a980(param_1,&local_a0);
  return;
}


