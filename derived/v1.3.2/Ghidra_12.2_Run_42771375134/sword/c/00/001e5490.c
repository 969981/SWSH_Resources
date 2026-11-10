/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001e5490; name: FUN_001e5490
 */


long * FUN_001e5490(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  long *plVar2;
  
  puVar1 = PTR_DAT_027110d0;
  plVar2 = (long *)*param_1;
  *(undefined2 *)((long)plVar2 + 10) = 2;
  *(undefined4 *)(plVar2 + 3) = 1;
  *plVar2 = (long)(puVar1 + 0x10);
  plVar2[2] = (long)(puVar1 + 0xe0);
  FUN_003b23b0(plVar2 + 4,0);
  *param_1 = *param_1 + 0x40;
  FUN_003b2c40(plVar2 + 4,param_2);
  return plVar2;
}


