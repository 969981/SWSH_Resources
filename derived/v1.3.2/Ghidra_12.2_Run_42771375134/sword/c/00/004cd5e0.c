/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004cd5e0; name: FUN_004cd5e0
 */


void FUN_004cd5e0(long param_1,undefined8 param_2)

{
  if (*(long *)(param_1 + 0xb0) != 0) {
    FUN_004cd640(param_2,param_1 + 0x170,param_1 + 0x10);
  }
  if (*(long *)(param_1 + 0x160) == 0) {
    return;
  }
  FUN_004cdd70(param_2,param_1 + 0x180,param_1 + 0xc0);
  return;
}


