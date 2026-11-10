/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00495ad0; name: FUN_00495ad0
 */


int FUN_00495ad0(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  puVar3 = PTR_DAT_02712d18;
  if (*(uint *)(param_1 + 0x40) == 0) {
    return 0;
  }
  lVar6 = **(long **)(param_1 + 0x38);
  if (lVar6 == 0) {
    return 0;
  }
  if ((*(uint *)(param_1 + 0x40) < 2) ||
     (plVar4 = (long *)(*(long **)(param_1 + 0x38))[1], plVar4 == (long *)0x0)) {
    plVar4 = *(long **)PTR_DAT_02712d18;
    if (plVar4 == (long *)0x0) {
      plVar4 = (long *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0xc0);
      *plVar4 = (long)(PTR_DAT_02712d28 + 0x10);
      plVar4[1] = 0;
      puVar1 = PTR_DAT_02712d38;
      lVar5 = *(long *)(PTR_DAT_02712d38 + 8);
      plVar4[2] = 0;
      plVar4[3] = lVar5;
      plVar2 = (long *)(puVar1 + 0x10);
      if (*(long *)(puVar1 + 0x10) != 0) {
        plVar2 = (long *)(lVar5 + 0x10);
      }
      *plVar2 = (long)plVar4;
      *(long **)(puVar1 + 8) = plVar4;
      *(int *)puVar1 = *(int *)puVar1 + 1;
      puVar1 = PTR_DAT_02712d30 + 0x10;
      plVar4[7] = 0;
      plVar4[8] = 0;
      *plVar4 = (long)puVar1;
      plVar4[10] = 0;
      plVar4[0xb] = 0;
      plVar4[0xf] = 0;
      plVar4[0x10] = 0;
      plVar4[0x12] = 0;
      plVar4[0x13] = 0;
      plVar4[0x15] = 0;
      plVar4[0x16] = 0;
      *(long **)puVar3 = plVar4;
      *(undefined2 *)(plVar4 + 0x17) = 0x101;
    }
  }
  return (int)plVar4[0x16] * (uint)*(ushort *)(lVar6 + 0x38);
}


