/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ecb400; name: FUN_00ecb400
 */


void FUN_00ecb400(long param_1,long *param_2,long *param_3,uint param_4)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 local_78;
  char *local_70;
  undefined8 local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_48;
  
  if (((param_4 & 1) != 0) || (*(long *)(param_1 + 0x50) != *param_2)) {
    lVar5 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    }
    lVar4 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1b8);
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
    }
    uVar3 = FUN_01510f00(lVar4,0x67f239d261a2c946);
    if (((uVar3 & 1) == 0) || (uVar3 = FUN_01510f00(lVar4,0x9bb0c46855b1a4fe), (uVar3 & 1) == 0)) {
      local_60 = 0x62136a7b9223dfe0;
      local_58 = "Set_State_Other";
      local_50 = 0xf;
    }
    else {
      local_60 = 0x89c16a210bb09aeb;
      local_58 = "Set_State_Birthday";
      local_50 = 0x12;
    }
    local_48 = 0;
    FUN_008962c0(*(long *)PTR_DAT_027107a8 + 0x108,&local_60);
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      local_48 = 0;
    }
    uVar3 = FUN_01510f00(lVar4,0x60d13065831247e3);
    puVar1 = PTR_DAT_027107a8;
    lVar5 = *(long *)PTR_DAT_027107a8;
    if ((uVar3 & 1) == 0) {
      local_78 = 0x5f5d8fd787ec40fa;
      local_70 = "Set_State_Disable";
      local_68 = 0x11;
    }
    else {
      local_78 = 0x16b86defaf4deb71;
      local_70 = "Set_State_Enable";
      local_68 = 0x10;
    }
    FUN_006cf0a0(&local_60,&local_78);
    FUN_008962c0(lVar5 + 0x108,&local_60);
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      local_48 = 0;
    }
    if (*param_3 == -0xa59822847c1361c) {
      uVar3 = FUN_01510f00(lVar4,0xd24ab4fc3ebf4268);
      lVar5 = *(long *)puVar1;
      if ((uVar3 & 1) == 0) {
        local_78 = 0xa1e0b94ba326a7b0;
        local_70 = "Set_State_Stadium_Intro";
        local_68 = 0x17;
      }
      else {
        local_78 = 0x3ec4243beea48067;
        local_70 = "Set_State_Stadium_Charrange";
        local_68 = 0x1b;
      }
      FUN_006cf0a0(&local_60,&local_78);
      FUN_008962c0(lVar5 + 0x108,&local_60);
      if (local_48 != 0) {
        (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
        local_48 = 0;
      }
    }
    uVar3 = FUN_01510f00(lVar4,0xa2ac4bfdb223d309);
    if (((uVar3 & 1) == 0) && (uVar3 = FUN_01510f00(lVar4,0x350abd7c98947c04), (uVar3 & 1) == 0)) {
      if (*param_3 != -0x340d631b7bddd9bb) {
        FUN_008962c0(*(long *)puVar1 + 0x108,param_3);
      }
    }
    else {
      local_60 = 0xcdf9516d26db08d2;
      local_58 = "Play_bgm_mute";
      local_50 = 0xd;
      local_48 = 0;
      FUN_008962c0(*(long *)puVar1 + 0x108,&local_60);
      if (local_48 != 0) {
        (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
        local_48 = 0;
      }
    }
    uVar2 = FUN_015114c0(lVar4,0x2a27b2aa582e4a5c);
    if (uVar2 < 0x5a) {
      local_60 = 0x2cbf23e787f79088;
      local_58 = "Set_State_wr02_short";
      local_50 = 0x14;
    }
    else {
      local_60 = 0x2052de9963070b37;
      local_58 = "Set_State_wr02_full";
      local_50 = 0x13;
    }
    local_48 = 0;
    FUN_008962c0(*(long *)puVar1 + 0x108,&local_60);
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      local_48 = 0;
    }
    *(long *)(param_1 + 0x50) = *param_2;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
    }
  }
  return;
}


