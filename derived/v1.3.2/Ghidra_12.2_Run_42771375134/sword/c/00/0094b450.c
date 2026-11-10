/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0094b450; name: FUN_0094b450
 */


void FUN_0094b450(undefined8 param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  uVar1 = FUN_008f94e0(param_2);
  FUN_00942380(param_1);
  uVar2 = FUN_008f98a0();
  uVar3 = FUN_00942380(param_1);
  if ((uVar1 & 0xff) == (uVar2 & 0xff)) {
    FUN_008f2f20(uVar3,0x69);
    return;
  }
  uVar4 = FUN_008fafc0(uVar3,uVar1,uVar2);
  if ((uVar4 & 1) == 0) {
    uVar3 = FUN_00942380(param_1);
    FUN_008f2f20(uVar3,0x15);
    uVar3 = FUN_00942380(param_1);
    FUN_008f2f20(uVar3,0x6f);
    return;
  }
  return;
}


