/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00338180; name: FUN_00338180
 */


void FUN_00338180(long *param_1,undefined1 *param_2)

{
  long *plVar1;
  char *__s;
  size_t sVar2;
  int iVar3;
  int *piVar4;
  undefined8 *puVar5;
  char *pcVar6;
  code *pcVar7;
  undefined1 local_34 [4];
  
  if ((int *)param_1[6] == (int *)0x0) {
    iVar3 = 8;
  }
  else {
    iVar3 = *(int *)param_1[6] + 8;
  }
  *param_2 = 1;
  *(int *)(param_2 + 4) = iVar3;
  piVar4 = (int *)param_1[5];
  if (piVar4 != (int *)0x0) {
    *piVar4 = *piVar4 + 1;
  }
  __s = (char *)(**(code **)(param_2 + 0x18))(param_1[2]);
  plVar1 = (long *)param_1[1];
  puVar5 = (undefined8 *)param_1[3];
  iVar3 = *(int *)(*param_1 + 0x10);
  if (iVar3 == 0) {
    pcVar6 = "bad__repx__name";
  }
  else {
    pcVar6 = *(char **)(*(long *)(*param_1 + 8) + (ulong)(iVar3 - 1) * 0x10);
  }
  if ((__s != (char *)0x0) && (*__s != '\0')) {
    pcVar7 = *(code **)*puVar5;
    sVar2 = strlen(__s);
    (*pcVar7)(puVar5,__s,sVar2);
  }
  local_34[0] = 0;
  (**(code **)*puVar5)(puVar5,local_34,1);
  (**(code **)(*plVar1 + 0x10))(plVar1,pcVar6,puVar5[4]);
  puVar5[3] = 0;
  return;
}


