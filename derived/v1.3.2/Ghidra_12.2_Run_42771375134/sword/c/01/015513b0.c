/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 015513b0; name: FUN_015513b0
 */


void FUN_015513b0(long param_1,int param_2,undefined8 *param_3)

{
  long lVar1;
  
  lVar1 = param_1 + 0x468;
  if (param_2 != 3) {
    lVar1 = param_1 + (long)param_2 * 0x158 + 0x60;
  }
  FUN_008664a0(*param_3,lVar1);
  return;
}


