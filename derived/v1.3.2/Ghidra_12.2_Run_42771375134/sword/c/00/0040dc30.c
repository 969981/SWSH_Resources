/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0040dc30; name: FUN_0040dc30
 */


long * FUN_0040dc30(undefined4 param_1)

{
  undefined *puVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x100);
  if (plVar2 != (long *)0x0) {
    FUN_00409800(plVar2,param_1);
    puVar1 = PTR_DAT_02712b78;
    *(undefined4 *)(plVar2 + 0x1f) = 0;
    plVar2[0x1d] = 0;
    plVar2[0x1e] = 0;
    plVar2[6] = (long)(puVar1 + 0x350);
    *plVar2 = (long)(puVar1 + 0x10);
    plVar2[3] = (long)(puVar1 + 0x2b8);
    *(uint *)((long)plVar2 + 0x9c) = *(uint *)((long)plVar2 + 0x9c) & 0xfffdffff;
    FUN_004821a0(plVar2);
  }
  return plVar2;
}


