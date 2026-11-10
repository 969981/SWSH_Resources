/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007b22f0; name: FUN_007b22f0
 */


undefined8 FUN_007b22f0(long param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined2 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined4 uVar17;
  long *plVar18;
  ulong uVar19;
  long *plVar20;
  undefined8 uVar21;
  undefined *local_118;
  undefined1 local_110;
  undefined4 local_10c;
  undefined *local_108;
  undefined1 local_100;
  undefined1 local_ff;
  undefined2 local_fe;
  undefined1 local_fc;
  undefined1 local_fb;
  undefined1 local_fa;
  undefined1 local_f9;
  undefined1 local_f8;
  undefined1 local_f7;
  undefined1 local_f6;
  undefined1 local_f5;
  undefined1 local_f4;
  undefined1 local_f3;
  undefined1 local_f2;
  undefined1 local_f1;
  undefined1 *local_f0;
  undefined8 local_e8;
  undefined *local_e0;
  undefined1 local_d8 [16];
  undefined1 *local_c8;
  undefined8 uStack_c0;
  char acStack_b8 [40];
  Uuid local_90;
  byte local_8f;
  byte local_8e;
  byte local_8d;
  byte local_8c;
  byte local_8b;
  byte local_8a;
  byte local_89;
  byte local_88;
  byte local_87;
  byte local_86;
  byte local_85;
  byte local_84;
  byte local_83;
  byte local_82;
  byte local_81;
  undefined *local_80;
  undefined1 local_78;
  undefined1 local_77;
  undefined2 local_76;
  undefined1 local_74;
  undefined1 local_73;
  undefined1 local_72;
  undefined1 local_71;
  undefined1 local_70;
  undefined1 local_6f;
  undefined1 local_6e;
  undefined1 local_6d;
  undefined1 local_6c;
  undefined1 local_6b;
  undefined1 local_6a;
  undefined1 local_69;
  undefined1 *local_68;
  undefined8 uStack_60;
  undefined1 local_54 [4];
  
  if (((*(long *)(param_1 + 8) == 0) || (*(char *)(param_1 + 0x28) != '\0')) ||
     (*(undefined1 *)(param_1 + 0x28) = 1, *(long *)(param_1 + 0x40) == 0)) {
    return 0;
  }
  plVar18 = (long *)FUN_007ac3d0(1,60000);
  nn::oe::GetPseudoDeviceId(&local_90);
  nn::util::TSNPrintf(acStack_b8,0x25,
                      "%02x%02x%02x%02x-%02x%02x-%02x%02x-%02x%02x-%02x%02x%02x%02x%02x%02x",
                      (ulong)(byte)local_90,(ulong)local_8f,(ulong)local_8e,(ulong)local_8d,
                      (ulong)local_8c,(uint)local_8b,(uint)local_8a,(uint)local_89,(uint)local_88,
                      (uint)local_87,(uint)local_86,(uint)local_85,(uint)local_84,(uint)local_83,
                      (uint)local_82,(uint)local_81);
  puVar2 = PTR_DAT_027167e8;
  local_c8 = local_d8;
  puVar1 = PTR_DAT_027167e8 + 0x10;
  local_d8[0] = 0;
  uStack_c0 = 0x10;
  local_e0 = puVar1;
  FUN_017d05f0(&local_e0,acStack_b8,0xffffffffffffffff);
  uVar16 = local_6b;
  uVar15 = local_6d;
  uVar14 = local_6f;
  uVar13 = local_71;
  uVar12 = local_73;
  uVar11 = local_76;
  uVar10 = local_f1;
  uVar9 = local_f2;
  uVar8 = local_f4;
  uVar7 = local_f6;
  uVar6 = local_f8;
  uVar5 = local_fa;
  uVar4 = local_fc;
  uVar3 = local_ff;
  local_78 = 0;
  local_110 = 0;
  local_118 = PTR_DAT_02716988 + 0x10;
  local_ff = local_77;
  local_77 = uVar3;
  local_76 = local_fe;
  local_fe = uVar11;
  local_fc = local_74;
  local_74 = uVar4;
  local_73 = local_fb;
  local_fb = uVar12;
  local_fa = local_72;
  local_72 = uVar5;
  local_71 = local_f9;
  local_f9 = uVar13;
  local_f8 = local_70;
  local_70 = uVar6;
  local_6f = local_f7;
  local_f7 = uVar14;
  local_f6 = local_6e;
  local_6e = uVar7;
  local_6d = local_f5;
  local_f5 = uVar15;
  local_f4 = local_6c;
  local_6c = uVar8;
  local_6b = local_f3;
  local_f3 = uVar16;
  local_f2 = local_6a;
  local_6a = uVar9;
  local_f0 = &local_100;
  local_f1 = local_69;
  local_68 = &local_78;
  local_10c = 0;
  local_100 = 0;
  local_69 = uVar10;
  local_e8 = 0x10;
  uStack_60 = 0x10;
  local_108 = puVar1;
  local_80 = puVar1;
  FUN_017d0720(&local_80);
  local_10c = param_2;
  FUN_017cef10(&local_108,&local_e0);
  uVar19 = FUN_017b6140(*(undefined8 *)(param_1 + 8),plVar18,&local_118,
                        *(undefined8 *)(param_1 + 0x50));
  if ((uVar19 & 1) == 0) {
    if (((*(long *)(param_1 + 0x18) != 0) && (*(int *)(*(long *)(param_1 + 0x18) + 0x54) != 0)) &&
       (plVar20 = *(long **)(param_1 + 0x20), plVar20 != (long *)0x0)) {
      uVar17 = FUN_007ae410();
      local_54[0] = 0;
      FUN_017d0040(&local_80,local_54);
      (**(code **)(*plVar20 + 0x28))(plVar20,&local_80,uVar17);
    }
    *(undefined1 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    if (plVar18 != (long *)0x0) {
      (**(code **)(*plVar18 + 8))(plVar18);
    }
    uVar21 = 0;
  }
  else {
    *(long **)(param_1 + 0x10) = plVar18;
    plVar20 = (long *)FUN_017cd750(0x28);
    if (plVar20 == (long *)0x0) {
      uVar21 = 1;
    }
    else {
      *plVar20 = (long)(PTR_DAT_02716960 + 0x10);
      plVar20[1] = param_1;
      puVar1 = PTR_LAB_02716990;
      plVar20[4] = (long)plVar18;
      plVar20[2] = (long)puVar1;
      plVar20[3] = 0;
      FUN_017dee40(plVar18,2);
      uVar21 = 1;
      FUN_017de4d0(plVar18,plVar20,0,1);
    }
  }
  local_118 = PTR_DAT_02716998 + 0x10;
  local_108 = puVar2 + 0x10;
  FUN_017d0720(&local_108);
  local_e0 = puVar2 + 0x10;
  FUN_017d0720(&local_e0);
  return uVar21;
}


