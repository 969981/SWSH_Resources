/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00851170; name: FUN_00851170
 */


void FUN_00851170(long *param_1)

{
  long *plVar1;
  undefined *puVar2;
  byte *pbVar3;
  
  *param_1 = (long)(PTR_DAT_02717288 + 0x10);
  pbVar3 = (byte *)param_1[3];
  if (pbVar3 != *(byte **)PTR_DAT_02716d10 && pbVar3 != (byte *)0x0) {
    if ((*pbVar3 & 1) != 0) {
      operator_delete(*(void **)(pbVar3 + 0x10));
    }
    operator_delete(pbVar3);
  }
  puVar2 = PTR_DAT_02716e68;
  param_1[3] = 0;
  if ((*(long **)puVar2 != param_1) && ((long *)param_1[4] != (long *)0x0)) {
    (**(code **)(*(long *)param_1[4] + 8))();
  }
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


