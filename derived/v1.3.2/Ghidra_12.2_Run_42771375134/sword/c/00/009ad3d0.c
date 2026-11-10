/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009ad3d0; name: FUN_009ad3d0
 */


void FUN_009ad3d0(undefined8 param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  uVar3 = FUN_009424b0(param_1,4);
  FUN_008e0b60();
  uVar4 = FUN_008e5ee0();
  uVar5 = FUN_0093db50();
  if ((((uVar5 & 1) == 0) || (uVar5 = FUN_0093db80(uVar4), (uVar5 & 1) == 0)) ||
     (cVar1 = FUN_0093dc50(uVar4), cVar1 != '\0')) {
    return;
  }
  uVar4 = FUN_009423b0(param_1);
  uVar2 = FUN_008e0a00(uVar3);
  FUN_00939cf0(uVar4,uVar2);
  uVar4 = FUN_009423b0(param_1);
  uVar2 = FUN_008e0a00(uVar3);
  FUN_00939b90(uVar4,uVar2);
  return;
}


