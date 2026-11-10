/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009a2e10; name: FUN_009a2e10
 */


void FUN_009a2e10(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  char cVar2;
  undefined8 uVar3;
  
  FUN_008e0a00(param_2);
  cVar1 = FUN_008f94e0();
  FUN_00942380(param_1);
  cVar2 = FUN_008f98a0();
  uVar3 = FUN_009423b0(param_1);
  if (cVar1 == cVar2) {
    FUN_00936020(uVar3,0x57);
    uVar3 = FUN_00942380(param_1);
    FUN_008f2f20(uVar3,0x6b);
    uVar3 = FUN_009423b0(param_1);
    FUN_00938fb0(uVar3,1);
    return;
  }
  FUN_00936080(uVar3,param_2,0x4a0);
  return;
}


