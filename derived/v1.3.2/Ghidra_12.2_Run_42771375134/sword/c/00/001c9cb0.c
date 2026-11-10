/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001c9cb0; name: FUN_001c9cb0
 */


long * FUN_001c9cb0(undefined8 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  
  plVar2 = (long *)*param_1;
  *(undefined2 *)((long)plVar2 + 10) = 2;
  puVar1 = PTR_DAT_02711070;
  *(undefined4 *)(plVar2 + 4) = 1;
  *(undefined2 *)((long)plVar2 + 0x3c) = 0;
  *plVar2 = (long)(puVar1 + 0x10);
  plVar2[3] = (long)(puVar1 + 0xe0);
  *param_1 = plVar2 + 10;
  plVar2[8] = (long)plVar2;
  FUN_001b30d0(*(undefined8 *)PTR_DAT_02711040,plVar2);
  return plVar2;
}


