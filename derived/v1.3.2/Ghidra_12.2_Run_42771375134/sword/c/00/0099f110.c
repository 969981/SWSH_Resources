/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0099f110; name: FUN_0099f110
 */


undefined8
FUN_0099f110(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  long local_80 [5];
  undefined8 local_58;
  undefined6 uStack_50;
  undefined2 local_4a;
  undefined4 uStack_48;
  undefined1 uStack_44;
  undefined1 uStack_43;
  
  uVar4 = FUN_00942380();
  FUN_00942380(param_1);
  FUN_008e0a00(param_3);
  uVar2 = FUN_008f94e0();
  uVar5 = FUN_008f8cd0(uVar4,uVar2);
  if (((uVar5 & 0xfe) != 0) && (iVar3 = FUN_0093b420(param_6), iVar3 == 1)) {
    uVar4 = FUN_0093b2c0(param_6,0);
    uVar5 = FUN_008e1600();
    if (((uVar5 & 1) != 0) && (uVar5 = FUN_00942690(param_1,param_3,uVar4), (uVar5 & 1) == 0)) {
      FUN_0093b260(param_6,uVar4);
      cVar1 = FUN_0099f280(param_1,local_80,5,param_3,param_4);
      if (cVar1 != '\0') {
        if (cVar1 != '\x01') {
          iVar3 = FUN_00942620(param_1);
          if (iVar3 != 2) {
            return 0;
          }
          uVar5 = FUN_008e0b50(param_3);
          if ((uVar5 & 1) == 0) {
            return 0;
          }
          uStack_43 = 0;
          uStack_44 = 1;
          uStack_48 = 0x1010101;
          local_58 = 0;
          uStack_50 = 0;
          local_4a = 0;
          local_58 = FUN_00942390(param_1);
          uVar4 = FUN_008eba30();
          uStack_50 = (undefined6)uVar4;
          local_4a = (undefined2)((ulong)uVar4 >> 0x30);
          uVar2 = FUN_00961740(&local_58);
          local_80[0] = FUN_009424b0(param_1,uVar2);
        }
        if (local_80[0] != 0) {
          FUN_0093b0b0(param_6);
          return 1;
        }
      }
      return 0;
    }
  }
  return 1;
}


