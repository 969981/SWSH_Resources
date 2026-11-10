/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01102d70; name: FUN_01102d70
 */


void FUN_01102d70(long param_1,ulong param_2)

{
  undefined1 uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 local_58;
  undefined4 local_50 [2];
  long local_48;
  
  local_50[0] = 0;
  local_48 = 0;
  param_2 = param_2 & 0xffffffff;
  if (*(char *)(param_1 + 0x740) == '\0') {
    local_48 = *(long *)(param_1 + param_2 * 8 + 0x5f8);
  }
  else {
    local_58 = *(undefined8 *)(param_1 + 0x748);
    lVar3 = *(long *)(param_1 + 0x2b0);
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    lVar4 = *(long *)(lVar3 + 0x2e0);
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    uVar2 = FUN_017cc4b0(&local_58);
    FUN_014ca220(lVar4,0,(uVar2 & 0xffff) - 2000,2,2,1);
    uVar1 = FUN_017cc4c0(&local_58);
    FUN_014ca220(lVar4,1,uVar1,2,2,1);
    uVar1 = FUN_017cc4d0(&local_58);
    FUN_014ca220(lVar4,2,uVar1,2,2,1);
    uVar1 = FUN_017cc4e0(&local_58);
    FUN_014ca220(lVar4,3,uVar1,2,2,1);
    uVar1 = FUN_017cc4f0(&local_58);
    FUN_014ca220(lVar4,4,uVar1,2,2,1);
    lVar5 = *(long *)(lVar3 + 0x2e8);
    if (lVar5 == 0) {
      FUN_014c62d0(lVar4,0,*(undefined8 *)(param_1 + param_2 * 8 + 0x5f8));
      local_48 = 0;
      *(undefined1 *)(param_1 + 0x740) = 0;
    }
    else {
      plVar6 = (long *)(lVar5 + 0x48);
      (**(code **)(*plVar6 + 0x10))(plVar6);
      FUN_014c62d0(lVar4,lVar5,*(undefined8 *)(param_1 + param_2 * 8 + 0x5f8));
      *(undefined1 *)(param_1 + 0x740) = 0;
      local_48 = lVar5;
      (**(code **)(*plVar6 + 0x18))(plVar6);
    }
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
    }
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  local_50[0] = 0;
  FUN_01036240(param_1,local_50);
  return;
}


