/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01195470; name: FUN_01195470
 */


void FUN_01195470(long param_1)

{
  long lVar1;
  
  if ((*(long *)(param_1 + 0x60) != 0) && ((*(byte *)(*(long *)(param_1 + 0x60) + 0x2fa) & 1) != 0))
  {
    FUN_006d0420(*(undefined8 *)(param_1 + 0x60));
    lVar1 = *(long *)(param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x60) = 0;
    if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x011954b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
      return;
    }
  }
  return;
}


