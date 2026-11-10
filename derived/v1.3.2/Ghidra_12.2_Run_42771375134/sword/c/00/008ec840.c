/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008ec840; name: FUN_008ec840
 */


ulong FUN_008ec840(ulong param_1)

{
  byte bVar1;
  uint uVar2;
  
  if (((uint)param_1 & 0xff) == 5) {
    bVar1 = FUN_008ed5b0(DAT_02a4d198,100);
    if (bVar1 < 0x23) {
      return 2;
    }
    if (0x45 < bVar1) {
      uVar2 = 4;
      if (0x54 < bVar1) {
        uVar2 = 5;
      }
      return (ulong)uVar2;
    }
    param_1 = 3;
  }
  return param_1;
}


