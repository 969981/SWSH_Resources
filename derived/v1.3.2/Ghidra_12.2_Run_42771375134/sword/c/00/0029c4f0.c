/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0029c4f0; name: FUN_0029c4f0
 */


void FUN_0029c4f0(long param_1,long param_2,ulong param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  long local_30;
  char local_28 [4];
  char local_24 [4];
  
  puVar1 = (undefined8 *)(param_1 + 8);
  if ((param_3 & 1) == 0) {
    puVar1 = (undefined8 *)0x0;
  }
  if (param_2 != 0) {
    local_30 = param_2;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_003ff570(*puVar1);
      plVar2 = (long *)FUN_0029daf0(param_1 + 0x48,&local_30,local_28);
      if (local_28[0] == '\0') {
        *plVar2 = local_30;
      }
      FUN_003ff5a0(*puVar1);
      return;
    }
    plVar2 = (long *)FUN_0029daf0(param_1 + 0x48,&local_30,local_24);
    if (local_24[0] == '\0') {
      *plVar2 = local_30;
      return;
    }
  }
  return;
}


