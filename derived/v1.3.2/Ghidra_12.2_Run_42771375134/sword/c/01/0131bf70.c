/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0131bf70; name: FUN_0131bf70
 */


undefined8 FUN_0131bf70(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong local_28;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    return 0;
  }
  if (*(int *)(*(long *)(param_1 + 0x10) + 0x54) == 0) {
    return 0;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    puVar3 = *(undefined8 **)(*(long *)(param_1 + 0x10) + 0x60);
    if (puVar3 == (undefined8 *)0x0) goto LAB_0131bfd8;
    plVar1 = (long *)(**(code **)*puVar3)(puVar3);
    lVar2 = FUN_00c781c0();
    for (; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
      if (plVar1 == (long *)lVar2) {
        puVar3 = puVar3 + -10;
        goto LAB_0131bfd8;
      }
    }
  }
  puVar3 = (undefined8 *)0x0;
LAB_0131bfd8:
  local_28 = FUN_0069d250(puVar3,param_2);
  if ((local_28 & 0xff) == 0) {
    return 0;
  }
  FUN_0069d260(puVar3,&local_28);
  return 1;
}


