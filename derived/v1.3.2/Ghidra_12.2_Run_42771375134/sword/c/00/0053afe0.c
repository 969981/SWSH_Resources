/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0053afe0; name: FUN_0053afe0
 */


undefined8
FUN_0053afe0(undefined8 param_1,undefined1 param_2 [16],undefined4 param_3,long param_4,int param_5,
            ulong param_6,float *param_7)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 local_c4;
  undefined4 uStack_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined8 local_a4;
  undefined8 local_9c;
  undefined4 local_94;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  
  if ((float *)&local_70 != param_7) {
    local_70 = *(undefined8 *)param_7;
    local_68 = *(undefined8 *)(param_7 + 2);
    local_60 = *(undefined8 *)(param_7 + 4);
    local_58 = *(undefined8 *)(param_7 + 6);
  }
  uVar2 = param_2._0_4_;
  FUN_00529a50(param_4);
  if ((undefined8 *)(param_4 + 0xb84) != &local_90) {
    local_90 = *(undefined8 *)(param_4 + 0xb84);
    local_88 = *(undefined8 *)(param_4 + 0xb8c);
    local_80 = *(undefined8 *)(param_4 + 0xb94);
    local_78 = *(undefined8 *)(param_4 + 0xb9c);
  }
  if ((param_6 & 1) == 0) {
    if (((((*param_7 == DAT_0275cd6c) && (param_7[1] == DAT_0275cd70)) &&
         (param_7[2] == DAT_0275cd74)) &&
        ((param_7[3] == DAT_0275cd78 && (param_7[4] == DAT_0275cd7c)))) &&
       ((param_7[5] == DAT_0275cd80 &&
        ((param_7[6] == DAT_0275cd84 && (param_7[7] == DAT_0275cd88)))))) {
      FUN_00511040(&local_d0,0x15);
      local_60 = CONCAT44(local_bc,uStack_c0);
      local_68 = CONCAT44(local_c4,uStack_c8);
      local_58 = local_b8;
      local_70 = CONCAT44(uStack_cc,local_d0);
    }
    FUN_0053aa20(param_1,0x3f800000,param_2._0_8_,&local_d0,&local_90,1,&local_70);
  }
  else {
    local_44 = (undefined4)param_1;
    local_48 = 0x3f800000;
    local_50 = 0;
    local_4c = param_2._0_4_;
    local_d0 = FUN_0053c740(&local_44,&local_90,&local_48,&local_4c,&local_50,1,0);
    local_c4 = 0;
    uStack_c0 = 0;
    uStack_cc = 0;
    uStack_c8 = 0;
    local_9c = 0;
    local_a4 = 0;
    local_94 = 0x3f800000;
    local_b8 = 0;
    uStack_b0 = 0;
    local_bc = uVar2;
    local_a8 = param_3;
  }
  lVar1 = param_4 + (long)param_5 * 0x40 + 0x9b4;
  FUN_00515cb0(lVar1,lVar1,&local_d0);
  *(undefined1 *)(param_4 + param_5 + 0xb34) = 1;
  return 0;
}


