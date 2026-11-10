/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00367cb0; name: FUN_00367cb0
 */


void FUN_00367cb0(long *param_1,undefined1 *param_2)

{
  char *__s2;
  int iVar1;
  long *plVar2;
  ulong uVar3;
  undefined4 uVar4;
  int *piVar5;
  long lVar6;
  char *local_28;
  
  if ((int *)param_1[0xc] == (int *)0x0) {
    iVar1 = 0x54;
  }
  else {
    iVar1 = *(int *)param_1[0xc] + 0x54;
  }
  *param_2 = 1;
  *(int *)(param_2 + 4) = iVar1;
  piVar5 = (int *)param_1[0xb];
  if (piVar5 != (int *)0x0) {
    *piVar5 = *piVar5 + 1;
  }
  local_28 = (char *)0x0;
  if ((char)param_1[9] == '\0') {
    return;
  }
  plVar2 = (long *)param_1[5];
  iVar1 = *(int *)(*param_1 + 0x10);
  if (iVar1 == 0) {
    uVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,"bad__repx__name",&local_28);
    __s2 = local_28;
  }
  else {
    uVar3 = (**(code **)(*plVar2 + 0x10))
                      (plVar2,*(undefined8 *)(*(long *)(*param_1 + 8) + (ulong)(iVar1 - 1) * 0x10),
                       &local_28);
    __s2 = local_28;
  }
  if ((uVar3 & 1) == 0) {
    return;
  }
  if (__s2 == (char *)0x0) {
    return;
  }
  if (*__s2 == '\0') {
    return;
  }
  local_28 = __s2;
  iVar1 = strcasecmp("eTARGET",__s2);
  if (iVar1 == 0) {
    lVar6 = 0;
  }
  else {
    iVar1 = strcasecmp("eERROR",__s2);
    if (iVar1 != 0) {
      uVar4 = 0;
      goto LAB_00367dc0;
    }
    lVar6 = 1;
  }
  uVar4 = (&DAT_025e76b0)[lVar6 * 4];
LAB_00367dc0:
  (**(code **)(param_2 + 0x20))(param_1[6],uVar4);
  return;
}


