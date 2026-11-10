/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00451fc0; name: FUN_00451fc0
 */


undefined8 FUN_00451fc0(undefined4 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  
  plVar3 = (long *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x168);
  if (plVar3 != (long *)0x0) {
    FUN_00481d50(plVar3,param_1);
    puVar2 = PTR_DAT_02713018;
    puVar1 = PTR_DAT_02713018 + 0x10;
    plVar3[0x14] = 0;
    plVar3[0x15] = 0;
    *plVar3 = (long)puVar1;
    plVar3[3] = (long)(puVar2 + 0x2a8);
    plVar3[6] = (long)(puVar2 + 0x340);
    plVar3[0x18] = 0;
    plVar3[0x19] = 0;
    *(undefined4 *)(plVar3 + 0x1a) = 0xc2c0999a;
    plVar3[0x16] = 0;
    plVar3[0x17] = 0;
                    /* WARNING: Subroutine does not return */
    memset(plVar3 + 0x1b,0,0x78);
  }
  return 0;
}


