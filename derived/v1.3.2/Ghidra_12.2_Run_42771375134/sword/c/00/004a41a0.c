/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004a41a0; name: FUN_004a41a0
 */


void FUN_004a41a0(void *param_1,undefined8 param_2,long param_3)

{
  memcpy(param_1,(void *)(param_3 + 0x10),0x30);
  *(undefined8 *)((long)param_1 + 0x30) = param_2;
  *(long *)((long)param_1 + 0x38) = param_3;
  return;
}


