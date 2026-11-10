/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00511040; name: FUN_00511040
 */


void FUN_00511040(undefined8 *param_1,int param_2)

{
  if ((param_2 == 0x19) || (param_2 == -1)) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  FUN_00510a10();
  return;
}


