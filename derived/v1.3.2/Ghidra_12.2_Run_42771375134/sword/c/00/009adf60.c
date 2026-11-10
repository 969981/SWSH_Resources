/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009adf60; name: FUN_009adf60
 */


void FUN_009adf60(undefined8 param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  undefined1 auStack_38 [8];
  undefined1 local_30;
  undefined1 local_2f;
  undefined1 local_2e;
  undefined1 local_2d;
  undefined1 local_2c;
  char local_2b;
  undefined1 local_2a;
  undefined1 local_29;
  undefined1 local_28;
  
  uVar1 = FUN_00942380();
  uVar2 = FUN_008f35c0(uVar1,0x40000000);
  if ((uVar2 & 1) != 0) {
    FUN_00942390(param_1);
    uVar1 = FUN_00931920();
    lVar3 = FUN_008df3b0(uVar1,1);
    if (((lVar3 != 0) && (lVar3 = FUN_00914330(lVar3,0), lVar3 != 0)) &&
       (uVar2 = FUN_008e1600(), (uVar2 & 1) == 0)) {
      local_30 = FUN_008e0a00(lVar3);
      local_2f = FUN_008e12a0(lVar3,1);
      local_2e = FUN_008e12a0(lVar3,2);
      local_2d = FUN_008e12a0(lVar3,3);
      local_2c = FUN_008e12a0(lVar3,4);
      local_2b = FUN_008e12a0(lVar3,5);
      local_2b = local_2b + '\x06';
      local_2a = FUN_008e12a0(lVar3,6);
      local_29 = FUN_008e12a0(lVar3,7);
      local_28 = FUN_008e3740(lVar3);
      FUN_00942450(param_1);
      uVar1 = FUN_00925740();
      FUN_0094cb40(uVar1,auStack_38,&local_30);
    }
  }
  return;
}


