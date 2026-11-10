/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00413410; name: FUN_00413410
 */


long * FUN_00413410(undefined4 param_1)

{
  undefined *puVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x118);
  if (plVar2 != (long *)0x0) {
    FUN_004a7370(plVar2,param_1);
    puVar1 = PTR_DAT_02712bb8;
    *(undefined4 *)(plVar2 + 0x1b) = 0;
    plVar2[0x19] = 0;
    plVar2[0x1a] = 0;
    plVar2[0x17] = 0;
    plVar2[0x18] = 0;
    *plVar2 = (long)(puVar1 + 0x10);
    plVar2[6] = (long)(puVar1 + 0x308);
    *(undefined2 *)(plVar2 + 0x1f) = 0xffff;
    plVar2[0x1d] = 0;
    plVar2[0x1e] = 0;
    *(byte *)(plVar2 + 0x21) = *(byte *)(plVar2 + 0x21) & 0xfc;
    plVar2[3] = (long)(puVar1 + 0x270);
    plVar2[0x1c] = 0;
    plVar2[0x20] = 0;
    plVar2[0x22] = 0;
    *(uint *)((long)plVar2 + 0x9c) = *(uint *)((long)plVar2 + 0x9c) & 0xfffdffff;
    FUN_004821a0(plVar2);
  }
  return plVar2;
}


