/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014683b0; name: thunk_FUN_014683c0
 */


void thunk_FUN_014683c0(long param_1,int param_2)

{
  byte bVar1;
  bool bVar2;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  byte *pbVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uStack_200;
  code *pcStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  ulong uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  long lStack_168;
  undefined8 auStack_160 [3];
  long lStack_148;
  undefined8 auStack_140 [3];
  long lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_48;
  
  uStack_c0 = 0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  uVar12 = 0xcbf29ce484222645;
  uStack_f0 = 0;
  uStack_e8 = 0;
  uStack_100 = 0;
  uStack_f8 = 0;
  uStack_110 = 0;
  uStack_108 = 0;
  uStack_120 = 0;
  uStack_118 = 0;
  lVar9 = *(long *)(param_1 + 0x830);
  lVar11 = lVar9 + (long)param_2 * 4;
  *(undefined4 *)(param_1 + 0x838) = *(undefined4 *)(lVar11 + 0x140);
  uVar6 = *(undefined4 *)(lVar11 + 0x140);
  FUN_01451d90(auStack_140,lVar9,uVar6);
  uStack_58 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_a8 = 0;
  lStack_a0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  snprintf((char *)&uStack_b8,100,"pane_%s","T_info_00");
  uVar8 = 0xcbf29ce484222645;
  if ((byte)uStack_b8 != 0) {
    uVar8 = 0xcbf29ce484222645;
    pbVar7 = (byte *)((ulong)&uStack_b8 | 1);
    do {
      uVar8 = (uVar8 ^ (byte)uStack_b8) * 0x100000001b3;
      uStack_b8._0_1_ = *pbVar7;
      pbVar7 = pbVar7 + 1;
    } while ((byte)uStack_b8 != 0);
  }
  auStack_160[0] = auStack_140[0];
  uStack_b8 = uVar8;
  FUN_014618d0(param_1,&uStack_b8,auStack_160,0);
  uVar4 = FUN_01451f10(lVar9,uVar6);
  FUN_01461a30(param_1,0,uVar4,2);
  uStack_58 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_a8 = 0;
  lStack_a0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  if ((char)uStack_120 == '\0') {
    snprintf((char *)&uStack_b8,100,"pane_%s","T_contents_00_01");
    bVar1 = (byte)uStack_b8;
  }
  else {
    snprintf((char *)&uStack_b8,100,"pane_%s_%s",&uStack_120,"T_contents_00_01");
    bVar1 = (byte)uStack_b8;
  }
  uStack_b8 = 0xcbf29ce484222645;
  if (bVar1 != 0) {
    uStack_b8 = 0xcbf29ce484222645;
    pbVar7 = (byte *)((ulong)&uStack_b8 | 1);
    do {
      uStack_b8 = (uStack_b8 ^ bVar1) * 0x100000001b3;
      bVar1 = *pbVar7;
      pbVar7 = pbVar7 + 1;
    } while (bVar1 != 0);
  }
  auStack_160[0] = 0x27f2df26a4da4ad;
  FUN_014618d0(param_1,&uStack_b8,auStack_160,0);
  FUN_01451f80(auStack_160,lVar9,uVar6);
  uStack_58 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_a8 = 0;
  lStack_a0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  if ((char)uStack_120 == '\0') {
    snprintf((char *)&uStack_b8,100,"pane_%s","T_company_01");
    bVar1 = (byte)uStack_b8;
  }
  else {
    snprintf((char *)&uStack_b8,100,"pane_%s_%s",&uStack_120,"T_company_01");
    bVar1 = (byte)uStack_b8;
  }
  uStack_b8 = 0xcbf29ce484222645;
  if (bVar1 != 0) {
    uStack_b8 = 0xcbf29ce484222645;
    pbVar7 = (byte *)((ulong)&uStack_b8 | 1);
    do {
      uStack_b8 = (uStack_b8 ^ bVar1) * 0x100000001b3;
      bVar1 = *pbVar7;
      pbVar7 = pbVar7 + 1;
    } while (bVar1 != 0);
  }
  uStack_48 = auStack_160[0];
  FUN_014618d0(param_1,&uStack_b8,&uStack_48,1);
  if (*(int *)(param_1 + 0x83c) != *(int *)(param_1 + 0x838)) {
    FUN_01452040(&uStack_b8,*(undefined8 *)(param_1 + 0x830),uVar6);
    uVar10 = *(undefined8 *)(param_1 + 0x708);
    uStack_180 = uStack_b8;
    uStack_178 = uStack_b0;
    uStack_170 = uStack_a8;
    lStack_168 = lStack_a0;
    if (lStack_a0 != 0) {
      (**(code **)(*(long *)(lStack_a0 + 0x48) + 0x10))();
    }
    uStack_190 = 0;
    uStack_188 = 0;
    uStack_1a0 = 0;
    uStack_198 = 0;
    uStack_1b0 = 0;
    uStack_1a8 = 0;
    uStack_1c0 = 0;
    uStack_1b8 = 0;
    uStack_1d0 = 0;
    uStack_1c8 = 0;
    uStack_1e0 = 0;
    uStack_1d8 = 0;
    uStack_1f0 = 0;
    uStack_1e8 = 0;
    uStack_200 = 0;
    pcStack_1f8 = (code *)0x0;
    FUN_0168d690(uVar10,&uStack_180,0,&uStack_200);
    pcVar3 = pcStack_1f8;
    if (pcStack_1f8 != (code *)0x0) {
      uStack_1f0 = 0;
      uStack_1e8 = 0;
      uStack_200 = 0;
      pcStack_1f8 = (code *)0x0;
      (*pcVar3)(&uStack_1e0);
    }
    if (lStack_168 != 0) {
      (**(code **)(*(long *)(lStack_168 + 0x48) + 0x18))();
      lStack_168 = 0;
    }
    *(undefined4 *)(param_1 + 0x83c) = *(undefined4 *)(param_1 + 0x838);
    if (lStack_a0 != 0) {
      (**(code **)(*(long *)(lStack_a0 + 0x48) + 0x18))();
      lStack_a0 = 0;
    }
  }
  iVar5 = FUN_01452170(*(undefined8 *)(param_1 + 0x830),uVar6);
  if (iVar5 == 1) {
    uStack_58 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    lStack_a0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    if ((char)uStack_120 == '\0') {
      snprintf((char *)&uStack_b8,100,"pane_%s","T_contents_01_00");
      bVar1 = (byte)uStack_b8;
    }
    else {
      snprintf((char *)&uStack_b8,100,"pane_%s_%s",&uStack_120,"T_contents_01_00");
      bVar1 = (byte)uStack_b8;
    }
    uStack_b8 = 0xcbf29ce484222645;
    if (bVar1 != 0) {
      uStack_b8 = 0xcbf29ce484222645;
      pbVar7 = (byte *)((ulong)&uStack_b8 | 1);
      do {
        uStack_b8 = (uStack_b8 ^ bVar1) * 0x100000001b3;
        bVar1 = *pbVar7;
        pbVar7 = pbVar7 + 1;
      } while (bVar1 != 0);
    }
    uStack_48 = 0x282aff26a50b76a;
    FUN_014618d0(param_1,&uStack_b8,&uStack_48,0);
    lVar11 = *(long *)(param_1 + 0x2b0);
    if (lVar11 != 0) {
      (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
    }
    uStack_58 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    lStack_a0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    if ((char)uStack_120 == '\0') {
      snprintf((char *)&uStack_b8,100,"pane_%s","T_contents_01_01");
      uVar8 = uStack_b8;
    }
    else {
      snprintf((char *)&uStack_b8,100,"pane_%s_%s",&uStack_120,"T_contents_01_01");
      uVar8 = uStack_b8;
    }
    bVar2 = (byte)uStack_b8 != '\0';
    uStack_b8 = 0xcbf29ce484222645;
    if (bVar2) {
      uVar8 = uVar8 & 0xff;
      uStack_b8 = 0xcbf29ce484222645;
      pbVar7 = (byte *)((ulong)&uStack_b8 | 1);
      do {
        uStack_b8 = (uStack_b8 ^ uVar8) * 0x100000001b3;
        bVar1 = *pbVar7;
        uVar8 = (ulong)bVar1;
        pbVar7 = pbVar7 + 1;
      } while (bVar1 != 0);
    }
    FUN_0167b9b0(lVar11,&uStack_b8,1);
    if (lVar11 != 0) {
      (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
    }
    FUN_014696b0(param_1,0);
    uVar8 = FUN_01452400(*(undefined8 *)(param_1 + 0x830),uVar6);
    if ((uVar8 & 1) != 0) {
      uStack_58 = 0;
      uStack_68 = 0;
      uStack_60 = 0;
      uStack_78 = 0;
      uStack_70 = 0;
      uStack_88 = 0;
      uStack_80 = 0;
      uStack_98 = 0;
      uStack_90 = 0;
      uStack_a8 = 0;
      lStack_a0 = 0;
      uStack_b8 = 0;
      uStack_b0 = 0;
      if ((char)uStack_120 == '\0') {
        snprintf((char *)&uStack_b8,100,"pane_%s","T_contents_01_01");
      }
      else {
        snprintf((char *)&uStack_b8,100,"pane_%s_%s",&uStack_120,"T_contents_01_01");
      }
      if ((byte)uStack_b8 != '\0') {
        uStack_b8 = uStack_b8 & 0xff;
        pbVar7 = (byte *)((ulong)&uStack_b8 | 1);
        do {
          uVar12 = (uVar12 ^ uStack_b8) * 0x100000001b3;
          bVar1 = *pbVar7;
          uStack_b8 = (ulong)bVar1;
          pbVar7 = pbVar7 + 1;
        } while (bVar1 != 0);
      }
      uStack_b8 = uVar12;
      FUN_01452320(*(undefined8 *)(param_1 + 0x830),uVar6);
      uStack_48 = FUN_01457580();
      FUN_014618d0(param_1,&uStack_b8,&uStack_48,0);
    }
  }
  else {
    uStack_58 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    lStack_a0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    if ((char)uStack_120 == '\0') {
      snprintf((char *)&uStack_b8,100,"pane_%s","T_contents_01_00");
      bVar1 = (byte)uStack_b8;
    }
    else {
      snprintf((char *)&uStack_b8,100,"pane_%s_%s",&uStack_120,"T_contents_01_00");
      bVar1 = (byte)uStack_b8;
    }
    uStack_b8 = 0xcbf29ce484222645;
    if (bVar1 != 0) {
      uStack_b8 = 0xcbf29ce484222645;
      pbVar7 = (byte *)((ulong)&uStack_b8 | 1);
      do {
        uStack_b8 = (uStack_b8 ^ bVar1) * 0x100000001b3;
        bVar1 = *pbVar7;
        pbVar7 = pbVar7 + 1;
      } while (bVar1 != 0);
    }
    uStack_48 = 0x282aef26a50b5b7;
    FUN_014618d0(param_1,&uStack_b8,&uStack_48,0);
    lVar11 = *(long *)(param_1 + 0x2b0);
    if (lVar11 != 0) {
      (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
    }
    uStack_58 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    lStack_a0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    if ((char)uStack_120 == '\0') {
      snprintf((char *)&uStack_b8,100,"pane_%s","T_contents_01_01");
    }
    else {
      snprintf((char *)&uStack_b8,100,"pane_%s_%s",&uStack_120,"T_contents_01_01");
    }
    if ((byte)uStack_b8 != '\0') {
      uStack_b8 = uStack_b8 & 0xff;
      pbVar7 = (byte *)((ulong)&uStack_b8 | 1);
      do {
        uVar12 = (uVar12 ^ uStack_b8) * 0x100000001b3;
        bVar1 = *pbVar7;
        uStack_b8 = (ulong)bVar1;
        pbVar7 = pbVar7 + 1;
      } while (bVar1 != 0);
    }
    uStack_b8 = uVar12;
    FUN_0167b9b0(lVar11,&uStack_b8,0);
    if (lVar11 != 0) {
      (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
    }
    uVar6 = FUN_014522b0(*(undefined8 *)(param_1 + 0x830),uVar6);
    FUN_014696b0(param_1,uVar6);
  }
  FUN_01469a00(param_1);
  FUN_01469cd0(param_1);
  if (lStack_148 != 0) {
    (**(code **)(*(long *)(lStack_148 + 0x48) + 0x18))();
    lStack_148 = 0;
  }
  if (lStack_128 != 0) {
    (**(code **)(*(long *)(lStack_128 + 0x48) + 0x18))();
  }
  return;
}


