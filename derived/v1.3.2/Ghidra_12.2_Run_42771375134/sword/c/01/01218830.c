/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01218830; name: FUN_01218830
 */


ulong FUN_01218830(void)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar1 = FUN_007a9de0();
  lVar2 = *(long *)PTR_DAT_027185f8;
  if (lVar2 != 0) {
    uVar1 = FUN_0120e800(lVar2);
    if (uVar1 != 0) {
      uVar3 = (ulong)uVar1;
      uVar1 = FUN_0120e840(lVar2);
      goto LAB_01218878;
    }
    uVar1 = FUN_007a9de0();
  }
  uVar3 = 0;
LAB_01218878:
  return uVar3 | (ulong)(uVar1 & 0xffff) << 0x20;
}


