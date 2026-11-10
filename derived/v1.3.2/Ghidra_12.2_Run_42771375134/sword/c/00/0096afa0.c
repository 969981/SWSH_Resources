/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0096afa0; name: FUN_0096afa0
 */


void FUN_0096afa0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  FUN_00942390();
  uVar3 = FUN_009319d0();
  uVar4 = FUN_00942380(param_1);
  FUN_00932040(uVar3,uVar4,param_2,param_3,0);
  FUN_008e0a00(param_2);
  cVar1 = FUN_008f94e0();
  FUN_00942380(param_1);
  cVar2 = FUN_008f98a0();
  if (cVar1 == cVar2) {
    uVar3 = FUN_00942380(param_1);
    FUN_008f2f20(uVar3,0x68);
    return;
  }
  return;
}


