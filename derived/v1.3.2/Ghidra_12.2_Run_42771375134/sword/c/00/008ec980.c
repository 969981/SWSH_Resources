/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008ec980; name: FUN_008ec980
 */


ulong FUN_008ec980(undefined8 param_1,long param_2)

{
  ulong uVar1;
  uint uVar2;
  
  if ((int)param_1 == 0xae) {
    if (param_2 != 0) {
      uVar1 = FUN_008e29c0(param_2,7);
      uVar2 = 0;
      if ((uVar1 & 1) == 0) {
        uVar2 = 7;
      }
      return (ulong)uVar2;
    }
    param_1 = 0xae;
  }
  uVar1 = FUN_00880f80(param_1);
  return uVar1;
}


