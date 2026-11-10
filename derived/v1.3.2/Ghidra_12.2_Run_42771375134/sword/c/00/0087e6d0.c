/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0087e6d0; name: FUN_0087e6d0
 */


ulong FUN_0087e6d0(long param_1,undefined2 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  ushort local_24 [2];
  
  uVar1 = FUN_00868cc0(*(undefined8 *)(param_1 + 0x98));
  uVar2 = FUN_008778b0(uVar1,param_2,local_24);
  if ((uVar2 & 1) == 0) {
    uVar2 = FUN_0086b360(*(undefined8 *)(param_1 + 0x98));
    return uVar2;
  }
  return (ulong)local_24[0];
}


