/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0131c9f0; name: FUN_0131c9f0
 */


void FUN_0131c9f0(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_48;
  char *pcStack_40;
  undefined8 local_38;
  long local_30;
  ulong local_28;
  
  FUN_0131b240(param_1,2);
  local_48 = 0xa96c09b2c7be4b0a;
  pcStack_40 = "to_kw21_sleepA01";
  local_38 = 0x10;
  local_30 = 0;
  if (*(long *)(param_1 + 0x10) == 0) {
    return;
  }
  if (*(int *)(*(long *)(param_1 + 0x10) + 0x54) == 0) goto LAB_0131caa8;
  if (*(long *)(param_1 + 0x10) == 0) {
LAB_0131ca80:
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar3 = *(undefined8 **)(*(long *)(param_1 + 0x10) + 0x60);
    if (puVar3 != (undefined8 *)0x0) {
      plVar1 = (long *)(**(code **)*puVar3)(puVar3);
      lVar2 = FUN_00c781c0();
      for (; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
        if (plVar1 == (long *)lVar2) {
          puVar3 = puVar3 + -10;
          goto LAB_0131ca84;
        }
      }
      goto LAB_0131ca80;
    }
  }
LAB_0131ca84:
  local_28 = FUN_0069d250(puVar3,&local_48);
  if ((local_28 & 0xff) != 0) {
    FUN_0069d260(puVar3,&local_28);
  }
LAB_0131caa8:
  if (local_30 != 0) {
    (**(code **)(*(long *)(local_30 + 0x48) + 0x18))();
  }
  return;
}


