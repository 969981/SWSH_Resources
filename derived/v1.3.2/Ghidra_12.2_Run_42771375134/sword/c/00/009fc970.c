/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009fc970; name: FUN_009fc970
 */


undefined4 FUN_009fc970(long param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  undefined4 uVar5;
  long *plVar6;
  long local_28;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    return 4;
  }
  uVar1 = FUN_00884820(*param_2);
  uVar2 = FUN_009fe1a0(*(undefined8 *)(param_1 + 0x10),3);
  if (uVar2 < uVar1) {
    return 1;
  }
  uVar1 = FUN_00884820(*param_2);
  uVar2 = FUN_009fe1a0(*(undefined8 *)(param_1 + 0x10),2);
  if (uVar1 < uVar2) {
    return 1;
  }
  local_28 = *param_2;
  if (local_28 == 0) {
    uVar4 = FUN_009fcab0(param_1,&local_28);
    if ((uVar4 & 1) == 0) {
      return 3;
    }
  }
  else {
    plVar6 = (long *)(local_28 + 0x48);
    (**(code **)(*plVar6 + 0x10))(plVar6);
    uVar4 = FUN_009fcab0(param_1,&local_28);
    (**(code **)(*plVar6 + 0x18))(plVar6);
    local_28 = 0;
    if ((uVar4 & 1) == 0) {
      return 3;
    }
  }
  iVar3 = FUN_00884840(*param_2,5);
  uVar5 = 0;
  if (iVar3 != 0) {
    uVar5 = 4;
  }
  return uVar5;
}


