/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004b8a90; name: FUN_004b8a90
 */


undefined8 FUN_004b8a90(undefined4 param_1)

{
  undefined *puVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x160);
  if (plVar2 != (long *)0x0) {
    FUN_00479f10(plVar2,param_1);
    FUN_004b7930(plVar2 + 0x1b);
    plVar2[0x1d] = 0;
    *(undefined4 *)(plVar2 + 0x1e) = 0;
    puVar1 = PTR_DAT_02713478;
    plVar2[0x2b] = 0;
    *plVar2 = (long)(puVar1 + 0x10);
    plVar2[3] = (long)(puVar1 + 0x298);
    plVar2[6] = (long)(puVar1 + 0x330);
    plVar2[0x1b] = (long)(puVar1 + 0x358);
    plVar2[0x1c] = (long)(puVar1 + 0x380);
                    /* WARNING: Subroutine does not return */
    memset((void *)((long)plVar2 + 0xf4),0,0x60);
  }
  return 0;
}


