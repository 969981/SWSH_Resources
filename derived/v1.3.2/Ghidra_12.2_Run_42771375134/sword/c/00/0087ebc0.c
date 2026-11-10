/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0087ebc0; name: FUN_0087ebc0
 */


void FUN_0087ebc0(long param_1,uint param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  
  uVar1 = FUN_00868f40(*(undefined8 *)(param_1 + 0x98));
  uVar2 = FUN_0086bc20(*(undefined8 *)(param_1 + 0x98));
  uVar3 = FUN_0086c060(*(undefined8 *)(param_1 + 0x98));
  uVar4 = FUN_0086afa0(*(undefined8 *)(param_1 + 0x98));
  uVar4 = FUN_008773e0(uVar1,uVar2,uVar3,uVar4 & 1);
  if ((uVar4 & 0xff) == (param_2 & 0xff)) {
    return;
  }
  uVar1 = FUN_00868f40(*(undefined8 *)(param_1 + 0x98));
  uVar2 = FUN_0086bc20(*(undefined8 *)(param_1 + 0x98));
  uVar1 = FUN_00877430(uVar1,uVar2,param_2);
  FUN_00872b80(*(undefined8 *)(param_1 + 0x98),uVar1);
  return;
}


