/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0132b6b0; name: FUN_0132b6b0
 */


void FUN_0132b6b0(undefined8 param_1,long param_2,uint param_3)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 local_a0;
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [16];
  undefined8 local_78;
  char *pcStack_70;
  undefined8 local_68;
  undefined1 auStack_60 [16];
  
  local_78 = 0xb4d0c0c653568c43;
  pcStack_70 = "foodstuffDataTable";
  local_68 = 0x12;
  FUN_012b4250(auStack_60,param_2 + 0x170,&local_78);
  lVar3 = FUN_012b40f0(auStack_60);
  puVar1 = PTR_DAT_02710830;
  if (lVar3 != 0) {
    uVar6 = 0;
    do {
      FUN_012b4190(auStack_88,auStack_60,uVar6);
      uVar7 = *(undefined8 *)puVar1;
      local_78 = 0x3f63d727b41b7159;
      pcStack_70 = "item_name_hash";
      local_68 = 0xe;
      FUN_012b4250(auStack_98,auStack_88,&local_78);
      local_a0 = 0;
      uVar4 = FUN_012b4b40(auStack_98,&local_a0);
      uVar2 = FUN_008d2e70(uVar7,uVar4);
      if ((uVar2 & 0xffff) == param_3) {
        FUN_012b4190(param_1,auStack_60,uVar6 & 0xffffffff);
        return;
      }
      uVar6 = uVar6 + 1;
      uVar5 = FUN_012b40f0(auStack_60);
    } while (uVar6 < uVar5);
  }
  FUN_012b4040(param_1);
  return;
}


