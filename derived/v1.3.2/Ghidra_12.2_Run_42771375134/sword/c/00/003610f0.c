/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003610f0; name: FUN_003610f0
 */


void FUN_003610f0(long *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  code *pcVar4;
  long lVar5;
  char *unaff_x21;
  char *local_38;
  uint local_24;
  
  local_38 = (char *)0x0;
  if ((char)param_1[9] != '\0') {
    plVar2 = (long *)param_1[5];
    iVar1 = *(int *)(*param_1 + 0x10);
    if (iVar1 == 0) {
      uVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,"bad__repx__name",&local_38);
    }
    else {
      uVar3 = (**(code **)(*plVar2 + 0x10))
                        (plVar2,*(undefined8 *)(*(long *)(*param_1 + 8) + (ulong)(iVar1 - 1) * 0x10)
                         ,&local_38);
    }
    if ((((uVar3 & 1) != 0) && (local_38 != (char *)0x0)) && (*local_38 != '\0')) {
      if (*local_38 != '\0') {
        unaff_x21 = (char *)strtoul(local_38,&local_38,10);
      }
      lVar5 = param_1[6];
      (**(code **)(*(long *)(param_3 + 0x10) + 0x28))(lVar5,&local_38,&local_24);
      if (*(char *)(param_3 + 8) == '\0') {
        pcVar4 = *(code **)(*(long *)(param_3 + 0x10) + 0x20);
        uVar3 = (ulong)unaff_x21 & 0xffffffff;
        unaff_x21 = local_38;
      }
      else {
        uVar3 = (ulong)local_24;
        pcVar4 = *(code **)(*(long *)(param_3 + 0x10) + 0x20);
      }
      (*pcVar4)(lVar5,(ulong)unaff_x21 & 0xffffffff,uVar3);
    }
  }
  return;
}


