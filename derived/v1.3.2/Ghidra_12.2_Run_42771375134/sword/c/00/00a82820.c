/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a82820; name: FUN_00a82820
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00a82820(long *param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long local_38;
  
  lVar2 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar2 == 0) {
    FUN_01009f40(&local_38,0);
  }
  else {
    plVar3 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_01009f40(&local_38,lVar2);
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  if (param_2 - 1U < 4) {
    uVar1 = param_2 + 8;
  }
  else {
    lVar2 = (**(code **)(*param_1 + 0xa50))(param_1);
    if (*(char *)(lVar2 + 0x140) == '\0') {
      lVar2 = (**(code **)(*param_1 + 0xa50))(param_1);
      uVar1 = 0xd;
      if (*(byte *)(lVar2 + 0x141) != 1) {
        uVar1 = (uint)*(byte *)(lVar2 + 0x141);
      }
    }
    else {
      uVar1 = 0;
    }
  }
  FUN_00fb40a0(local_38,uVar1);
  lVar2 = *(long *)(param_1[0x3c3] + 0x400);
  if (lVar2 == 0) {
    FUN_00dab450(0,0,1);
    lVar2 = *(long *)(param_1[0x3c3] + 0x400);
  }
  else {
    plVar3 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_00dab450(lVar2,0,1);
    (**(code **)(*plVar3 + 0x18))(plVar3);
    lVar2 = *(long *)(param_1[0x3c3] + 0x400);
  }
  if (lVar2 == 0) {
    FUN_00dab450(0,1,1);
    lVar2 = *(long *)(param_1[0x3c3] + 0x400);
  }
  else {
    plVar3 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_00dab450(lVar2,1,1);
    (**(code **)(*plVar3 + 0x18))(plVar3);
    lVar2 = *(long *)(param_1[0x3c3] + 0x400);
  }
  if (lVar2 == 0) {
    FUN_00dab450(0,2,1);
    lVar2 = *(long *)(param_1[0x3c3] + 0x400);
  }
  else {
    plVar3 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_00dab450(lVar2,2,1);
    (**(code **)(*plVar3 + 0x18))(plVar3);
    lVar2 = *(long *)(param_1[0x3c3] + 0x400);
  }
  if (lVar2 == 0) {
    FUN_00dab450(0,3,1);
  }
  else {
    plVar3 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_00dab450(lVar2,3,1);
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  return;
}


