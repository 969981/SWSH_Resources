/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01538ef0; name: FUN_01538ef0
 */


uint FUN_01538ef0(long param_1,uint param_2)

{
  if (param_2 < 10000000) {
    *(uint *)(param_1 + 100) = *(int *)(param_1 + 100) + param_2;
    FUN_01528980(0x2c);
    if (*(uint *)(param_1 + 100) < 10000000) {
      return *(uint *)(param_1 + 100);
    }
  }
  *(undefined4 *)(param_1 + 100) = 9999999;
  return 9999999;
}


