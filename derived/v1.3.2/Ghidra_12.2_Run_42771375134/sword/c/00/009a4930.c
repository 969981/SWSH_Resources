/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009a4930; name: FUN_009a4930
 */


void FUN_009a4930(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar4 = FUN_008e0a10(param_2);
  if (((uVar4 & 1) != 0) && (uVar4 = FUN_008e0b50(param_2), (uVar4 & 1) == 0)) {
    uVar5 = FUN_009423b0(param_1);
    uVar1 = FUN_008e0a00(param_2);
    FUN_00939e70(uVar5,uVar1);
    uVar4 = FUN_009426f0(param_1);
    if ((uVar4 & 1) == 0) {
      uVar2 = FUN_009a3940();
      uVar3 = FUN_008e5c20(param_2);
      if (uVar2 <= (uVar3 & 0xff)) goto LAB_009a49c4;
    }
    else {
      FUN_00942380(param_1);
      uVar4 = FUN_008fb640();
      if ((uVar4 & 1) != 0) {
LAB_009a49c4:
        uVar5 = FUN_009423b0(param_1);
        uVar1 = FUN_008e0a00(param_2);
        FUN_00939e30(uVar5,uVar1);
        uVar5 = FUN_009423b0(param_1);
        uVar1 = FUN_008e0a00(param_2);
        FUN_0093a040(uVar5,uVar1);
        return;
      }
    }
  }
  return;
}


