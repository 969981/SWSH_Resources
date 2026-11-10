/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0081e0e0; name: FUN_0081e0e0
 */


void FUN_0081e0e0(long *param_1)

{
  byte *pbVar1;
  
  switch((int)param_1[1]) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
    if ((void *)*param_1 != (void *)0x0) {
      operator_delete((void *)*param_1);
      return;
    }
    break;
  case 9:
    pbVar1 = (byte *)*param_1;
    if (pbVar1 != (byte *)0x0) {
      if ((*pbVar1 & 1) != 0) {
        operator_delete(*(void **)(pbVar1 + 0x10));
      }
      operator_delete(pbVar1);
      return;
    }
    break;
  case 10:
    if ((long *)*param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0081e164. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)*param_1 + 8))();
      return;
    }
  }
  return;
}


