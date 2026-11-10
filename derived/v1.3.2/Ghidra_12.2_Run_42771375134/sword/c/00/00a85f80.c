/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a85f80; name: FUN_00a85f80
 */


void FUN_00a85f80(long *param_1)

{
  undefined *puVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  undefined *puVar7;
  long lVar8;
  code *pcVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  
  puVar7 = PTR_DAT_02710a48;
  puVar1 = PTR_DAT_02719490 + 0x10;
  param_1[9] = (long)(PTR_DAT_02719490 + 0xae0);
  *param_1 = (long)puVar1;
  param_1[0x3c4] = (long)(puVar7 + 0x10);
  if (param_1[0x3c5] == 0) {
    param_1[0x3c5] = 0;
    pcVar9 = (code *)param_1[0x3d7];
  }
  else {
    FUN_006e2100(param_1[0x3c5],param_1 + 0x3c4);
    lVar8 = param_1[0x3c5];
    param_1[0x3c5] = 0;
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))();
    }
    pcVar9 = (code *)param_1[0x3d7];
  }
  if (pcVar9 != (code *)0x0) {
    param_1[0x3d9] = 0;
    param_1[0x3d8] = 0;
    param_1[0x3d7] = 0;
    param_1[0x3d6] = 0;
    (*pcVar9)(param_1 + 0x3da);
  }
  pcVar9 = (code *)param_1[0x3c7];
  if (pcVar9 != (code *)0x0) {
    param_1[0x3c9] = 0;
    param_1[0x3c8] = 0;
    param_1[0x3c7] = 0;
    param_1[0x3c6] = 0;
    (*pcVar9)(param_1 + 0x3ca);
  }
  if (param_1[0x3c5] != 0) {
    (**(code **)(*(long *)(param_1[0x3c5] + 0x48) + 0x18))();
    param_1[0x3c5] = 0;
  }
  puVar10 = (undefined8 *)param_1[0x3bf];
  param_1[0x3bf] = 0;
  if (puVar10 != (undefined8 *)0x0) {
    (**(code **)*puVar10)(puVar10);
    (**(code **)(*(long *)param_1[0x3c0] + 0x18))
              ((long *)param_1[0x3c0],puVar10,param_1[0x3c1],param_1[0x3c2]);
  }
  puVar10 = (undefined8 *)param_1[0x3bb];
  param_1[0x3bb] = 0;
  if (puVar10 != (undefined8 *)0x0) {
    (**(code **)*puVar10)(puVar10);
    (**(code **)(*(long *)param_1[0x3bc] + 0x18))
              ((long *)param_1[0x3bc],puVar10,param_1[0x3bd],param_1[0x3be]);
  }
  plVar11 = (long *)param_1[0x3b3];
  while (plVar11 != (long *)0x0) {
    lVar8 = *plVar11;
    (**(code **)(*(long *)param_1[0x3b4] + 0x18))((long *)param_1[0x3b4],plVar11,0x20,8);
    plVar11 = (long *)lVar8;
  }
  lVar8 = param_1[0x3ae];
  param_1[0x3ae] = 0;
  if (lVar8 != 0) {
    (**(code **)(*(long *)param_1[0x3b0] + 0x18))
              ((long *)param_1[0x3b0],lVar8,param_1[0x3af] << 3,8);
  }
  param_1[0x38c] = (long)(puVar7 + 0x10);
  if (param_1[0x38d] == 0) {
    param_1[0x38d] = 0;
    pcVar9 = (code *)param_1[0x39f];
  }
  else {
    FUN_006e2100(param_1[0x38d],param_1 + 0x38c);
    lVar8 = param_1[0x38d];
    param_1[0x38d] = 0;
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))();
    }
    pcVar9 = (code *)param_1[0x39f];
  }
  if (pcVar9 != (code *)0x0) {
    param_1[0x3a1] = 0;
    param_1[0x3a0] = 0;
    param_1[0x39f] = 0;
    param_1[0x39e] = 0;
    (*pcVar9)(param_1 + 0x3a2);
  }
  pcVar9 = (code *)param_1[0x38f];
  if (pcVar9 != (code *)0x0) {
    param_1[0x391] = 0;
    param_1[0x390] = 0;
    param_1[0x38f] = 0;
    param_1[0x38e] = 0;
    (*pcVar9)(param_1 + 0x392);
  }
  if (param_1[0x38d] != 0) {
    (**(code **)(*(long *)(param_1[0x38d] + 0x48) + 0x18))();
    param_1[0x38d] = 0;
  }
  param_1[0x36a] = (long)(puVar7 + 0x10);
  if (param_1[0x36b] == 0) {
    param_1[0x36b] = 0;
    pcVar9 = (code *)param_1[0x37d];
  }
  else {
    FUN_006e2100(param_1[0x36b],param_1 + 0x36a);
    lVar8 = param_1[0x36b];
    param_1[0x36b] = 0;
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))();
    }
    pcVar9 = (code *)param_1[0x37d];
  }
  if (pcVar9 != (code *)0x0) {
    param_1[0x37f] = 0;
    param_1[0x37e] = 0;
    param_1[0x37d] = 0;
    param_1[0x37c] = 0;
    (*pcVar9)(param_1 + 0x380);
  }
  pcVar9 = (code *)param_1[0x36d];
  if (pcVar9 != (code *)0x0) {
    param_1[0x36f] = 0;
    param_1[0x36e] = 0;
    param_1[0x36d] = 0;
    param_1[0x36c] = 0;
    (*pcVar9)(param_1 + 0x370);
  }
  if (param_1[0x36b] != 0) {
    (**(code **)(*(long *)(param_1[0x36b] + 0x48) + 0x18))();
    param_1[0x36b] = 0;
  }
  param_1[0x346] = (long)(puVar7 + 0x10);
  if (param_1[0x347] == 0) {
    param_1[0x347] = 0;
    pcVar9 = (code *)param_1[0x359];
  }
  else {
    FUN_006e2100(param_1[0x347],param_1 + 0x346);
    lVar8 = param_1[0x347];
    param_1[0x347] = 0;
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))();
    }
    pcVar9 = (code *)param_1[0x359];
  }
  if (pcVar9 != (code *)0x0) {
    param_1[0x35b] = 0;
    param_1[0x35a] = 0;
    param_1[0x359] = 0;
    param_1[0x358] = 0;
    (*pcVar9)(param_1 + 0x35c);
  }
  pcVar9 = (code *)param_1[0x349];
  if (pcVar9 != (code *)0x0) {
    param_1[0x34b] = 0;
    param_1[0x34a] = 0;
    param_1[0x349] = 0;
    param_1[0x348] = 0;
    (*pcVar9)(param_1 + 0x34c);
  }
  if (param_1[0x347] != 0) {
    (**(code **)(*(long *)(param_1[0x347] + 0x48) + 0x18))();
    param_1[0x347] = 0;
  }
  param_1[0x322] = (long)(puVar7 + 0x10);
  if (param_1[0x323] == 0) {
    param_1[0x323] = 0;
    pcVar9 = (code *)param_1[0x335];
  }
  else {
    FUN_006e2100(param_1[0x323],param_1 + 0x322);
    lVar8 = param_1[0x323];
    param_1[0x323] = 0;
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))();
    }
    pcVar9 = (code *)param_1[0x335];
  }
  if (pcVar9 != (code *)0x0) {
    param_1[0x337] = 0;
    param_1[0x336] = 0;
    param_1[0x335] = 0;
    param_1[0x334] = 0;
    (*pcVar9)(param_1 + 0x338);
  }
  pcVar9 = (code *)param_1[0x325];
  if (pcVar9 != (code *)0x0) {
    param_1[0x327] = 0;
    param_1[0x326] = 0;
    param_1[0x325] = 0;
    param_1[0x324] = 0;
    (*pcVar9)(param_1 + 0x328);
  }
  if (param_1[0x323] != 0) {
    (**(code **)(*(long *)(param_1[0x323] + 0x48) + 0x18))();
    param_1[0x323] = 0;
  }
  if (param_1[0x305] != 0) {
    (**(code **)(*(long *)(param_1[0x305] + 0x48) + 0x18))();
    param_1[0x305] = 0;
  }
  if (param_1[0x301] != 0) {
    (**(code **)(*(long *)(param_1[0x301] + 0x48) + 0x18))();
    param_1[0x301] = 0;
  }
  param_1[700] = (long)(puVar7 + 0x10);
  if (param_1[0x2bd] == 0) {
    param_1[0x2bd] = 0;
    pcVar9 = (code *)param_1[0x2cf];
  }
  else {
    FUN_006e2100(param_1[0x2bd],param_1 + 700);
    lVar8 = param_1[0x2bd];
    param_1[0x2bd] = 0;
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))();
    }
    pcVar9 = (code *)param_1[0x2cf];
  }
  if (pcVar9 != (code *)0x0) {
    param_1[0x2d1] = 0;
    param_1[0x2d0] = 0;
    param_1[0x2cf] = 0;
    param_1[0x2ce] = 0;
    (*pcVar9)(param_1 + 0x2d2);
  }
  pcVar9 = (code *)param_1[0x2bf];
  if (pcVar9 != (code *)0x0) {
    param_1[0x2c1] = 0;
    param_1[0x2c0] = 0;
    param_1[0x2bf] = 0;
    param_1[0x2be] = 0;
    (*pcVar9)(param_1 + 0x2c2);
  }
  if (param_1[0x2bd] != 0) {
    (**(code **)(*(long *)(param_1[0x2bd] + 0x48) + 0x18))();
    param_1[0x2bd] = 0;
  }
  param_1[0x29a] = (long)(puVar7 + 0x10);
  if (param_1[0x29b] == 0) {
    param_1[0x29b] = 0;
    pcVar9 = (code *)param_1[0x2ad];
  }
  else {
    FUN_006e2100(param_1[0x29b],param_1 + 0x29a);
    lVar8 = param_1[0x29b];
    param_1[0x29b] = 0;
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))();
    }
    pcVar9 = (code *)param_1[0x2ad];
  }
  if (pcVar9 != (code *)0x0) {
    param_1[0x2af] = 0;
    param_1[0x2ae] = 0;
    param_1[0x2ad] = 0;
    param_1[0x2ac] = 0;
    (*pcVar9)(param_1 + 0x2b0);
  }
  pcVar9 = (code *)param_1[0x29d];
  if (pcVar9 != (code *)0x0) {
    param_1[0x29f] = 0;
    param_1[0x29e] = 0;
    param_1[0x29d] = 0;
    param_1[0x29c] = 0;
    (*pcVar9)(param_1 + 0x2a0);
  }
  if (param_1[0x29b] != 0) {
    (**(code **)(*(long *)(param_1[0x29b] + 0x48) + 0x18))();
    param_1[0x29b] = 0;
  }
  FUN_00a872f0(param_1 + 0x20c);
  FUN_00a872f0(param_1 + 0x180);
  if (param_1[0x17b] != 0) {
    (**(code **)(*(long *)(param_1[0x17b] + 0x48) + 0x18))();
    param_1[0x17b] = 0;
  }
  if (param_1[0x17a] != 0) {
    (**(code **)(*(long *)(param_1[0x17a] + 0x48) + 0x18))();
    param_1[0x17a] = 0;
  }
  if (param_1[0x178] != 0) {
    (**(code **)(*(long *)(param_1[0x178] + 0x48) + 0x18))();
    param_1[0x178] = 0;
  }
  if (param_1[0x177] != 0) {
    (**(code **)(*(long *)(param_1[0x177] + 0x48) + 0x18))();
    param_1[0x177] = 0;
  }
  if (param_1[0x176] != 0) {
    (**(code **)(*(long *)(param_1[0x176] + 0x48) + 0x18))();
    param_1[0x176] = 0;
  }
  if (param_1[0x175] != 0) {
    (**(code **)(*(long *)(param_1[0x175] + 0x48) + 0x18))();
    param_1[0x175] = 0;
  }
  if (param_1[0x174] != 0) {
    (**(code **)(*(long *)(param_1[0x174] + 0x48) + 0x18))();
    param_1[0x174] = 0;
  }
  if (param_1[0x172] != 0) {
    (**(code **)(*(long *)(param_1[0x172] + 0x48) + 0x18))();
    param_1[0x172] = 0;
  }
  lVar8 = param_1[0x16e];
  param_1[0x16e] = 0;
  if (lVar8 != 0) {
    FUN_00784490(lVar8);
    (**(code **)(*(long *)param_1[0x16f] + 0x18))
              ((long *)param_1[0x16f],lVar8,param_1[0x170],param_1[0x171]);
  }
  lVar8 = param_1[0x16a];
  param_1[0x16a] = 0;
  if (lVar8 != 0) {
    FUN_00784490(lVar8);
    (**(code **)(*(long *)param_1[0x16b] + 0x18))
              ((long *)param_1[0x16b],lVar8,param_1[0x16c],param_1[0x16d]);
  }
  param_1[0x148] = (long)(PTR_DAT_027164e0 + 0x10);
  if (param_1[0x149] == 0) {
    param_1[0x149] = 0;
    pcVar9 = (code *)param_1[0x15b];
  }
  else {
    FUN_006e2100(param_1[0x149],param_1 + 0x148);
    lVar8 = param_1[0x149];
    param_1[0x149] = 0;
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))();
    }
    pcVar9 = (code *)param_1[0x15b];
  }
  if (pcVar9 != (code *)0x0) {
    param_1[0x15d] = 0;
    param_1[0x15c] = 0;
    param_1[0x15b] = 0;
    param_1[0x15a] = 0;
    (*pcVar9)(param_1 + 0x15e);
  }
  pcVar9 = (code *)param_1[0x14b];
  if (pcVar9 != (code *)0x0) {
    param_1[0x14d] = 0;
    param_1[0x14c] = 0;
    param_1[0x14b] = 0;
    param_1[0x14a] = 0;
    (*pcVar9)(param_1 + 0x14e);
  }
  if (param_1[0x149] != 0) {
    (**(code **)(*(long *)(param_1[0x149] + 0x48) + 0x18))();
    param_1[0x149] = 0;
  }
  param_1[0x126] = (long)(puVar7 + 0x10);
  if (param_1[0x127] == 0) {
    param_1[0x127] = 0;
    pcVar9 = (code *)param_1[0x139];
  }
  else {
    FUN_006e2100(param_1[0x127],param_1 + 0x126);
    lVar8 = param_1[0x127];
    param_1[0x127] = 0;
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))();
    }
    pcVar9 = (code *)param_1[0x139];
  }
  if (pcVar9 != (code *)0x0) {
    param_1[0x13b] = 0;
    param_1[0x13a] = 0;
    param_1[0x139] = 0;
    param_1[0x138] = 0;
    (*pcVar9)(param_1 + 0x13c);
  }
  pcVar9 = (code *)param_1[0x129];
  if (pcVar9 != (code *)0x0) {
    param_1[299] = 0;
    param_1[0x12a] = 0;
    param_1[0x129] = 0;
    param_1[0x128] = 0;
    (*pcVar9)(param_1 + 300);
  }
  if (param_1[0x127] != 0) {
    (**(code **)(*(long *)(param_1[0x127] + 0x48) + 0x18))();
    param_1[0x127] = 0;
  }
  if (param_1[0x125] != 0) {
    (**(code **)(*(long *)(param_1[0x125] + 0x48) + 0x18))();
    param_1[0x125] = 0;
  }
  if (param_1[0x124] != 0) {
    (**(code **)(*(long *)(param_1[0x124] + 0x48) + 0x18))();
    param_1[0x124] = 0;
  }
  puVar1 = PTR_DAT_02715af8;
  param_1[0x102] = (long)(PTR_DAT_02715af8 + 0x10);
  if (param_1[0x103] == 0) {
    param_1[0x103] = 0;
    pcVar9 = (code *)param_1[0x115];
  }
  else {
    FUN_006e2100(param_1[0x103],param_1 + 0x102);
    lVar8 = param_1[0x103];
    param_1[0x103] = 0;
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))();
    }
    pcVar9 = (code *)param_1[0x115];
  }
  if (pcVar9 != (code *)0x0) {
    param_1[0x117] = 0;
    param_1[0x116] = 0;
    param_1[0x115] = 0;
    param_1[0x114] = 0;
    (*pcVar9)(param_1 + 0x118);
  }
  pcVar9 = (code *)param_1[0x105];
  if (pcVar9 != (code *)0x0) {
    param_1[0x107] = 0;
    param_1[0x106] = 0;
    param_1[0x105] = 0;
    param_1[0x104] = 0;
    (*pcVar9)(param_1 + 0x108);
  }
  if (param_1[0x103] != 0) {
    (**(code **)(*(long *)(param_1[0x103] + 0x48) + 0x18))();
    param_1[0x103] = 0;
  }
  if (param_1[0x101] != 0) {
    (**(code **)(*(long *)(param_1[0x101] + 0x48) + 0x18))();
    param_1[0x101] = 0;
  }
  if (param_1[0x100] != 0) {
    (**(code **)(*(long *)(param_1[0x100] + 0x48) + 0x18))();
    param_1[0x100] = 0;
  }
  param_1[0xde] = (long)(puVar1 + 0x10);
  if (param_1[0xdf] == 0) {
    param_1[0xdf] = 0;
    pcVar9 = (code *)param_1[0xf1];
  }
  else {
    FUN_006e2100(param_1[0xdf],param_1 + 0xde);
    lVar8 = param_1[0xdf];
    param_1[0xdf] = 0;
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))();
    }
    pcVar9 = (code *)param_1[0xf1];
  }
  if (pcVar9 != (code *)0x0) {
    param_1[0xf3] = 0;
    param_1[0xf2] = 0;
    param_1[0xf1] = 0;
    param_1[0xf0] = 0;
    (*pcVar9)(param_1 + 0xf4);
  }
  pcVar9 = (code *)param_1[0xe1];
  if (pcVar9 != (code *)0x0) {
    param_1[0xe3] = 0;
    param_1[0xe2] = 0;
    param_1[0xe1] = 0;
    param_1[0xe0] = 0;
    (*pcVar9)(param_1 + 0xe4);
  }
  if (param_1[0xdf] != 0) {
    (**(code **)(*(long *)(param_1[0xdf] + 0x48) + 0x18))();
    param_1[0xdf] = 0;
  }
  lVar8 = param_1[0xd9];
  param_1[0xd9] = 0;
  if (lVar8 != 0) {
    FUN_00a88a90(param_1 + 0xda);
  }
  lVar8 = param_1[0xd4];
  param_1[0xd4] = 0;
  if (lVar8 != 0) {
    FUN_00a887f0(param_1 + 0xd5);
  }
  plVar11 = (long *)param_1[0xd0];
  param_1[0xd0] = 0;
  if (plVar11 != (long *)0x0) {
    plVar6 = (long *)plVar11[5];
    while (plVar6 != (long *)0x0) {
      lVar8 = *plVar6;
      (**(code **)(*(long *)plVar11[6] + 0x18))((long *)plVar11[6],plVar6,0x18,4);
      plVar6 = (long *)lVar8;
    }
    lVar8 = *plVar11;
    *plVar11 = 0;
    if (lVar8 != 0) {
      (**(code **)(*(long *)plVar11[2] + 0x18))((long *)plVar11[2],lVar8,plVar11[1] << 3,4);
    }
    (**(code **)(*(long *)param_1[0xd1] + 0x18))
              ((long *)param_1[0xd1],plVar11,param_1[0xd2],param_1[0xd3]);
  }
  lVar8 = param_1[0xcc];
  param_1[0xcc] = 0;
  if (lVar8 != 0) {
    FUN_00a88550(param_1 + 0xcd);
  }
  lVar8 = param_1[200];
  param_1[200] = 0;
  if (lVar8 != 0) {
    FUN_00a882b0(param_1 + 0xc9);
  }
  if (param_1[199] != 0) {
    (**(code **)(*(long *)(param_1[199] + 0x48) + 0x18))();
    param_1[199] = 0;
  }
  if (param_1[0xc6] != 0) {
    (**(code **)(*(long *)(param_1[0xc6] + 0x48) + 0x18))();
    param_1[0xc6] = 0;
  }
  if (param_1[0xc5] != 0) {
    (**(code **)(*(long *)(param_1[0xc5] + 0x48) + 0x18))();
    param_1[0xc5] = 0;
  }
  lVar8 = param_1[0xc1];
  param_1[0xc1] = 0;
  if (lVar8 != 0) {
    (**(code **)(*(long *)param_1[0xc2] + 0x18))
              ((long *)param_1[0xc2],lVar8,param_1[0xc3],param_1[0xc4]);
  }
  lVar8 = param_1[0xbd];
  param_1[0xbd] = 0;
  if (lVar8 != 0) {
    (**(code **)(*(long *)param_1[0xbe] + 0x18))
              ((long *)param_1[0xbe],lVar8,param_1[0xbf],param_1[0xc0]);
  }
  lVar8 = param_1[0xb9];
  param_1[0xb9] = 0;
  if (lVar8 != 0) {
    FUN_00a87860(lVar8);
    (**(code **)(*(long *)param_1[0xba] + 0x18))
              ((long *)param_1[0xba],lVar8,param_1[0xbb],param_1[0xbc]);
  }
  if (param_1[0xb6] != 0) {
    (**(code **)(*(long *)(param_1[0xb6] + 0x48) + 0x18))();
    param_1[0xb6] = 0;
  }
  if (param_1[0xb5] != 0) {
    (**(code **)(*(long *)(param_1[0xb5] + 0x48) + 0x18))();
    param_1[0xb5] = 0;
  }
  if (param_1[0xb4] != 0) {
    (**(code **)(*(long *)(param_1[0xb4] + 0x48) + 0x18))();
    param_1[0xb4] = 0;
  }
  if (param_1[0xb3] != 0) {
    (**(code **)(*(long *)(param_1[0xb3] + 0x48) + 0x18))();
    param_1[0xb3] = 0;
  }
  if (param_1[0xb2] != 0) {
    (**(code **)(*(long *)(param_1[0xb2] + 0x48) + 0x18))();
    param_1[0xb2] = 0;
  }
  if (param_1[0xb1] != 0) {
    (**(code **)(*(long *)(param_1[0xb1] + 0x48) + 0x18))();
    param_1[0xb1] = 0;
  }
  if (param_1[0xb0] != 0) {
    (**(code **)(*(long *)(param_1[0xb0] + 0x48) + 0x18))();
    param_1[0xb0] = 0;
  }
  if (param_1[0xaf] != 0) {
    (**(code **)(*(long *)(param_1[0xaf] + 0x48) + 0x18))();
    param_1[0xaf] = 0;
  }
  if (param_1[0xae] != 0) {
    (**(code **)(*(long *)(param_1[0xae] + 0x48) + 0x18))();
    param_1[0xae] = 0;
  }
  if (param_1[0xad] != 0) {
    (**(code **)(*(long *)(param_1[0xad] + 0x48) + 0x18))();
    param_1[0xad] = 0;
  }
  if (param_1[0xac] != 0) {
    (**(code **)(*(long *)(param_1[0xac] + 0x48) + 0x18))();
    param_1[0xac] = 0;
  }
  if (param_1[0xab] != 0) {
    (**(code **)(*(long *)(param_1[0xab] + 0x48) + 0x18))();
    param_1[0xab] = 0;
  }
  if (param_1[0xaa] != 0) {
    (**(code **)(*(long *)(param_1[0xaa] + 0x48) + 0x18))();
    param_1[0xaa] = 0;
  }
  if (param_1[0xa9] != 0) {
    (**(code **)(*(long *)(param_1[0xa9] + 0x48) + 0x18))();
    param_1[0xa9] = 0;
  }
  if (param_1[0xa8] != 0) {
    (**(code **)(*(long *)(param_1[0xa8] + 0x48) + 0x18))();
    param_1[0xa8] = 0;
  }
  if (param_1[0xa7] != 0) {
    (**(code **)(*(long *)(param_1[0xa7] + 0x48) + 0x18))();
    param_1[0xa7] = 0;
  }
  if (param_1[0xa6] != 0) {
    (**(code **)(*(long *)(param_1[0xa6] + 0x48) + 0x18))();
    param_1[0xa6] = 0;
  }
  if (param_1[0xa5] != 0) {
    (**(code **)(*(long *)(param_1[0xa5] + 0x48) + 0x18))();
    param_1[0xa5] = 0;
  }
  lVar8 = param_1[0xa1];
  param_1[0xa1] = 0;
  if (lVar8 != 0) {
    FUN_00a881a0(param_1 + 0xa2);
  }
  puVar10 = (undefined8 *)param_1[0x9d];
  param_1[0x9d] = 0;
  if (puVar10 != (undefined8 *)0x0) {
    (**(code **)*puVar10)(puVar10);
    (**(code **)(*(long *)param_1[0x9e] + 0x18))
              ((long *)param_1[0x9e],puVar10,param_1[0x9f],param_1[0xa0]);
  }
  puVar10 = (undefined8 *)param_1[0x99];
  param_1[0x99] = 0;
  if (puVar10 != (undefined8 *)0x0) {
    (**(code **)*puVar10)(puVar10);
    (**(code **)(*(long *)param_1[0x9a] + 0x18))
              ((long *)param_1[0x9a],puVar10,param_1[0x9b],param_1[0x9c]);
  }
  puVar10 = (undefined8 *)param_1[0x95];
  param_1[0x95] = 0;
  if (puVar10 != (undefined8 *)0x0) {
    (**(code **)*puVar10)(puVar10);
    (**(code **)(*(long *)param_1[0x96] + 0x18))
              ((long *)param_1[0x96],puVar10,param_1[0x97],param_1[0x98]);
  }
  plVar11 = (long *)param_1[0x94];
  if (plVar11 != (long *)0x0) {
    lVar8 = plVar11[0xb];
    piVar2 = (int *)(lVar8 + 0x54);
    do {
      iVar3 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 == 0) {
      *(undefined8 *)(lVar8 + 0x60) = 0;
      (**(code **)(*plVar11 + 0x18))();
    }
    param_1[0x94] = 0;
  }
  if (param_1[0x93] != 0) {
    (**(code **)(*(long *)(param_1[0x93] + 0x48) + 0x18))();
    param_1[0x93] = 0;
  }
  if (param_1[0x89] != 0) {
    (**(code **)(*(long *)(param_1[0x89] + 0x48) + 0x18))();
    param_1[0x89] = 0;
  }
  if (param_1[0x88] != 0) {
    (**(code **)(*(long *)(param_1[0x88] + 0x48) + 0x18))();
    param_1[0x88] = 0;
  }
  if (param_1[0x87] != 0) {
    (**(code **)(*(long *)(param_1[0x87] + 0x48) + 0x18))();
    param_1[0x87] = 0;
  }
  if (param_1[0x86] != 0) {
    (**(code **)(*(long *)(param_1[0x86] + 0x48) + 0x18))();
    param_1[0x86] = 0;
  }
  if (param_1[0x85] != 0) {
    (**(code **)(*(long *)(param_1[0x85] + 0x48) + 0x18))();
    param_1[0x85] = 0;
  }
  if (param_1[0x84] != 0) {
    (**(code **)(*(long *)(param_1[0x84] + 0x48) + 0x18))();
    param_1[0x84] = 0;
  }
  if (param_1[0x83] != 0) {
    (**(code **)(*(long *)(param_1[0x83] + 0x48) + 0x18))();
    param_1[0x83] = 0;
  }
  if (param_1[0x82] != 0) {
    (**(code **)(*(long *)(param_1[0x82] + 0x48) + 0x18))();
    param_1[0x82] = 0;
  }
  if (param_1[0x81] != 0) {
    (**(code **)(*(long *)(param_1[0x81] + 0x48) + 0x18))();
    param_1[0x81] = 0;
  }
  if (param_1[0x80] != 0) {
    (**(code **)(*(long *)(param_1[0x80] + 0x48) + 0x18))();
    param_1[0x80] = 0;
  }
  if (param_1[0x7f] != 0) {
    (**(code **)(*(long *)(param_1[0x7f] + 0x48) + 0x18))();
    param_1[0x7f] = 0;
  }
  if (param_1[0x7e] != 0) {
    (**(code **)(*(long *)(param_1[0x7e] + 0x48) + 0x18))();
    param_1[0x7e] = 0;
  }
  FUN_00a875b0(param_1 + 0x16);
  puVar1 = PTR_DAT_02718868;
  lVar8 = param_1[0xf];
  param_1[0xf] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[9] = (long)(puVar1 + 0xa70);
  if (lVar8 == 0) {
    return;
  }
  lVar12 = *(long *)(lVar8 + 0x28);
  *(undefined8 *)(lVar8 + 0x28) = 0;
  if (lVar12 != 0) {
    FUN_008d61f0(lVar12);
    (**(code **)(**(long **)(lVar8 + 0x30) + 0x18))
              (*(long **)(lVar8 + 0x30),lVar12,*(undefined8 *)(lVar8 + 0x38),
               *(undefined8 *)(lVar8 + 0x40));
  }
  puVar10 = *(undefined8 **)(lVar8 + 8);
  *(undefined8 *)(lVar8 + 8) = 0;
  if (puVar10 != (undefined8 *)0x0) {
    (**(code **)*puVar10)(puVar10);
    (**(code **)(**(long **)(lVar8 + 0x10) + 0x18))
              (*(long **)(lVar8 + 0x10),puVar10,*(undefined8 *)(lVar8 + 0x18),
               *(undefined8 *)(lVar8 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00a86e8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[0x10] + 0x18))
            ((long *)param_1[0x10],lVar8,param_1[0x11],param_1[0x12]);
  return;
}


