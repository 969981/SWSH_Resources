/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009344e0; name: FUN_009344e0
 */


undefined8 FUN_009344e0(long param_1,byte param_2,uint param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((param_2 < 6) && ((int)param_3 < 5)) {
    uVar1 = *(undefined8 *)(param_1 + (ulong)param_2 * 0xa0 + (ulong)param_3 * 0x20 + 8);
  }
  return uVar1;
}


