/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00647380; name: FUN_00647380
 */


undefined8 FUN_00647380(long param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x184) != '\0') {
    return 0;
  }
  FUN_00647410();
  iVar1 = *(int *)(param_1 + 0x174);
  if (iVar1 < 1) {
    iVar2 = 0;
  }
  else {
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = *(int *)(param_1 + 0x170) / iVar1;
    }
  }
  *(int *)(param_1 + 0x17c) = iVar2;
  *(undefined4 *)(param_1 + 0x180) = param_2;
  *(undefined1 *)(param_1 + 0x184) = 1;
  if (*(long *)(param_1 + 0x160) == 0) {
    *(undefined1 *)(param_1 + 0x184) = 0;
    return 0;
  }
  *(long *)(param_1 + 0x168) = *(long *)(param_1 + 0x160);
  *(undefined4 *)(param_1 + 0x178) = 0;
  return 1;
}


