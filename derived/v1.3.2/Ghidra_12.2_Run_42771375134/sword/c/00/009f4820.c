/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009f4820; name: FUN_009f4820
 */


void FUN_009f4820(long param_1,undefined8 param_2,long param_3)

{
  FUN_016b2da0(*(undefined8 *)(param_1 + 0x5e0),0);
  if (param_3 == -0x1ae385bfc1dbb86a) {
    *(undefined4 *)(param_1 + 0x6b0) = 5;
  }
  else {
    *(undefined4 *)(param_1 + 0x6b0) = 2;
    if (*(long *)(param_1 + 0x4c0) != 0) {
      FUN_016d2080();
      return;
    }
  }
  return;
}


