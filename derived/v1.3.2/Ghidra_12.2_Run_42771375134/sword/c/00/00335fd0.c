/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00335fd0; name: FUN_00335fd0
 */


void FUN_00335fd0(long *param_1,undefined1 *param_2)

{
  char *__s;
  long *plVar1;
  ulong uVar2;
  size_t sVar3;
  int iVar4;
  int *piVar5;
  undefined8 *puVar6;
  char *pcVar7;
  code *pcVar8;
  undefined1 local_34 [4];
  
  if ((int *)param_1[6] == (int *)0x0) {
    iVar4 = 0x7c;
  }
  else {
    iVar4 = *(int *)param_1[6] + 0x7c;
  }
  *param_2 = 1;
  *(int *)(param_2 + 4) = iVar4;
  piVar5 = (int *)param_1[5];
  if (piVar5 != (int *)0x0) {
    *piVar5 = *piVar5 + 1;
  }
  uVar2 = (**(code **)(param_2 + 0x18))(param_1[2]);
  plVar1 = (long *)param_1[1];
  puVar6 = (undefined8 *)param_1[3];
  iVar4 = *(int *)(*param_1 + 0x10);
  if (iVar4 == 0) {
    pcVar7 = "bad__repx__name";
  }
  else {
    pcVar7 = *(char **)(*(long *)(*param_1 + 8) + (ulong)(iVar4 - 1) * 0x10);
  }
  __s = "true";
  if ((uVar2 & 1) == 0) {
    __s = "false";
  }
  if (*__s != '\0') {
    pcVar8 = *(code **)*puVar6;
    sVar3 = strlen(__s);
    (*pcVar8)(puVar6,__s,sVar3);
  }
  local_34[0] = 0;
  (**(code **)*puVar6)(puVar6,local_34,1);
  (**(code **)(*plVar1 + 0x10))(plVar1,pcVar7,puVar6[4]);
  puVar6[3] = 0;
  return;
}


