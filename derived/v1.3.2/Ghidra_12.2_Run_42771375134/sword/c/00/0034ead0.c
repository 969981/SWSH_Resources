/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0034ead0; name: FUN_0034ead0
 */


void FUN_0034ead0(long *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  char *local_50;
  ulong uStack_48;
  
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
      if (*local_50 == '\0') {
        uVar4 = 0;
        uVar3 = 0;
        uStack_48 = 0;
      }
      else {
        uVar3 = strtoul(local_50,&local_50,10);
        uVar4 = strtoul(local_50,&local_50,10);
        uVar5 = strtoul(local_50,&local_50,10);
        uVar6 = strtoul(local_50,(char **)0x0,10);
        uStack_48 = uVar5 & 0xffffffff | uVar6 << 0x20;
        uVar4 = uVar4 << 0x20;
        uVar3 = uVar3 & 0xffffffff;
      }
      local_50 = (char *)(uVar3 | uVar4);
      (**(code **)(param_3 + 0x20))(param_1[6],&local_50);
    }
  }
  return;
}


