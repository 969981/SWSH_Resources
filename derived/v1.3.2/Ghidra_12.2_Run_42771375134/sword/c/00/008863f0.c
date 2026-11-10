/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008863f0; name: FUN_008863f0
 */


void FUN_008863f0(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar5 = *(undefined8 **)(param_1 + 0x10);
  puVar4 = *(undefined8 **)(param_2 + 0x10);
  *puVar4 = *puVar5;
  uVar1 = puVar5[1];
  uVar2 = puVar5[2];
  uVar3 = puVar5[4];
  puVar4[3] = puVar5[3];
  puVar4[4] = uVar3;
  puVar4[1] = uVar1;
  puVar4[2] = uVar2;
  uVar1 = puVar5[5];
  uVar2 = puVar5[6];
  uVar3 = puVar5[8];
  puVar4[7] = puVar5[7];
  puVar4[8] = uVar3;
  puVar4[5] = uVar1;
  puVar4[6] = uVar2;
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined2 *)(param_2 + 0xc) = *(undefined2 *)(param_1 + 0xc);
  return;
}


