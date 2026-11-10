/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0094b500; name: FUN_0094b500
 */


void FUN_0094b500(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  FUN_008e0a00(param_2);
  uVar1 = FUN_008f94e0();
  FUN_00942380(param_1);
  uVar2 = FUN_008f98a0();
  uVar3 = FUN_00942380(param_1);
  uVar4 = FUN_008fafc0(uVar3,uVar1,uVar2);
  if ((uVar4 & 1) == 0) {
    uVar3 = FUN_00942380(param_1);
    FUN_008f9260(uVar3,param_2);
    return;
  }
  return;
}


