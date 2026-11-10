/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004f8920; name: FUN_004f8920
 */


undefined8 FUN_004f8920(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long *plVar3;
  char local_24 [4];
  
  local_24[0] = '\x01';
  puVar1 = (undefined8 *)0x0;
  if ((*(byte *)((long)param_1 + 0x34) & 2) != 0) {
    puVar1 = param_1 + 1;
  }
  plVar3 = *(long **)PTR_DAT_027137d8;
  if ((*(byte *)((long)param_1 + 0x34) & 1) == 0) {
    iVar2 = (**(code **)(*plVar3 + 0x18))
                      (plVar3,*(undefined4 *)param_1,*(undefined4 *)(param_1 + 6),puVar1,local_24,
                       param_2);
  }
  else {
    iVar2 = (**(code **)(*plVar3 + 0x10))
                      (plVar3,*param_1,*(undefined4 *)(param_1 + 6),puVar1,local_24,param_2);
  }
  if (iVar2 == 1) {
    if (*param_2 < 1) {
      if ((*(int *)(param_1 + 6) != 0) && (local_24[0] != '\0')) {
        return 1;
      }
    }
    else if (local_24[0] != '\0') {
      return 1;
    }
  }
  return 2;
}


