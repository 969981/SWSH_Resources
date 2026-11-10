/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a19410; name: FUN_00a19410
 */


void FUN_00a19410(long param_1,int param_2,undefined4 param_3)

{
  if (param_2 == 1) {
    FUN_00a1a880(*(long *)(param_1 + 0x758) + 0x200,param_3);
    return;
  }
  if (param_2 == 0) {
    FUN_00a1a880(*(undefined8 *)(param_1 + 0x758),param_3);
    return;
  }
  return;
}


