/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011ad870; name: FUN_011ad870
 */


long * FUN_011ad870(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long *plVar2;
  
  plVar2 = operator_new(0x28);
  *(undefined1 *)(plVar2 + 2) = 0;
  puVar1 = PTR_DAT_027254e0;
  *(undefined1 *)(plVar2 + 4) = 0;
  plVar2[3] = 0;
  *plVar2 = (long)(puVar1 + 0x10);
  plVar2[1] = 0;
  *(undefined4 *)((long)plVar2 + 0x24) = 0;
  if (param_2 != 0) {
    FUN_011ad8d0(param_2,plVar2);
  }
  return plVar2;
}


