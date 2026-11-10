/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007c1d50; name: FUN_007c1d50
 */


ulong FUN_007c1d50(long *param_1)

{
  ushort *puVar1;
  ulong uVar2;
  
  puVar1 = (ushort *)(**(code **)(*param_1 + 0x10))();
  uVar2 = 0;
  if (puVar1 != (ushort *)0x0) {
    uVar2 = (ulong)((byte)puVar1[2] & 1) << 0x20 |
            (ulong)*puVar1 |
            ((ulong)(byte)puVar1[1] | ((ulong)*(byte *)((long)puVar1 + 3) & 0xf) << 8) << 0x10;
  }
  return uVar2;
}


