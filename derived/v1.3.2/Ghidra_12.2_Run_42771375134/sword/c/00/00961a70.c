/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00961a70; name: FUN_00961a70
 */


ulong FUN_00961a70(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  
  FUN_008e0b60();
  uVar1 = FUN_008e5fd0();
  iVar2 = FUN_008e12a0(param_1,0xf);
  return (ulong)(iVar2 * (uVar1 & 0xff)) / 100;
}


