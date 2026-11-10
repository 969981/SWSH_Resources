/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013001d0; name: FUN_013001d0
 */


void FUN_013001d0(long *param_1)

{
  long *plVar1;
  ulong uVar2;
  
  *param_1 = (long)(PTR_DAT_02727cf8 + 0x10);
  plVar1 = (long *)param_1[5];
  if ((plVar1 == (long *)0x0) || (*plVar1 != 0)) {
    uVar2 = param_1[1];
  }
  else {
    operator_delete__(plVar1);
    uVar2 = param_1[1];
  }
  if ((((uVar2 & 1) == 0) || (plVar1 = (long *)(uVar2 & 0xfffffffffffffffe), plVar1 == (long *)0x0))
     || (plVar1[1] != 0)) {
    param_1[1] = 0;
    return;
  }
  if (*plVar1 != 0) {
    FUN_0080f500(plVar1);
  }
  operator_delete(plVar1);
  param_1[1] = 0;
  return;
}


