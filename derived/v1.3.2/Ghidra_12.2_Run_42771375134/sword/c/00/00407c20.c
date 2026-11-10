/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00407c20; name: FUN_00407c20
 */


long * FUN_00407c20(undefined4 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  
  plVar3 = (long *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x140);
  if (plVar3 != (long *)0x0) {
    FUN_00415150(plVar3,param_1);
    puVar1 = PTR_DAT_02712af8;
    *plVar3 = (long)(PTR_DAT_02712af8 + 0x10);
    plVar3[3] = (long)(puVar1 + 0x2b8);
    puVar2 = PTR_DAT_02712b00;
    plVar3[6] = (long)(puVar1 + 0x350);
    plVar3[0x23] = 0;
    plVar3[0x24] = 0;
    *(undefined2 *)(plVar3 + 0x22) = 0;
    plVar3[0x1f] = (long)(puVar2 + 0x10);
    plVar3[0x20] = 0;
    plVar3[0x21] = 0x100000000;
    *(undefined4 *)((long)plVar3 + 0x114) = 50000;
    plVar3[0x26] = 0;
    *(undefined1 *)(plVar3 + 0x27) = 0;
    *(undefined4 *)(plVar3 + 0x25) = 0;
    *(undefined2 *)((long)plVar3 + 0x139) = 1;
    *(undefined2 *)((long)plVar3 + 0x13c) = 0;
    *(uint *)((long)plVar3 + 0x9c) = *(uint *)((long)plVar3 + 0x9c) & 0xfffdffff;
    FUN_004821a0(plVar3);
  }
  return plVar3;
}


