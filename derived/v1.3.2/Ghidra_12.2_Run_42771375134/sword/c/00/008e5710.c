/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008e5710; name: FUN_008e5710
 */


void FUN_008e5710(long param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  
  if (((param_3 & 0xff) != 0) && (*(ushort *)(param_1 + 700) < 0x1fe)) {
    uVar2 = (uint)*(ushort *)(param_1 + 700) + (param_3 & 0xff);
    iVar1 = uVar2 + 2;
    if (uVar2 < 0x1ff) {
      iVar1 = 0;
    }
    if ((param_3 - iVar1 & 0xff) != 0 && param_2 < 6) {
                    /* WARNING: Could not recover jumptable at 0x008e575c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&DAT_02149930 + *(int *)(&DAT_02149930 + (ulong)param_2 * 4)))();
      return;
    }
  }
  return;
}


