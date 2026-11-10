/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00be0800; name: FUN_00be0800
 */


bool FUN_00be0800(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  undefined4 uVar2;
  ulong uVar3;
  long *plVar4;
  long local_38;
  
  local_38 = *param_2;
  if (local_38 == 0) {
    uVar3 = FUN_00be08d0(param_1,&local_38,param_3);
  }
  else {
    plVar4 = (long *)(local_38 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    uVar3 = FUN_00be08d0(param_1,&local_38,param_3);
    (**(code **)(*plVar4 + 0x18))(plVar4);
    local_38 = 0;
  }
  bVar1 = (uVar3 & 1) != 0;
  if (bVar1) {
    uVar2 = FUN_009fe1a0(*param_2,0x10);
    *(undefined4 *)(param_3 + 0x2a0) = uVar2;
    uVar2 = FUN_009fe1a0(*param_2,0x11);
    *(undefined4 *)(param_3 + 0x2d8) = uVar2;
    *(undefined4 *)(param_3 + 0x2d4) = 0x3b;
  }
  return bVar1;
}


