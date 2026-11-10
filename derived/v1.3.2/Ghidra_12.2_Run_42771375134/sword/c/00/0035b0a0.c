/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0035b0a0; name: FUN_0035b0a0
 */


void FUN_0035b0a0(long *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  char *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  byte local_58 [8];
  char *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  char *local_30;
  undefined1 auStack_28 [8];
  
  local_50 = (char *)0x0;
  if ((char)param_1[9] != '\0') {
    plVar2 = (long *)param_1[5];
    iVar1 = *(int *)(*param_1 + 0x10);
    if (iVar1 == 0) {
      uVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,"bad__repx__name",&local_50);
    }
    else {
      uVar3 = (**(code **)(*plVar2 + 0x10))
                        (plVar2,*(undefined8 *)(*(long *)(*param_1 + 8) + (ulong)(iVar1 - 1) * 0x10)
                         ,&local_50);
    }
    if ((((uVar3 & 1) != 0) && (local_50 != (char *)0x0)) && (*local_50 != '\0')) {
      local_30 = local_50;
      if (*local_50 != '\0') {
        FUN_00325ee0(auStack_28,&local_50,&local_30);
      }
      (**(code **)(*(long *)param_1[6] + 0x180))(local_58);
      if (((local_58[0] & 1) == 0) || (1 < *(int *)(param_3 + 0x10) - 0x2bU)) {
        local_78 = local_50;
        local_70 = local_48;
        local_68 = local_40;
        local_60 = local_38;
        (**(code **)(param_3 + 0x20))(param_1[6],&local_78);
        return;
      }
    }
  }
  return;
}


