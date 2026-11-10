/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009a5040; name: FUN_009a5040
 */


void FUN_009a5040(undefined8 param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  uVar3 = FUN_009424b0(param_1,*param_2);
  FUN_008e0a00();
  uVar1 = FUN_008f94e0();
  FUN_00942380(param_1);
  uVar2 = FUN_008f98a0();
  uVar4 = FUN_00942380(param_1);
  uVar5 = FUN_008fafc0(uVar4,uVar1,uVar2);
  if ((uVar5 & 1) == 0) {
    uVar4 = FUN_00942380(param_1);
    FUN_008f9260(uVar4,uVar3);
    return;
  }
  return;
}


