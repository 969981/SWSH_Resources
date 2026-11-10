/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014a5f20; name: FUN_014a5f20
 */


void FUN_014a5f20(long param_1,uint param_2)

{
  undefined8 local_28;
  
  if (*(long *)(param_1 + 0x80) != 0) {
    local_28 = 0;
    FUN_007273c0(*(long *)(param_1 + 0x80),param_2 & 1,&local_28);
  }
  if (*(long *)(param_1 + 0xa8) != 0) {
    FUN_007947b0(*(long *)(param_1 + 0xa8),param_2 & 1);
  }
  if (*(long *)(param_1 + 0xb0) != 0) {
    FUN_007947b0(*(long *)(param_1 + 0xb0),param_2 & 1);
  }
  if (*(long *)(param_1 + 0xb8) != 0) {
    FUN_007947b0(*(long *)(param_1 + 0xb8),param_2 & 1);
  }
  return;
}


