/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009ad7b0; name: FUN_009ad7b0
 */


void FUN_009ad7b0(undefined8 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar2 = FUN_00942380();
  uVar3 = FUN_008f35c0(uVar2,0x40000);
  if ((uVar3 & 1) == 0) {
    uVar2 = FUN_00942380(param_1);
    uVar3 = FUN_008f89c0(uVar2,0x10);
    if ((uVar3 & 1) == 0) {
      uVar2 = FUN_00942380(param_1);
      uVar3 = FUN_008f89c0(uVar2,0x20);
      if ((uVar3 & 1) == 0) {
        uVar2 = FUN_00942380(param_1);
        uVar3 = FUN_008f35c0(uVar2,0x200);
        if ((uVar3 & 1) != 0) {
          FUN_00942390(param_1);
          uVar2 = FUN_00931a20();
          FUN_009336d0(uVar2,param_2);
          uVar3 = FUN_00933820();
          if ((uVar3 & 1) != 0) goto LAB_009ad82c;
        }
        return;
      }
    }
  }
LAB_009ad82c:
  FUN_00942390(param_1);
  uVar2 = FUN_00931a20();
  FUN_009336d0(uVar2,param_2);
  uVar1 = FUN_00933960();
  uVar2 = FUN_009423b0(param_1);
  FUN_00939fc0(uVar2,uVar1,0);
  return;
}


