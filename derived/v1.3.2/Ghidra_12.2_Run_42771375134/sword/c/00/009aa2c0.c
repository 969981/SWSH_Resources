/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009aa2c0; name: FUN_009aa2c0
 */


undefined8
FUN_009aa2c0(undefined8 param_1,undefined8 param_2,undefined4 param_3,int param_4,undefined1 param_5
            ,uint param_6)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_70;
  int local_68;
  undefined1 local_64;
  undefined1 local_63;
  undefined8 local_60;
  undefined1 local_58;
  char local_48 [8];
  
  uVar2 = FUN_008e0a00(param_2);
  if (param_4 != 0) {
    local_64 = 0;
    local_70 = param_2;
    local_68 = param_4;
    FUN_00942450(param_1);
    uVar3 = FUN_00925bf0();
    FUN_0094bc60(uVar3,local_48,&local_70);
    if (local_48[0] != '\0') {
      if ((param_6 & 1) != 0) {
        FUN_009aa400(param_1,param_3,uVar2);
      }
      local_70 = CONCAT62(local_70._2_6_,0xe);
      uVar3 = FUN_00942380(param_1);
      FUN_00942390(param_1);
      uVar4 = FUN_00931920();
      uVar1 = FUN_008f9470(uVar3,uVar4,uVar2);
      uVar3 = local_70;
      local_70._5_3_ = SUB83(uVar3,5);
      local_70._0_5_ = CONCAT23(5,CONCAT12(uVar1,(undefined2)local_70));
      local_68 = 0;
      FUN_00942450(param_1);
      uVar3 = FUN_00925d10();
      FUN_0094ab90(uVar3,local_48,&local_70);
      local_64 = 1;
      local_60 = 0;
      local_58 = 1;
      local_70 = param_2;
      local_68 = param_4;
      local_63 = param_5;
      FUN_00942450(param_1);
      uVar3 = FUN_00925c00();
      FUN_0094ad90(uVar3,local_48,&local_70);
      return 1;
    }
  }
  return 0;
}


