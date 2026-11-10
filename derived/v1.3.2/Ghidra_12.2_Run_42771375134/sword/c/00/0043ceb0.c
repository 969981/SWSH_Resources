/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0043ceb0; name: FUN_0043ceb0
 */


long * FUN_0043ceb0(undefined4 param_1,undefined4 param_2)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x50);
  if (plVar1 != (long *)0x0) {
    FUN_0043d060(plVar1,param_1,param_2);
    *plVar1 = (long)(PTR_DAT_02712ef8 + 0x10);
    FUN_0043db70(plVar1);
  }
  return plVar1;
}


