/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0120e840; name: FUN_0120e840
 */


ulong FUN_0120e840(void)

{
  ulong uVar1;
  long lVar2;
  
  if ((*(long *)PTR_DAT_027104b0 == 0) ||
     (lVar2 = *(long *)(*(long *)PTR_DAT_027104b0 + 0x58), lVar2 == 0)) {
    uVar1 = FUN_007a9de0();
    return uVar1;
  }
  return (ulong)*(ushort *)(lVar2 + 0x1f8);
}


