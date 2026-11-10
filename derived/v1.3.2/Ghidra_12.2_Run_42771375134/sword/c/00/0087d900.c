/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0087d900; name: FUN_0087d900
 */


undefined8 FUN_0087d900(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  
  uVar1 = FUN_00868cc0(*(undefined8 *)(param_1 + 0x98));
  uVar2 = FUN_0086b360(*(undefined8 *)(param_1 + 0x98));
  FUN_008649f0(uVar1,uVar2);
  uVar1 = FUN_00864a10(0x18);
  uVar2 = FUN_00864a10(0x19);
  uVar3 = FUN_00868cc0(*(undefined8 *)(param_2 + 0x98));
  uVar4 = FUN_0086b360(*(undefined8 *)(param_2 + 0x98));
  FUN_008649f0(uVar3,uVar4);
  uVar3 = FUN_00864a10(0x18);
  uVar4 = FUN_00864a10(0x19);
  uVar5 = FUN_00868cc0(*(undefined8 *)(param_1 + 0x98));
  uVar6 = FUN_00868cc0(*(undefined8 *)(param_2 + 0x98));
  uVar7 = FUN_0086b220(*(undefined8 *)(param_1 + 0x98));
  uVar8 = FUN_0086b220(*(undefined8 *)(param_2 + 0x98));
  uVar9 = FUN_00877670(uVar5,uVar7,uVar1,uVar2,uVar6,uVar8,uVar3,uVar4);
  if ((uVar9 & 1) == 0) {
    return 3;
  }
  uVar1 = FUN_00868f40(*(undefined8 *)(param_1 + 0x98));
  uVar2 = FUN_00868f40(*(undefined8 *)(param_2 + 0x98));
  uVar10 = FUN_00877720(uVar5,uVar1,uVar6,uVar2);
  return uVar10;
}


