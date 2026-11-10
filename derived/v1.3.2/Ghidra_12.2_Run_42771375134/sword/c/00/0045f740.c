/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0045f740; name: FUN_0045f740
 */


long * FUN_0045f740(undefined4 param_1)

{
  undefined *puVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x28);
  if (plVar2 != (long *)0x0) {
    FUN_004635c0(plVar2,param_1);
    puVar1 = PTR_DAT_02713090;
    plVar2[3] = 0;
    *(undefined4 *)(plVar2 + 4) = 0;
    *plVar2 = (long)(puVar1 + 0x10);
  }
  return plVar2;
}


