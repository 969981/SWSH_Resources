/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006f3fb0; name: FUN_006f3fb0
 */


void FUN_006f3fb0(long param_1,long param_2,long param_3)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  long local_28;
  long local_18;
  
  *(long *)(param_1 + 0xd8) = param_2;
  plVar3 = *(long **)(param_1 + 0x98);
  local_28 = param_2;
  if ((plVar3 == (long *)0x0) || (plVar3 == (long *)(param_1 + 0x98))) {
    local_18 = param_3;
    FUN_006f52f0(param_1 + 0x18,&local_18,&local_28);
    uVar2 = (*(long *)(param_1 + 0x58) + *(long *)(param_1 + 0x50)) - 1;
    plVar3 = (long *)(*(long *)(*(long *)(param_1 + 0x20) + (uVar2 / 0x38) * 8) +
                     (uVar2 % 0x38) * 0x48);
  }
  else {
    plVar3 = *(long **)(param_1 + 0xa0);
    plVar3[6] = param_3;
    plVar3[7] = param_2;
    plVar4 = *(long **)(param_1 + 0xa0);
    lVar5 = *plVar4;
    plVar1 = (long *)plVar4[1];
    *plVar1 = lVar5;
    *(long **)(lVar5 + 8) = plVar1;
    *(long *)(param_1 + 0x90) = *(long *)(param_1 + 0x90) + -1;
    *plVar4 = 0;
    plVar4[1] = 0;
  }
  puVar6 = *(undefined8 **)(param_1 + 0x88);
  local_18 = param_1 + 0xb0;
  *plVar3 = param_1 + 0x80;
  plVar3[1] = (long)puVar6;
  *(long **)(param_1 + 0x88) = plVar3;
  *puVar6 = plVar3;
  *(long *)(param_1 + 0x78) = *(long *)(param_1 + 0x78) + 1;
  *(long *)(param_1 + 0xa8) = *(long *)(param_1 + 0xa8) + 1;
  plVar4 = (long *)(param_1 + 0xc0);
  lVar5 = *plVar4;
  plVar1 = plVar3 + 2;
  if (lVar5 == local_18) {
    *(long **)(param_1 + 0xb0) = plVar1;
    plVar4 = (long *)(param_1 + 0xb8);
    *(long **)(param_1 + 0xc0) = plVar1;
  }
  else {
    *(long **)(lVar5 + 0x10) = plVar1;
    if (lVar5 != *plVar4) goto LAB_006f40c4;
  }
  *plVar4 = (long)plVar1;
LAB_006f40c4:
  plVar3[3] = 0;
  plVar3[4] = 0;
  plVar3[2] = lVar5;
  FUN_006f5140(&local_18);
  return;
}


