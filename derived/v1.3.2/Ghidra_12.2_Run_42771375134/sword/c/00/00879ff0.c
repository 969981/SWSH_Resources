/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00879ff0; name: FUN_00879ff0
 */


void FUN_00879ff0(long param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulong uVar7;
  
  uVar1 = FUN_00868cc0(*(undefined8 *)(param_1 + 0x98));
  uVar7 = FUN_008679b0(*(undefined8 *)(param_1 + 0x98));
  if ((uVar7 & 1) == 0) {
    uVar3 = FUN_00868cc0(*(undefined8 *)(param_1 + 0x98));
    uVar4 = FUN_0086b360(*(undefined8 *)(param_1 + 0x98));
    uVar5 = FUN_00869080(*(undefined8 *)(param_1 + 0x98));
    uVar2 = FUN_00876c70(uVar3,uVar4,uVar5);
    uVar2 = uVar2 & 0xff;
  }
  else {
    uVar2 = FUN_00868910();
  }
  uVar3 = FUN_00868cc0(*(undefined8 *)(param_1 + 0x98));
  uVar4 = FUN_0086b360(*(undefined8 *)(param_1 + 0x98));
  FUN_008649f0(uVar3,uVar4);
  uVar3 = FUN_00864a10(0);
  uVar7 = FUN_00876a80(*(undefined8 *)(param_1 + 0x98));
  if ((uVar7 & 1) == 0) {
    uVar4 = FUN_0086a460(*(undefined8 *)(param_1 + 0x98));
  }
  else {
    uVar4 = 0x1f;
  }
  uVar5 = FUN_00869760(*(undefined8 *)(param_1 + 0x98));
  uVar6 = FUN_0086abe0(*(undefined8 *)(param_1 + 0x98));
  FUN_00876fa0(uVar1,uVar2,uVar3,uVar4,uVar5,uVar6);
  return;
}


