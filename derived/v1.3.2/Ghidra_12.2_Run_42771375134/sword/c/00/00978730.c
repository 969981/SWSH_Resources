/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00978730; name: FUN_00978730
 */


void FUN_00978730(undefined8 param_1,uint param_2)

{
  short sVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 local_70;
  undefined2 local_68;
  undefined1 auStack_64 [36];
  
  uVar2 = FUN_0093eb90(param_1,3);
  if (uVar2 == (param_2 & 0xff)) {
    uVar3 = FUN_0093ec60(param_1,param_2);
    sVar1 = FUN_008e2d10();
    if (sVar1 == 0) {
      sVar1 = FUN_008e4be0(uVar3);
      if (sVar1 != 0) {
        local_70 = 0x1f000000001f1f;
        local_68 = 0;
        FUN_00943e60(auStack_64);
        uVar3 = local_70;
        local_70._5_3_ = SUB83(uVar3,5);
        local_70._0_5_ = CONCAT14(1,CONCAT22(sVar1,CONCAT11((char)param_2,(char)param_2)));
        FUN_00943f20(auStack_64,2,0x3dc);
        FUN_00943f60(auStack_64,uVar2);
        FUN_00943f60(auStack_64,sVar1);
        uVar4 = FUN_0093fbf0(param_1,&local_70);
        if ((uVar4 & 1) != 0) {
          FUN_0093ebd0(param_1,0x78,1);
        }
      }
    }
  }
  return;
}


