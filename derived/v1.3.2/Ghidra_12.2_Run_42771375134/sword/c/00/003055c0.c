/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003055c0; name: FUN_003055c0
 */


long * FUN_003055c0(undefined8 *param_1,long param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  uint *puVar5;
  ulong uVar6;
  long *plVar7;
  
  puVar3 = PTR_DAT_027121e8;
  plVar7 = (long *)*param_1;
  *(undefined2 *)((long)plVar7 + 10) = 2;
  plVar7[3] = (long)(puVar3 + 0x1c0);
  *plVar7 = (long)(puVar3 + 0x10);
  *param_1 = plVar7 + 0xe;
  if (plVar7[0xd] == 0) {
    puVar5 = *(uint **)(param_2 + 8);
  }
  else {
    uVar6 = *(long *)(param_2 + 8) + 0xfU & 0xfffffffffffffff0;
    puVar5 = (uint *)(uVar6 + 0x70);
    *(uint **)(param_2 + 8) = puVar5;
    plVar7[0xd] = uVar6;
  }
  uVar2 = *puVar5;
  *(uint **)(param_2 + 8) = puVar5 + 1;
  puVar1 = (uint *)0x0;
  if ((ulong)uVar2 != 0) {
    puVar1 = puVar5 + 1;
  }
  plVar7[4] = (long)puVar1;
  *(ulong *)(param_2 + 8) = *(long *)(param_2 + 8) + (ulong)uVar2;
  lVar4 = FUN_002fee70(param_2,plVar7[0xc],plVar7 + 3,PTR_PTR_027121f0);
  plVar7[0xc] = lVar4;
  return plVar7;
}


