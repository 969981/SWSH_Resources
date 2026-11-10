/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00355400; name: FUN_00355400
 */


void FUN_00355400(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  int iVar1;
  undefined8 local_4c0;
  undefined8 uStack_4b8;
  undefined8 local_4b0;
  undefined8 uStack_4a8;
  undefined8 local_4a0;
  undefined8 uStack_498;
  undefined8 local_490;
  undefined1 auStack_488 [240];
  undefined1 auStack_398 [32];
  undefined1 auStack_378 [400];
  undefined1 auStack_1e8 [32];
  undefined1 auStack_1c8 [32];
  undefined1 auStack_1a8 [56];
  undefined1 auStack_170 [32];
  undefined1 auStack_150 [32];
  undefined1 auStack_130 [32];
  undefined1 auStack_110 [32];
  undefined1 auStack_f0 [48];
  undefined1 auStack_c0 [56];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  FUN_00214ba0(auStack_488);
  local_58 = 0;
  uStack_60 = 0;
  local_88 = param_1;
  uStack_80 = param_3;
  local_78 = param_2;
  uStack_70 = param_4;
  local_68 = param_5;
  iVar1 = FUN_00355960(auStack_488,&local_88,0);
  local_58 = 0;
  uStack_60 = 0;
  local_88 = param_1;
  uStack_80 = param_3;
  local_78 = param_2;
  uStack_70 = param_4;
  local_68 = param_5;
  FUN_003565f0(&local_88,auStack_398,iVar1);
  FUN_00356780(&local_88,auStack_378,iVar1 + 1);
  local_58 = 0;
  uStack_60 = 0;
  local_88 = param_1;
  uStack_80 = param_3;
  local_78 = param_2;
  uStack_70 = param_4;
  local_68 = param_5;
  FUN_00355570(auStack_488,&local_88,iVar1 + 3);
  local_490 = 0;
  uStack_498 = 0;
  local_4c0 = param_1;
  uStack_4b8 = param_3;
  local_4b0 = param_2;
  uStack_4a8 = param_4;
  local_4a0 = param_5;
  FUN_00357f50(&local_4c0,auStack_1e8,0);
  FUN_003580e0(&local_4c0,auStack_1c8,1);
  FUN_00358270(&local_4c0,auStack_1a8,2);
  FUN_00358400(&local_4c0,auStack_170,4);
  FUN_00358590(&local_4c0,auStack_150,5);
  FUN_00358720(&local_4c0,auStack_130,6);
  FUN_00358990(&local_4c0,auStack_110,7);
  FUN_003592b0(&local_4c0,auStack_f0,8);
  FUN_00358b20(&local_4c0,auStack_c0,9);
  return;
}


