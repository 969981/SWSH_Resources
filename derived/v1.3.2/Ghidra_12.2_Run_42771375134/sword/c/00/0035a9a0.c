/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0035a9a0; name: FUN_0035a9a0
 */


void FUN_0035a9a0(long *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  ulong unaff_x21;
  byte local_38 [8];
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
    if ((((uVar3 & 1) != 0) && (local_28 != (char *)0x0)) && (*local_28 != '\0')) {
      if (*local_28 != '\0') {
        unaff_x21 = strtoul(local_28,&local_28,10);
      }
      (**(code **)(*(long *)param_1[6] + 0x180))(local_38);
      if (((local_38[0] & 1) == 0) || (1 < *(int *)(param_3 + 0x10) - 0x2bU)) {
        (**(code **)(param_3 + 0x20))(param_1[6],unaff_x21 & 0xffffffff);
      }
    }
  }
  return;
}


