/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004918b0; name: FUN_004918b0
 */


long * FUN_004918b0(undefined4 param_1,ushort param_2)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  
  plVar3 = (long *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x100);
  if (plVar3 != (long *)0x0) {
    FUN_00465f40(plVar3,param_1);
    puVar1 = PTR_DAT_027132d0;
    *(undefined4 *)(plVar3 + 0x1f) = 0;
    plVar3[0x1d] = 0;
    plVar3[0x1e] = 0;
    plVar3[0x1b] = 0;
    plVar3[0x1c] = 0;
    *plVar3 = (long)(puVar1 + 0x10);
    plVar3[6] = (long)(puVar1 + 0x318);
    plVar3[3] = (long)(puVar1 + 0x280);
    *(undefined2 *)((long)plVar3 + 0xf4) = 1;
    plVar3[0x19] = 0;
    plVar3[0x1a] = 0;
    *(ushort *)((long)plVar3 + 0xfd) =
         *(ushort *)((long)plVar3 + 0xfd) & 0xfe00 | param_2 & 7 | 0x90;
    *(byte *)((long)plVar3 + 0xfc) = *(byte *)((long)plVar3 + 0xfc) & 0xc0;
    iVar2 = FUN_004917e0(plVar3);
    if (iVar2 != 1) {
      (**(code **)(*plVar3 + 0x18))(plVar3);
      plVar3 = (long *)0x0;
    }
  }
  return plVar3;
}


