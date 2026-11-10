/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00879d70; name: FUN_00879d70
 */


void FUN_00879d70(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulong uVar7;
  
  uVar7 = FUN_008679b0(*(undefined8 *)(param_1 + 0x98));
  if ((uVar7 & 1) == 0) {
    uVar2 = FUN_00868cc0(*(undefined8 *)(param_1 + 0x98));
    uVar3 = FUN_0086b360(*(undefined8 *)(param_1 + 0x98));
    uVar5 = FUN_00869080(*(undefined8 *)(param_1 + 0x98));
    uVar1 = FUN_00876c70(uVar2,uVar3,uVar5);
    uVar1 = uVar1 & 0xff;
  }
  else {
    uVar1 = FUN_00868910();
  }
  uVar2 = FUN_00868cc0(*(undefined8 *)(param_1 + 0x98));
  uVar3 = FUN_0086b360(*(undefined8 *)(param_1 + 0x98));
  FUN_008649f0(uVar2,uVar3);
  uVar2 = FUN_00864a10(5);
  uVar4 = FUN_00876a80(*(undefined8 *)(param_1 + 0x98));
  if ((uVar4 >> 4 & 1) == 0) {
    uVar3 = FUN_0086a960(*(undefined8 *)(param_1 + 0x98));
  }
  else {
    uVar3 = 0x1f;
  }
  uVar5 = FUN_00869c60(*(undefined8 *)(param_1 + 0x98));
  uVar6 = FUN_0086b5e0(*(undefined8 *)(param_1 + 0x98));
  FUN_00876ea0(uVar1,uVar2,uVar3,uVar5,uVar6);
  return;
}


