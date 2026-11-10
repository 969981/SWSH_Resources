/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010011e0; name: FUN_010011e0
 */


long FUN_010011e0(long *param_1,long param_2)

{
  undefined1 uVar1;
  undefined2 uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  ulong uVar12;
  undefined1 auStack_150 [16];
  undefined1 auStack_140 [16];
  undefined1 auStack_130 [16];
  undefined1 auStack_120 [16];
  undefined1 auStack_110 [16];
  undefined8 local_100;
  char *local_f8;
  undefined8 local_f0;
  long local_e8;
  undefined8 local_e0;
  char *local_d8;
  undefined8 local_d0;
  undefined1 auStack_c8 [16];
  long local_b8;
  char *local_b0;
  undefined8 local_a8;
  long local_a0;
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [24];
  
  local_b8 = 0x70e8de74628ae87d;
  local_b0 = "bg_table";
  local_a8 = 8;
  FUN_012b4250(auStack_88,*(long *)PTR_DAT_027108a8 + 0x160,&local_b8);
  lVar4 = FUN_012b40f0(auStack_88);
  if (lVar4 != 0) {
    uVar8 = 1;
    do {
      lVar7 = (long)(int)(uVar8 - 1);
      FUN_012b4190(auStack_98,auStack_88,lVar7);
      local_e0 = 0xa44ef78166bacbb6;
      local_d8 = "bg_id";
      local_d0 = 5;
      FUN_012b4250(auStack_c8,auStack_98,&local_e0);
      local_100 = 0xcbf29ce484222645;
      local_f8 = "";
      local_f0 = 0;
      local_e8 = 0;
      FUN_012b4820(&local_b8,auStack_c8,&local_100);
      lVar4 = local_b8;
      lVar9 = *param_1;
      if (local_a0 != 0) {
        (**(code **)(*(long *)(local_a0 + 0x48) + 0x18))();
        local_a0 = 0;
      }
      if (local_e8 != 0) {
        (**(code **)(*(long *)(local_e8 + 0x48) + 0x18))();
        local_e8 = 0;
      }
      if (lVar4 == lVar9) goto LAB_01001340;
      uVar5 = FUN_012b40f0(auStack_88);
      uVar12 = (ulong)uVar8;
      uVar8 = uVar8 + 1;
    } while (uVar12 < uVar5);
  }
  lVar7 = 1;
LAB_01001340:
  FUN_012b4190(auStack_98,auStack_88,lVar7);
  local_b8 = -0x405eac85761b037a;
  local_b0 = "enable_darkball";
  local_a8 = 0xf;
  FUN_012b4250(&local_100,auStack_98,&local_b8);
  iVar3 = FUN_012b4420(&local_100,0);
  *(bool *)param_2 = iVar3 != 0;
  local_b8 = -0x25ede911af2c2329;
  local_b0 = "mino_form";
  local_a8 = 9;
  FUN_012b4250(&local_100,auStack_98,&local_b8);
  uVar1 = FUN_012b4420(&local_100,0);
  *(undefined1 *)(param_2 + 4) = uVar1;
  local_b8 = -0x20a6c150de287536;
  local_b0 = "waza_sizen";
  local_a8 = 10;
  FUN_012b4250(&local_100,auStack_98,&local_b8);
  uVar2 = FUN_012b4420(&local_100,0);
  *(undefined2 *)(param_2 + 2) = uVar2;
  local_b8 = 0x5bdb52177f5e289e;
  local_b0 = "is_rosetower";
  local_a8 = 0xc;
  FUN_012b4250(&local_100,auStack_98,&local_b8);
  iVar3 = FUN_012b4420(&local_100,0);
  *(bool *)(param_2 + 5) = iVar3 != 0;
  local_b8 = 0x3233b3e48a6b951;
  local_b0 = "is_stadium";
  local_a8 = 10;
  FUN_012b4250(&local_100,auStack_98,&local_b8);
  iVar3 = FUN_012b4420(&local_100,0);
  *(bool *)(param_2 + 6) = iVar3 != 0;
  local_a8 = 0xe;
  local_b8 = 0x18524f8ab38d914e;
  local_b0 = "is_stadiumwide";
  FUN_012b4250(&local_100,auStack_98,&local_b8);
  iVar3 = FUN_012b4420(&local_100,0);
  *(bool *)(param_2 + 7) = iVar3 != 0;
  local_b8 = -0x5818491f390a2b8a;
  local_b0 = "is_waitcam_except";
  local_a8 = 0x11;
  FUN_012b4250(&local_100,auStack_98,&local_b8);
  iVar3 = FUN_012b4420(&local_100,0);
  lVar4 = 0;
  lVar7 = 0x10;
  *(bool *)(param_2 + 8) = iVar3 != 0;
  do {
    local_b8 = 0x5afca7043bbcc92a;
    local_b0 = "AudienceColArr";
    local_a8 = 0xe;
    FUN_012b4250(auStack_110,auStack_98,&local_b8);
    FUN_012b4190(auStack_c8,auStack_110,lVar4);
    FUN_012b4630(0,auStack_c8);
    uVar10 = FUN_00795bb0();
    local_100 = 0x5afca7043bbcc92a;
    local_f8 = "AudienceColArr";
    local_f0 = 0xe;
    FUN_012b4250(auStack_130,auStack_98,&local_100);
    FUN_012b4190(auStack_120,auStack_130,lVar4 + 1);
    FUN_012b4630(0,auStack_120);
    uVar11 = FUN_00795bb0();
    local_e0 = 0x5afca7043bbcc92a;
    local_d8 = "AudienceColArr";
    local_d0 = 0xe;
    FUN_012b4250(auStack_150,auStack_98,&local_e0);
    FUN_012b4190(auStack_140,auStack_150,lVar4 + 2);
    FUN_012b4630(0,auStack_140);
    uVar12 = FUN_00795bb0();
    lVar4 = lVar4 + 3;
    ((undefined8 *)(param_2 + lVar7))[1] = uVar12 & 0xffffffff;
    *(undefined8 *)(param_2 + lVar7) = CONCAT44(uVar11,uVar10);
    lVar7 = lVar7 + 0x10;
  } while (lVar4 != 0x30);
  local_b8 = -0x6047011dd914f20b;
  local_b0 = "eff_flash";
  local_a8 = 9;
  FUN_012b4250(&local_100,auStack_98,&local_b8);
  local_e0 = 0;
  uVar6 = FUN_012b4b40(&local_100,&local_e0);
  *(undefined8 *)(param_2 + 0x110) = uVar6;
  local_e0 = 0x630e89ecea967e0e;
  local_d8 = "sound_attr";
  local_d0 = 10;
  FUN_012b4250(auStack_c8,auStack_98,&local_e0);
  local_100 = 0xcbf29ce484222645;
  local_f8 = "";
  local_f0 = 0;
  local_e8 = 0;
  FUN_012b4820(&local_b8,auStack_c8,&local_100);
  *(long *)(param_2 + 0x118) = local_b8;
  *(char **)(param_2 + 0x120) = local_b0;
  *(undefined8 *)(param_2 + 0x128) = local_a8;
  if (*(long *)(param_2 + 0x130) != 0) {
    (**(code **)(*(long *)(*(long *)(param_2 + 0x130) + 0x48) + 0x18))();
    *(undefined8 *)(param_2 + 0x130) = 0;
  }
  lVar4 = local_a0;
  local_a0 = 0;
  *(long *)(param_2 + 0x130) = lVar4;
  if (local_e8 != 0) {
    (**(code **)(*(long *)(local_e8 + 0x48) + 0x18))();
    local_e8 = 0;
  }
  local_b8 = 0x161b78d32417b308;
  local_b0 = "normal_timezone";
  local_a8 = 0xf;
  FUN_012b4250(&local_100,auStack_98,&local_b8);
  uVar1 = FUN_012b4420(&local_100,0);
  *(undefined1 *)(param_2 + 0x138) = uVar1;
  local_b8 = -0x7d0a6181fd732037;
  local_b0 = "comm_timezone";
  local_a8 = 0xd;
  FUN_012b4250(&local_100,auStack_98,&local_b8);
  uVar1 = FUN_012b4420(&local_100,0);
  *(undefined1 *)(param_2 + 0x139) = uVar1;
  return param_2;
}


