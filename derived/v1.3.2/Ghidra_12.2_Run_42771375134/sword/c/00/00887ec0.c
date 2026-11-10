/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00887ec0; name: FUN_00887ec0
 */


long FUN_00887ec0(long param_1,ushort param_2)

{
  ushort uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x160);
  if (((lVar2 == 0) || (*(ushort *)(lVar2 + 2) <= param_2)) ||
     (uVar1 = *(ushort *)(lVar2 + (ulong)param_2 * 2 + 0x44), *(ushort *)(lVar2 + 4) <= uVar1)) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  return lVar2 + (ulong)*(uint *)(lVar2 + 0x40) + (ulong)uVar1 * 0x30;
}


