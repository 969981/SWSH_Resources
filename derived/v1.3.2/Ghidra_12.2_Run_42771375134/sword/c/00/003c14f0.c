/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003c14f0; name: FUN_003c14f0
 */


void FUN_003c14f0(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  if (*(long *)(param_1 + 0x50) == 0) {
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = 0;
    *param_3 = 0;
    *(undefined4 *)(param_3 + 1) = 0;
    return;
  }
  FUN_003c57f0();
  return;
}


