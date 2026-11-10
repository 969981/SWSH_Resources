/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009440e0; name: FUN_009440e0
 */


void FUN_009440e0(undefined8 param_1,undefined1 *param_2,char *param_3)

{
  char cVar1;
  byte bVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined8 local_70;
  char local_68;
  byte local_67;
  undefined4 local_64;
  undefined8 local_60;
  char local_58;
  char local_48 [8];
  
  *param_2 = 0;
  if (*param_3 == '\x1f') {
    uVar6 = 0;
  }
  else {
    uVar6 = FUN_009424e0(param_1);
  }
  FUN_00942390(param_1);
  uVar3 = FUN_009319a0();
  uVar4 = FUN_00913dd0(uVar3,param_3[1]);
  if ((uVar4 & 1) != 0) {
    uVar3 = FUN_009424e0(param_1,param_3[1]);
    uVar4 = FUN_008e1600();
    if (((uVar4 & 1) == 0) || (param_3[0x17] != '\0')) {
      local_78 = *(undefined4 *)(param_3 + 4);
      local_70 = *(undefined8 *)(param_3 + 8);
      local_68 = param_3[0x10];
      local_64 = 0;
      local_60._0_4_ = (uint)CONCAT12(param_3[0x13],CONCAT11(param_3[0x13],param_3[0x11]));
      local_88 = uVar6;
      uStack_80 = uVar3;
      FUN_00942450(param_1);
      uVar5 = FUN_00924ff0();
      FUN_00944d40(uVar5,local_48,&local_88);
      if (local_48[0] == '\0') {
        if (param_3[0x12] != '\0') {
          uVar5 = FUN_009423b0(param_1);
          FUN_00938920(uVar5,uVar6);
        }
        local_78 = *(undefined4 *)(param_3 + 4);
        local_68 = param_3[0x14];
        cVar1 = param_3[0x16];
        local_67 = 0;
        local_60 = (char *)0x0;
        local_58 = 0;
        local_70 = *(undefined8 *)(param_3 + 8);
        local_88 = uVar6;
        uStack_80 = uVar3;
        bVar2 = 0;
        if (param_3[0x15] == '\0') {
          bVar2 = FUN_00943f10(param_3 + 0x18);
          bVar2 = ~bVar2 & 1;
        }
        local_67 = bVar2;
        local_60 = param_3 + 0x18;
        local_58 = cVar1;
        FUN_00942450(param_1);
        uVar3 = FUN_00924fe0();
        FUN_00944340(uVar3,local_48,&local_88);
        if (param_3[0x12] != '\0') {
          uVar3 = FUN_009423b0(param_1);
          FUN_009389e0(uVar3,uVar6);
        }
        *param_2 = 1;
      }
    }
  }
  return;
}


