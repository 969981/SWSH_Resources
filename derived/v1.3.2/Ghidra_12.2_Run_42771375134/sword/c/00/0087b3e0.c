/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0087b3e0; name: FUN_0087b3e0
 */


void FUN_0087b3e0(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulong uVar7;
  
  uVar1 = FUN_00868cc0(*(undefined8 *)(param_1 + 0x98));
  uVar2 = FUN_0086b360(*(undefined8 *)(param_1 + 0x98));
  uVar7 = FUN_008679b0(*(undefined8 *)(param_1 + 0x98));
  if ((uVar7 & 1) == 0) {
    uVar4 = FUN_00868cc0(*(undefined8 *)(param_1 + 0x98));
    uVar5 = FUN_0086b360(*(undefined8 *)(param_1 + 0x98));
    uVar6 = FUN_00869080(*(undefined8 *)(param_1 + 0x98));
    uVar3 = FUN_00876c70(uVar4,uVar5,uVar6);
    uVar3 = uVar3 & 0xff;
  }
  else {
    uVar3 = FUN_00868910();
  }
  FUN_00864b10(uVar1,uVar2);
  FUN_00864ba0(uVar3);
  return;
}


