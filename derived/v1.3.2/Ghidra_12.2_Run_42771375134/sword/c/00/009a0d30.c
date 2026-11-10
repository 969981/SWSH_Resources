/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009a0d30; name: FUN_009a0d30
 */


bool FUN_009a0d30(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 undefined8 param_5)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  char local_58 [8];
  undefined8 local_50;
  undefined1 local_48;
  undefined1 local_47;
  
  uVar2 = FUN_008e2890(param_2,param_3);
  if ((uVar2 & 0xff) == 4) {
    bVar1 = false;
  }
  else {
    uVar4 = FUN_008e0b50(param_2);
    if ((uVar4 & 1) == 0) {
      uVar5 = FUN_009423e0(param_1);
      local_47 = FUN_0092ae20(uVar5,param_2,uVar2,param_3,param_5);
      local_48 = (undefined1)uVar2;
      local_58[0] = '\0';
      local_50 = param_2;
      FUN_00942450(param_1);
      uVar5 = FUN_009252c0();
      FUN_00950650(uVar5,local_58,&local_50);
      uVar4 = thunk_FUN_008dd3c0(param_4);
      if ((uVar4 & 1) == 0) {
        uVar5 = FUN_009423b0(param_1);
        uVar3 = FUN_008e0a00(param_2);
        FUN_009399a0(uVar5,uVar3,uVar2);
      }
      bVar1 = local_58[0] != '\0';
    }
    else {
      bVar1 = true;
    }
  }
  return bVar1;
}


