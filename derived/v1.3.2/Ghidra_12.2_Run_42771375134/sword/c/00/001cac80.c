/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001cac80; name: FUN_001cac80
 */


long * FUN_001cac80(long *param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  
  puVar1 = PTR_DAT_02711078;
  plVar3 = (long *)*param_1;
  *(undefined2 *)((long)plVar3 + 10) = 2;
  *plVar3 = (long)(puVar1 + 0x10);
  plVar3[2] = 0;
  plVar3[4] = 0;
  *(uint *)(plVar3 + 3) = *(uint *)(plVar3 + 3) & 0xf000000;
  *param_1 = *param_1 + 0x50;
  if (plVar3[9] != 0) {
    uVar2 = *(long *)(param_2 + 8) + 0xfU & 0xfffffffffffffff0;
    *(ulong *)(param_2 + 8) = uVar2 + (ulong)*(uint *)(plVar3 + 8) * 8;
    plVar3[9] = uVar2;
  }
  FUN_001cab90(plVar3);
  return plVar3;
}


