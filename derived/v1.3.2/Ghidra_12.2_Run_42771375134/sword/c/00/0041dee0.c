/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0041dee0; name: FUN_0041dee0
 */


long * FUN_0041dee0(long param_1,long *param_2)

{
  undefined *puVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x38);
  if (plVar2 != (long *)0x0) {
    FUN_004b7930(plVar2);
    puVar1 = PTR_DAT_02712c38 + 0x10;
    plVar2[4] = 0;
    plVar2[5] = 0;
    plVar2[2] = (long)param_2;
    plVar2[3] = 0;
    *plVar2 = (long)puVar1;
    plVar2[1] = param_1;
    (**(code **)(*param_2 + 0x10))(param_2);
  }
  return plVar2;
}


