/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014adc40; name: FUN_014adc40
 */


ulong FUN_014adc40(undefined8 param_1,undefined4 param_2)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  
  uVar2 = FUN_00879130();
  if ((uVar2 & 1) != 0) {
    return 6;
  }
  uVar2 = FUN_008790d0(param_1,param_2);
  uVar1 = (uint)uVar2;
  if (uVar1 != 0) {
    if (0xf < uVar1) {
      if (uVar1 < 0x1a) {
        return 2;
      }
      if (uVar1 < 0x1e) {
        return 3;
      }
      uVar3 = 4;
      if (uVar1 != 0x1e) {
        uVar3 = 5;
      }
      return (ulong)uVar3;
    }
    uVar2 = 1;
  }
  return uVar2;
}


