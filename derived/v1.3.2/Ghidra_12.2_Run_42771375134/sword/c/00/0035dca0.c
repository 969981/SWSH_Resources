/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0035dca0; name: FUN_0035dca0
 */


void FUN_0035dca0(long *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  char *local_58;
  undefined4 local_50;
  byte local_48 [8];
  char *local_40;
  undefined4 local_38;
  char *local_30;
  undefined1 auStack_28 [8];
  
  local_40 = (char *)0x0;
  if ((char)param_1[9] != '\0') {
    plVar2 = (long *)param_1[5];
    iVar1 = *(int *)(*param_1 + 0x10);
    if (iVar1 == 0) {
      uVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,"bad__repx__name",&local_40);
    }
    else {
      uVar3 = (**(code **)(*plVar2 + 0x10))
                        (plVar2,*(undefined8 *)(*(long *)(*param_1 + 8) + (ulong)(iVar1 - 1) * 0x10)
                         ,&local_40);
    }
    if ((((uVar3 & 1) != 0) && (local_40 != (char *)0x0)) && (*local_40 != '\0')) {
      local_30 = local_40;
      if (*local_40 != '\0') {
        FUN_003222d0(auStack_28,&local_40,&local_30);
      }
      (**(code **)(*(long *)param_1[6] + 0x180))(local_48);
      if (((local_48[0] & 1) == 0) || (1 < *(int *)(param_3 + 0x10) - 0x2bU)) {
        local_58 = local_40;
        local_50 = local_38;
        (**(code **)(param_3 + 0x20))(param_1[6],&local_58);
        return;
      }
    }
  }
  return;
}


