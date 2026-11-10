/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007a3fc0; name: FUN_007a3fc0
 */


long * FUN_007a3fc0(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long *plVar2;
  
  plVar2 = operator_new(0x20);
  *(undefined1 *)(plVar2 + 2) = 0;
  puVar1 = PTR_DAT_02716658;
  *(undefined4 *)((long)plVar2 + 0x14) = 0;
  *(undefined1 *)(plVar2 + 3) = 0;
  *plVar2 = (long)(puVar1 + 0x10);
  plVar2[1] = 0;
  *(undefined4 *)((long)plVar2 + 0x1c) = 0;
  if (param_2 != 0) {
    FUN_007a4020(param_2,plVar2);
  }
  return plVar2;
}


