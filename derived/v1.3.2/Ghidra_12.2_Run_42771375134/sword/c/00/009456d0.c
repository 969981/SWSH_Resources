/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009456d0; name: FUN_009456d0
 */


undefined8
FUN_009456d0(undefined8 param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  char local_44 [4];
  
  *param_2 = 0;
  FUN_00942390();
  uVar4 = FUN_00931920();
  uVar5 = FUN_00942380(param_1);
  uVar3 = FUN_008e0a00(param_4);
  cVar1 = FUN_008f9470(uVar5,uVar4,uVar3);
  if ((((cVar1 != '\x05') && (uVar6 = FUN_008e1600(param_4), (uVar6 & 1) == 0)) &&
      (uVar6 = FUN_008e1810(param_4,0x22), (uVar6 & 1) == 0)) &&
     (uVar6 = FUN_008e2ed0(param_4), (uVar6 & 1) == 0)) {
    uVar6 = FUN_008e0a10(param_4);
    if (((uVar6 & 1) != 0) || (uVar6 = FUN_008e0b50(param_4), (uVar6 & 1) != 0)) {
      uVar4 = FUN_009423b0(param_1);
      FUN_00936020(uVar4,0x1d6);
      *param_2 = 1;
      return 1;
    }
    uVar4 = FUN_00942380(param_1);
    uVar6 = FUN_008f89c0(uVar4,0x80);
    if ((uVar6 & 1) == 0) {
      uVar4 = FUN_009423e0(param_1);
      FUN_0092c420(uVar4,local_44,param_2,param_3,param_4);
      if (local_44[0] == '\0') {
        uVar6 = FUN_008e1810(param_4,0x15);
        if ((uVar6 & 1) == 0) {
          return 0;
        }
        uVar4 = FUN_009423b0(param_1);
        uVar2 = FUN_008e0a00(param_4);
        FUN_009360c0(uVar4,1000,uVar2);
        *param_2 = 1;
      }
    }
  }
  return 1;
}


