/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00941350; name: FUN_00941350
 */


void FUN_00941350(undefined8 *param_1,uint param_2,byte param_3,undefined1 param_4)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  
  iVar2 = FUN_008f8110(*param_1);
  if (iVar2 != 0) {
    uVar3 = FUN_008db610(param_1[6],3);
    uVar4 = FUN_008f9ff0(*param_1,param_2,uVar3);
    if (((uVar4 & 1) == 0) && (iVar2 = FUN_008db610(param_1[6],0x12), iVar2 != 0x1fb)) {
      uVar5 = FUN_00931920(param_1[1]);
      uVar5 = FUN_008df3f0(uVar5,param_2);
      uVar4 = FUN_008e1810(uVar5,0x22);
      if ((uVar4 & 1) == 0) {
        FUN_00942fd0(param_1[5]);
        lVar6 = FUN_009429b0();
        if (*(char *)(lVar6 + 0x36) == '\0') {
          bVar1 = FUN_008db610(param_1[6],0x61);
          if (bVar1 < param_3) {
            FUN_008db590(param_1[6],4,param_2 & 0xff);
            FUN_008db590(param_1[6],0x61,param_3);
            FUN_008db590(param_1[6],0x62,param_4);
            return;
          }
        }
      }
    }
  }
  return;
}


