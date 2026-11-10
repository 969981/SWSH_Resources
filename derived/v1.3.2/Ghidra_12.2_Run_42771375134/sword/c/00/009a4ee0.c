/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009a4ee0; name: FUN_009a4ee0
 */


bool FUN_009a4ee0(undefined8 param_1,char param_2,uint param_3)

{
  bool bVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 local_d8 [8];
  undefined8 uStack_d0;
  undefined8 local_c8;
  long lStack_c0;
  undefined2 local_b8;
  undefined5 local_b0;
  undefined3 uStack_ab;
  undefined5 uStack_a8;
  undefined1 local_a3;
  undefined5 uStack_a0;
  undefined3 local_9b;
  undefined5 uStack_98;
  undefined1 local_93;
  undefined5 uStack_90;
  undefined3 local_8b;
  undefined5 uStack_88;
  undefined1 local_83;
  undefined5 uStack_80;
  undefined3 local_7b;
  undefined5 uStack_78;
  undefined1 local_73;
  undefined5 uStack_70;
  undefined3 local_6b;
  undefined5 uStack_68;
  undefined1 local_63;
  undefined5 uStack_60;
  undefined3 local_5b;
  undefined5 uStack_58;
  undefined1 local_53;
  undefined8 local_50;
  undefined5 *puStack_48;
  char local_38 [8];
  
  FUN_00942380();
  uVar2 = FUN_008f8be0();
  bVar1 = false;
  if (((param_2 == '\0') && ((param_3 & 0xff) != 5)) && ((uVar2 & 1) != 0)) {
    FUN_00942380(param_1);
    FUN_008f8fc0(&local_b0);
    if (CONCAT35(uStack_ab,local_b0) != 0) {
      (**(code **)(*(long *)(CONCAT35(uStack_ab,local_b0) + 0x48) + 0x18))();
      local_b0 = 0;
      uStack_ab = 0;
    }
    uVar3 = FUN_009425f0(param_1,0);
    lStack_c0 = FUN_009424b0(param_1,param_3);
    bVar1 = false;
    if (lStack_c0 != 0) {
      FUN_009a50c0(param_1,0);
      uStack_a8 = 0;
      local_b0 = 0;
      uStack_ab = 0;
      local_a3 = 1;
      uStack_98 = 0;
      uStack_a0 = 0;
      local_9b = 0;
      local_93 = 1;
      uStack_88 = 0;
      uStack_90 = 0;
      local_8b = 0;
      local_83 = 1;
      uStack_78 = 0;
      uStack_80 = 0;
      local_7b = 0;
      local_73 = 1;
      uStack_68 = 0;
      uStack_70 = 0;
      local_6b = 0;
      local_63 = 1;
      uStack_58 = 0;
      uStack_60 = 0;
      local_5b = 0;
      local_53 = 1;
      uStack_d0 = FUN_00942380(param_1);
      local_b8 = 1;
      local_c8 = uVar3;
      FUN_009a5210(&local_b0,local_d8);
      local_38[0] = '\0';
      local_50 = uVar3;
      puStack_48 = &local_b0;
      FUN_00942450(param_1);
      uVar3 = FUN_00925310();
      FUN_009a2f70(uVar3,local_38,&local_50);
      bVar1 = local_38[0] != '\0';
    }
  }
  return bVar1;
}


