/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012e8a50; name: FUN_012e8a50
 */


void FUN_012e8a50(long *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  
  if ((*(long *)(param_2 + 0x838) == 0) || (uVar1 = FUN_01314dd0(), (uVar1 & 1) == 0)) {
    *param_1 = 0;
  }
  else {
    lVar2 = *(long *)(param_2 + 0x838);
    *param_1 = lVar2;
    if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x012e8a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
      return;
    }
  }
  return;
}


