/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009fc6e0; name: FUN_009fc6e0
 */


uint FUN_009fc6e0(long param_1,long *param_2,long *param_3,undefined1 *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  
  local_48 = *param_2;
  if (local_48 == 0) {
    uVar1 = FUN_009fd6d0(param_1,&local_48,param_4);
  }
  else {
    plVar5 = (long *)(local_48 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    uVar1 = FUN_009fd6d0(param_1,&local_48,param_4);
    (**(code **)(*plVar5 + 0x18))(plVar5);
    local_48 = 0;
  }
  uVar2 = FUN_00884820(*param_3);
  uVar3 = FUN_009fe1a0(*(undefined8 *)(param_1 + 0x10),1);
  if (uVar3 < uVar2) {
    uVar1 = 0;
    param_4[1] = 1;
  }
  uVar2 = FUN_00884820(*param_3);
  uVar3 = FUN_009fe1a0(*(undefined8 *)(param_1 + 0x10),0);
  if (uVar2 < uVar3) {
    uVar1 = 0;
    *param_4 = 1;
  }
  local_50 = *param_3;
  if (local_50 == 0) {
    uVar4 = FUN_009fd920(param_1,&local_50);
  }
  else {
    plVar5 = (long *)(local_50 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    uVar4 = FUN_009fd920(param_1,&local_50);
    (**(code **)(*plVar5 + 0x18))(plVar5);
    local_50 = 0;
  }
  if ((uVar4 & 1) != 0) {
    uVar1 = 0;
    param_4[9] = 1;
  }
  local_58 = *param_3;
  if (local_58 == 0) {
    uVar2 = FUN_009fda20(param_1,&local_58,param_4);
  }
  else {
    plVar5 = (long *)(local_58 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    uVar2 = FUN_009fda20(param_1,&local_58,param_4);
    (**(code **)(*plVar5 + 0x18))(plVar5);
    local_58 = 0;
  }
  local_60 = *param_3;
  if (local_60 == 0) {
    uVar3 = FUN_009fdc30(param_1,&local_60,param_4);
  }
  else {
    plVar5 = (long *)(local_60 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    uVar3 = FUN_009fdc30(param_1,&local_60,param_4);
    (**(code **)(*plVar5 + 0x18))(plVar5);
    local_60 = 0;
  }
  local_68 = *param_3;
  uVar1 = uVar1 & (uVar2 ^ 1) & (uVar3 ^ 1);
  if (local_68 == 0) {
    uVar4 = FUN_009fcab0(param_1,&local_68);
  }
  else {
    plVar5 = (long *)(local_68 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    uVar4 = FUN_009fcab0(param_1,&local_68);
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
    param_4[2] = 1;
  }
  return uVar1 & 1;
}


