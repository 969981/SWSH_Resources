/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0087cf20; name: FUN_0087cf20
 */


void FUN_0087cf20(long param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar2 = FUN_0086b860(*(undefined8 *)(param_1 + 0x98));
  uVar5 = FUN_0086b9a0(*(undefined8 *)(param_1 + 0x98));
  uVar1 = 2;
  if ((uVar5 & 1) == 0) {
    uVar1 = uVar2 & 1;
  }
  if (uVar1 == 1) {
    uVar3 = FUN_00868cc0(*(undefined8 *)(param_1 + 0x98));
    uVar4 = FUN_0086b360(*(undefined8 *)(param_1 + 0x98));
    uVar3 = FUN_00877590(uVar3,uVar4,0);
    FUN_008724f0(*(undefined8 *)(param_1 + 0x98),1);
    uVar6 = *(undefined8 *)(param_1 + 0x98);
    uVar7 = 0;
  }
  else {
    if (uVar1 != 0) {
      return;
    }
    uVar3 = FUN_00868cc0(*(undefined8 *)(param_1 + 0x98));
    uVar4 = FUN_0086b360(*(undefined8 *)(param_1 + 0x98));
    uVar3 = FUN_00877590(uVar3,uVar4,1);
    FUN_008724f0(*(undefined8 *)(param_1 + 0x98),0);
    uVar6 = *(undefined8 *)(param_1 + 0x98);
    uVar7 = 1;
  }
  FUN_00872640(uVar6,uVar7);
  FUN_00872790(*(undefined8 *)(param_1 + 0x98),0);
  FUN_0086fff0(*(undefined8 *)(param_1 + 0x98),uVar3);
  return;
}


