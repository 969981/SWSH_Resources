/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01451a70; name: FUN_01451a70
 */


undefined8 FUN_01451a70(long param_1)

{
  long lVar1;
  undefined8 local_48;
  char *local_40;
  undefined8 local_38;
  undefined1 auStack_30 [16];
  
  if (*(char *)(param_1 + 0x138) != '\0') {
    return 1;
  }
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 == 0) {
    return 0;
  }
  if (*(char *)(lVar1 + 0x170) == '\0') {
    return 0;
  }
  FUN_012b4da0(&local_48,*(undefined8 *)(lVar1 + 400),*(undefined8 *)(lVar1 + 0x180));
  FUN_012b4070(param_1 + 0x110,&local_48);
  local_48 = 0x4c1ee427e0552124;
  local_40 = "jobList";
  local_38 = 7;
  FUN_012b4250(auStack_30,param_1 + 0x110,&local_48);
  FUN_012b4070(param_1 + 0x120,auStack_30);
  *(undefined1 *)(param_1 + 0x138) = 1;
  return 1;
}


