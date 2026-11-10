/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00326370; name: FUN_00326370
 */


undefined8 FUN_00326370(long *param_1,undefined4 *param_2)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  char *local_28;
  
  local_28 = (char *)0x0;
  if ((char)param_1[9] != '\0') {
    plVar2 = (long *)param_1[5];
    iVar1 = *(int *)(*param_1 + 0x10);
    if (iVar1 == 0) {
      uVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,"bad__repx__name",&local_28);
    }
    else {
      uVar3 = (**(code **)(*plVar2 + 0x10))
                        (plVar2,*(undefined8 *)(*(long *)(*param_1 + 8) + (ulong)(iVar1 - 1) * 0x10)
                         ,&local_28);
    }
    if ((uVar3 & 1) != 0) {
      uVar4 = 0;
      if (local_28 != (char *)0x0) {
        if (*local_28 == '\0') {
          return 0;
        }
        if (*local_28 != '\0') {
          uVar3 = strtoul(local_28,&local_28,10);
          *param_2 = (int)uVar3;
          uVar3 = strtoul(local_28,&local_28,10);
          param_2[1] = (int)uVar3;
          uVar3 = strtoul(local_28,&local_28,10);
          param_2[2] = (int)uVar3;
          uVar3 = strtoul(local_28,(char **)0x0,10);
          param_2[3] = (int)uVar3;
        }
        uVar4 = 1;
      }
      return uVar4;
    }
  }
  return 0;
}


