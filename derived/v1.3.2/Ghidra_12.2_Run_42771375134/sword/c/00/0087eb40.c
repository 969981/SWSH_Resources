/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0087eb40; name: FUN_0087eb40
 */


void FUN_0087eb40(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ulong uVar3;
  
  uVar1 = FUN_00868f40(*(undefined8 *)(param_1 + 0x98));
  uVar2 = FUN_0086bc20(*(undefined8 *)(param_1 + 0x98));
  uVar3 = FUN_00877350(uVar1,uVar2);
  if ((uVar3 & 1) == 0) {
    uVar1 = FUN_00868f40(*(undefined8 *)(param_1 + 0x98));
    uVar2 = FUN_0086bc20(*(undefined8 *)(param_1 + 0x98));
    uVar1 = FUN_008773a0(uVar1,uVar2);
    FUN_00872b80(*(undefined8 *)(param_1 + 0x98),uVar1);
    return;
  }
  return;
}


