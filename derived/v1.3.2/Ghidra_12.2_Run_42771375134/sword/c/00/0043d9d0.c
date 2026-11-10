/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0043d9d0; name: FUN_0043d9d0
 */


void FUN_0043d9d0(uint param_1)

{
  uint uVar1;
  
  uVar1 = (param_1 & 0xff00) - 0x100 >> 8;
  if (uVar1 < 0x30) {
                    /* WARNING: Jumptable with 0 entries at 0x0043da04 */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_01d54abc + *(int *)(&DAT_01d54abc + (ulong)uVar1 * 4)))(0);
    return;
  }
  return;
}


