/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a6a870; name: FUN_00a6a870
 */


/* WARNING: Removing unreachable block (ram,0x00a6b41c) */
/* WARNING: Removing unreachable block (ram,0x00a6b434) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a6a870(long *param_1)

{
  float *pfVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  ulong uVar15;
  undefined8 uVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  long *plVar22;
  long *plVar23;
  long lVar24;
  float fVar25;
  float fVar26;
  undefined8 uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  long local_188;
  char *local_180;
  undefined8 local_178;
  long local_170;
  undefined8 local_168;
  char *local_160;
  undefined8 uStack_158;
  long local_150;
  undefined8 uStack_148;
  char *local_140;
  undefined8 uStack_138;
  long local_130;
  undefined8 uStack_128;
  char *local_120;
  undefined8 uStack_118;
  long local_110;
  undefined8 uStack_108;
  char *local_100;
  undefined8 uStack_f8;
  long local_f0;
  undefined8 uStack_e8;
  char *local_e0;
  undefined8 uStack_d8;
  long local_d0;
  undefined8 uStack_c8;
  char *local_c0;
  undefined8 uStack_b8;
  long local_b0;
  undefined8 uStack_a8;
  char *local_a0;
  undefined8 uStack_98;
  long local_90;
  undefined8 local_78;
  undefined8 in_stack_ffffffffffffffa8;
  int iVar34;
  undefined8 in_stack_ffffffffffffffb0;
  undefined8 in_stack_ffffffffffffffb8;
  
  uVar8 = _UNK_01d4a138;
  uVar7 = _DAT_01d4a130;
  iVar14 = 0;
  lVar24 = 0x548;
  do {
    lVar17 = (*(long **)((long)param_1 + lVar24))[0xa2];
    iVar34 = (int)((ulong)in_stack_ffffffffffffffa8 >> 0x20);
    if (lVar17 == 0) {
      bVar10 = false;
      uVar15 = (**(code **)(**(long **)((long)param_1 + lVar24) + 400))();
      if ((uVar15 & 1) == 0) goto LAB_00a6a8d4;
LAB_00a6a968:
      if (bVar10) {
        FUN_00ad7f80(*(undefined8 *)((long)param_1 + lVar24));
        FUN_00ad87d0(*(undefined8 *)((long)param_1 + lVar24));
        goto LAB_00a6a97c;
      }
    }
    else {
      bVar10 = *(int *)(lVar17 + 0x54) != 0;
      uVar15 = (**(code **)(**(long **)((long)param_1 + lVar24) + 400))();
      if ((uVar15 & 1) != 0) goto LAB_00a6a968;
LAB_00a6a8d4:
      if (!bVar10) goto LAB_00a6a968;
      FUN_00acf8d0(*(undefined8 *)((long)param_1 + lVar24));
      FUN_00ad7f80(*(undefined8 *)((long)param_1 + lVar24));
      FUN_00ad87d0(*(undefined8 *)((long)param_1 + lVar24));
      FUN_00a67970(param_1,iVar14,(long)register0x00000008 + -0x50,(long)register0x00000008 + -0x54)
      ;
      lVar17 = *(long *)((long)param_1 + lVar24);
      *(undefined8 *)(lVar17 + 0x3d8) = in_stack_ffffffffffffffb8;
      *(undefined8 *)(lVar17 + 0x3d0) = in_stack_ffffffffffffffb0;
      lVar17 = *(long *)((long)param_1 + lVar24);
      *(undefined8 *)(lVar17 + 0x458) = 0;
      *(ulong *)(lVar17 + 0x450) = (ulong)(uint)(float)iVar34 << 0x20;
      lVar17 = *(long *)((long)param_1 + lVar24);
      *(undefined8 *)(lVar17 + 0x408) = uVar8;
      *(undefined8 *)(lVar17 + 0x400) = uVar7;
      (**(code **)(**(long **)((long)param_1 + lVar24) + 0x198))
                (*(long **)((long)param_1 + lVar24),0);
LAB_00a6a97c:
      uVar16 = (**(code **)(*param_1 + 0x7f8))(param_1,iVar14);
      uVar11 = FUN_008e12a0(uVar16,0xd);
      uVar12 = FUN_008e12a0(uVar16,0xf);
      iVar13 = FUN_016ac470(uVar11,uVar12);
      if (iVar13 == 2) {
        FUN_00ad5d30(*(undefined8 *)((long)param_1 + lVar24),1);
      }
    }
    lVar24 = lVar24 + 8;
    iVar14 = iVar14 + 1;
    if (lVar24 == 0x580) {
      uVar15 = (**(code **)(*(long *)param_1[0xb0] + 400))();
      if ((((uVar15 & 1) == 0) && (*(long *)(param_1[0xb0] + 0x510) != 0)) &&
         (*(int *)(*(long *)(param_1[0xb0] + 0x510) + 0x54) != 0)) {
        FUN_00acf8d0(param_1[0xb0]);
        FUN_00a67ff0(param_1,0,(long)register0x00000008 + -0x50,(long)register0x00000008 + -0x54,0);
        lVar24 = param_1[0xb0];
        *(undefined8 *)(lVar24 + 0x3d8) = in_stack_ffffffffffffffb8;
        *(undefined8 *)(lVar24 + 0x3d0) = in_stack_ffffffffffffffb0;
        lVar24 = param_1[0xb0];
        *(undefined8 *)(lVar24 + 0x458) = 0;
        *(ulong *)(lVar24 + 0x450) = (ulong)(uint)(float)iVar34 << 0x20;
        lVar24 = param_1[0xb0];
        *(undefined8 *)(lVar24 + 0x408) = uVar8;
        *(undefined8 *)(lVar24 + 0x400) = uVar7;
        (**(code **)(*(long *)param_1[0xb0] + 0x198))((long *)param_1[0xb0],0);
      }
      uVar15 = (**(code **)(*(long *)param_1[0xb1] + 400))();
      if ((((uVar15 & 1) == 0) && (*(long *)(param_1[0xb1] + 0x510) != 0)) &&
         (*(int *)(*(long *)(param_1[0xb1] + 0x510) + 0x54) != 0)) {
        FUN_00acf8d0(param_1[0xb1]);
        FUN_00a67ff0(param_1,1,(long)register0x00000008 + -0x50,(long)register0x00000008 + -0x54,0);
        lVar24 = param_1[0xb1];
        *(undefined8 *)(lVar24 + 0x3d8) = in_stack_ffffffffffffffb8;
        *(undefined8 *)(lVar24 + 0x3d0) = in_stack_ffffffffffffffb0;
        lVar24 = param_1[0xb1];
        *(undefined8 *)(lVar24 + 0x458) = 0;
        *(ulong *)(lVar24 + 0x450) = (ulong)(uint)(float)iVar34 << 0x20;
        lVar24 = param_1[0xb1];
        *(undefined8 *)(lVar24 + 0x408) = uVar8;
        *(undefined8 *)(lVar24 + 0x400) = uVar7;
        (**(code **)(*(long *)param_1[0xb1] + 0x198))((long *)param_1[0xb1],0);
      }
      uVar15 = (**(code **)(*(long *)param_1[0xb2] + 400))();
      if ((((uVar15 & 1) == 0) && (*(long *)(param_1[0xb2] + 0x510) != 0)) &&
         (*(int *)(*(long *)(param_1[0xb2] + 0x510) + 0x54) != 0)) {
        FUN_00acf8d0(param_1[0xb2]);
        FUN_00a67ff0(param_1,2,(long)register0x00000008 + -0x50,(long)register0x00000008 + -0x54,0);
        lVar24 = param_1[0xb2];
        *(undefined8 *)(lVar24 + 0x3d8) = in_stack_ffffffffffffffb8;
        *(undefined8 *)(lVar24 + 0x3d0) = in_stack_ffffffffffffffb0;
        lVar24 = param_1[0xb2];
        *(undefined8 *)(lVar24 + 0x458) = 0;
        *(ulong *)(lVar24 + 0x450) = (ulong)(uint)(float)iVar34 << 0x20;
        lVar24 = param_1[0xb2];
        *(undefined8 *)(lVar24 + 0x408) = uVar8;
        *(undefined8 *)(lVar24 + 0x400) = uVar7;
        (**(code **)(*(long *)param_1[0xb2] + 0x198))((long *)param_1[0xb2],0);
      }
      uVar15 = (**(code **)(*(long *)param_1[0xb3] + 400))();
      if ((((uVar15 & 1) == 0) && (*(long *)(param_1[0xb3] + 0x510) != 0)) &&
         (*(int *)(*(long *)(param_1[0xb3] + 0x510) + 0x54) != 0)) {
        FUN_00acf8d0(param_1[0xb3]);
        FUN_00a67ff0(param_1,3,(long)register0x00000008 + -0x50,(long)register0x00000008 + -0x54,0);
        lVar24 = param_1[0xb3];
        *(undefined8 *)(lVar24 + 0x3d8) = in_stack_ffffffffffffffb8;
        *(undefined8 *)(lVar24 + 0x3d0) = in_stack_ffffffffffffffb0;
        lVar24 = param_1[0xb3];
        *(undefined8 *)(lVar24 + 0x458) = 0;
        *(ulong *)(lVar24 + 0x450) = (ulong)(uint)(float)iVar34 << 0x20;
        lVar24 = param_1[0xb3];
        *(undefined8 *)(lVar24 + 0x408) = uVar8;
        *(undefined8 *)(lVar24 + 0x400) = uVar7;
        (**(code **)(*(long *)param_1[0xb3] + 0x198))((long *)param_1[0xb3],0);
      }
      uVar15 = (**(code **)(*(long *)param_1[0xb4] + 400))();
      if ((((uVar15 & 1) == 0) && (*(long *)(param_1[0xb4] + 0x510) != 0)) &&
         (*(int *)(*(long *)(param_1[0xb4] + 0x510) + 0x54) != 0)) {
        FUN_00acf8d0(param_1[0xb4]);
        FUN_00a67ff0(param_1,4,(long)register0x00000008 + -0x50,(long)register0x00000008 + -0x54,0);
        lVar24 = param_1[0xb4];
        *(undefined8 *)(lVar24 + 0x3d8) = in_stack_ffffffffffffffb8;
        *(undefined8 *)(lVar24 + 0x3d0) = in_stack_ffffffffffffffb0;
        lVar24 = param_1[0xb4];
        *(undefined8 *)(lVar24 + 0x458) = 0;
        *(ulong *)(lVar24 + 0x450) = (ulong)(uint)(float)iVar34 << 0x20;
        lVar24 = param_1[0xb4];
        *(undefined8 *)(lVar24 + 0x408) = uVar8;
        *(undefined8 *)(lVar24 + 0x400) = uVar7;
        (**(code **)(*(long *)param_1[0xb4] + 0x198))((long *)param_1[0xb4],0);
      }
      uVar15 = (**(code **)(*(long *)param_1[0xb5] + 400))();
      if ((((uVar15 & 1) == 0) && (*(long *)(param_1[0xb5] + 0x510) != 0)) &&
         (*(int *)(*(long *)(param_1[0xb5] + 0x510) + 0x54) != 0)) {
        FUN_00acf8d0(param_1[0xb5]);
        FUN_00a67ff0(param_1,5,(long)register0x00000008 + -0x50,(long)register0x00000008 + -0x54,0);
        lVar24 = param_1[0xb5];
        *(undefined8 *)(lVar24 + 0x3d8) = in_stack_ffffffffffffffb8;
        *(undefined8 *)(lVar24 + 0x3d0) = in_stack_ffffffffffffffb0;
        lVar24 = param_1[0xb5];
        *(undefined8 *)(lVar24 + 0x458) = 0;
        *(ulong *)(lVar24 + 0x450) = (ulong)(uint)(float)iVar34 << 0x20;
        lVar24 = param_1[0xb5];
        *(undefined8 *)(lVar24 + 0x408) = uVar8;
        *(undefined8 *)(lVar24 + 0x400) = uVar7;
        (**(code **)(*(long *)param_1[0xb5] + 0x198))((long *)param_1[0xb5],0);
      }
      uVar15 = (**(code **)(*(long *)param_1[0xb6] + 400))();
      if ((((uVar15 & 1) == 0) && (*(long *)(param_1[0xb6] + 0x510) != 0)) &&
         (*(int *)(*(long *)(param_1[0xb6] + 0x510) + 0x54) != 0)) {
        FUN_00acf8d0(param_1[0xb6]);
        FUN_00a67ff0(param_1,6,(long)register0x00000008 + -0x50,(long)register0x00000008 + -0x54,0);
        lVar24 = param_1[0xb6];
        *(undefined8 *)(lVar24 + 0x3d8) = in_stack_ffffffffffffffb8;
        *(undefined8 *)(lVar24 + 0x3d0) = in_stack_ffffffffffffffb0;
        lVar24 = param_1[0xb6];
        *(undefined8 *)(lVar24 + 0x458) = 0;
        *(ulong *)(lVar24 + 0x450) = (ulong)(uint)(float)iVar34 << 0x20;
        lVar24 = param_1[0xb6];
        *(undefined8 *)(lVar24 + 0x408) = uVar8;
        *(undefined8 *)(lVar24 + 0x400) = uVar7;
        (**(code **)(*(long *)param_1[0xb6] + 0x198))((long *)param_1[0xb6],0);
      }
      if (((param_1[0x124] != 0) && (lVar24 = *(long *)(param_1[0x124] + 0x4c0), lVar24 != 0)) &&
         (*(int *)(lVar24 + 0x54) != 0)) {
        FUN_00aa9fa0(param_1[0x124],param_1[0x17]);
        uVar16 = _DAT_01d4a5c0;
        lVar24 = param_1[0x124];
        *(undefined8 *)(lVar24 + 0x3d8) = _UNK_01d4a5c8;
        *(undefined8 *)(lVar24 + 0x3d0) = uVar16;
        uVar16 = _DAT_01d4b6d0;
        lVar24 = param_1[0x124];
        *(undefined8 *)(lVar24 + 0x458) = _UNK_01d4b6d8;
        *(undefined8 *)(lVar24 + 0x450) = uVar16;
        lVar24 = param_1[0x124];
        *(undefined8 *)(lVar24 + 0x408) = uVar8;
        *(undefined8 *)(lVar24 + 0x400) = uVar7;
      }
      uVar9 = uRam0000000002a55368;
      uVar16 = _DAT_02a55360;
      fVar29 = DAT_01d4bc78;
      uVar8 = _UNK_01d4b7e8;
      uVar7 = _DAT_01d4b7e0;
      if ((char)param_1[0x173] == '\0') {
        return;
      }
      fVar32 = (float)_DAT_01d4b910 - (float)_DAT_02a55350;
      uVar15 = (ulong)_DAT_01d4b910 >> 0x20;
      uVar6 = (ulong)_DAT_02a55350 >> 0x20;
      fVar33 = (float)_UNK_01d4b918 - (float)uRam0000000002a55358;
      fVar28 = *(float *)PTR_FloatDegree180_027194f0;
      fVar25 = (float)NEON_ucvtf(*(undefined4 *)PTR_AngleIndexHalfRound_02715d18);
      fVar31 = (float)((ulong)_DAT_02a55360 >> 0x20);
      uVar18 = (ulong)((fVar25 / fVar28) * fVar31);
      local_90 = 0;
      pfVar1 = (float *)(PTR_SinCosSampleTable_02715d20 + (uVar18 >> 0x18 & 0xff) * 0x10);
      local_168 = 0x36bc4d33bcb739cf;
      local_188 = 0x9c7c83cf66d5f80;
      fVar26 = (float)((uint)uVar18 & 0xffffff) * DAT_01d4bc78;
      fVar30 = pfVar1[1] + pfVar1[3] * fVar26;
      fVar26 = *pfVar1 + pfVar1[2] * fVar26;
      local_180 = "tr0148body";
      local_160 = "tr0149body";
      uStack_158 = 10;
      local_150 = 0;
      uStack_148 = 0x4b84f89b067f4159;
      local_140 = "tr0028body";
      uStack_138 = 10;
      local_130 = 0;
      uStack_128 = 0xd59e11aa45d48969;
      local_120 = "tr0147body";
      uStack_118 = 10;
      local_110 = 0;
      uStack_108 = 0x35599a838716d9e5;
      local_100 = "tr0150body";
      uStack_f8 = 10;
      local_f0 = 0;
      uStack_e8 = 0x273a7e8eb11b086a;
      local_e0 = "tr0155body";
      uStack_d8 = 10;
      local_d0 = 0;
      uStack_c8 = 0x3049ccf875de4f86;
      local_178 = 10;
      local_170 = 0;
      local_c0 = "tr0151body";
      uStack_b8 = 10;
      local_b0 = 0;
      uStack_a8 = 0x523055f65a1c2207;
      local_a0 = "tr0152body";
      uStack_98 = 10;
      lVar24 = FUN_009c5ff0();
      if (lVar24 == 0) {
        lVar24 = 0;
      }
      else {
        lVar24 = FUN_009c5ff0(param_1);
        lVar24 = *(long *)(lVar24 + 0x88) + 0x1c0;
      }
      plVar23 = param_1 + 0x174;
      do {
        if (*plVar23 != 0) {
          FUN_00aac440(*plVar23,0,0);
          lVar17 = *plVar23;
          *(ulong *)(lVar17 + 0x3d8) = (ulong)(uint)(fVar30 * fVar32 + fVar26 * fVar33);
          *(ulong *)(lVar17 + 0x3d0) =
               CONCAT44((float)uVar15 - (float)uVar6,fVar26 * fVar32 - fVar30 * fVar33);
          lVar17 = *plVar23;
          *(ulong *)(lVar17 + 0x458) =
               CONCAT44((float)((ulong)uVar8 >> 0x20) - (float)((ulong)uVar9 >> 0x20),
                        (float)uVar8 - (float)uVar9);
          *(ulong *)(lVar17 + 0x450) =
               CONCAT44((float)((ulong)uVar7 >> 0x20) - fVar31,(float)uVar7 - (float)uVar16);
          *(undefined1 *)(*plVar23 + 0x50b) = 1;
          if (lVar24 != 0) {
            FUN_00aacf90(&local_78,*plVar23);
            uVar18 = 0;
            do {
              iVar14 = FUN_0072c700(local_78 + 0x210,&local_188 + uVar18 * 4);
              if (iVar14 != -1) {
                lVar17 = lVar24 + uVar18 * 0x20;
                uVar27 = *(undefined8 *)(lVar17 + 0x10);
                uVar19 = (ulong)iVar14;
                if (-1.0 < (float)uVar27) {
                  lVar21 = *(long *)(*(long *)(local_78 + 0x218) + 0x290) + uVar19 * 0x4c0;
                  plVar2 = *(long **)(lVar21 + 0xd8);
                  plVar3 = *(long **)(lVar21 + 0xe0);
                  if (plVar3 != plVar2) {
                    plVar22 = plVar2;
                    if (*plVar2 != -0x523f70065b7def2e) {
                      do {
                        plVar22 = plVar22 + 4;
                        if (plVar3 == plVar22) goto LAB_00a6b260;
                      } while (*plVar22 != -0x523f70065b7def2e);
                    }
                    if ((plVar22 != plVar3) &&
                       (((long)plVar22 - (long)plVar2 & 0x1fffffffe0U) != 0x1fffffffe0)) {
                      if ((ulong)((*(long *)(local_78 + 0x328) - *(long *)(local_78 + 800) >> 3) *
                                 -0x70a3d70a3d70a3d7) <= uVar19) goto LAB_00a6b530;
                      lVar21 = *(long *)(local_78 + 800) + uVar19 * 200;
                      lVar20 = *(long *)(lVar21 + 0x80);
                      uVar4 = ((long)plVar22 - (long)plVar2) * 0x8000000 >> 0x20;
                      if ((ulong)(*(long *)(lVar21 + 0x88) - lVar20 >> 4) <= uVar4)
                      goto LAB_00a6b530;
                      puVar5 = (undefined8 *)(lVar20 + uVar4 * 0x10);
                      puVar5[1] = *(undefined8 *)(lVar17 + 0x18);
                      *puVar5 = uVar27;
                    }
                  }
                }
LAB_00a6b260:
                lVar17 = lVar24 + (uVar18 << 5 | 0x10);
                uVar27 = *(undefined8 *)(lVar17 + 0x10);
                if (-1.0 < (float)uVar27) {
                  lVar21 = *(long *)(*(long *)(local_78 + 0x218) + 0x290) + uVar19 * 0x4c0;
                  plVar2 = *(long **)(lVar21 + 0xd8);
                  plVar3 = *(long **)(lVar21 + 0xe0);
                  if (plVar3 != plVar2) {
                    plVar22 = plVar2;
                    if (*plVar2 != 0x1e84c97e0fc9d0a6) {
                      do {
                        plVar22 = plVar22 + 4;
                        if (plVar3 == plVar22) goto LAB_00a6b320;
                      } while (*plVar22 != 0x1e84c97e0fc9d0a6);
                    }
                    if ((plVar22 != plVar3) &&
                       (((long)plVar22 - (long)plVar2 & 0x1fffffffe0U) != 0x1fffffffe0)) {
                      if ((ulong)((*(long *)(local_78 + 0x328) - *(long *)(local_78 + 800) >> 3) *
                                 -0x70a3d70a3d70a3d7) <= uVar19) {
LAB_00a6b530:
                    /* WARNING: Subroutine does not return */
                        std::__vector_base_common<true>::__throw_out_of_range();
                      }
                      lVar21 = *(long *)(local_78 + 800) + uVar19 * 200;
                      lVar20 = *(long *)(lVar21 + 0x80);
                      uVar19 = ((long)plVar22 - (long)plVar2) * 0x8000000 >> 0x20;
                      if ((ulong)(*(long *)(lVar21 + 0x88) - lVar20 >> 4) <= uVar19)
                      goto LAB_00a6b530;
                      puVar5 = (undefined8 *)(lVar20 + uVar19 * 0x10);
                      puVar5[1] = *(undefined8 *)(lVar17 + 0x18);
                      *puVar5 = uVar27;
                    }
                  }
                }
              }
LAB_00a6b320:
              uVar18 = uVar18 + 1;
            } while (uVar18 < 8);
            if (local_78 != 0) {
              (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
              local_78 = 0;
            }
          }
        }
        plVar23 = plVar23 + 1;
        if (plVar23 == param_1 + 0x178) {
          if (param_1[0x178] != 0) {
            uVar15 = (ulong)_DAT_01d4a160 >> 0x20;
            fVar26 = (float)_DAT_01d4a160 - (float)_DAT_02a55350;
            uVar6 = (ulong)_DAT_02a55350 >> 0x20;
            fVar30 = (float)_UNK_01d4a168 - (float)uRam0000000002a55358;
            fVar31 = (float)((ulong)_DAT_02a55360 >> 0x20);
            uVar18 = (ulong)((fVar25 / fVar28) * fVar31);
            pfVar1 = (float *)(PTR_SinCosSampleTable_02715d20 + (uVar18 >> 0x18 & 0xff) * 0x10);
            fVar29 = (float)((uint)uVar18 & 0xffffff) * fVar29;
            fVar32 = pfVar1[1] + pfVar1[3] * fVar29;
            fVar29 = *pfVar1 + pfVar1[2] * fVar29;
            fVar25 = (float)_DAT_02a55360;
            fVar28 = (float)uRam0000000002a55368;
            uVar18 = (ulong)uRam0000000002a55368 >> 0x20;
            FUN_00aac440(param_1[0x178],0,0);
            lVar24 = param_1[0x178];
            *(ulong *)(lVar24 + 0x3d8) = (ulong)(uint)(fVar26 * fVar32 + fVar30 * fVar29);
            *(ulong *)(lVar24 + 0x3d0) =
                 CONCAT44((float)uVar15 - (float)uVar6,fVar26 * fVar29 - fVar30 * fVar32);
            lVar24 = param_1[0x178];
            *(ulong *)(lVar24 + 0x458) = CONCAT44(0.0 - (float)uVar18,0.0 - fVar28);
            *(ulong *)(lVar24 + 0x450) = CONCAT44(0.0 - fVar31,0.0 - fVar25);
          }
          if (local_90 != 0) {
            (**(code **)(*(long *)(local_90 + 0x48) + 0x18))();
            local_90 = 0;
          }
          if (local_b0 != 0) {
            (**(code **)(*(long *)(local_b0 + 0x48) + 0x18))();
            local_b0 = 0;
          }
          if (local_d0 != 0) {
            (**(code **)(*(long *)(local_d0 + 0x48) + 0x18))();
            local_d0 = 0;
          }
          if (local_f0 != 0) {
            (**(code **)(*(long *)(local_f0 + 0x48) + 0x18))();
            local_f0 = 0;
          }
          if (local_110 != 0) {
            (**(code **)(*(long *)(local_110 + 0x48) + 0x18))();
            local_110 = 0;
          }
          if (local_130 != 0) {
            (**(code **)(*(long *)(local_130 + 0x48) + 0x18))();
            local_130 = 0;
          }
          if (local_150 != 0) {
            (**(code **)(*(long *)(local_150 + 0x48) + 0x18))();
            local_150 = 0;
          }
          if (local_170 != 0) {
            (**(code **)(*(long *)(local_170 + 0x48) + 0x18))();
          }
          return;
        }
      } while( true );
    }
  } while( true );
}


