/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00463fa0; name: FUN_00463fa0
 */


long * FUN_00463fa0(undefined4 param_1)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  
  plVar3 = (long *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0xf8);
  if (plVar3 != (long *)0x0) {
    FUN_00479f10(plVar3,param_1);
    *(undefined1 *)(plVar3 + 0x1e) = 0;
    puVar1 = PTR_DAT_027130f0;
    plVar3[0x1c] = 0;
    plVar3[0x1d] = 0;
    *plVar3 = (long)(puVar1 + 0x10);
    plVar3[3] = (long)(puVar1 + 0x288);
    plVar3[6] = (long)(puVar1 + 800);
    plVar3[0x1b] = 0;
    iVar2 = FUN_00479ff0(plVar3);
    if (iVar2 != 1) {
      (**(code **)(*plVar3 + 0x18))(plVar3);
      plVar3 = (long *)0x0;
    }
  }
  return plVar3;
}


