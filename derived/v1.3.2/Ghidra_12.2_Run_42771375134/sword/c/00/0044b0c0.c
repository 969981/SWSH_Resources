/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0044b0c0; name: FUN_0044b0c0
 */


long * FUN_0044b0c0(undefined4 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  
  plVar3 = (long *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,200);
  if (plVar3 != (long *)0x0) {
    FUN_0047e130(plVar3,param_1);
    plVar3[0x17] = 0;
    plVar3[0x18] = 0;
    puVar1 = PTR_DAT_02712ff0 + 0x10;
    puVar2 = PTR_DAT_02712ff0 + 0x280;
    plVar3[6] = (long)(PTR_DAT_02712ff0 + 0x318);
    *plVar3 = (long)puVar1;
    plVar3[3] = (long)puVar2;
    *(uint *)((long)plVar3 + 0x9c) = *(uint *)((long)plVar3 + 0x9c) & 0xfffdffff;
    FUN_004821a0(plVar3);
  }
  return plVar3;
}


