/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008fb250; name: FUN_008fb250
 */


void FUN_008fb250(long *param_1,long param_2,byte param_3)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = FUN_008efa90(*(undefined4 *)(param_2 + 0x150),
                       *(undefined1 *)(*(long *)(param_2 + 0x88) + 0x3b9),param_3);
  if ((uVar1 & 1) == 0) {
    *param_1 = 0;
  }
  else {
    lVar2 = *(long *)(param_2 + (ulong)param_3 * 8 + 0x418);
    *param_1 = lVar2;
    if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x008fb2a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
      return;
    }
  }
  return;
}


