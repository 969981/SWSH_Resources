/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0130f9a0; name: FUN_0130f9a0
 */


void FUN_0130f9a0(long *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = FUN_01311b90(*(undefined8 *)(param_2 + 0x1d0),param_2 + 0x180);
  if ((uVar1 & 1) == 0) {
    *param_1 = 0;
  }
  else {
    lVar2 = *(long *)(param_2 + 0x1d0);
    *param_1 = lVar2;
    if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0130f9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
      return;
    }
  }
  return;
}


