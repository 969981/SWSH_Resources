/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014ba740; name: FUN_014ba740
 */


void FUN_014ba740(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  long *plVar4;
  long local_158;
  char *local_150;
  undefined8 local_148;
  long local_140;
  char *local_138;
  undefined8 local_130;
  long local_128;
  char *local_120;
  undefined8 local_118;
  long local_110;
  char *local_108;
  undefined8 local_100;
  long local_f8;
  char *local_f0;
  undefined8 local_e8;
  long local_e0;
  char *local_d8;
  undefined8 local_d0;
  long local_c8;
  char *local_c0;
  undefined8 local_b8;
  long local_b0;
  char *local_a8;
  undefined8 local_a0;
  long local_98 [2];
  undefined1 *local_88;
  long local_80;
  long local_78;
  undefined8 local_68;
  char *local_60;
  undefined8 local_58;
  long local_48;
  
  uVar3 = FUN_008d3750();
  *(uint *)(param_1 + 0xaf8) = uVar3 & 0xff;
  *(undefined8 *)(param_1 + 0xaf0) = param_2;
  local_68 = 0xc55a351b89197bc4;
  local_60 = "bin/message/grammar/JPN.dat";
  local_58 = 0x1b;
  FUN_014bb440(local_98,&local_68);
  puVar1 = PTR_DAT_02710788;
  FUN_006dccd0(&local_b0,*(undefined8 *)PTR_DAT_02710788,0,local_98,0,
               *(undefined8 *)(param_1 + 0xaf0),0);
  if (*(long *)(param_1 + 0x58) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x58) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  lVar2 = local_b0;
  *(long *)(param_1 + 0x58) = local_b0;
  if (local_b0 != 0) {
    plVar4 = (long *)(local_b0 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    if ((*(long *)(param_1 + 0x60) != 0) || (*(long *)(param_1 + 0xe0) != 0)) {
      FUN_006e1e70(lVar2,param_1 + 0x50,1);
    }
    FUN_006e1be0(lVar2);
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  if ((local_80 != 0) && (local_98[0] != 0)) {
    (**(code **)(*(long *)(local_98[0] + 0x48) + 0x18))();
  }
  local_98[0] = 0;
  local_98[1] = 0xcbf29ce484222645;
  local_88 = &DAT_01d38550;
  local_80 = 0;
  if (local_78 != 0) {
    (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
    local_78 = 0;
  }
  FUN_014bb440(local_98,&local_68);
  FUN_006dccd0(&local_b0,*(undefined8 *)puVar1,0,local_98,0,*(undefined8 *)(param_1 + 0xaf0),0);
  if (*(long *)(param_1 + 0x168) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x168) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x168) = 0;
  }
  *(long *)(param_1 + 0x168) = local_b0;
  if (local_b0 != 0) {
    plVar4 = (long *)(local_b0 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    if ((*(long *)(param_1 + 0x170) != 0) || (*(long *)(param_1 + 0x1f0) != 0)) {
      FUN_006e1e70(local_b0,param_1 + 0x160,1);
    }
    FUN_006e1be0(local_b0);
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  if ((local_80 != 0) && (local_98[0] != 0)) {
    (**(code **)(*(long *)(local_98[0] + 0x48) + 0x18))();
  }
  local_98[0] = 0;
  local_98[1] = 0xcbf29ce484222645;
  local_88 = &DAT_01d38550;
  local_80 = 0;
  if (local_78 != 0) {
    (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
    local_78 = 0;
  }
  local_b0 = 0x2f4566f4d868fa84;
  local_a8 = "bin/message/grammar/English.dat";
  local_a0 = 0x1f;
  FUN_014bb440(local_98,&local_b0);
  FUN_006dccd0(&local_c8,*(undefined8 *)puVar1,0,local_98,0,*(undefined8 *)(param_1 + 0xaf0),0);
  if (*(long *)(param_1 + 0x278) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x278) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x278) = 0;
  }
  *(long *)(param_1 + 0x278) = local_c8;
  if (local_c8 != 0) {
    plVar4 = (long *)(local_c8 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    if ((*(long *)(param_1 + 0x280) != 0) || (*(long *)(param_1 + 0x300) != 0)) {
      FUN_006e1e70(local_c8,param_1 + 0x270,1);
    }
    FUN_006e1be0(local_c8);
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  if ((local_80 != 0) && (local_98[0] != 0)) {
    (**(code **)(*(long *)(local_98[0] + 0x48) + 0x18))();
  }
  local_98[0] = 0;
  local_98[1] = 0xcbf29ce484222645;
  local_88 = &DAT_01d38550;
  local_80 = 0;
  if (local_78 != 0) {
    (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
    local_78 = 0;
  }
  local_c8 = -0x1fef22761ad1763e;
  local_c0 = "bin/message/grammar/French.dat";
  local_b8 = 0x1e;
  FUN_014bb440(local_98,&local_c8);
  FUN_006dccd0(&local_e0,*(undefined8 *)puVar1,0,local_98,0,*(undefined8 *)(param_1 + 0xaf0),0);
  if (*(long *)(param_1 + 0x388) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x388) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x388) = 0;
  }
  *(long *)(param_1 + 0x388) = local_e0;
  if (local_e0 != 0) {
    plVar4 = (long *)(local_e0 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    if ((*(long *)(param_1 + 0x390) != 0) || (*(long *)(param_1 + 0x410) != 0)) {
      FUN_006e1e70(local_e0,param_1 + 0x380,1);
    }
    FUN_006e1be0(local_e0);
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  if ((local_80 != 0) && (local_98[0] != 0)) {
    (**(code **)(*(long *)(local_98[0] + 0x48) + 0x18))();
  }
  local_98[0] = 0;
  local_98[1] = 0xcbf29ce484222645;
  local_88 = &DAT_01d38550;
  local_80 = 0;
  if (local_78 != 0) {
    (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
    local_78 = 0;
  }
  local_e0 = 0x2488796715c8a29c;
  local_d8 = "bin/message/grammar/German.dat";
  local_d0 = 0x1e;
  FUN_014bb440(local_98,&local_e0);
  FUN_006dccd0(&local_f8,*(undefined8 *)puVar1,0,local_98,0,*(undefined8 *)(param_1 + 0xaf0),0);
  if (*(long *)(param_1 + 0x5a8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x5a8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x5a8) = 0;
  }
  *(long *)(param_1 + 0x5a8) = local_f8;
  if (local_f8 != 0) {
    plVar4 = (long *)(local_f8 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    if ((*(long *)(param_1 + 0x5b0) != 0) || (*(long *)(param_1 + 0x630) != 0)) {
      FUN_006e1e70(local_f8,param_1 + 0x5a0,1);
    }
    FUN_006e1be0(local_f8);
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  if ((local_80 != 0) && (local_98[0] != 0)) {
    (**(code **)(*(long *)(local_98[0] + 0x48) + 0x18))();
  }
  local_98[0] = 0;
  local_98[1] = 0xcbf29ce484222645;
  local_88 = &DAT_01d38550;
  local_80 = 0;
  if (local_78 != 0) {
    (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
    local_78 = 0;
  }
  local_f8 = -0x3429876882ef790c;
  local_f0 = "bin/message/grammar/Italian.dat";
  local_e8 = 0x1f;
  FUN_014bb440(local_98,&local_f8);
  FUN_006dccd0(&local_110,*(undefined8 *)puVar1,0,local_98,0,*(undefined8 *)(param_1 + 0xaf0),0);
  if (*(long *)(param_1 + 0x498) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x498) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x498) = 0;
  }
  *(long *)(param_1 + 0x498) = local_110;
  if (local_110 != 0) {
    plVar4 = (long *)(local_110 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    if ((*(long *)(param_1 + 0x4a0) != 0) || (*(long *)(param_1 + 0x520) != 0)) {
      FUN_006e1e70(local_110,param_1 + 0x490,1);
    }
    FUN_006e1be0(local_110);
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  if ((local_80 != 0) && (local_98[0] != 0)) {
    (**(code **)(*(long *)(local_98[0] + 0x48) + 0x18))();
  }
  local_98[0] = 0;
  local_98[1] = 0xcbf29ce484222645;
  local_88 = &DAT_01d38550;
  local_80 = 0;
  if (local_78 != 0) {
    (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
    local_78 = 0;
  }
  local_110 = 0x6c35db96836afc26;
  local_108 = "bin/message/grammar/Korean.dat";
  local_100 = 0x1e;
  FUN_014bb440(local_98,&local_110);
  FUN_006dccd0(&local_128,*(undefined8 *)puVar1,0,local_98,0,*(undefined8 *)(param_1 + 0xaf0),0);
  if (*(long *)(param_1 + 0x7c8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x7c8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x7c8) = 0;
  }
  *(long *)(param_1 + 0x7c8) = local_128;
  if (local_128 != 0) {
    plVar4 = (long *)(local_128 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    if ((*(long *)(param_1 + 2000) != 0) || (*(long *)(param_1 + 0x850) != 0)) {
      FUN_006e1e70(local_128,param_1 + 0x7c0,1);
    }
    FUN_006e1be0(local_128);
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  if ((local_80 != 0) && (local_98[0] != 0)) {
    (**(code **)(*(long *)(local_98[0] + 0x48) + 0x18))();
  }
  local_98[0] = 0;
  local_98[1] = 0xcbf29ce484222645;
  local_88 = &DAT_01d38550;
  local_80 = 0;
  if (local_78 != 0) {
    (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
    local_78 = 0;
  }
  local_128 = 0x68cf7bf48699f7d4;
  local_120 = "bin/message/grammar/Spanish.dat";
  local_118 = 0x1f;
  FUN_014bb440(local_98,&local_128);
  FUN_006dccd0(&local_140,*(undefined8 *)puVar1,0,local_98,0,*(undefined8 *)(param_1 + 0xaf0),0);
  if (*(long *)(param_1 + 0x6b8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x6b8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x6b8) = 0;
  }
  *(long *)(param_1 + 0x6b8) = local_140;
  if (local_140 != 0) {
    plVar4 = (long *)(local_140 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    if ((*(long *)(param_1 + 0x6c0) != 0) || (*(long *)(param_1 + 0x740) != 0)) {
      FUN_006e1e70(local_140,param_1 + 0x6b0,1);
    }
    FUN_006e1be0(local_140);
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  if ((local_80 != 0) && (local_98[0] != 0)) {
    (**(code **)(*(long *)(local_98[0] + 0x48) + 0x18))();
  }
  local_98[0] = 0;
  local_98[1] = 0xcbf29ce484222645;
  local_88 = &DAT_01d38550;
  local_80 = 0;
  if (local_78 != 0) {
    (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
    local_78 = 0;
  }
  local_140 = -0x7b61d3fdbcc75c5;
  local_138 = "bin/message/grammar/Simp_Chinese.dat";
  local_130 = 0x24;
  FUN_014bb440(local_98,&local_140);
  FUN_006dccd0(&local_158,*(undefined8 *)puVar1,0,local_98,0,*(undefined8 *)(param_1 + 0xaf0),0);
  if (*(long *)(param_1 + 0x8d8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x8d8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x8d8) = 0;
  }
  *(long *)(param_1 + 0x8d8) = local_158;
  if (local_158 != 0) {
    plVar4 = (long *)(local_158 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    if ((*(long *)(param_1 + 0x8e0) != 0) || (*(long *)(param_1 + 0x960) != 0)) {
      FUN_006e1e70(local_158,param_1 + 0x8d0,1);
    }
    FUN_006e1be0(local_158);
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  if ((local_80 != 0) && (local_98[0] != 0)) {
    (**(code **)(*(long *)(local_98[0] + 0x48) + 0x18))();
  }
  local_98[0] = 0;
  local_98[1] = 0xcbf29ce484222645;
  local_88 = &DAT_01d38550;
  local_80 = 0;
  if (local_78 != 0) {
    (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
    local_78 = 0;
  }
  local_158 = -0x38b941095285ad97;
  local_150 = "bin/message/grammar/Trad_Chinese.dat";
  local_148 = 0x24;
  FUN_014bb440(local_98,&local_158);
  FUN_006dccd0(&local_48,*(undefined8 *)puVar1,0,local_98,0,*(undefined8 *)(param_1 + 0xaf0),0);
  if (*(long *)(param_1 + 0x9e8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x9e8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x9e8) = 0;
  }
  *(long *)(param_1 + 0x9e8) = local_48;
  if (local_48 != 0) {
    plVar4 = (long *)(local_48 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    if ((*(long *)(param_1 + 0x9f0) != 0) || (*(long *)(param_1 + 0xa70) != 0)) {
      FUN_006e1e70(local_48,param_1 + 0x9e0,1);
    }
    FUN_006e1be0(local_48);
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  if ((local_80 != 0) && (local_98[0] != 0)) {
    (**(code **)(*(long *)(local_98[0] + 0x48) + 0x18))();
  }
  local_98[0] = 0;
  local_98[1] = 0xcbf29ce484222645;
  local_88 = &DAT_01d38550;
  local_80 = 0;
  if (local_78 != 0) {
    (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
  }
  return;
}


