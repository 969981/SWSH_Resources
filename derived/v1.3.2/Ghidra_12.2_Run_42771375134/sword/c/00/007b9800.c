/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007b9800; name: FUN_007b9800
 */


undefined8 FUN_007b9800(undefined8 param_1,int param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if ((*(long *)PTR_DAT_02716a30 != 0) && (plVar1 = (long *)FUN_0193fc60(), plVar1 != (long *)0x0))
  {
    puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x18))();
    puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x28))(plVar1);
    if (puVar2 == puVar3) {
      return 0;
    }
    do {
      if (param_2 == 0) {
        return *puVar2;
      }
      puVar2 = puVar2 + 1;
      puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x28))(plVar1);
      param_2 = param_2 + -1;
    } while (puVar2 != puVar3);
  }
  return 0;
}


