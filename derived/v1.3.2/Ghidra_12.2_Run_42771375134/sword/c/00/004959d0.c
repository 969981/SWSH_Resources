/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004959d0; name: FUN_004959d0
 */


long * FUN_004959d0(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  
  puVar3 = PTR_DAT_02712d18;
  if ((*(uint *)(param_1 + 0x40) < 2) ||
     (lVar4 = *(long *)(*(long *)(param_1 + 0x38) + 8), lVar4 == 0)) {
    lVar4 = *(long *)PTR_DAT_02712d18;
    if (lVar4 == 0) {
      plVar5 = (long *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0xc0);
      if (plVar5 == (long *)0x0) {
        *(undefined8 *)puVar3 = 0;
        return (long *)&DAT_000000a0;
      }
      *plVar5 = (long)(PTR_DAT_02712d28 + 0x10);
      plVar5[1] = 0;
      puVar1 = PTR_DAT_02712d38;
      lVar4 = *(long *)(PTR_DAT_02712d38 + 8);
      plVar5[2] = 0;
      plVar5[3] = lVar4;
      plVar2 = (long *)(puVar1 + 0x10);
      if (*(long *)(puVar1 + 0x10) != 0) {
        plVar2 = (long *)(lVar4 + 0x10);
      }
      *plVar2 = (long)plVar5;
      *(long **)(puVar1 + 8) = plVar5;
      *(int *)puVar1 = *(int *)puVar1 + 1;
      puVar1 = PTR_DAT_02712d30 + 0x10;
      plVar5[7] = 0;
      plVar5[8] = 0;
      *plVar5 = (long)puVar1;
      plVar5[10] = 0;
      plVar5[0xb] = 0;
      plVar5[0xf] = 0;
      plVar5[0x10] = 0;
      plVar5[0x12] = 0;
      plVar5[0x13] = 0;
      plVar5[0x15] = 0;
      plVar5[0x16] = 0;
      *(long **)puVar3 = plVar5;
      *(undefined2 *)(plVar5 + 0x17) = 0x101;
      return plVar5 + 0x14;
    }
  }
  return (long *)(lVar4 + 0xa0);
}


