/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00722610; name: FUN_00722610
 */


void FUN_00722610(long *param_1,long param_2)

{
  unkbyte9 *pVar1;
  undefined *puVar2;
  long *plVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined4 uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float fVar30;
  undefined8 uVar31;
  float fVar32;
  float fVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  unkbyte9 Var36;
  unkbyte9 Var37;
  undefined *puVar38;
  undefined *puVar39;
  long lVar40;
  long lVar41;
  undefined8 *puVar42;
  long lVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  int iVar46;
  ulong uVar47;
  ulong uVar48;
  uint uVar49;
  ulong uVar50;
  long lVar51;
  undefined1 uVar52;
  undefined1 uVar53;
  undefined1 uVar54;
  undefined1 uVar55;
  undefined1 uVar56;
  undefined1 uVar57;
  undefined1 uVar58;
  undefined1 uVar59;
  undefined1 uVar60;
  undefined1 uVar61;
  undefined1 uVar62;
  undefined1 uVar63;
  undefined1 uVar64;
  byte bVar65;
  undefined1 uVar66;
  byte bVar67;
  undefined1 uVar68;
  byte bVar69;
  undefined1 uVar70;
  byte bVar71;
  byte bVar72;
  byte bVar73;
  byte bVar74;
  byte bVar75;
  byte bVar76;
  byte bVar77;
  undefined1 uVar78;
  byte bVar79;
  undefined1 uVar80;
  byte bVar81;
  byte bVar82;
  undefined1 uVar83;
  byte bVar84;
  undefined1 uVar85;
  byte bVar86;
  undefined1 uVar87;
  byte bVar88;
  float fVar89;
  undefined8 uVar90;
  undefined8 uVar91;
  undefined8 uVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  float fVar96;
  float fVar97;
  float fVar98;
  undefined8 uVar99;
  float fVar104;
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  float fVar103;
  float fVar105;
  undefined1 auVar102 [16];
  undefined1 uVar106;
  undefined1 uVar107;
  undefined1 uVar108;
  undefined1 uVar109;
  float fVar110;
  undefined8 uVar111;
  float fVar112;
  float fVar113;
  float fVar114;
  undefined8 uVar115;
  undefined8 uVar116;
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  float fVar120;
  float fVar121;
  undefined1 auVar119 [16];
  float fVar122;
  undefined8 local_a0;
  uint local_94;
  undefined8 local_90;
  undefined1 auStack_88 [8];
  
  param_1[7] = 0;
  puVar38 = PTR_DAT_02710a18;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = (long)(puVar38 + 0x10);
  param_1[2] = 0;
  param_1[3] = 0;
  puVar38 = PTR_DAT_02710860;
  lVar40 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  puVar2 = PTR_DAT_02715af0;
  if (lVar40 == 0) {
    lVar43 = 0;
  }
  else {
    lVar43 = 0;
    if (*(long *)(lVar40 + 0x80) != 0) {
      lVar43 = *(long *)(lVar40 + *(long *)(lVar40 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 10) = 0;
  puVar39 = PTR_DAT_02715410;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[1] = lVar43;
  lVar40 = *(long *)(puVar39 + 0x10);
  lVar43 = *(long *)(puVar39 + 0x18);
  param_1[9] = (long)(puVar2 + 0x48);
  param_1[0xe] = lVar40;
  param_1[0xf] = lVar43;
  lVar40 = *(long *)(puVar39 + 8);
  param_1[0xc] = *(long *)puVar39;
  param_1[0xd] = lVar40;
  lVar40 = *(long *)(puVar39 + 0x20);
  lVar43 = *(long *)(puVar39 + 0x30);
  lVar41 = *(long *)(puVar39 + 0x38);
  param_1[0x11] = *(long *)(puVar39 + 0x28);
  param_1[0x12] = lVar43;
  puVar2 = PTR_DAT_02715af8;
  param_1[0x10] = lVar40;
  param_1[0x13] = lVar41;
  param_1[0x14] = (long)(puVar2 + 0x10);
  lVar40 = *(long *)(param_2 + 8);
  param_1[0x15] = lVar40;
  if (lVar40 != 0) {
    (**(code **)(*(long *)(lVar40 + 0x48) + 0x10))();
  }
  param_1[0x16] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x17] = 0;
  if (*(code **)(param_2 + 0x20) != (code *)0x0) {
    (**(code **)(param_2 + 0x20))(param_2 + 0x30,param_1 + 0x1a);
    lVar40 = *(long *)(param_2 + 0x10);
    lVar43 = *(long *)(param_2 + 0x18);
    lVar41 = *(long *)(param_2 + 0x28);
    param_1[0x18] = *(long *)(param_2 + 0x20);
    param_1[0x19] = lVar41;
    param_1[0x16] = lVar40;
    param_1[0x17] = lVar43;
  }
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  if (*(code **)(param_2 + 0xa0) != (code *)0x0) {
    (**(code **)(param_2 + 0xa0))(param_2 + 0xb0,param_1 + 0x2a);
    lVar40 = *(long *)(param_2 + 0x90);
    lVar43 = *(long *)(param_2 + 0x98);
    lVar41 = *(long *)(param_2 + 0xa8);
    param_1[0x28] = *(long *)(param_2 + 0xa0);
    param_1[0x29] = lVar41;
    param_1[0x26] = lVar40;
    param_1[0x27] = lVar43;
  }
  puVar2 = PTR_DAT_02715b00 + 0x10;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x14] = (long)puVar2;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  lVar40 = nn::os::GetTlsValue(*(undefined4 *)puVar38);
  if (((lVar40 == 0) || (*(long *)(lVar40 + 0x80) == 0)) ||
     (lVar40 = *(long *)(lVar40 + *(long *)(lVar40 + 0x80) * 8 + -8), lVar40 == 0)) {
    lVar40 = FUN_0075ecb0();
  }
  param_1[0x3a] = lVar40;
  param_1[0x3b] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  lVar40 = nn::os::GetTlsValue(*(undefined4 *)puVar38);
  if (((lVar40 == 0) || (*(long *)(lVar40 + 0x80) == 0)) ||
     (lVar40 = *(long *)(lVar40 + *(long *)(lVar40 + 0x80) * 8 + -8), lVar40 == 0)) {
    lVar40 = FUN_0075ecb0();
  }
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x3d] = 0;
  param_1[0x40] = lVar40;
  param_1[0x41] = 0;
  *(undefined4 *)(param_1 + 0x42) = 0;
  param_1[0x43] = 0;
  lVar40 = *(long *)(param_2 + 8);
  FUN_00722e10(param_1 + 0x37,
               (*(long *)(lVar40 + 0x1d8) - *(long *)(lVar40 + 0x1d0) >> 4) * -0xf0f0f0f0f0f0f0f);
  uVar50 = (*(long *)(lVar40 + 0x1d8) - *(long *)(lVar40 + 0x1d0) >> 4) * -0xf0f0f0f0f0f0f0f;
  uVar48 = uVar50 >> 5;
  uVar47 = param_1[0x3e] - param_1[0x3d] >> 2;
  local_90 = (long *)((ulong)local_90._4_4_ << 0x20);
  if ((uVar50 & 0x1f) != 0) {
    uVar48 = uVar48 + 1;
  }
  if (uVar48 - uVar47 != 0) {
    if (uVar47 <= uVar48) {
      FUN_007204b0(param_1 + 0x3d,uVar48 - uVar47,&local_90);
      param_1[0x43] = uVar50;
      goto joined_r0x00722874;
    }
    if (uVar48 < uVar47) {
      param_1[0x3e] = param_1[0x3d] + uVar48 * 4;
    }
  }
  param_1[0x43] = uVar50;
joined_r0x00722874:
  if ((uVar50 & 0x1f) != 0) {
    *(uint *)(param_1[0x3e] + -4) =
         *(uint *)(param_1[0x3e] + -4) & (-1 << (uVar50 & 0x1f) ^ 0xffffffffU);
  }
  uVar9 = DAT_01cd5418;
  uVar8 = DAT_01cd5188;
  uVar7 = DAT_01cd5158;
  uVar6 = DAT_01cd50f8;
  lVar43 = *(long *)(lVar40 + 0x1d0);
  lVar40 = *(long *)(lVar40 + 0x1d8);
  do {
    if (lVar43 == lVar40) {
      lVar40 = *(long *)(*(long *)(param_2 + 8) + 0x1d0);
      lVar43 = *(long *)(*(long *)(param_2 + 8) + 0x1d8);
      if (lVar40 != lVar43) {
        plVar3 = param_1 + 0x36;
        uVar4 = 0;
        do {
          uVar49 = uVar4;
          bVar65 = *(byte *)(lVar40 + 0x104);
          lVar40 = lVar40 + 0x110;
          uVar4 = uVar49 + bVar65;
        } while (lVar43 != lVar40);
        if (uVar4 != 0) {
          local_90 = (long *)0x40;
          local_a0 = *(undefined8 *)(*(long *)PTR_DAT_027154f0 + 0x10);
          local_94 = uVar4;
          lVar40 = FUN_00723880(auStack_88,param_1[1],&local_90,&local_94,&local_a0);
          if (lVar40 != 0) {
            (**(code **)(*(long *)(lVar40 + 0x48) + 0x10))();
          }
          if (*plVar3 != 0) {
            (**(code **)(*(long *)(*plVar3 + 0x48) + 0x18))();
            *plVar3 = 0;
          }
          *plVar3 = lVar40;
          *(undefined4 *)(lVar40 + 0x138) = 0;
          puVar38 = PTR_DAT_02710460;
          FUN_006f6a10(*(undefined8 *)PTR_DAT_02710460,lVar40);
          puVar42 = (undefined8 *)thunk_FUN_0199c7e0(lVar40 + 0x58);
          uVar5 = uVar4 & 3;
          if (2 < uVar4 - 1) {
            uVar6 = *(undefined8 *)PTR_DAT_027159c0;
            uVar44 = *(undefined8 *)(PTR_DAT_027159c0 + 8);
            iVar46 = (uVar5 - bVar65) - uVar49;
            uVar7 = *(undefined8 *)(PTR_DAT_027159c0 + 0x10);
            uVar45 = *(undefined8 *)(PTR_DAT_027159c0 + 0x18);
            uVar8 = *(undefined8 *)(PTR_DAT_027159c0 + 0x20);
            uVar31 = *(undefined8 *)(PTR_DAT_027159c0 + 0x28);
            uVar9 = *(undefined8 *)(PTR_DAT_027159c0 + 0x30);
            uVar34 = *(undefined8 *)(PTR_DAT_027159c0 + 0x38);
            do {
              puVar42[2] = uVar7;
              puVar42[3] = uVar45;
              iVar46 = iVar46 + 4;
              *puVar42 = uVar6;
              puVar42[1] = uVar44;
              puVar42[6] = uVar9;
              puVar42[7] = uVar34;
              puVar42[4] = uVar8;
              puVar42[5] = uVar31;
              puVar42 = (undefined8 *)((long)puVar42 + (long)*(int *)(lVar40 + 0xc0));
              puVar42[2] = uVar7;
              puVar42[3] = uVar45;
              *puVar42 = uVar6;
              puVar42[1] = uVar44;
              puVar42[6] = uVar9;
              puVar42[7] = uVar34;
              puVar42[4] = uVar8;
              puVar42[5] = uVar31;
              puVar42 = (undefined8 *)((long)puVar42 + (long)*(int *)(lVar40 + 0xc0));
              puVar42[2] = uVar7;
              puVar42[3] = uVar45;
              *puVar42 = uVar6;
              puVar42[1] = uVar44;
              puVar42[6] = uVar9;
              puVar42[7] = uVar34;
              puVar42[4] = uVar8;
              puVar42[5] = uVar31;
              puVar42 = (undefined8 *)((long)puVar42 + (long)*(int *)(lVar40 + 0xc0));
              puVar42[2] = uVar7;
              puVar42[3] = uVar45;
              *puVar42 = uVar6;
              puVar42[1] = uVar44;
              puVar42[6] = uVar9;
              puVar42[7] = uVar34;
              puVar42[4] = uVar8;
              puVar42[5] = uVar31;
              puVar42 = (undefined8 *)((long)puVar42 + (long)*(int *)(lVar40 + 0xc0));
            } while (iVar46 != 0);
          }
          if (uVar5 != 0) {
            iVar46 = -uVar5;
            uVar6 = *(undefined8 *)PTR_DAT_027159c0;
            uVar44 = *(undefined8 *)(PTR_DAT_027159c0 + 8);
            uVar7 = *(undefined8 *)(PTR_DAT_027159c0 + 0x10);
            uVar45 = *(undefined8 *)(PTR_DAT_027159c0 + 0x18);
            uVar8 = *(undefined8 *)(PTR_DAT_027159c0 + 0x20);
            uVar31 = *(undefined8 *)(PTR_DAT_027159c0 + 0x28);
            uVar9 = *(undefined8 *)(PTR_DAT_027159c0 + 0x30);
            uVar34 = *(undefined8 *)(PTR_DAT_027159c0 + 0x38);
            do {
              puVar42[2] = uVar7;
              puVar42[3] = uVar45;
              iVar46 = iVar46 + 1;
              *puVar42 = uVar6;
              puVar42[1] = uVar44;
              puVar42[6] = uVar9;
              puVar42[7] = uVar34;
              puVar42[4] = uVar8;
              puVar42[5] = uVar31;
              puVar42 = (undefined8 *)((long)puVar42 + (long)*(int *)(lVar40 + 0xc0));
            } while (iVar46 != 0);
          }
          thunk_FUN_0199c800(lVar40 + 0x58);
          lVar40 = *plVar3;
          *(undefined4 *)(lVar40 + 0x138) = 1;
          FUN_006f6a10(*(undefined8 *)puVar38,lVar40);
          puVar42 = (undefined8 *)thunk_FUN_0199c7e0(lVar40 + 200);
          uVar5 = uVar4 & 3;
          if (2 < uVar4 - 1) {
            uVar6 = *(undefined8 *)PTR_DAT_027159c0;
            uVar44 = *(undefined8 *)(PTR_DAT_027159c0 + 8);
            iVar46 = (uVar5 - bVar65) - uVar49;
            uVar7 = *(undefined8 *)(PTR_DAT_027159c0 + 0x10);
            uVar45 = *(undefined8 *)(PTR_DAT_027159c0 + 0x18);
            uVar8 = *(undefined8 *)(PTR_DAT_027159c0 + 0x20);
            uVar31 = *(undefined8 *)(PTR_DAT_027159c0 + 0x28);
            uVar9 = *(undefined8 *)(PTR_DAT_027159c0 + 0x30);
            uVar34 = *(undefined8 *)(PTR_DAT_027159c0 + 0x38);
            do {
              puVar42[2] = uVar7;
              puVar42[3] = uVar45;
              iVar46 = iVar46 + 4;
              *puVar42 = uVar6;
              puVar42[1] = uVar44;
              puVar42[6] = uVar9;
              puVar42[7] = uVar34;
              puVar42[4] = uVar8;
              puVar42[5] = uVar31;
              puVar42 = (undefined8 *)((long)puVar42 + (long)*(int *)(lVar40 + 0x130));
              puVar42[2] = uVar7;
              puVar42[3] = uVar45;
              *puVar42 = uVar6;
              puVar42[1] = uVar44;
              puVar42[6] = uVar9;
              puVar42[7] = uVar34;
              puVar42[4] = uVar8;
              puVar42[5] = uVar31;
              puVar42 = (undefined8 *)((long)puVar42 + (long)*(int *)(lVar40 + 0x130));
              puVar42[2] = uVar7;
              puVar42[3] = uVar45;
              *puVar42 = uVar6;
              puVar42[1] = uVar44;
              puVar42[6] = uVar9;
              puVar42[7] = uVar34;
              puVar42[4] = uVar8;
              puVar42[5] = uVar31;
              puVar42 = (undefined8 *)((long)puVar42 + (long)*(int *)(lVar40 + 0x130));
              puVar42[2] = uVar7;
              puVar42[3] = uVar45;
              *puVar42 = uVar6;
              puVar42[1] = uVar44;
              puVar42[6] = uVar9;
              puVar42[7] = uVar34;
              puVar42[4] = uVar8;
              puVar42[5] = uVar31;
              puVar42 = (undefined8 *)((long)puVar42 + (long)*(int *)(lVar40 + 0x130));
            } while (iVar46 != 0);
          }
          if (uVar5 != 0) {
            iVar46 = -uVar5;
            uVar6 = *(undefined8 *)PTR_DAT_027159c0;
            uVar44 = *(undefined8 *)(PTR_DAT_027159c0 + 8);
            uVar7 = *(undefined8 *)(PTR_DAT_027159c0 + 0x10);
            uVar45 = *(undefined8 *)(PTR_DAT_027159c0 + 0x18);
            uVar8 = *(undefined8 *)(PTR_DAT_027159c0 + 0x20);
            uVar31 = *(undefined8 *)(PTR_DAT_027159c0 + 0x28);
            uVar9 = *(undefined8 *)(PTR_DAT_027159c0 + 0x30);
            uVar34 = *(undefined8 *)(PTR_DAT_027159c0 + 0x38);
            do {
              puVar42[2] = uVar7;
              puVar42[3] = uVar45;
              iVar46 = iVar46 + 1;
              *puVar42 = uVar6;
              puVar42[1] = uVar44;
              puVar42[6] = uVar9;
              puVar42[7] = uVar34;
              puVar42[4] = uVar8;
              puVar42[5] = uVar31;
              puVar42 = (undefined8 *)((long)puVar42 + (long)*(int *)(lVar40 + 0x130));
            } while (iVar46 != 0);
          }
          thunk_FUN_0199c800(lVar40 + 200);
        }
      }
      return;
    }
    puVar42 = (undefined8 *)param_1[0x38];
    local_90 = param_1;
    if (puVar42 < (undefined8 *)param_1[0x39]) {
      lVar51 = param_1[0x3a];
      lVar41 = nn::os::GetTlsValue(*(undefined4 *)puVar38);
      plVar3 = local_90;
      if (0xf < *(ulong *)(lVar41 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar41 + *(ulong *)(lVar41 + 0x80) * 8) = lVar51;
      *(long *)(lVar41 + 0x80) = *(long *)(lVar41 + 0x80) + 1;
      FUN_0075e2a0(puVar42);
      FUN_0075e2a0(puVar42 + 6);
      puVar42[0x24] = plVar3;
      puVar42[0x25] = lVar43;
      uVar44 = *(undefined8 *)(lVar43 + 0x88);
      puVar42[0xf] = *(undefined8 *)(lVar43 + 0x98);
      puVar42[0xd] = uVar44;
      uVar44 = *(undefined8 *)(lVar43 + 0xa8);
      puVar42[0x13] = *(undefined8 *)(lVar43 + 0xb8);
      puVar42[0x11] = uVar44;
      uVar45 = *(undefined8 *)(lVar43 + 0x80);
      puVar42[0xe] = *(undefined8 *)(lVar43 + 0x90);
      pVar1 = (unkbyte9 *)(puVar42 + 0xe);
      uVar44 = puVar42[0xf];
      uVar52 = (undefined1)((ulong)uVar44 >> 8);
      uVar53 = (undefined1)((ulong)uVar44 >> 0x10);
      uVar54 = (undefined1)((ulong)uVar44 >> 0x18);
      uVar55 = (undefined1)((ulong)uVar44 >> 0x20);
      uVar56 = (undefined1)((ulong)uVar44 >> 0x28);
      uVar57 = (undefined1)((ulong)uVar44 >> 0x30);
      uVar58 = (undefined1)((ulong)uVar44 >> 0x38);
      Var37 = *pVar1;
      puVar42[0xc] = uVar45;
      uVar45 = *(undefined8 *)(lVar43 + 0xb0);
      puVar42[0x10] = *(undefined8 *)(lVar43 + 0xa0);
      puVar42[0x12] = uVar45;
      auVar100[9] = uVar52;
      auVar100._0_9_ = *pVar1;
      auVar100[10] = uVar53;
      auVar100[0xb] = uVar54;
      auVar100[0xc] = uVar55;
      auVar100[0xd] = uVar56;
      auVar100[0xe] = uVar57;
      auVar100[0xf] = uVar58;
      uVar45 = a64_TBL(ZEXT816(0),auVar100,uVar9);
      auVar118[9] = uVar52;
      auVar118._0_9_ = *pVar1;
      auVar118[10] = uVar53;
      auVar118[0xb] = uVar54;
      auVar118[0xc] = uVar55;
      auVar118[0xd] = uVar56;
      auVar118[0xe] = uVar57;
      auVar118[0xf] = uVar58;
      uVar90 = a64_TBL(ZEXT816(0),auVar118,uVar8);
      auVar10[9] = uVar52;
      auVar10._0_9_ = *pVar1;
      auVar10[10] = uVar53;
      auVar10[0xb] = uVar54;
      auVar10[0xc] = uVar55;
      auVar10[0xd] = uVar56;
      auVar10[0xe] = uVar57;
      auVar10[0xf] = uVar58;
      uVar99 = a64_TBL(ZEXT816(0),auVar10,uVar6);
      auVar11[9] = uVar52;
      auVar11._0_9_ = *pVar1;
      auVar11[10] = uVar53;
      auVar11[0xb] = uVar54;
      auVar11[0xc] = uVar55;
      auVar11[0xd] = uVar56;
      auVar11[0xe] = uVar57;
      auVar11[0xf] = uVar58;
      uVar91 = a64_TBL(ZEXT816(0),auVar11,uVar7);
      auVar100 = *(undefined1 (*) [16])(puVar42 + 0x10);
      uVar31 = a64_TBL(ZEXT816(0),auVar100,uVar6);
      uVar34 = a64_TBL(ZEXT816(0),auVar100,uVar7);
      uVar111 = a64_TBL(ZEXT816(0),auVar100,uVar9);
      uVar35 = a64_TBL(ZEXT816(0),auVar100,uVar8);
      uVar92 = puVar42[0xc];
      Var36 = *(unkbyte9 *)(puVar42 + 0xc);
      fVar22 = (float)uVar92;
      fVar112 = (float)((ulong)uVar92 >> 0x20);
      fVar122 = (float)puVar42[0xd];
      fVar114 = (float)((ulong)puVar42[0xd] >> 0x20);
      uVar56 = (undefined1)((unkuint9)Var37 >> 0x20);
      uVar58 = (undefined1)((unkuint9)Var37 >> 0x28);
      uVar60 = (undefined1)((unkuint9)Var37 >> 0x30);
      uVar62 = (undefined1)((unkuint9)Var37 >> 0x38);
      auVar117._4_4_ = (int)uVar44;
      auVar117._0_4_ = fVar122;
      auVar117._8_4_ = auVar100._8_4_;
      auVar117._12_4_ = 0;
      uVar106 = auVar100[4];
      uVar107 = auVar100[5];
      uVar108 = auVar100[6];
      uVar109 = auVar100[7];
      uVar57 = auVar100[0];
      uVar59 = auVar100[1];
      uVar61 = auVar100[2];
      uVar63 = auVar100[3];
      uVar52 = (undefined1)Var37;
      uVar53 = (undefined1)((unkuint9)Var37 >> 8);
      uVar54 = (undefined1)((unkuint9)Var37 >> 0x10);
      uVar55 = (undefined1)((unkuint9)Var37 >> 0x18);
      fVar22 = fVar22 * (float)uVar45 * (float)uVar31 - fVar22 * (float)uVar99 * (float)uVar111;
      fVar112 = fVar112 * (float)((ulong)uVar45 >> 0x20) * (float)((ulong)uVar31 >> 0x20) -
                fVar112 * (float)((ulong)uVar99 >> 0x20) * (float)((ulong)uVar111 >> 0x20);
      uVar64 = (undefined1)((uint)fVar112 >> 8);
      uVar66 = (undefined1)((uint)fVar112 >> 0x10);
      uVar68 = (undefined1)((uint)fVar112 >> 0x18);
      fVar122 = fVar122 * (float)uVar90 * (float)uVar34 - fVar122 * (float)uVar91 * (float)uVar35;
      uVar70 = (undefined1)((uint)fVar122 >> 8);
      uVar78 = (undefined1)((uint)fVar122 >> 0x10);
      uVar80 = (undefined1)((uint)fVar122 >> 0x18);
      fVar114 = fVar114 * (float)((ulong)uVar90 >> 0x20) * (float)((ulong)uVar34 >> 0x20) -
                fVar114 * (float)((ulong)uVar91 >> 0x20) * (float)((ulong)uVar35 >> 0x20);
      uVar83 = (undefined1)((uint)fVar114 >> 8);
      uVar85 = (undefined1)((uint)fVar114 >> 0x10);
      uVar87 = (undefined1)((uint)fVar114 >> 0x18);
      uVar13 = (undefined4)((unkuint9)Var36 >> 0x20);
      auVar26[4] = uVar56;
      auVar26._0_4_ = uVar13;
      auVar26[5] = uVar58;
      auVar26[6] = uVar60;
      auVar26[7] = uVar62;
      auVar26[8] = uVar106;
      auVar26[9] = uVar107;
      auVar26[10] = uVar108;
      auVar26[0xb] = uVar109;
      auVar26._12_4_ = 0;
      uVar34 = a64_TBL(ZEXT816(0),auVar26,uVar9);
      auVar17[4] = SUB41(fVar112,0);
      auVar17._0_4_ = fVar22;
      auVar17[5] = uVar64;
      auVar17[6] = uVar66;
      auVar17[7] = uVar68;
      auVar17[8] = SUB41(fVar122,0);
      auVar17[9] = uVar70;
      auVar17[10] = uVar78;
      auVar17[0xb] = uVar80;
      auVar17[0xc] = SUB41(fVar114,0);
      auVar17[0xd] = uVar83;
      auVar17[0xe] = uVar85;
      auVar17[0xf] = uVar87;
      auVar18[4] = SUB41(fVar112,0);
      auVar18._0_4_ = fVar22;
      auVar18[5] = uVar64;
      auVar18[6] = uVar66;
      auVar18[7] = uVar68;
      auVar18[8] = SUB41(fVar122,0);
      auVar18[9] = uVar70;
      auVar18[10] = uVar78;
      auVar18[0xb] = uVar80;
      auVar18[0xc] = SUB41(fVar114,0);
      auVar18[0xd] = uVar83;
      auVar18[0xe] = uVar85;
      auVar18[0xf] = uVar87;
      auVar100 = NEON_ext(auVar17,auVar18,8,1);
      fVar22 = fVar22 + fVar112 + auVar100._0_4_ + auVar100._4_4_;
      uVar64 = SUB41(fVar22,0);
      uVar66 = (undefined1)((uint)fVar22 >> 8);
      uVar68 = (undefined1)((uint)fVar22 >> 0x10);
      uVar70 = (undefined1)((uint)fVar22 >> 0x18);
      auVar19[4] = uVar64;
      auVar19._0_4_ = fVar22;
      auVar19[5] = uVar66;
      auVar19[6] = uVar68;
      auVar19[7] = uVar70;
      auVar19[8] = uVar64;
      auVar19[9] = uVar66;
      auVar19[10] = uVar68;
      auVar19[0xb] = uVar70;
      auVar19[0xc] = uVar64;
      auVar19[0xd] = uVar66;
      auVar19[0xe] = uVar68;
      auVar19[0xf] = uVar70;
      auVar100 = NEON_frecpe(auVar19,4);
      auVar27[4] = uVar56;
      auVar27._0_4_ = uVar13;
      auVar27[5] = uVar58;
      auVar27[6] = uVar60;
      auVar27[7] = uVar62;
      auVar27[8] = uVar106;
      auVar27[9] = uVar107;
      auVar27[10] = uVar108;
      auVar27[0xb] = uVar109;
      auVar27._12_4_ = 0;
      uVar99 = a64_TBL(ZEXT816(0),auVar27,uVar8);
      uVar35 = a64_TBL(ZEXT816(0),auVar117,uVar6);
      fVar122 = (float)((ulong)uVar35 >> 0x20);
      uVar92 = a64_TBL(ZEXT816(0),auVar117,uVar7);
      uVar111 = a64_TBL(ZEXT816(0),auVar117,uVar9);
      fVar110 = (float)((ulong)uVar92 >> 0x20);
      uVar90 = a64_TBL(ZEXT816(0),auVar117,uVar8);
      fVar33 = (float)((ulong)uVar34 >> 0x20);
      fVar113 = (float)((ulong)uVar99 >> 0x20);
      auVar20[4] = uVar64;
      auVar20._0_4_ = fVar22;
      auVar20[5] = uVar66;
      auVar20[6] = uVar68;
      auVar20[7] = uVar70;
      auVar20[8] = uVar64;
      auVar20[9] = uVar66;
      auVar20[10] = uVar68;
      auVar20[0xb] = uVar70;
      auVar20[0xc] = uVar64;
      auVar20[0xd] = uVar66;
      auVar20[0xe] = uVar68;
      auVar20[0xf] = uVar70;
      auVar118 = NEON_frecps(auVar100,auVar20,4);
      auVar28[4] = uVar56;
      auVar28._0_4_ = uVar13;
      auVar28[5] = uVar58;
      auVar28[6] = uVar60;
      auVar28[7] = uVar62;
      auVar28[8] = uVar106;
      auVar28[9] = uVar107;
      auVar28[10] = uVar108;
      auVar28[0xb] = uVar109;
      auVar28._12_4_ = 0;
      uVar91 = a64_TBL(ZEXT816(0),auVar28,uVar6);
      auVar29[4] = uVar56;
      auVar29._0_4_ = uVar13;
      auVar29[5] = uVar58;
      auVar29[6] = uVar60;
      auVar29[7] = uVar62;
      auVar29[8] = uVar106;
      auVar29[9] = uVar107;
      auVar29[10] = uVar108;
      auVar29[0xb] = uVar109;
      auVar29._12_4_ = 0;
      uVar45 = a64_TBL(ZEXT816(0),auVar29,uVar7);
      uVar13 = (undefined4)Var36;
      auVar12[4] = uVar52;
      auVar12._0_4_ = uVar13;
      auVar12[5] = uVar53;
      auVar12[6] = uVar54;
      auVar12[7] = uVar55;
      auVar12[8] = uVar57;
      auVar12[9] = uVar59;
      auVar12[10] = uVar61;
      auVar12[0xb] = uVar63;
      auVar12._12_4_ = 0;
      uVar31 = a64_TBL(ZEXT816(0),auVar12,uVar6);
      fVar93 = (float)((ulong)uVar91 >> 0x20);
      fVar112 = (float)((ulong)uVar111 >> 0x20);
      fVar96 = (float)((ulong)uVar45 >> 0x20);
      fVar114 = (float)((ulong)uVar90 >> 0x20);
      auVar101._0_4_ = auVar100._0_4_ * auVar118._0_4_;
      auVar101._4_4_ = auVar100._4_4_ * auVar118._4_4_;
      auVar101._8_4_ = auVar100._8_4_ * auVar118._8_4_;
      auVar101._12_4_ = auVar100._12_4_ * auVar118._12_4_;
      auVar14[4] = uVar52;
      auVar14._0_4_ = uVar13;
      auVar14[5] = uVar53;
      auVar14[6] = uVar54;
      auVar14[7] = uVar55;
      auVar14[8] = uVar57;
      auVar14[9] = uVar59;
      auVar14[10] = uVar61;
      auVar14[0xb] = uVar63;
      auVar14._12_4_ = 0;
      uVar115 = a64_TBL(ZEXT816(0),auVar14,uVar7);
      auVar15[4] = uVar52;
      auVar15._0_4_ = uVar13;
      auVar15[5] = uVar53;
      auVar15[6] = uVar54;
      auVar15[7] = uVar55;
      auVar15[8] = uVar57;
      auVar15[9] = uVar59;
      auVar15[10] = uVar61;
      auVar15[0xb] = uVar63;
      auVar15._12_4_ = 0;
      uVar116 = a64_TBL(ZEXT816(0),auVar15,uVar9);
      auVar16[4] = uVar52;
      auVar16._0_4_ = uVar13;
      auVar16[5] = uVar53;
      auVar16[6] = uVar54;
      auVar16[7] = uVar55;
      auVar16[8] = uVar57;
      auVar16[9] = uVar59;
      auVar16[10] = uVar61;
      auVar16[0xb] = uVar63;
      auVar16._12_4_ = 0;
      uVar44 = a64_TBL(ZEXT816(0),auVar16,uVar8);
      fVar30 = (float)((ulong)uVar31 >> 0x20);
      fVar32 = (float)((ulong)uVar115 >> 0x20);
      fVar120 = (float)((ulong)uVar116 >> 0x20);
      fVar121 = (float)((ulong)uVar44 >> 0x20);
      auVar21[4] = uVar64;
      auVar21._0_4_ = fVar22;
      auVar21[5] = uVar66;
      auVar21[6] = uVar68;
      auVar21[7] = uVar70;
      auVar21[8] = uVar64;
      auVar21[9] = uVar66;
      auVar21[10] = uVar68;
      auVar21[0xb] = uVar70;
      auVar21[0xc] = uVar64;
      auVar21[0xd] = uVar66;
      auVar21[0xe] = uVar68;
      auVar21[0xf] = uVar70;
      auVar100 = NEON_frecps(auVar101,auVar21,4);
      iVar46 = -(uint)(fVar22 == 0.0);
      iVar23 = -(uint)(fVar22 == 0.0);
      iVar24 = -(uint)(fVar22 == 0.0);
      iVar25 = -(uint)(fVar22 == 0.0);
      bVar65 = ~(byte)iVar46;
      bVar67 = ~(byte)((uint)iVar46 >> 8);
      bVar69 = ~(byte)((uint)iVar46 >> 0x10);
      bVar71 = ~(byte)((uint)iVar46 >> 0x18);
      bVar72 = ~(byte)iVar23;
      bVar73 = ~(byte)((uint)iVar23 >> 8);
      bVar74 = ~(byte)((uint)iVar23 >> 0x10);
      bVar75 = ~(byte)((uint)iVar23 >> 0x18);
      bVar76 = ~(byte)iVar24;
      bVar77 = ~(byte)((uint)iVar24 >> 8);
      bVar79 = ~(byte)((uint)iVar24 >> 0x10);
      bVar81 = ~(byte)((uint)iVar24 >> 0x18);
      bVar82 = ~(byte)iVar25;
      bVar84 = ~(byte)((uint)iVar25 >> 8);
      bVar86 = ~(byte)((uint)iVar25 >> 0x10);
      bVar88 = ~(byte)((uint)iVar25 >> 0x18);
      fVar89 = auVar101._0_4_ * auVar100._0_4_;
      fVar94 = auVar101._4_4_ * auVar100._4_4_;
      fVar95 = auVar101._8_4_ * auVar100._8_4_;
      fVar97 = auVar101._12_4_ * auVar100._12_4_;
      fVar98 = fVar89 * ((float)uVar34 * (float)uVar35 - (float)uVar111 * (float)uVar91);
      fVar103 = fVar94 * (fVar33 * fVar122 - fVar112 * fVar93);
      fVar104 = fVar95 * ((float)uVar99 * (float)uVar92 - (float)uVar90 * (float)uVar45);
      fVar105 = fVar97 * (fVar113 * fVar110 - fVar114 * fVar96);
      fVar22 = fVar89 * ((float)uVar111 * (float)uVar31 - (float)uVar116 * (float)uVar35);
      fVar112 = fVar94 * (fVar112 * fVar30 - fVar120 * fVar122);
      fVar122 = fVar95 * ((float)uVar90 * (float)uVar115 - (float)uVar44 * (float)uVar92);
      fVar114 = fVar97 * (fVar114 * fVar32 - fVar121 * fVar110);
      fVar110 = (float)puVar42[0x12];
      fVar89 = fVar89 * ((float)uVar91 * (float)uVar116 - (float)uVar34 * (float)uVar31);
      fVar94 = fVar94 * (fVar93 * fVar120 - fVar33 * fVar30);
      fVar95 = fVar95 * ((float)uVar45 * (float)uVar44 - (float)uVar99 * (float)uVar115);
      fVar97 = fVar97 * (fVar96 * fVar121 - fVar113 * fVar32);
      auVar119._0_8_ =
           CONCAT17((byte)((uint)fVar94 >> 0x18) & bVar75,
                    CONCAT16((byte)((uint)fVar94 >> 0x10) & bVar74,
                             CONCAT15((byte)((uint)fVar94 >> 8) & bVar73,
                                      CONCAT14(SUB41(fVar94,0) & bVar72,
                                               CONCAT13((byte)((uint)fVar89 >> 0x18) & bVar71,
                                                        CONCAT12((byte)((uint)fVar89 >> 0x10) &
                                                                 bVar69,CONCAT11((byte)((uint)fVar89
                                                                                       >> 8) &
                                                                                 bVar67,SUB41(fVar89
                                                  ,0) & bVar65)))))));
      auVar119[8] = SUB41(fVar95,0) & bVar76;
      auVar119[9] = (byte)((uint)fVar95 >> 8) & bVar77;
      auVar119[10] = (byte)((uint)fVar95 >> 0x10) & bVar79;
      auVar119[0xb] = (byte)((uint)fVar95 >> 0x18) & bVar81;
      auVar119[0xc] = SUB41(fVar97,0) & bVar82;
      auVar119[0xd] = (byte)((uint)fVar97 >> 8) & bVar84;
      auVar119[0xe] = (byte)((uint)fVar97 >> 0x10) & bVar86;
      auVar119[0xf] = (byte)((uint)fVar97 >> 0x18) & bVar88;
      fVar113 = (float)((ulong)puVar42[0x12] >> 0x20);
      fVar93 = (float)puVar42[0x13];
      fVar30 = (-(fVar98 * fVar110) - fVar22 * fVar113) - fVar89 * fVar93;
      fVar32 = (-(fVar103 * fVar110) - fVar112 * fVar113) - fVar94 * fVar93;
      fVar33 = (-(fVar104 * fVar110) - fVar122 * fVar113) - fVar95 * fVar93;
      fVar113 = (-(fVar105 * fVar110) - fVar114 * fVar113) - fVar97 * fVar93;
      auVar102._0_8_ =
           CONCAT17((byte)((uint)fVar103 >> 0x18) & bVar75,
                    CONCAT16((byte)((uint)fVar103 >> 0x10) & bVar74,
                             CONCAT15((byte)((uint)fVar103 >> 8) & bVar73,
                                      CONCAT14(SUB41(fVar103,0) & bVar72,
                                               CONCAT13((byte)((uint)fVar98 >> 0x18) & bVar71,
                                                        CONCAT12((byte)((uint)fVar98 >> 0x10) &
                                                                 bVar69,CONCAT11((byte)((uint)fVar98
                                                                                       >> 8) &
                                                                                 bVar67,SUB41(fVar98
                                                  ,0) & bVar65)))))));
      auVar102[8] = SUB41(fVar104,0) & bVar76;
      auVar102[9] = (byte)((uint)fVar104 >> 8) & bVar77;
      auVar102[10] = (byte)((uint)fVar104 >> 0x10) & bVar79;
      auVar102[0xb] = (byte)((uint)fVar104 >> 0x18) & bVar81;
      auVar102[0xc] = SUB41(fVar105,0) & bVar82;
      auVar102[0xd] = (byte)((uint)fVar105 >> 8) & bVar84;
      auVar102[0xe] = (byte)((uint)fVar105 >> 0x10) & bVar86;
      auVar102[0xf] = (byte)((uint)fVar105 >> 0x18) & bVar88;
      puVar42[0xd] = auVar102._8_8_;
      puVar42[0xc] = auVar102._0_8_;
      puVar42[0xf] = CONCAT17((byte)((uint)fVar114 >> 0x18) & bVar88,
                              CONCAT16((byte)((uint)fVar114 >> 0x10) & bVar86,
                                       CONCAT15((byte)((uint)fVar114 >> 8) & bVar84,
                                                CONCAT14(SUB41(fVar114,0) & bVar82,
                                                         CONCAT13((byte)((uint)fVar122 >> 0x18) &
                                                                  bVar81,CONCAT12((byte)((uint)
                                                  fVar122 >> 0x10) & bVar79,
                                                  CONCAT11((byte)((uint)fVar122 >> 8) & bVar77,
                                                           SUB41(fVar122,0) & bVar76)))))));
      puVar42[0xe] = CONCAT17((byte)((uint)fVar112 >> 0x18) & bVar75,
                              CONCAT16((byte)((uint)fVar112 >> 0x10) & bVar74,
                                       CONCAT15((byte)((uint)fVar112 >> 8) & bVar73,
                                                CONCAT14(SUB41(fVar112,0) & bVar72,
                                                         CONCAT13((byte)((uint)fVar22 >> 0x18) &
                                                                  bVar71,CONCAT12((byte)((uint)
                                                  fVar22 >> 0x10) & bVar69,
                                                  CONCAT11((byte)((uint)fVar22 >> 8) & bVar67,
                                                           SUB41(fVar22,0) & bVar65)))))));
      puVar42[0x11] = auVar119._8_8_;
      puVar42[0x10] = auVar119._0_8_;
      puVar42[0x13] =
           CONCAT17((byte)((uint)fVar113 >> 0x18) & bVar88,
                    CONCAT16((byte)((uint)fVar113 >> 0x10) & bVar86,
                             CONCAT15((byte)((uint)fVar113 >> 8) & bVar84,
                                      CONCAT14(SUB41(fVar113,0) & bVar82,
                                               CONCAT13((byte)((uint)fVar33 >> 0x18) & bVar81,
                                                        CONCAT12((byte)((uint)fVar33 >> 0x10) &
                                                                 bVar79,CONCAT11((byte)((uint)fVar33
                                                                                       >> 8) &
                                                                                 bVar77,SUB41(fVar33
                                                  ,0) & bVar76)))))));
      puVar42[0x12] =
           CONCAT17((byte)((uint)fVar32 >> 0x18) & bVar75,
                    CONCAT16((byte)((uint)fVar32 >> 0x10) & bVar74,
                             CONCAT15((byte)((uint)fVar32 >> 8) & bVar73,
                                      CONCAT14(SUB41(fVar32,0) & bVar72,
                                               CONCAT13((byte)((uint)fVar30 >> 0x18) & bVar71,
                                                        CONCAT12((byte)((uint)fVar30 >> 0x10) &
                                                                 bVar69,CONCAT11((byte)((uint)fVar30
                                                                                       >> 8) &
                                                                                 bVar67,SUB41(fVar30
                                                  ,0) & bVar65)))))));
      uVar44 = *(undefined8 *)(lVar43 + 0x58);
      *puVar42 = *(undefined8 *)(lVar43 + 0x50);
      puVar42[1] = uVar44;
      uVar44 = *(undefined8 *)(lVar43 + 0x60);
      uVar45 = *(undefined8 *)(lVar43 + 0x68);
      uVar31 = *(undefined8 *)(lVar43 + 0x78);
      puVar42[4] = *(undefined8 *)(lVar43 + 0x70);
      puVar42[5] = uVar31;
      puVar42[2] = uVar44;
      puVar42[3] = uVar45;
      memmove(puVar42 + 6,(undefined8 *)(lVar43 + 0x50),0x30);
      *(long *)(lVar41 + 0x80) = *(long *)(lVar41 + 0x80) + -1;
      param_1[0x38] = param_1[0x38] + 0x130;
      lVar41 = param_1[0x3d];
      if (param_1[0x3e] != lVar41) {
LAB_00722afc:
        uVar48 = 0;
        do {
          lVar51 = uVar48 * 4;
          uVar48 = uVar48 + 1;
          *(uint *)(lVar41 + lVar51) =
               *(uint *)(lVar41 + lVar51) | *(uint *)(*(long *)(lVar43 + 200) + lVar51);
          lVar41 = param_1[0x3d];
        } while (uVar48 < (ulong)(param_1[0x3e] - lVar41 >> 2));
      }
    }
    else {
      FUN_00723460(param_1 + 0x37,&local_90,lVar43);
      lVar41 = param_1[0x3d];
      if (param_1[0x3e] != lVar41) goto LAB_00722afc;
    }
    lVar43 = lVar43 + 0x110;
  } while( true );
}


