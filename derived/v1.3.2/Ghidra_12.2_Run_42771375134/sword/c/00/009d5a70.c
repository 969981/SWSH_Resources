/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009d5a70; name: FUN_009d5a70
 */


void FUN_009d5a70(long *param_1)

{
  long *plVar1;
  byte *pbVar2;
  
  *param_1 = (long)(PTR_DAT_027189c0 + 0x10);
  pbVar2 = (byte *)param_1[3];
  if (pbVar2 != *(byte **)PTR_DAT_02716d10 && pbVar2 != (byte *)0x0) {
    if ((*pbVar2 & 1) != 0) {
      operator_delete(*(void **)(pbVar2 + 0x10));
    }
    operator_delete(pbVar2);
  }
  param_1[3] = 0;
  if ((((param_1[1] & 1U) != 0) &&
      (plVar1 = (long *)(param_1[1] & 0xfffffffffffffffe), plVar1 != (long *)0x0)) &&
     (plVar1[1] == 0)) {
    if (*plVar1 != 0) {
      FUN_0080f500(plVar1);
    }
    operator_delete(plVar1);
  }
  param_1[1] = 0;
  return;
}


