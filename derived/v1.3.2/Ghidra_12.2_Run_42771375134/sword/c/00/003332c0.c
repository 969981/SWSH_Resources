/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003332c0; name: FUN_003332c0
 */


void FUN_003332c0(long *param_1,undefined1 *param_2)

{
  long *plVar1;
  int iVar2;
  int *piVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined1 local_24 [4];
  
  if ((int *)param_1[6] == (int *)0x0) {
    iVar2 = 0x80;
  }
  else {
    iVar2 = *(int *)param_1[6] + 0x80;
  }
  *param_2 = 1;
  *(int *)(param_2 + 4) = iVar2;
  piVar3 = (int *)param_1[5];
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  (**(code **)(param_2 + 0x18))(&local_40,param_1[2]);
  plVar1 = (long *)param_1[1];
  puVar4 = (undefined8 *)param_1[3];
  iVar2 = *(int *)(*param_1 + 0x10);
  if (iVar2 == 0) {
    pcVar5 = "bad__repx__name";
  }
  else {
    pcVar5 = *(char **)(*(long *)(*param_1 + 8) + (ulong)(iVar2 - 1) * 0x10);
  }
  local_50 = local_40;
  local_48 = local_38;
  FUN_0031b3b0(puVar4,&local_50);
  local_24[0] = 0;
  (**(code **)*puVar4)(puVar4,local_24,1);
  (**(code **)(*plVar1 + 0x10))(plVar1,pcVar5,puVar4[4]);
  puVar4[3] = 0;
  return;
}


