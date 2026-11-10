/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014d2d80; name: thunk_FUN_014d2d90
 */


void thunk_FUN_014d2d90(long param_1)

{
  long *plVar1;
  ulong uVar2;
  byte bVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  byte *pbVar9;
  ulong uVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  ulong uStack_238;
  byte abStack_230 [64];
  undefined *puStack_1f0;
  code *pcStack_1e8;
  code *pcStack_1e0;
  undefined *puStack_1d8;
  long lStack_1d0;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  undefined *puStack_170;
  code *pcStack_168;
  code *pcStack_160;
  undefined *puStack_158;
  long lStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined *puStack_f0;
  code *pcStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  long lStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  long alStack_70 [2];
  
  lVar7 = param_1 + 0x100;
  puStack_f0 = (undefined *)0x6aeb7356315d2e51;
  lVar5 = FUN_00ffde30(lVar7,&puStack_f0);
  FUN_016c2c80(lVar5,0,0);
  FUN_016c2c90(lVar5,0);
  puVar4 = PTR_DAT_02710860;
  if (*(int *)(param_1 + 0x1898) != 0) {
    uVar10 = 0;
    puVar11 = (undefined *)(param_1 + 0x5d8);
    do {
      lVar12 = *(long *)(param_1 + 0x18a0);
      pcStack_e8 = (code *)((ulong)pcStack_e8 & 0xffffffffffffff00);
      uVar2 = *(ulong *)(lVar12 + 0xe8);
      puStack_f0 = puVar11;
      if (uVar2 < *(ulong *)(lVar12 + 0xf0)) {
        lVar13 = *(long *)(lVar12 + 0xe0);
        uVar14 = *(undefined8 *)(lVar12 + 0xa0);
        lVar6 = nn::os::GetTlsValue(*(undefined4 *)puVar4);
        if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = uVar14;
        *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
        plVar1 = (long *)(lVar13 + uVar2 * 0x10);
        *plVar1 = (long)puStack_f0;
        plVar1[1] = (long)pcStack_e8;
        *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
        *(long *)(lVar12 + 0xe8) = *(long *)(lVar12 + 0xe8) + 1;
      }
      else {
        puStack_170 = (undefined *)(*(long *)(lVar12 + 0xe0) + uVar2 * 0x10);
        FUN_014d5d00(&puStack_1f0,lVar12 + 0xa0,&puStack_170,1,&puStack_f0);
      }
      uVar10 = uVar10 + 1;
      puVar11 = puVar11 + 0x30;
    } while (uVar10 < *(uint *)(param_1 + 0x1898));
  }
  alStack_70[0] = *(long *)(param_1 + 0x18a0);
  if (alStack_70[0] != 0) {
    (**(code **)(*(long *)(alStack_70[0] + 0x48) + 0x10))();
  }
  FUN_016c2cb0(lVar5,alStack_70);
  if (alStack_70[0] != 0) {
    (**(code **)(*(long *)(alStack_70[0] + 0x48) + 0x18))();
    alStack_70[0] = 0;
  }
  puStack_c8 = PTR_LAB_0272a428;
  uStack_c0 = 0;
  puStack_f0 = PTR_LAB_0272a430;
  pcStack_e8 = (code *)PTR_FUN_0272a438;
  pcStack_e0 = (code *)PTR_FUN_0272a440;
  puStack_d8 = PTR_LAB_0272a448;
  puStack_148 = PTR_LAB_0272a450;
  uStack_140 = 0;
  puStack_170 = PTR_LAB_0272a430;
  pcStack_168 = (code *)PTR_FUN_0272a438;
  pcStack_160 = (code *)PTR_FUN_0272a440;
  puStack_158 = PTR_LAB_0272a448;
  pcVar8 = *(code **)(lVar5 + 0x248);
  puStack_1c8 = PTR_LAB_0272a458;
  uStack_1c0 = 0;
  puStack_1f0 = PTR_LAB_0272a430;
  pcStack_1e8 = (code *)PTR_FUN_0272a438;
  pcStack_1e0 = (code *)PTR_FUN_0272a440;
  puStack_1d8 = PTR_LAB_0272a448;
  lStack_1d0 = param_1;
  lStack_150 = param_1;
  lStack_d0 = param_1;
  if (pcVar8 != (code *)0x0) {
    *(undefined8 *)(lVar5 + 0x250) = 0;
    *(undefined8 *)(lVar5 + 600) = 0;
    *(undefined8 *)(lVar5 + 0x240) = 0;
    *(undefined8 *)(lVar5 + 0x248) = 0;
    (*pcVar8)(lVar5 + 0x260);
    if (pcStack_e0 == (code *)0x0) {
      pcVar8 = *(code **)(lVar5 + 200);
      goto joined_r0x014d3380;
    }
  }
  (*pcStack_e0)(&lStack_d0,lVar5 + 0x260);
  *(undefined **)(lVar5 + 600) = puStack_d8;
  *(code **)(lVar5 + 0x248) = pcStack_e8;
  *(code **)(lVar5 + 0x250) = pcStack_e0;
  *(undefined8 *)(lVar5 + 0x240) = puStack_f0;
  pcVar8 = *(code **)(lVar5 + 200);
joined_r0x014d3380:
  if (pcVar8 != (code *)0x0) {
    *(undefined8 *)(lVar5 + 0xd0) = 0;
    *(undefined8 *)(lVar5 + 0xd8) = 0;
    *(undefined8 *)(lVar5 + 0xc0) = 0;
    *(undefined8 *)(lVar5 + 200) = 0;
    (*pcVar8)(lVar5 + 0xe0);
  }
  if (pcStack_160 != (code *)0x0) {
    (*pcStack_160)(&lStack_150,lVar5 + 0xe0);
    *(undefined **)(lVar5 + 0xd8) = puStack_158;
    *(code **)(lVar5 + 200) = pcStack_168;
    *(code **)(lVar5 + 0xd0) = pcStack_160;
    *(undefined **)(lVar5 + 0xc0) = puStack_170;
  }
  pcVar8 = *(code **)(lVar5 + 0x1c8);
  if (pcVar8 != (code *)0x0) {
    *(undefined8 *)(lVar5 + 0x1d0) = 0;
    *(undefined8 *)(lVar5 + 0x1d8) = 0;
    *(undefined8 *)(lVar5 + 0x1c0) = 0;
    *(undefined8 *)(lVar5 + 0x1c8) = 0;
    (*pcVar8)(lVar5 + 0x1e0);
  }
  if (pcStack_1e0 != (code *)0x0) {
    (*pcStack_1e0)(&lStack_1d0,lVar5 + 0x1e0);
    *(undefined **)(lVar5 + 0x1d8) = puStack_1d8;
    *(code **)(lVar5 + 0x1c8) = pcStack_1e8;
    *(code **)(lVar5 + 0x1d0) = pcStack_1e0;
    *(undefined8 *)(lVar5 + 0x1c0) = puStack_1f0;
  }
  *(undefined1 *)(lVar5 + 0x7a2) = 1;
  FUN_016bef00(lVar5);
  if (*(char *)(param_1 + 0x18c0) == '\0') {
    uVar10 = 0xcbf29ce484222645;
    snprintf((char *)abStack_230,0x40,"button_list_item_%02d",0);
    uStack_238 = 0xcbf29ce484222645;
    if (abStack_230[0] != 0) {
      uStack_238 = 0xcbf29ce484222645;
      pbVar9 = (byte *)((ulong)abStack_230 | 1);
      bVar3 = abStack_230[0];
      do {
        uStack_238 = (uStack_238 ^ bVar3) * 0x100000001b3;
        bVar3 = *pbVar9;
        pbVar9 = pbVar9 + 1;
      } while (bVar3 != 0);
    }
    lVar5 = FUN_00ffda40(lVar7,&uStack_238);
    *(undefined1 *)(lVar5 + 0x142) = 0;
    snprintf((char *)abStack_230,0x40,"button_list_item_%02d",1);
    uStack_238 = 0xcbf29ce484222645;
    if (abStack_230[0] != 0) {
      uStack_238 = 0xcbf29ce484222645;
      pbVar9 = (byte *)((ulong)abStack_230 | 1);
      bVar3 = abStack_230[0];
      do {
        uStack_238 = (uStack_238 ^ bVar3) * 0x100000001b3;
        bVar3 = *pbVar9;
        pbVar9 = pbVar9 + 1;
      } while (bVar3 != 0);
    }
    lVar5 = FUN_00ffda40(lVar7,&uStack_238);
    *(undefined1 *)(lVar5 + 0x142) = 0;
    snprintf((char *)abStack_230,0x40,"button_list_item_%02d",2);
    uStack_238 = 0xcbf29ce484222645;
    if (abStack_230[0] != 0) {
      uStack_238 = 0xcbf29ce484222645;
      pbVar9 = (byte *)((ulong)abStack_230 | 1);
      bVar3 = abStack_230[0];
      do {
        uStack_238 = (uStack_238 ^ bVar3) * 0x100000001b3;
        bVar3 = *pbVar9;
        pbVar9 = pbVar9 + 1;
      } while (bVar3 != 0);
    }
    lVar5 = FUN_00ffda40(lVar7,&uStack_238);
    *(undefined1 *)(lVar5 + 0x142) = 0;
    snprintf((char *)abStack_230,0x40,"button_list_item_%02d",3);
    uStack_238 = 0xcbf29ce484222645;
    if (abStack_230[0] != 0) {
      uStack_238 = 0xcbf29ce484222645;
      pbVar9 = (byte *)((ulong)abStack_230 | 1);
      bVar3 = abStack_230[0];
      do {
        uStack_238 = (uStack_238 ^ bVar3) * 0x100000001b3;
        bVar3 = *pbVar9;
        pbVar9 = pbVar9 + 1;
      } while (bVar3 != 0);
    }
    lVar5 = FUN_00ffda40(lVar7,&uStack_238);
    *(undefined1 *)(lVar5 + 0x142) = 0;
    snprintf((char *)abStack_230,0x40,"button_list_item_%02d",4);
    uStack_238 = 0xcbf29ce484222645;
    if (abStack_230[0] != 0) {
      uStack_238 = 0xcbf29ce484222645;
      pbVar9 = (byte *)((ulong)abStack_230 | 1);
      bVar3 = abStack_230[0];
      do {
        uStack_238 = (uStack_238 ^ bVar3) * 0x100000001b3;
        bVar3 = *pbVar9;
        pbVar9 = pbVar9 + 1;
      } while (bVar3 != 0);
    }
    lVar5 = FUN_00ffda40(lVar7,&uStack_238);
    *(undefined1 *)(lVar5 + 0x142) = 0;
    snprintf((char *)abStack_230,0x40,"button_list_item_%02d",5);
    uStack_238 = 0xcbf29ce484222645;
    if (abStack_230[0] != 0) {
      uStack_238 = 0xcbf29ce484222645;
      pbVar9 = (byte *)((ulong)abStack_230 | 1);
      bVar3 = abStack_230[0];
      do {
        uStack_238 = (uStack_238 ^ bVar3) * 0x100000001b3;
        bVar3 = *pbVar9;
        pbVar9 = pbVar9 + 1;
      } while (bVar3 != 0);
    }
    lVar5 = FUN_00ffda40(lVar7,&uStack_238);
    *(undefined1 *)(lVar5 + 0x142) = 0;
    snprintf((char *)abStack_230,0x40,"button_list_item_%02d",6);
    if (abStack_230[0] != 0) {
      pbVar9 = (byte *)((ulong)abStack_230 | 1);
      do {
        uVar10 = (uVar10 ^ abStack_230[0]) * 0x100000001b3;
        abStack_230[0] = *pbVar9;
        pbVar9 = pbVar9 + 1;
      } while (abStack_230[0] != 0);
    }
    uStack_238 = uVar10;
    lVar7 = FUN_00ffda40(lVar7,&uStack_238);
    *(undefined1 *)(lVar7 + 0x142) = 0;
  }
  pcVar8 = pcStack_1e8;
  if (pcStack_1e8 != (code *)0x0) {
    pcStack_1e0 = (code *)0x0;
    puStack_1d8 = (undefined *)0x0;
    puStack_1f0 = (undefined *)0x0;
    pcStack_1e8 = (code *)0x0;
    (*pcVar8)(&lStack_1d0);
  }
  pcVar8 = pcStack_168;
  if (pcStack_168 != (code *)0x0) {
    pcStack_160 = (code *)0x0;
    puStack_158 = (undefined *)0x0;
    puStack_170 = (undefined *)0x0;
    pcStack_168 = (code *)0x0;
    (*pcVar8)(&lStack_150);
  }
  pcVar8 = pcStack_e8;
  if (pcStack_e8 != (code *)0x0) {
    pcStack_e0 = (code *)0x0;
    puStack_d8 = (undefined *)0x0;
    puStack_f0 = (undefined *)0x0;
    pcStack_e8 = (code *)0x0;
    (*pcVar8)(&lStack_d0);
  }
  return;
}


