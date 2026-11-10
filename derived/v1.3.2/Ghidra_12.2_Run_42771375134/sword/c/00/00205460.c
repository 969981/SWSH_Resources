/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00205460; name: FUN_00205460
 */


long * FUN_00205460(long *param_1,long param_2)

{
  uint *puVar1;
  undefined *puVar2;
  uint *puVar3;
  ulong uVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  *(undefined2 *)((long)plVar5 + 10) = 2;
  *(undefined4 *)(plVar5 + 4) = 1;
  puVar2 = PTR_DAT_02711220;
  plVar5[6] = 0;
  plVar5[8] = 0;
  plVar5[3] = (long)(puVar2 + 0x168);
  *plVar5 = (long)(puVar2 + 0x10);
  *(uint *)(plVar5 + 7) = *(uint *)(plVar5 + 7) & 0xf000000;
  FUN_003f8a30(plVar5 + 10,0);
  *(uint *)(plVar5 + 0x21) = *(uint *)(plVar5 + 0x21) & 0x80000000;
  *param_1 = *param_1 + 0x110;
  FUN_003f8d50(plVar5 + 10,param_2);
  puVar3 = *(uint **)(param_2 + 8) + 1;
  uVar4 = (ulong)**(uint **)(param_2 + 8);
  *(uint **)(param_2 + 8) = puVar3;
  puVar1 = (uint *)0x0;
  if (uVar4 != 0) {
    puVar1 = puVar3;
  }
  plVar5[0x20] = (long)puVar1;
  *(ulong *)(param_2 + 8) = *(long *)(param_2 + 8) + uVar4;
  FUN_00205290(plVar5,param_2);
  return plVar5;
}


