/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010040a0; name: FUN_010040a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_010040a0(long *param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  char cVar7;
  bool bVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  long *plVar16;
  undefined8 uVar17;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  long local_2b0;
  undefined1 local_2a8 [4];
  undefined8 local_2a4;
  undefined4 local_29c;
  undefined1 auStack_298 [24];
  long local_280;
  undefined1 auStack_278 [24];
  long local_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined1 local_248;
  undefined1 local_240;
  undefined4 local_23c;
  undefined8 local_238;
  undefined1 *puStack_230;
  undefined8 local_228;
  long local_220;
  undefined8 local_218;
  undefined1 local_210;
  undefined4 local_20c;
  undefined8 local_208;
  undefined1 *puStack_200;
  undefined8 local_1f8;
  long local_1f0;
  undefined8 local_1e8;
  undefined1 local_1e0;
  undefined4 local_1dc;
  undefined8 local_1d8;
  undefined1 *puStack_1d0;
  undefined8 local_1c8;
  long local_1c0;
  undefined8 local_1b8;
  undefined1 local_1b0;
  undefined8 local_1a8;
  undefined1 *puStack_1a0;
  undefined8 local_198;
  long local_190;
  undefined8 uStack_188;
  undefined1 local_180;
  undefined8 local_178;
  undefined1 *puStack_170;
  undefined8 local_168;
  long local_160;
  undefined8 uStack_158;
  undefined1 local_150;
  undefined8 local_148;
  undefined1 *puStack_140;
  undefined8 local_138;
  long local_130;
  undefined8 uStack_128;
  undefined1 local_120;
  undefined8 local_118;
  undefined1 *puStack_110;
  undefined8 local_108;
  long local_100;
  undefined8 uStack_f8;
  undefined1 local_f0;
  undefined8 local_e8;
  undefined1 *puStack_e0;
  undefined8 local_d8;
  long local_d0;
  undefined8 local_c8;
  undefined *local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined1 local_7c;
  undefined8 local_78;
  undefined8 local_70;
  
  param_1[7] = 0;
  puVar2 = PTR_DAT_02710a18;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[2] = 0;
  param_1[3] = 0;
  puVar2 = PTR_DAT_02710860;
  lVar11 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (lVar11 == 0) {
    lVar13 = 0;
  }
  else {
    lVar13 = 0;
    if (*(long *)(lVar11 + 0x80) != 0) {
      lVar13 = *(long *)(lVar11 + *(long *)(lVar11 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 10) = 0;
  puVar1 = PTR_DAT_02723490 + 0x48;
  *param_1 = (long)(PTR_DAT_02723490 + 0x10);
  param_1[1] = lVar13;
  param_1[9] = (long)puVar1;
  plVar16 = param_1 + 0xb;
  *plVar16 = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  puVar9 = PTR_DAT_02710ac8;
  puVar1 = PTR_DAT_02710ac8 + 0x10;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0xc] = 0;
  param_1[0x47] = 0;
  param_1[0x46] = 0;
  param_1[0x45] = 0;
  param_1[0x44] = 0;
  param_1[0x69] = 0;
  param_1[0x68] = 0;
  param_1[0x67] = 0;
  param_1[0x66] = 0;
  param_1[0x59] = 0;
  param_1[0x58] = 0;
  param_1[0x57] = 0;
  param_1[0x56] = 0;
  param_1[0x55] = 0;
  param_1[0x54] = (long)puVar1;
  param_1[0x77] = 0;
  param_1[0x76] = 0;
  param_1[0x10] = (long)puVar1;
  param_1[0x11] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x32] = (long)puVar1;
  param_1[0x33] = 0;
  lVar11 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
  if (((lVar11 == 0) || (*(long *)(lVar11 + 0x80) == 0)) ||
     (lVar11 = *(long *)(lVar11 + *(long *)(lVar11 + 0x80) * 8 + -8), lVar11 == 0)) {
    lVar11 = FUN_0075ecb0();
  }
  param_1[0x78] = lVar11;
  param_1[0x79] = 0;
  *(undefined4 *)(param_1 + 0x7a) = 0;
  param_1[0x7b] = 0;
  lVar11 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
  if (((lVar11 == 0) || (*(long *)(lVar11 + 0x80) == 0)) ||
     (lVar11 = *(long *)(lVar11 + *(long *)(lVar11 + 0x80) * 8 + -8), lVar11 == 0)) {
    lVar11 = FUN_0075ecb0();
  }
  param_1[0x7c] = lVar11;
  param_1[0x7d] = 0;
  *(undefined4 *)(param_1 + 0x7e) = 0;
  param_1[0x7f] = 0;
  *(undefined4 *)(param_1 + 0x80) = 0x3f800000;
  param_1[0x84] = 0;
  param_1[0x83] = 0;
  param_1[0x82] = 0;
  puVar2 = PTR_DAT_02710528 + 0x10;
  param_1[0x81] = 0;
  param_1[0x85] = (long)puVar2;
  lVar11 = FUN_007606c0();
  lVar13 = nn::os::GetCurrentThread();
  plVar3 = (long *)(lVar11 + 0x10);
  do {
    if (*plVar3 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar11 + 4));
        while (*plVar3 == 0) {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar8) {
            *plVar3 = lVar13;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') goto LAB_01004294;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar8) {
      *plVar3 = lVar13;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
LAB_01004294:
  puVar2 = PTR_DAT_02710530;
  if (0xff < *(ulong *)(PTR_DAT_02710530 + 0x800)) goto LAB_01004ed4;
  *(long **)(PTR_DAT_02710530 + *(ulong *)(PTR_DAT_02710530 + 0x800) * 8) = param_1 + 0x85;
  *(long *)(puVar2 + 0x800) = *(long *)(puVar2 + 0x800) + 1;
  do {
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar8) {
      *plVar3 = 0;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(lVar11 + 4));
  param_1[0x8d] = 0;
  puVar2 = PTR_DAT_02723498;
  param_1[0x8c] = 0;
  param_1[0x8b] = 0;
  param_1[0x8a] = 0;
  param_1[0x89] = 0;
  param_1[0x88] = 0;
  param_1[0x87] = 0;
  plVar3 = param_1 + 0x106;
  param_1[0x85] = (long)(puVar2 + 0x10);
  puVar2 = PTR_DAT_027234a0;
  param_1[0x86] = 0;
  *(long **)puVar2 = param_1 + 0x85;
  *(undefined2 *)(param_1 + 0x91) = 0;
  param_1[0x90] = 0;
  param_1[0x8f] = 0;
  param_1[0x8e] = 0;
  *(undefined4 *)((long)param_1 + 0x48c) = 0;
  *(undefined2 *)(param_1 + 0x92) = 0;
  *(undefined2 *)((long)param_1 + 0x494) = 0;
  *(undefined4 *)(param_1 + 0x93) = 0;
  *(undefined2 *)((long)param_1 + 0x49c) = 0;
  *(undefined2 *)(param_1 + 0x94) = 0;
  *(undefined4 *)((long)param_1 + 0x4a4) = 0;
  *(undefined2 *)(param_1 + 0x95) = 0;
  *(undefined2 *)((long)param_1 + 0x4ac) = 0;
  *(undefined4 *)(param_1 + 0x96) = 0;
  *(undefined2 *)((long)param_1 + 0x4b4) = 0;
  *(undefined2 *)(param_1 + 0x97) = 0;
  *(undefined4 *)((long)param_1 + 0x4bc) = 0;
  *(undefined2 *)(param_1 + 0x98) = 0;
  *(undefined2 *)((long)param_1 + 0x4c4) = 0;
  *(undefined4 *)(param_1 + 0x99) = 0;
  *(undefined2 *)((long)param_1 + 0x4cc) = 0;
  *(undefined2 *)(param_1 + 0x9a) = 0;
  *(undefined4 *)((long)param_1 + 0x4d4) = 0;
  *(undefined2 *)(param_1 + 0x9b) = 0;
  *(undefined2 *)((long)param_1 + 0x4dc) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  *(undefined2 *)((long)param_1 + 0x4e4) = 0;
  *(undefined2 *)(param_1 + 0x9d) = 0;
  *(undefined4 *)((long)param_1 + 0x4ec) = 0;
  *(undefined2 *)(param_1 + 0x9e) = 0;
  *(undefined2 *)((long)param_1 + 0x4f4) = 0;
  *(undefined4 *)(param_1 + 0x9f) = 0;
  *(undefined2 *)((long)param_1 + 0x4fc) = 0;
  *(undefined2 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)((long)param_1 + 0x504) = 0;
  *(undefined2 *)(param_1 + 0xa1) = 0;
  *(undefined2 *)((long)param_1 + 0x50c) = 0;
  *(undefined4 *)(param_1 + 0xa2) = 0;
  *(undefined2 *)((long)param_1 + 0x514) = 0;
  *(undefined2 *)(param_1 + 0xa3) = 0;
  *(undefined4 *)((long)param_1 + 0x51c) = 0;
  *(undefined2 *)(param_1 + 0xa4) = 0;
  *(undefined2 *)((long)param_1 + 0x524) = 0;
  *(undefined4 *)(param_1 + 0xa5) = 0;
  *(undefined2 *)((long)param_1 + 0x52c) = 0;
  *(undefined2 *)(param_1 + 0xa6) = 0;
  *(undefined4 *)((long)param_1 + 0x534) = 0;
  *(undefined2 *)(param_1 + 0xa7) = 0;
  *(undefined2 *)((long)param_1 + 0x53c) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined2 *)((long)param_1 + 0x544) = 0;
  *(undefined2 *)(param_1 + 0xa9) = 0;
  *(undefined4 *)((long)param_1 + 0x54c) = 0;
  *(undefined2 *)(param_1 + 0xaa) = 0;
  *(undefined2 *)((long)param_1 + 0x554) = 0;
  *(undefined4 *)(param_1 + 0xab) = 0;
  *(undefined2 *)((long)param_1 + 0x55c) = 0;
  *(undefined1 *)((long)param_1 + 0x562) = 0;
  param_1[0xc3] = 0;
  param_1[0xc2] = 0;
  param_1[0xc1] = 0;
  param_1[0xc0] = 0;
  param_1[0xb3] = 0;
  param_1[0xb2] = 0;
  param_1[0xb1] = 0;
  param_1[0xb0] = 0;
  param_1[0xaf] = 0;
  puVar2 = PTR_DAT_02710ad0 + 0x10;
  param_1[0xae] = (long)puVar2;
  param_1[0xe5] = 0;
  param_1[0xe4] = 0;
  param_1[0xe3] = 0;
  param_1[0xe2] = 0;
  param_1[0xd5] = 0;
  param_1[0xd4] = 0;
  param_1[0xd3] = 0;
  param_1[0xd2] = 0;
  param_1[0xd1] = 0;
  param_1[0xd0] = (long)puVar2;
  param_1[0xfd] = 0;
  param_1[0xfc] = 0;
  param_1[0xfb] = 0;
  param_1[0xfa] = 0;
  param_1[0xf9] = 0;
  param_1[0xf8] = 0;
  param_1[0xf7] = 0;
  param_1[0xf6] = 0;
  param_1[0xf5] = 0;
  param_1[0xf4] = 0;
  param_1[0xf3] = 0;
  param_1[0xf2] = 0;
  *(undefined4 *)(param_1 + 0x105) = 0;
  param_1[0x104] = 0;
  param_1[0x103] = 0;
  param_1[0x102] = 0;
  param_1[0x101] = 0;
  param_1[0x107] = 0;
  param_1[0x106] = 0;
  param_1[0x108] = (long)(PTR_DAT_027234a8 + 0x10);
  param_1[0x11f] = 0;
  param_1[0x11e] = 0;
  param_1[0x11d] = 0;
  param_1[0x11c] = 0;
  param_1[0x10f] = 0;
  param_1[0x10e] = 0;
  param_1[0x10d] = 0;
  param_1[0x10c] = 0;
  puVar2 = PTR_DAT_0271d378 + 0x10;
  param_1[0x10a] = (long)puVar2;
  param_1[300] = (long)puVar2;
  param_1[0x10b] = 0;
  param_1[0x141] = 0;
  param_1[0x140] = 0;
  param_1[0x13f] = 0;
  param_1[0x13e] = 0;
  param_1[0x131] = 0;
  param_1[0x130] = 0;
  param_1[0x12f] = 0;
  param_1[0x12e] = 0;
  param_1[0x12d] = 0;
  param_1[0x165] = 0;
  param_1[0x164] = 0;
  param_1[0x163] = 0;
  param_1[0x162] = 0;
  param_1[0x155] = 0;
  param_1[0x154] = 0;
  param_1[0x153] = 0;
  param_1[0x152] = 0;
  param_1[0x151] = 0;
  param_1[0x14f] = 0;
  param_1[0x14e] = 0;
  param_1[0x150] = (long)(puVar9 + 0x10);
  param_1[0x187] = 0;
  param_1[0x186] = 0;
  param_1[0x185] = 0;
  param_1[0x184] = 0;
  param_1[0x177] = 0;
  param_1[0x176] = 0;
  param_1[0x175] = 0;
  param_1[0x174] = 0;
  puVar2 = PTR_DAT_02710540;
  param_1[0x173] = 0;
  param_1[0x172] = (long)(puVar9 + 0x10);
  *(undefined2 *)((long)param_1 + 0xca4) = 0;
  lVar11 = FUN_0100dca0(local_2a8,*(undefined8 *)(*(long *)puVar2 + 8));
  puVar1 = PTR_DAT_027234b0;
  puVar14 = *(undefined8 **)PTR_DAT_027234b0;
  *(long *)PTR_DAT_027234b0 = lVar11;
  if (puVar14 != (undefined8 *)0x0) {
    plVar5 = (long *)puVar14[1];
    uVar17 = puVar14[4];
    uVar4 = puVar14[2];
    uVar6 = puVar14[3];
    (**(code **)*puVar14)(puVar14);
    (**(code **)(*plVar5 + 0x18))(plVar5,uVar4,uVar6,uVar17);
    lVar11 = *(long *)puVar1;
  }
  lVar13 = 0;
  if (lVar11 != 0) {
    lVar13 = lVar11 + 0x48;
  }
  FUN_006cef90(lVar13);
  *plVar3 = *(long *)puVar1;
  uVar12 = FUN_010186d0();
  while ((uVar12 & 1) == 0) {
    nn::os::SleepThread(1000000);
    uVar12 = FUN_010186d0(*plVar3);
  }
  FUN_01018ac0(*plVar3);
  puVar1 = PTR_DAT_02710860;
  lVar11 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar11 + 0x80)) goto LAB_01004ed4;
  *(long **)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = param_2;
  *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
  lVar13 = (**(code **)(*param_2 + 0x10))(param_2,0x90,8);
  if (lVar13 == 0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  FUN_00883c20(lVar13,param_2);
  *(long **)(lVar13 + 8) = param_2;
  *(long *)(lVar13 + 0x10) = lVar13;
  *(undefined8 *)(lVar13 + 0x18) = 0x90;
  *(undefined8 *)(lVar13 + 0x20) = 8;
  *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
  if (lVar13 != 0) {
    (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
  }
  if (*plVar16 != 0) {
    (**(code **)(*(long *)(*plVar16 + 0x48) + 0x18))();
    *plVar16 = 0;
  }
  *plVar16 = lVar13;
  lVar11 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if (0xf < *(ulong *)(lVar11 + 0x80)) goto LAB_01004ed4;
  *(long **)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = param_2;
  *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
  lVar13 = (**(code **)(*param_2 + 0x10))(param_2,0xb8,8);
  if (lVar13 == 0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  FUN_00e03930(lVar13,param_2);
  *(long **)(lVar13 + 8) = param_2;
  *(long *)(lVar13 + 0x10) = lVar13;
  *(undefined8 *)(lVar13 + 0x18) = 0xb8;
  *(undefined8 *)(lVar13 + 0x20) = 8;
  *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
  if (lVar13 != 0) {
    (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
  }
  if (param_1[0xf6] != 0) {
    (**(code **)(*(long *)(param_1[0xf6] + 0x48) + 0x18))();
    param_1[0xf6] = 0;
  }
  param_1[0xf6] = lVar13;
  lVar13 = *(long *)PTR_DAT_02710848;
  lVar11 = FUN_0100e0c0(local_2a8,*(undefined8 *)(*(long *)puVar2 + 8));
  puVar2 = PTR_DAT_027105c8;
  puVar14 = *(undefined8 **)PTR_DAT_027105c8;
  *(long *)PTR_DAT_027105c8 = lVar11;
  if (puVar14 != (undefined8 *)0x0) {
    plVar16 = (long *)puVar14[1];
    uVar17 = puVar14[4];
    uVar4 = puVar14[2];
    uVar6 = puVar14[3];
    (**(code **)*puVar14)(puVar14);
    (**(code **)(*plVar16 + 0x18))(plVar16,uVar4,uVar6,uVar17);
    lVar11 = *(long *)puVar2;
  }
  lVar15 = 0;
  if (lVar11 != 0) {
    lVar15 = lVar11 + 0x48;
  }
  FUN_006cef90(lVar15);
  lVar15 = *(long *)puVar2;
  local_b0 = 0;
  uStack_a8 = 0;
  local_c0 = PTR_DAT_02716498 + 0x10;
  uStack_b8 = 0;
  local_88 = 0x10000;
  local_a0 = 0x8000000200;
  local_98 = 0x8000000080;
  local_70 = 0x3000000;
  local_80 = 0x400;
  local_90 = 0x80;
  local_7c = 0;
  local_78 = 0x1000000000c;
  FUN_0078d360(lVar15,&local_c0,0);
  local_2a8[0] = 0;
  local_2a4 = 0x200000001;
  local_29c = 4;
  FUN_006cf0a0(auStack_298,PTR_DAT_02715928);
  FUN_006cf0a0(auStack_278,PTR_DAT_02715930);
  local_240 = 0;
  local_248 = 0;
  local_238 = 0xcbf29ce484222645;
  puStack_230 = &DAT_01d38550;
  local_210 = 0;
  local_208 = 0xcbf29ce484222645;
  puStack_200 = &DAT_01d38550;
  local_228 = 0;
  local_1e0 = 0;
  local_1f8 = 0;
  local_1b0 = 0;
  local_1c8 = 0;
  local_180 = 0;
  local_198 = 0;
  local_150 = 0;
  local_168 = 0;
  local_120 = 0;
  local_138 = 0;
  local_f0 = 0;
  local_108 = 0;
  local_c8 = 0;
  local_2a8[0] = 1;
  local_1d8 = 0xcbf29ce484222645;
  puStack_1d0 = &DAT_01d38550;
  local_1a8 = 0xcbf29ce484222645;
  puStack_1a0 = &DAT_01d38550;
  local_178 = 0xcbf29ce484222645;
  puStack_170 = &DAT_01d38550;
  local_148 = 0xcbf29ce484222645;
  puStack_140 = &DAT_01d38550;
  local_118 = 0xcbf29ce484222645;
  puStack_110 = &DAT_01d38550;
  local_e8 = 0xcbf29ce484222645;
  puStack_e0 = &DAT_01d38550;
  local_220 = 0;
  local_218 = 0;
  local_1f0 = 0;
  local_1e8 = 0;
  local_1c0 = 0;
  local_1b8 = 0;
  local_190 = 0;
  uStack_188 = 0;
  local_160 = 0;
  uStack_158 = 0;
  local_130 = 0;
  uStack_128 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_258 = 0;
  uStack_250 = 0x1f8000000000;
  FUN_006cf0a0(&local_2c8,PTR_DAT_02719950);
  lVar11 = local_2b0;
  local_240 = 1;
  local_23c = 8;
  local_228 = local_2b8;
  local_238 = local_2c8;
  puStack_230 = (undefined1 *)uStack_2c0;
  if (local_2b0 != 0) {
    (**(code **)(*(long *)(local_2b0 + 0x48) + 0x10))();
  }
  lVar10 = local_220;
  local_220 = lVar11;
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))();
  }
  local_218 = 0x1fa000000000;
  if (local_2b0 != 0) {
    (**(code **)(*(long *)(local_2b0 + 0x48) + 0x18))();
    local_2b0 = 0;
  }
  FUN_006cf0a0(&local_2c8,PTR_DAT_02719958);
  lVar11 = local_2b0;
  local_210 = 1;
  local_20c = 0x10;
  local_1f8 = local_2b8;
  local_208 = local_2c8;
  puStack_200 = (undefined1 *)uStack_2c0;
  if (local_2b0 != 0) {
    (**(code **)(*(long *)(local_2b0 + 0x48) + 0x10))();
  }
  lVar10 = local_1f0;
  local_1f0 = lVar11;
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))();
  }
  local_1e8 = 0x1fe000000000;
  if (local_2b0 != 0) {
    (**(code **)(*(long *)(local_2b0 + 0x48) + 0x18))();
    local_2b0 = 0;
  }
  FUN_006cf0a0(&local_2c8,PTR_DAT_027234b8);
  lVar11 = local_2b0;
  local_1e0 = 1;
  local_1dc = 0x20;
  local_1c8 = local_2b8;
  local_1d8 = local_2c8;
  puStack_1d0 = (undefined1 *)uStack_2c0;
  if (local_2b0 != 0) {
    (**(code **)(*(long *)(local_2b0 + 0x48) + 0x10))();
  }
  lVar10 = local_1c0;
  local_1c0 = lVar11;
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))();
  }
  local_1b8 = 0x1fc000000000;
  if (local_2b0 != 0) {
    (**(code **)(*(long *)(local_2b0 + 0x48) + 0x18))();
    local_2b0 = 0;
  }
  local_248 = 1;
  FUN_0100d7b0(lVar15 + 0x50,local_2a8);
  FUN_00791a80(*(undefined8 *)(lVar15 + 0x238),*(undefined1 *)(lVar15 + 0xb0));
  FUN_00791c30(*(undefined8 *)(lVar15 + 0x238),0xffffffff,PTR_LAB_027234c0);
  FUN_0078d680(lVar15);
  lVar11 = *(long *)(lVar13 + 0x60);
  if (lVar11 == 0) {
    FUN_00790dd0(*(undefined8 *)(lVar15 + 0x238),_DAT_00000130);
    lVar11 = *(long *)(lVar13 + 0x68);
    if (lVar11 == 0) goto LAB_01004eb4;
LAB_01004b2c:
    plVar16 = (long *)(lVar11 + 0x48);
    (**(code **)(*plVar16 + 0x10))(plVar16);
    FUN_00790dd0(*(undefined8 *)(lVar15 + 0x238),*(undefined8 *)(lVar11 + 0x70));
    (**(code **)(*plVar16 + 0x18))(plVar16);
    FUN_010633d0();
  }
  else {
    plVar16 = (long *)(lVar11 + 0x48);
    (**(code **)(*plVar16 + 0x10))(plVar16);
    FUN_00790dd0(*(undefined8 *)(lVar15 + 0x238),*(undefined8 *)(lVar11 + 0x130));
    (**(code **)(*plVar16 + 0x18))(plVar16);
    lVar11 = *(long *)(lVar13 + 0x68);
    if (lVar11 != 0) goto LAB_01004b2c;
LAB_01004eb4:
    FUN_00790dd0(*(undefined8 *)(lVar15 + 0x238),_DAT_00000070);
    FUN_010633d0();
  }
  if (local_d0 != 0) {
    (**(code **)(*(long *)(local_d0 + 0x48) + 0x18))();
    local_d0 = 0;
  }
  if (local_100 != 0) {
    (**(code **)(*(long *)(local_100 + 0x48) + 0x18))();
    local_100 = 0;
  }
  if (local_130 != 0) {
    (**(code **)(*(long *)(local_130 + 0x48) + 0x18))();
    local_130 = 0;
  }
  if (local_160 != 0) {
    (**(code **)(*(long *)(local_160 + 0x48) + 0x18))();
    local_160 = 0;
  }
  if (local_190 != 0) {
    (**(code **)(*(long *)(local_190 + 0x48) + 0x18))();
    local_190 = 0;
  }
  if (local_1c0 != 0) {
    (**(code **)(*(long *)(local_1c0 + 0x48) + 0x18))();
    local_1c0 = 0;
  }
  if (local_1f0 != 0) {
    (**(code **)(*(long *)(local_1f0 + 0x48) + 0x18))();
    local_1f0 = 0;
  }
  if (local_220 != 0) {
    (**(code **)(*(long *)(local_220 + 0x48) + 0x18))();
    local_220 = 0;
  }
  if (local_260 != 0) {
    (**(code **)(*(long *)(local_260 + 0x48) + 0x18))();
    local_260 = 0;
  }
  if (local_280 != 0) {
    (**(code **)(*(long *)(local_280 + 0x48) + 0x18))();
    local_280 = 0;
  }
  *(undefined4 *)(param_1 + 0x194) = 0;
  lVar11 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if (*(ulong *)(lVar11 + 0x80) < 0x10) {
    *(long **)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = param_2;
    *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
    lVar13 = (**(code **)(*param_2 + 0x10))(param_2,0x250,0x10);
    if (lVar13 == 0) {
      (**(code **)(*param_2 + 0xb8))(param_2);
    }
    plVar16 = param_1 + 0x101;
    FUN_014c5f50(lVar13,1,1,param_2);
    *(long **)(lVar13 + 8) = param_2;
    *(long *)(lVar13 + 0x10) = lVar13;
    *(undefined8 *)(lVar13 + 0x18) = 0x250;
    *(undefined8 *)(lVar13 + 0x20) = 0x10;
    *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
    if (lVar13 != 0) {
      (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
    }
    if (*plVar16 != 0) {
      (**(code **)(*(long *)(*plVar16 + 0x48) + 0x18))();
      *plVar16 = 0;
    }
    *plVar16 = lVar13;
    lVar11 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
    if (*(ulong *)(lVar11 + 0x80) < 0x10) {
      *(long **)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = param_2;
      *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
      lVar13 = (**(code **)(*param_2 + 0x10))(param_2,0x80,8);
      if (lVar13 == 0) {
        (**(code **)(*param_2 + 0xb8))(param_2);
      }
      FUN_0077d050(lVar13,0x800);
      *(long **)(lVar13 + 8) = param_2;
      *(long *)(lVar13 + 0x10) = lVar13;
      *(undefined8 *)(lVar13 + 0x18) = 0x80;
      *(undefined8 *)(lVar13 + 0x20) = 8;
      *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
      if (lVar13 != 0) {
        (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
      }
      if (param_1[0x102] != 0) {
        (**(code **)(*(long *)(param_1[0x102] + 0x48) + 0x18))();
        param_1[0x102] = 0;
      }
      param_1[0x102] = lVar13;
      lVar11 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
      if (*(ulong *)(lVar11 + 0x80) < 0x10) {
        *(long **)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = param_2;
        *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
        lVar13 = (**(code **)(*param_2 + 0x10))(param_2,0x80,8);
        if (lVar13 == 0) {
          (**(code **)(*param_2 + 0xb8))(param_2);
        }
        FUN_0077d050(lVar13,0x800);
        *(long **)(lVar13 + 8) = param_2;
        *(long *)(lVar13 + 0x10) = lVar13;
        *(undefined8 *)(lVar13 + 0x18) = 0x80;
        *(undefined8 *)(lVar13 + 0x20) = 8;
        *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
        if (lVar13 != 0) {
          (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
        }
        if (param_1[0x103] != 0) {
          (**(code **)(*(long *)(param_1[0x103] + 0x48) + 0x18))();
          param_1[0x103] = 0;
        }
        param_1[0x103] = lVar13;
        *(undefined4 *)(param_1 + 0x104) = 0;
        param_1[0x100] = 0;
        param_1[0xff] = 0;
        param_1[0xfe] = 0;
        return;
      }
    }
  }
LAB_01004ed4:
                    /* WARNING: Subroutine does not return */
  abort();
}


