/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00864b10; name: FUN_00864b10
 */


void FUN_00864b10(undefined4 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  ulong uVar3;
  
  uVar1 = DAT_029f5a48;
  FUN_0087f540(DAT_029f5a28,param_1,param_2);
  uVar2 = FUN_0087f680(DAT_029f5a28,0x17);
  uVar3 = FUN_00886b80(DAT_029f5a68,uVar2,uVar1);
  if ((uVar3 & 1) == 0) {
    FUN_00886d00(uVar1,uVar2);
    FUN_00886c10(DAT_029f5a68,uVar1);
    return;
  }
  return;
}


