/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0131bec0; name: FUN_0131bec0
 */


undefined8 FUN_0131bec0(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 local_28;
  
  if ((*(long *)(param_1 + 0x10) == 0) || (*(int *)(*(long *)(param_1 + 0x10) + 0x54) == 0)) {
    FUN_006b91e0(&local_28,0);
    return local_28;
  }
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x10) + 0x60), puVar4 != (undefined8 *)0x0)) {
    plVar1 = (long *)(**(code **)*puVar4)(puVar4);
    lVar2 = FUN_00c781c0();
    for (; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
      if (plVar1 == (long *)lVar2) {
        puVar4 = puVar4 + -10;
        goto LAB_0131bf24;
      }
    }
  }
  puVar4 = (undefined8 *)0x0;
LAB_0131bf24:
  uVar3 = FUN_0069d2b0(puVar4);
  return uVar3;
}


