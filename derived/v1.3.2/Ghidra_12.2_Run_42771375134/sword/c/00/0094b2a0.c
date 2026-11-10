/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0094b2a0; name: FUN_0094b2a0
 */


void FUN_0094b2a0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  FUN_009130e0(param_2,param_3);
  FUN_00942380(param_1);
  uVar2 = FUN_008f94e0(param_3);
  FUN_009425f0(param_1,uVar2);
  cVar1 = FUN_009141d0();
  if (cVar1 == '\0') {
    FUN_009423f0(param_1);
    uVar3 = FUN_00942ff0();
    FUN_009433b0(uVar3,uVar2);
  }
  uVar3 = FUN_009423b0(param_1);
  FUN_00937850(uVar3,param_3,1);
  return;
}


