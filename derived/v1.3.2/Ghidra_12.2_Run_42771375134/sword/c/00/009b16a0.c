/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009b16a0; name: FUN_009b16a0
 */


void FUN_009b16a0(long param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = *(long *)(param_1 + 0x3b8);
  if (lVar1 == 0) {
    return;
  }
  plVar2 = (long *)(lVar1 + 0x58);
  (**(code **)(*plVar2 + 0x10))(plVar2);
  FUN_009c4450(lVar1);
                    /* WARNING: Could not recover jumptable at 0x009b16e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x18))(plVar2);
  return;
}


