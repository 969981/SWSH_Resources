/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01505e60; name: FUN_01505e60
 */


void FUN_01505e60(long param_1,undefined8 *param_2,uint param_3,uint param_4)

{
  if ((param_3 < 0x20) && (param_4 < 0x1e)) {
    FUN_008664b0(*param_2,param_1 + (ulong)param_3 * 0x2850 + (ulong)param_4 * 0x158 + 0x60);
    return;
  }
  return;
}


