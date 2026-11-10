/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004a6a70; name: FUN_004a6a70
 */


long * FUN_004a6a70(undefined4 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  
  plVar4 = (long *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0xd8);
  if (plVar4 != (long *)0x0) {
    FUN_004a7370(plVar4,param_1);
    puVar1 = PTR_DAT_02713428 + 0x270;
    puVar2 = PTR_DAT_02713428 + 0x308;
    *plVar4 = (long)(PTR_DAT_02713428 + 0x10);
    plVar4[3] = (long)puVar1;
    plVar4[6] = (long)puVar2;
    FUN_004a7c30(plVar4 + 0x17);
    iVar3 = (**(code **)(*plVar4 + 0x88))(plVar4);
    *(uint *)((long)plVar4 + 0x9c) =
         *(uint *)((long)plVar4 + 0x9c) & 0xfffc0000 |
         *(uint *)((long)plVar4 + 0x9c) & 0x1ffff | (uint)(iVar3 == 0 || iVar3 == 10) << 0x11;
    FUN_004821a0(plVar4);
  }
  return plVar4;
}


