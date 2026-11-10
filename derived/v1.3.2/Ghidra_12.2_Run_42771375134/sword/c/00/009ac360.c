/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009ac360; name: FUN_009ac360
 */


void FUN_009ac360(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  uVar3 = FUN_00942380();
  uVar4 = FUN_008f35c0(uVar3,0x40000);
  if (((uVar4 & 1) == 0) || (cVar1 = FUN_00942630(param_1), cVar1 != '\x03')) {
    uVar3 = FUN_00942380(param_1);
    uVar4 = FUN_008f89c0(uVar3,0x10);
    if ((uVar4 & 1) == 0) {
      uVar3 = FUN_00942380(param_1);
      uVar4 = FUN_008f89c0(uVar3,0x20);
      if ((uVar4 & 1) == 0) {
        uVar3 = FUN_00942380(param_1);
        uVar4 = FUN_008f35c0(uVar3,0x20000000);
        if ((uVar4 & 1) == 0) {
          uVar3 = FUN_009423b0(param_1);
          uVar2 = FUN_008e0a00(param_2);
          FUN_00939cf0(uVar3,uVar2);
          uVar3 = FUN_009423b0(param_1);
          uVar2 = FUN_008e0a00(param_2);
          FUN_00939b90(uVar3,uVar2);
          return;
        }
      }
    }
  }
  return;
}


