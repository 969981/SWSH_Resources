/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0062d280; name: FUN_0062d280
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_0062d280(long *param_1,uint param_2,uint param_3,char param_4)

{
  short sVar1;
  short sVar2;
  long *plVar3;
  short *psVar4;
  undefined8 *puVar5;
  byte *pbVar6;
  undefined4 uVar7;
  byte bVar8;
  short sVar9;
  short sVar10;
  int iVar11;
  ushort uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  bool bVar15;
  bool bVar16;
  ushort uVar17;
  int iVar18;
  long lVar19;
  void *__dest;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  void *__src;
  short sVar23;
  short sVar24;
  uint uVar25;
  undefined8 *puVar26;
  ulong uVar27;
  long lVar28;
  uint uVar29;
  long *plVar30;
  long lVar31;
  int *piVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  uint uVar37;
  long lVar38;
  ulong uVar39;
  ulong uVar40;
  long lVar41;
  undefined8 local_148;
  undefined4 local_13c;
  undefined8 local_138;
  long local_130;
  long local_128;
  long local_120;
  long local_118;
  long local_110;
  long local_108;
  long local_100;
  undefined8 local_f8;
  int local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  int local_94;
  undefined4 local_90;
  undefined8 *local_88;
  undefined4 *local_80;
  undefined8 *local_78;
  
  local_94 = 0;
  lVar35 = *param_1;
  lVar36 = param_1[3];
  if (*(ushort *)(lVar35 + 0x1ea) < param_3) {
    *(short *)(lVar35 + 0x1ea) = (short)param_3;
  }
  *(uint *)(param_1 + 5) = param_2;
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    uVar22 = *(undefined8 *)(*(long *)(param_1[1] + 0x58) + 8);
    uVar21 = *(undefined8 *)(*(long *)(param_1[1] + 0x58) + 0x10);
    puVar26 = *(undefined8 **)(*(long *)(lVar35 + 0xf0) + 0x68);
    if (puVar26 != (undefined8 *)0x0) goto LAB_0062d2f0;
LAB_0062d3b4:
    lVar19 = FUN_0062d050(lVar35,param_2,param_1 + 7);
    iVar18 = (int)param_1[7];
    uVar13 = false;
    if (0 < iVar18) goto LAB_0062d3dc;
LAB_0062d358:
    uVar14 = false;
    iVar11 = local_94;
    if (iVar18 == 0) {
LAB_0062d448:
      local_94 = iVar11;
      param_1[10] = 0;
      param_1[0xb] = 0;
      param_1[8] = 0;
      param_1[9] = 0;
      local_94 = FUN_0062ea50(param_1,param_2);
      if ((param_4 == '\0') && (local_94 == 0)) {
        lVar36 = *param_1;
        if (*(int *)(*(long *)(lVar36 + 0xb0) + 0x78) == 0x28) {
          lVar19 = param_1[0x22];
          if (lVar19 == 0) {
            bVar16 = false;
            bVar15 = false;
          }
          else {
            bVar15 = *(char *)(lVar19 + 0x429) != '\0';
            bVar16 = *(char *)(lVar19 + 0x42e) != '\0';
          }
        }
        else {
          bVar16 = false;
          bVar15 = false;
        }
        lVar33 = 0;
        uVar25 = *(uint *)((long)param_1 + 100);
        lVar19 = (long)(int)uVar25;
        lVar34 = param_1[8] - (long)(int)param_1[0xc];
        param_1[0xe] = lVar34;
        param_1[0xf] = 0;
        param_1[0x10] = lVar34 + lVar19;
        param_1[0x11] = 0;
        if ((bool)(bVar16 & bVar15)) {
          uVar37 = uVar25;
          if ((int)uVar25 < 0) {
            uVar37 = uVar25 + 1;
          }
          lVar33 = (long)((ulong)uVar37 << 0x20) >> 0x21;
        }
        lVar34 = param_1[0xb] + (long)(int)param_1[0x26];
        param_1[0x27] = lVar33;
        param_1[0x28] = lVar34;
        if ((bool)(bVar16 & bVar15)) {
          if ((int)uVar25 < 0) {
            uVar25 = uVar25 + 1;
          }
          lVar33 = (long)((ulong)uVar25 << 0x20) >> 0x21;
        }
        else {
          lVar33 = 0;
        }
        param_1[0x29] = lVar33;
        param_1[0x2a] = lVar34 - *(int *)((long)param_1 + 0x134);
        plVar30 = *(long **)(*(long *)(lVar36 + 0xf0) + 0x68);
        if ((plVar30 != (long *)0x0) && (*(long *)(*plVar30 + 0x10) != 0)) {
          local_130 = 0;
          local_120 = 0;
          local_138 = (long)(int)param_1[0xc];
          local_128 = lVar19;
          iVar18 = (**(code **)(*plVar30 + 0x10))(plVar30[1],param_2,0,&local_138);
          if (iVar18 == 0) {
            *(int *)(param_1 + 0xc) = (int)(short)local_138;
            *(uint *)((long)param_1 + 100) = (uint)(ushort)local_128;
            param_1[0x26] = 0;
            if (*(char *)((long)param_1 + 0x6c) == '\0') {
              *(undefined1 *)((long)param_1 + 0x6c) = 1;
              *(uint *)(param_1 + 0xd) = (uint)(ushort)local_128;
            }
          }
          lVar36 = *param_1;
        }
        if (*(char *)(lVar36 + 0x480) == '\0') {
          local_13c = 0x1010101;
          local_148 = 0x3000200010000;
          local_138 = param_1[0xe];
          local_130 = param_1[0xf];
          local_128 = param_1[0x10];
          local_120 = param_1[0x11];
          local_118 = param_1[0x27];
          local_110 = param_1[0x28];
          local_108 = param_1[0x29];
          local_100 = param_1[0x2a];
          local_90 = 0x40004;
          local_88 = &local_138;
          local_80 = &local_13c;
          local_78 = &local_148;
          local_94 = FUN_0062eb90(lVar36,param_2,&local_90,4);
          if (local_94 != 0) goto joined_r0x0062da90;
          param_1[0xe] = local_138;
          param_1[0xf] = local_130;
          param_1[0x10] = local_128;
          param_1[0x11] = local_120;
          param_1[0x27] = local_118;
          param_1[0x28] = local_110;
          param_1[0x29] = local_108;
          param_1[0x2a] = local_100;
          uVar25 = *(uint *)(*param_1 + 0x484);
          if ((uVar25 >> 1 & 1) == 0) {
            *(int *)(param_1 + 0xd) = (int)local_128 - (int)local_138;
            uVar25 = *(uint *)(*param_1 + 0x484);
          }
          local_94 = 0;
          if ((uVar25 >> 4 & 1) != 0) goto LAB_0062d898;
          *(int *)((long)param_1 + 0x134) = (int)local_108 - (int)local_118;
          bVar8 = *(byte *)(param_1 + 4);
        }
        else {
LAB_0062d898:
          bVar8 = *(byte *)(param_1 + 4);
        }
        if ((bVar8 & 1) == 0) {
          lVar36 = FUN_00602580(param_1[0xe],uVar22);
          param_1[0xe] = lVar36;
          lVar36 = FUN_00602580(param_1[0x10],uVar22);
          param_1[0x10] = lVar36;
          lVar36 = FUN_00602580(param_1[0x27],uVar22);
          param_1[0x27] = lVar36;
          lVar36 = FUN_00602580(param_1[0x28],uVar21);
          param_1[0x28] = lVar36;
          lVar36 = FUN_00602580(param_1[0x29],uVar22);
          param_1[0x29] = lVar36;
          lVar36 = FUN_00602580(param_1[0x2a],uVar21);
          param_1[0x2a] = lVar36;
        }
        local_94 = 0;
      }
    }
    else {
LAB_0062d360:
      sVar23 = *(short *)((long)param_1 + 0x3c);
      iVar11 = local_94;
      if (sVar23 == 0) goto LAB_0062d448;
      if (*(int *)(*(long *)(*param_1 + 0xb0) + 0x78) == 0x28) {
        lVar19 = param_1[0x22];
        if (lVar19 == 0) {
          bVar16 = false;
          bVar15 = false;
        }
        else {
          bVar15 = *(char *)(lVar19 + 0x429) != '\0';
          bVar16 = *(char *)(lVar19 + 0x42e) != '\0';
        }
      }
      else {
        bVar16 = false;
        bVar15 = false;
      }
      lVar33 = 0;
      uVar25 = *(uint *)((long)param_1 + 100);
      lVar19 = (long)(int)uVar25;
      lVar34 = param_1[8] - (long)(int)param_1[0xc];
      param_1[0xe] = lVar34;
      param_1[0xf] = 0;
      param_1[0x10] = lVar34 + lVar19;
      param_1[0x11] = 0;
      if ((bool)(bVar16 & bVar15)) {
        uVar37 = uVar25;
        if ((int)uVar25 < 0) {
          uVar37 = uVar25 + 1;
        }
        lVar33 = (long)((ulong)uVar37 << 0x20) >> 0x21;
      }
      lVar34 = param_1[0xb] + (long)(int)param_1[0x26];
      param_1[0x27] = lVar33;
      param_1[0x28] = lVar34;
      if ((bool)(bVar16 & bVar15)) {
        if ((int)uVar25 < 0) {
          uVar25 = uVar25 + 1;
        }
        lVar33 = (long)((ulong)uVar25 << 0x20) >> 0x21;
      }
      else {
        lVar33 = 0;
      }
      param_1[0x29] = lVar33;
      param_1[0x2a] = lVar34 - *(int *)((long)param_1 + 0x134);
      plVar30 = *(long **)(*(long *)(*param_1 + 0xf0) + 0x68);
      if ((plVar30 != (long *)0x0) && (*(long *)(*plVar30 + 0x10) != 0)) {
        local_130 = 0;
        local_120 = 0;
        local_138 = (long)(int)param_1[0xc];
        local_128 = lVar19;
        iVar18 = (**(code **)(*plVar30 + 0x10))(plVar30[1],param_2,0,&local_138);
        if (iVar18 == 0) {
          *(int *)(param_1 + 0xc) = (int)(short)local_138;
          *(uint *)((long)param_1 + 100) = (uint)(ushort)local_128;
          param_1[0x26] = 0;
          if (*(char *)((long)param_1 + 0x6c) == '\0') {
            *(undefined1 *)((long)param_1 + 0x6c) = 1;
            *(uint *)(param_1 + 0xd) = (uint)(ushort)local_128;
          }
        }
        sVar23 = *(short *)((long)param_1 + 0x3c);
      }
      if (sVar23 < 1) {
        if (sVar23 < 0) {
          uVar20 = *(undefined8 *)(lVar35 + 0xb8);
          lVar19 = param_1[0x2d];
          *(undefined2 *)((long)param_1 + 0x3c) = 0xffff;
          if (lVar19 != 0) {
            uVar25 = ~param_3;
LAB_0062d7a4:
            uVar25 = uVar25 + 1;
            if (uVar25 != 0) goto code_r0x0062d7ac;
            lVar33 = lVar19;
            do {
              *(undefined8 *)(lVar33 + 0x10) = 0xffffffffffffffff;
              lVar33 = *(long *)(lVar33 + 8);
            } while (lVar33 != 0);
            bVar15 = false;
            goto LAB_0062da70;
          }
LAB_0062d7b4:
          bVar15 = true;
LAB_0062da70:
          uVar27 = (ulong)param_2;
          lVar33 = FUN_00604480(param_1 + 0x2d,uVar27);
          if (lVar33 == 0) {
            if (bVar15) {
              lVar19 = FUN_00602800(uVar20,0x18,&local_94);
              if (local_94 != 0) goto joined_r0x0062da90;
              *(ulong *)(lVar19 + 0x10) = uVar27;
              FUN_00604870(param_1 + 0x2d,lVar19);
            }
            else {
              *(ulong *)(lVar19 + 0x10) = uVar27;
            }
            sVar23 = *(short *)(lVar36 + 0x1a);
            sVar10 = *(short *)(lVar36 + 0x18);
            local_94 = (**(code **)(lVar35 + 0x368))(param_1);
            if (local_94 == 0) {
              lVar19 = param_1[0x24];
              (**(code **)(lVar35 + 0x350))(param_1);
              if (*(char *)(lVar35 + 0x480) == '\0') {
                iVar18 = *(int *)(lVar36 + 0x98);
                sVar9 = (short)iVar18;
                sVar24 = sVar9 + 4;
                lVar34 = (long)sVar24;
                local_128 = 0;
                local_120 = 0;
                local_130 = 0;
                local_138._0_4_ = CONCAT22(sVar24,sVar24);
                lVar33 = FUN_006029c0(uVar20,0x10,0,lVar34,0,&local_94);
                if (((local_94 == 0) &&
                    (lVar31 = FUN_006029c0(uVar20,1,0,lVar34,0,&local_94), local_94 == 0)) &&
                   (lVar38 = FUN_006029c0(uVar20,2,0,lVar34,0,&local_94), local_94 == 0)) {
                  iVar18 = iVar18 * 0x10000;
                  if (iVar18 < 1) {
                    sVar24 = 0;
                  }
                  else {
                    sVar24 = 0;
                    piVar32 = (int *)(*(long *)(lVar36 + 0xa0) + 0xc);
                    do {
                      plVar30 = (long *)(lVar33 + (long)sVar24 * 0x10);
                      *plVar30 = (long)piVar32[-1];
                      iVar11 = *piVar32;
                      piVar32 = piVar32 + 0xc;
                      plVar30[1] = (long)iVar11;
                      *(undefined1 *)(lVar31 + sVar24) = 1;
                      *(short *)(lVar38 + (long)sVar24 * 2) = sVar24;
                      sVar24 = sVar24 + 1;
                    } while ((int)sVar24 < (int)sVar9);
                  }
                  plVar30 = (long *)(lVar33 + (long)sVar24 * 0x10);
                  *plVar30 = param_1[0xe];
                  plVar30[1] = param_1[0xf];
                  sVar1 = sVar24 + 2;
                  *(undefined1 *)(lVar31 + sVar24) = 1;
                  *(short *)(lVar38 + (long)sVar24 * 2) = sVar24;
                  sVar2 = sVar24 + 1;
                  plVar30 = (long *)(lVar33 + (long)sVar2 * 0x10);
                  *plVar30 = param_1[0x10];
                  plVar30[1] = param_1[0x11];
                  *(undefined1 *)(lVar31 + sVar2) = 1;
                  plVar30 = (long *)(lVar33 + (long)sVar1 * 0x10);
                  *(short *)(lVar38 + (long)sVar2 * 2) = sVar2;
                  *plVar30 = param_1[0x27];
                  plVar30[1] = param_1[0x28];
                  *(undefined1 *)(lVar31 + sVar1) = 1;
                  *(short *)(lVar38 + (long)sVar1 * 2) = sVar1;
                  sVar24 = sVar24 + 3;
                  plVar30 = (long *)(lVar33 + (long)sVar24 * 0x10);
                  *plVar30 = param_1[0x29];
                  plVar30[1] = param_1[0x2a];
                  *(undefined1 *)(lVar31 + sVar24) = 1;
                  *(short *)(lVar38 + (long)sVar24 * 2) = sVar24;
                  local_130 = lVar33;
                  local_128 = lVar31;
                  local_120 = lVar38;
                  local_94 = FUN_0062eb90(lVar35,param_2,&local_138,lVar34);
                  if (local_94 == 0) {
                    if (iVar18 < 1) {
                      sVar24 = 0;
                      iVar18 = 0;
                    }
                    else {
                      sVar24 = 0;
                      piVar32 = (int *)(*(long *)(lVar36 + 0xa0) + 0xc);
                      do {
                        if ((*(byte *)(piVar32 + -2) >> 1 & 1) != 0) {
                          psVar4 = (short *)(lVar33 + (long)sVar24 * 0x10);
                          piVar32[-1] = (int)*psVar4;
                          *piVar32 = (int)psVar4[4];
                        }
                        sVar24 = sVar24 + 1;
                        iVar18 = (int)sVar24;
                        piVar32 = piVar32 + 0xc;
                      } while (iVar18 < sVar9);
                    }
                    plVar30 = (long *)(lVar33 + (long)sVar24 * 0x10);
                    lVar33 = lVar33 + (long)iVar18 * 0x10;
                    lVar38 = *plVar30;
                    param_1[0xe] = lVar38;
                    param_1[0xf] = plVar30[1];
                    lVar41 = *(long *)(lVar33 + 0x10);
                    param_1[0x10] = lVar41;
                    param_1[0x11] = *(long *)(lVar33 + 0x18);
                    lVar34 = *(long *)(lVar33 + 0x20);
                    param_1[0x27] = lVar34;
                    param_1[0x28] = *(long *)(lVar33 + 0x28);
                    lVar31 = *(long *)(lVar33 + 0x30);
                    param_1[0x29] = lVar31;
                    param_1[0x2a] = *(long *)(lVar33 + 0x38);
                    uVar25 = *(uint *)(lVar35 + 0x484);
                    if ((uVar25 >> 1 & 1) == 0) {
                      *(int *)(param_1 + 0xd) = (int)lVar41 - (int)lVar38;
                      uVar25 = *(uint *)(lVar35 + 0x484);
                    }
                    if ((uVar25 >> 4 & 1) == 0) {
                      *(int *)((long)param_1 + 0x134) = (int)lVar31 - (int)lVar34;
                    }
                  }
                }
                FUN_006028c0(uVar20,local_130);
                local_130 = 0;
                FUN_006028c0(uVar20,local_128);
                local_128 = 0;
                FUN_006028c0(uVar20,local_120);
                iVar18 = local_94;
                if (local_94 != 0) goto joined_r0x0062df10;
              }
              uVar25 = (uint)param_1[4];
              if ((param_1[4] & 1U) == 0) {
                lVar33 = FUN_00602580(param_1[0xe],uVar22);
                param_1[0xe] = lVar33;
                lVar33 = FUN_00602580(param_1[0x10],uVar22);
                param_1[0x10] = lVar33;
                lVar33 = FUN_00602580(param_1[0x27],uVar22);
                param_1[0x27] = lVar33;
                lVar33 = FUN_00602580(param_1[0x28],uVar21);
                param_1[0x28] = lVar33;
                lVar33 = FUN_00602580(param_1[0x29],uVar22);
                param_1[0x29] = lVar33;
                lVar33 = FUN_00602580(param_1[0x2a],uVar21);
                uVar25 = (uint)param_1[4];
                param_1[0x2a] = lVar33;
              }
              if ((uVar25 >> 10 & 1) == 0) {
                uVar25 = *(uint *)(lVar36 + 0x50);
                uVar37 = *(uint *)(lVar36 + 0x98);
                lVar34 = param_1[6];
                lVar33 = param_1[7];
                FUN_00603170(lVar36);
                uVar29 = (uint)sVar23;
                if (uVar37 == 0) {
                  lVar36 = 0;
                  uVar25 = uVar29;
                }
                else {
                  uVar27 = 0;
                  lVar31 = (ulong)uVar25 * 0x30;
                  do {
                    local_138 = param_1[0xe];
                    local_130 = param_1[0xf];
                    local_128 = param_1[0x10];
                    local_120 = param_1[0x11];
                    local_118 = param_1[0x27];
                    local_110 = param_1[0x28];
                    local_108 = param_1[0x29];
                    local_100 = param_1[0x2a];
                    lVar38 = param_1[0xd];
                    uVar7 = *(undefined4 *)((long)param_1 + 0x134);
                    sVar24 = *(short *)(lVar36 + 0x1a);
                    local_94 = FUN_0062d280(param_1,*(undefined4 *)
                                                     (*(long *)(lVar36 + 0x58) + lVar31),param_3 + 1
                                            ,0);
                    iVar18 = local_94;
                    if (local_94 != 0) goto joined_r0x0062df10;
                    lVar28 = *(long *)(lVar36 + 0x58);
                    lVar41 = lVar28 + lVar31;
                    if ((*(byte *)(lVar41 + 5) >> 1 & 1) == 0) {
                      param_1[0xe] = local_138;
                      param_1[0xf] = local_130;
                      param_1[0x10] = local_128;
                      param_1[0x11] = local_120;
                      param_1[0x27] = local_118;
                      param_1[0x28] = local_110;
                      param_1[0x29] = local_108;
                      param_1[0x2a] = local_100;
                      *(int *)(param_1 + 0xd) = (int)lVar38;
                      *(undefined4 *)((long)param_1 + 0x134) = uVar7;
                    }
                    sVar9 = *(short *)(lVar36 + 0x1a);
                    if (sVar9 != sVar24) {
                      lVar38 = param_1[3];
                      local_88 = (undefined8 *)
                                 (*(long *)(lVar38 + 0x20) + (ulong)(uint)(int)sVar24 * 0x10);
                      local_90 = CONCAT22(*(short *)(lVar38 + 0x1a) - sVar24,(undefined2)local_90);
                      uVar17 = *(ushort *)(lVar41 + 4);
                      uVar12 = uVar17 & 200;
                      if ((uVar17 & 200) != 0) {
                        FUN_00603850(&local_90,lVar41 + 0x10);
                        uVar17 = *(ushort *)(lVar41 + 4);
                      }
                      iVar18 = *(int *)(lVar41 + 8);
                      uVar39 = (ulong)iVar18;
                      if ((uVar17 >> 1 & 1) == 0) {
                        if (((uint)(int)sVar24 <= iVar18 + uVar29) ||
                           (uVar25 = *(int *)(lVar41 + 0xc) + (int)sVar24,
                           (uint)(int)*(short *)(lVar38 + 0x1a) <= uVar25)) {
                          local_94 = 0x15;
                          if (!(bool)uVar13) {
                            return 0x15;
                          }
                          goto LAB_0062db6c;
                        }
                        plVar30 = (long *)(*(long *)(lVar38 + 0x20) +
                                          (ulong)(iVar18 + uVar29) * 0x10);
                        plVar3 = (long *)(*(long *)(lVar38 + 0x20) + (ulong)uVar25 * 0x10);
                        uVar39 = *plVar30 - *plVar3;
                        uVar40 = plVar30[1] - plVar3[1];
                        if (uVar39 != 0 || uVar40 != 0) goto LAB_0062dea4;
                      }
                      else {
                        uVar40 = (ulong)*(int *)(lVar41 + 0xc);
                        if (*(int *)(lVar41 + 0xc) != 0 || iVar18 != 0) {
                          if ((uVar12 != 0) && ((uVar17 >> 0xb & 1) != 0)) {
                            uVar22 = FUN_00602370(*(undefined8 *)(lVar41 + 0x10),
                                                  *(undefined8 *)(lVar41 + 0x18));
                            uVar21 = FUN_00602370(*(undefined8 *)(lVar41 + 0x28),
                                                  *(undefined8 *)(lVar41 + 0x20));
                            uVar39 = FUN_00602580(uVar39,uVar22);
                            uVar40 = FUN_00602580(uVar40,uVar21);
                          }
                          if ((*(byte *)(param_1 + 4) & 1) == 0) {
                            uVar22 = *(undefined8 *)(*(long *)(param_1[1] + 0x58) + 0x10);
                            uVar39 = FUN_00602580(uVar39,*(undefined8 *)
                                                          (*(long *)(param_1[1] + 0x58) + 8));
                            uVar40 = FUN_00602580(uVar40,uVar22);
                            if ((*(byte *)(lVar41 + 4) >> 2 & 1) != 0) {
                              uVar39 = uVar39 + 0x20 & 0xffffffffffffffc0;
                              uVar40 = uVar40 + 0x20 & 0xffffffffffffffc0;
                            }
                          }
                          if (uVar39 != 0 || uVar40 != 0) {
LAB_0062dea4:
                            FUN_006038d0(&local_90,uVar39,uVar40);
                          }
                        }
                      }
                      local_94 = 0;
                    }
                    uVar27 = uVar27 + 1;
                    lVar31 = lVar31 + 0x30;
                  } while (uVar27 < uVar37);
                  lVar36 = lVar28 + lVar31 + -0x30;
                  uVar25 = (int)sVar9;
                }
                param_1[6] = lVar34;
                *(int *)(param_1 + 7) = (int)lVar33;
                param_1[0x24] = lVar19;
                iVar18 = local_94;
                if ((((*(byte *)(param_1 + 4) >> 1 & 1) == 0) && (uVar29 < uVar25)) &&
                   ((*(ushort *)(lVar36 + 4) >> 8 & 1) != 0)) {
                  lVar36 = param_1[3];
                  sVar24 = *(short *)(lVar36 + 0x1a);
                  iVar18 = sVar24 + 4;
                  if ((iVar18 != 0) &&
                     (*(uint *)(lVar36 + 8) <
                      (uint)(iVar18 + sVar24 + (int)*(short *)(lVar36 + 0x62)))) {
                    local_90 = FUN_00602ae0(lVar36,iVar18,0);
                    iVar18 = local_90;
                    if (local_90 != 0) goto joined_r0x0062df10;
                    sVar24 = *(short *)(lVar36 + 0x1a);
                  }
                  local_90 = 0;
                  plVar30 = (long *)(*(long *)(lVar36 + 0x20) + (long)sVar24 * 0x10);
                  lVar19 = param_1[0xf];
                  *plVar30 = param_1[0xe];
                  plVar30[1] = lVar19;
                  lVar19 = *(long *)(lVar36 + 0x20) + (long)*(short *)(lVar36 + 0x1a) * 0x10;
                  lVar33 = param_1[0x11];
                  *(long *)(lVar19 + 0x10) = param_1[0x10];
                  *(long *)(lVar19 + 0x18) = lVar33;
                  lVar19 = *(long *)(lVar36 + 0x20) + (long)*(short *)(lVar36 + 0x1a) * 0x10;
                  lVar33 = param_1[0x28];
                  *(long *)(lVar19 + 0x20) = param_1[0x27];
                  *(long *)(lVar19 + 0x28) = lVar33;
                  lVar19 = *(long *)(lVar36 + 0x20) + (long)*(short *)(lVar36 + 0x1a) * 0x10;
                  lVar33 = param_1[0x2a];
                  *(long *)(lVar19 + 0x30) = param_1[0x29];
                  *(long *)(lVar19 + 0x38) = lVar33;
                  *(undefined1 *)(*(long *)(lVar36 + 0x28) + (long)*(short *)(lVar36 + 0x1a)) = 0;
                  *(undefined1 *)(*(long *)(lVar36 + 0x28) + (long)*(short *)(lVar36 + 0x1a) + 1) =
                       0;
                  *(undefined1 *)(*(long *)(lVar36 + 0x28) + (long)*(short *)(lVar36 + 0x1a) + 2) =
                       0;
                  *(undefined1 *)(*(long *)(lVar36 + 0x28) + (long)*(short *)(lVar36 + 0x1a) + 3) =
                       0;
                  lVar36 = param_1[6];
                  local_90 = FUN_006069e0(lVar36,param_1[0x24]);
                  iVar18 = local_90;
                  if (local_90 == 0) {
                    uVar17 = FUN_00606b90(lVar36,&local_90);
                    iVar18 = local_90;
                    if (local_90 == 0) {
                      if (*(ushort *)(*param_1 + 0x1e6) < uVar17) {
                        if ((int)param_1[7] < (int)(uint)uVar17) {
                          iVar18 = 0x16;
                          goto joined_r0x0062df10;
                        }
                        lVar19 = param_1[0x22];
                        uVar25 = *(uint *)(lVar19 + 0x2b8);
                        uVar37 = (uint)uVar17;
                        if (uVar25 < uVar37) {
                          uVar22 = FUN_006029c0(*(undefined8 *)(lVar19 + 0x10),1,uVar25,uVar37,
                                                *(undefined8 *)(lVar19 + 0x2c0),&local_138);
                          *(undefined8 *)(lVar19 + 0x2c0) = uVar22;
                          lVar19 = param_1[0x22];
                          if ((int)local_138 != 0) {
                            uVar37 = uVar25;
                          }
                          uVar25 = uVar37;
                          local_90 = (int)local_138;
                        }
                        else {
                          local_90 = 0;
                        }
                        *(uint *)(lVar19 + 0x2b8) = uVar25 & 0xffff;
                        iVar18 = local_90;
                        if (local_90 != 0) goto joined_r0x0062df10;
                      }
                      else if (uVar17 == 0) {
                        local_94 = 0;
                        iVar18 = local_94;
                        goto joined_r0x0062df10;
                      }
                      local_90 = FUN_00606a60(lVar36,*(undefined8 *)(param_1[0x22] + 0x2c0),
                                              (ulong)uVar17);
                      iVar18 = local_90;
                      if (local_90 == 0) {
                        *(undefined8 *)(param_1[2] + 0x100) = *(undefined8 *)(param_1[0x22] + 0x2c0)
                        ;
                        *(ulong *)(param_1[2] + 0x108) = (ulong)uVar17;
                        lVar36 = param_1[3];
                        lVar19 = (long)sVar23 * 0x10;
                        sVar24 = *(short *)(lVar36 + 0x1a) - sVar23;
                        *(short *)((long)param_1 + 0xdc) = sVar24;
                        *(short *)((long)param_1 + 0xde) = *(short *)(lVar36 + 0x18) - sVar10;
                        param_1[0x1c] = *(long *)(lVar36 + 0x40) + lVar19;
                        param_1[0x1d] = *(long *)(lVar36 + 0x20) + lVar19;
                        param_1[0x1e] = *(long *)(lVar36 + 0x48) + lVar19;
                        pbVar6 = (byte *)(*(long *)(lVar36 + 0x28) + (long)sVar23);
                        param_1[0x1f] = (long)pbVar6;
                        lVar36 = *(long *)(lVar36 + 0x30);
                        *(short *)(param_1 + 0x21) = sVar23;
                        param_1[0x20] = lVar36 + ((long)sVar10 & 0xffffffffU) * 2;
                        if (sVar24 == 0) {
                          sVar23 = 4;
                        }
                        else {
                          *pbVar6 = *pbVar6 & 0xe7;
                          uVar17 = *(ushort *)((long)param_1 + 0xdc);
                          if (1 < uVar17) {
                            uVar27 = 1;
                            do {
                              *(byte *)(param_1[0x1f] + uVar27) =
                                   *(byte *)(param_1[0x1f] + uVar27) & 0xe7;
                              uVar17 = *(ushort *)((long)param_1 + 0xdc);
                              uVar27 = uVar27 + 1;
                            } while (uVar27 < uVar17);
                          }
                          sVar23 = uVar17 + 4;
                        }
                        *(short *)((long)param_1 + 0xdc) = sVar23;
                        iVar18 = FUN_0062fa40(param_1,1);
                      }
                    }
                  }
                }
              }
              else {
                FUN_00603170(lVar36);
                *(undefined4 *)(param_1[2] + 0x90) = 0x636f6d70;
                iVar18 = local_94;
              }
              goto joined_r0x0062df10;
            }
          }
          else {
            local_94 = 0x15;
          }
        }
      }
      else {
        local_94 = (**(code **)(lVar35 + 0x360))(param_1);
        if (local_94 == 0) {
          (**(code **)(lVar35 + 0x350))(param_1);
          lVar38 = param_1[3];
          sVar23 = *(short *)(lVar38 + 0x62);
          lVar41 = (long)sVar23;
          lVar19 = param_1[0xf];
          plVar30 = (long *)(*(long *)(lVar38 + 0x68) + lVar41 * 0x10);
          *plVar30 = param_1[0xe];
          plVar30[1] = lVar19;
          lVar34 = param_1[0x11];
          lVar19 = lVar41 + 1;
          plVar30 = (long *)(*(long *)(lVar38 + 0x68) + lVar19 * 0x10);
          lVar33 = lVar41 + 2;
          *plVar30 = param_1[0x10];
          plVar30[1] = lVar34;
          lVar34 = param_1[0x28];
          plVar30 = (long *)(*(long *)(lVar38 + 0x68) + lVar33 * 0x10);
          *plVar30 = param_1[0x27];
          plVar30[1] = lVar34;
          lVar31 = param_1[0x2a];
          lVar34 = lVar41 + 3;
          plVar30 = (long *)(*(long *)(lVar38 + 0x68) + lVar34 * 0x10);
          *plVar30 = param_1[0x29];
          plVar30[1] = lVar31;
          *(undefined1 *)(*(long *)(lVar38 + 0x70) + lVar41) = 0;
          *(undefined1 *)(*(long *)(lVar38 + 0x70) + lVar19) = 0;
          *(undefined1 *)(*(long *)(lVar38 + 0x70) + lVar33) = 0;
          *(undefined1 *)(*(long *)(lVar38 + 0x70) + lVar34) = 0;
          if (*(char *)(*param_1 + 0x480) == '\0') {
            iVar18 = FUN_0062eb90(*param_1,(int)param_1[5],lVar38 + 0x60,lVar41 + 4U & 0xffffffff);
            uVar25 = *(uint *)(*param_1 + 0x484);
            if ((uVar25 >> 1 & 1) == 0) {
              *(int *)(param_1 + 0xd) =
                   *(int *)(*(long *)(lVar38 + 0x68) + lVar19 * 0x10) -
                   *(int *)(*(long *)(lVar38 + 0x68) + lVar41 * 0x10);
              uVar25 = *(uint *)(*param_1 + 0x484);
            }
            if ((uVar25 >> 4 & 1) == 0) {
              *(int *)((long)param_1 + 0x134) =
                   *(int *)(*(long *)(lVar38 + 0x68) + lVar34 * 0x10) -
                   *(int *)(*(long *)(lVar38 + 0x68) + lVar33 * 0x10);
            }
            if (iVar18 != 0) goto joined_r0x0062df10;
          }
          uVar27 = param_1[4];
          if (((uint)uVar27 >> 1 & 1) == 0) {
            uVar17 = *(ushort *)(lVar38 + 0x62);
            *(ushort *)((long)param_1 + 0xdc) = uVar17;
            *(undefined2 *)((long)param_1 + 0xde) = *(undefined2 *)(lVar38 + 0x60);
            param_1[0x1c] = *(long *)(lVar38 + 0x88);
            __src = *(void **)(lVar38 + 0x68);
            param_1[0x1d] = (long)__src;
            __dest = *(void **)(lVar38 + 0x90);
            param_1[0x1e] = (long)__dest;
            param_1[0x1f] = *(long *)(lVar38 + 0x70);
            lVar31 = *(long *)(lVar38 + 0x78);
            *(undefined2 *)(param_1 + 0x21) = 0;
            param_1[0x20] = lVar31;
            memcpy(__dest,__src,(ulong)uVar17 * 0x10 + 0x40);
            uVar27 = param_1[4];
          }
          uVar25 = (uint)uVar27;
          if ((uVar27 & 1) == 0) {
            puVar26 = *(undefined8 **)(lVar38 + 0x68);
            if (-4 < sVar23) {
              puVar5 = puVar26 + (lVar41 + 4U) * 2;
              uVar22 = *(undefined8 *)(*(long *)(param_1[1] + 0x58) + 8);
              uVar21 = *(undefined8 *)(*(long *)(param_1[1] + 0x58) + 0x10);
              do {
                uVar20 = FUN_00602580(*puVar26,uVar22);
                *puVar26 = uVar20;
                uVar20 = FUN_00602580(puVar26[1],uVar21);
                puVar26[1] = uVar20;
                puVar26 = puVar26 + 2;
              } while (puVar26 < puVar5);
              puVar26 = *(undefined8 **)(lVar38 + 0x68);
              uVar25 = (uint)param_1[4];
            }
            lVar31 = (puVar26 + lVar41 * 2)[1];
            param_1[0xe] = puVar26[lVar41 * 2];
            param_1[0xf] = lVar31;
            plVar30 = (long *)(*(long *)(lVar38 + 0x68) + lVar19 * 0x10);
            lVar19 = plVar30[1];
            param_1[0x10] = *plVar30;
            param_1[0x11] = lVar19;
            plVar30 = (long *)(*(long *)(lVar38 + 0x68) + lVar33 * 0x10);
            lVar19 = plVar30[1];
            param_1[0x27] = *plVar30;
            param_1[0x28] = lVar19;
            plVar30 = (long *)(*(long *)(lVar38 + 0x68) + lVar34 * 0x10);
            lVar19 = plVar30[1];
            param_1[0x29] = *plVar30;
            param_1[0x2a] = lVar19;
            if ((uVar25 >> 1 & 1) != 0) goto LAB_0062da18;
LAB_0062d9f4:
            *(short *)((long)param_1 + 0xdc) = *(short *)((long)param_1 + 0xdc) + 4;
            local_94 = FUN_0062fa40(param_1,0);
            iVar18 = local_94;
            if (local_94 != 0) goto joined_r0x0062df10;
          }
          else {
            if ((uVar25 >> 1 & 1) == 0) goto LAB_0062d9f4;
LAB_0062da18:
            local_94 = 0;
          }
          FUN_00603170(lVar36);
          iVar18 = local_94;
          goto joined_r0x0062df10;
        }
      }
    }
joined_r0x0062da90:
    iVar18 = local_94;
    if (!(bool)uVar14) goto joined_r0x0062df10;
  }
  else {
    uVar21 = 0x10000;
    uVar22 = 0x10000;
    puVar26 = *(undefined8 **)(*(long *)(lVar35 + 0xf0) + 0x68);
    if (puVar26 == (undefined8 *)0x0) goto LAB_0062d3b4;
LAB_0062d2f0:
    local_94 = (**(code **)*puVar26)(puVar26[1],param_2,&local_f8);
    if (local_94 != 0) {
      return local_94;
    }
    *(int *)(param_1 + 7) = local_f0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_e8 = 0;
    uStack_e0 = 0;
    FUN_00603320(&local_e8,local_f8);
    lVar19 = 0;
    param_1[6] = (long)&local_e8;
    iVar18 = (int)param_1[7];
    uVar13 = true;
    if (iVar18 < 1) goto LAB_0062d358;
LAB_0062d3dc:
    if ((*(long *)(lVar35 + 0x468) == 0) && (*(long *)(*(long *)(lVar35 + 0xf0) + 0x68) == 0)) {
      local_94 = 8;
      iVar18 = local_94;
      goto joined_r0x0062df10;
    }
    local_94 = (**(code **)(lVar35 + 0x348))(param_1,param_2,*(long *)(lVar35 + 0x468) + lVar19);
    iVar18 = local_94;
    if (local_94 != 0) goto joined_r0x0062df10;
    local_94 = (**(code **)(lVar35 + 0x358))(param_1);
    if (((local_94 == 0) && (local_94 = FUN_0062ea50(param_1,param_2), param_4 == '\0')) &&
       (local_94 == 0)) {
      uVar14 = true;
      iVar11 = 0;
      if ((int)param_1[7] != 0) goto LAB_0062d360;
      goto LAB_0062d448;
    }
  }
  (**(code **)(lVar35 + 0x350))(param_1);
  iVar18 = local_94;
joined_r0x0062df10:
  local_94 = iVar18;
  if ((bool)uVar13) {
LAB_0062db6c:
    plVar30 = *(long **)(*(long *)(lVar35 + 0xf0) + 0x68);
    (**(code **)(*plVar30 + 8))(plVar30[1],&local_f8);
  }
  return local_94;
code_r0x0062d7ac:
  lVar19 = *(long *)(lVar19 + 8);
  if (lVar19 == 0) goto LAB_0062d7b4;
  goto LAB_0062d7a4;
}


