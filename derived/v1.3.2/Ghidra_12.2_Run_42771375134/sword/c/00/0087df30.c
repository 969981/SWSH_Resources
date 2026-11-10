/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0087df30; name: FUN_0087df30
 */


void FUN_0087df30(long param_1,uint param_2,undefined8 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  ulong uVar5;
  
  uVar1 = FUN_00868cc0(*(undefined8 *)(param_1 + 0x98));
  uVar2 = FUN_0086b360(*(undefined8 *)(param_1 + 0x98));
  if ((uVar2 & 0xffff) == (param_2 & 0xffff)) {
    return;
  }
  FUN_0087e0b0(param_1,param_2,param_3);
  FUN_00872100(*(undefined8 *)(param_1 + 0x98),param_2);
  uVar3 = FUN_0086b860(*(undefined8 *)(param_1 + 0x98));
  uVar5 = FUN_0086b9a0(*(undefined8 *)(param_1 + 0x98));
  uVar2 = 2;
  if ((uVar5 & 1) == 0) {
    uVar2 = uVar3 & 1;
  }
  uVar4 = FUN_00877590(uVar1,param_2,uVar2);
  FUN_0086fff0(*(undefined8 *)(param_1 + 0x98),uVar4);
  uVar4 = FUN_0086b220(*(undefined8 *)(param_1 + 0x98));
  uVar1 = FUN_00877490(uVar1,param_2,uVar4);
  FUN_00871fb0(*(undefined8 *)(param_1 + 0x98),uVar1);
  FUN_00879500(param_1,1);
  return;
}


