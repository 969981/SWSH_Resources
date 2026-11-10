/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00853480; name: FUN_00853480
 */


void FUN_00853480(long *param_1)

{
  long *plVar1;
  
  *param_1 = (long)(PTR_DAT_02717298 + 0x10);
  FUN_00853390();
  if ((((param_1[1] & 1U) != 0) &&
      (plVar1 = (long *)(param_1[1] & 0xfffffffffffffffe), plVar1 != (long *)0x0)) &&
     (plVar1[1] == 0)) {
    if (*plVar1 != 0) {
      FUN_0080f500(plVar1);
    }
    operator_delete(plVar1);
  }
  operator_delete(param_1);
  return;
}


