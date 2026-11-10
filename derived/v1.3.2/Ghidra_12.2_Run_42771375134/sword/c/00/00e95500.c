/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e95500; name: FUN_00e95500
 */


void FUN_00e95500(long *param_1,long param_2,undefined8 param_3,uint *param_4)

{
  uint *puVar1;
  int iVar2;
  ushort uVar3;
  undefined *puVar4;
  bool bVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ushort *puVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  float *pfVar13;
  undefined4 *puVar14;
  long lVar15;
  long lVar16;
  undefined4 uVar17;
  float fVar18;
  ulong *local_218;
  int local_210;
  uint uStack_20c;
  undefined1 local_208;
  ulong local_200 [52];
  
  if ((*(ushort *)((long)param_4 - (long)(int)*param_4) < 5) ||
     (uVar7 = (ulong)((ushort *)((long)param_4 - (long)(int)*param_4))[2], uVar7 == 0)) {
    lVar8 = 0;
  }
  else {
    puVar1 = (uint *)((long)param_4 + uVar7);
    lVar8 = (long)puVar1 + (ulong)*puVar1;
  }
  FUN_00db5850(param_1,param_2,param_3,lVar8);
  puVar4 = PTR_DAT_0271ff48;
  *param_1 = (long)(PTR_DAT_0271ff48 + 0x10);
  param_1[9] = (long)(puVar4 + 0x198);
  param_1[10] = (long)(puVar4 + 0x1d8);
  if (*(ushort *)((long)param_4 - (long)(int)*param_4) < 7) {
    lVar8 = 0;
  }
  else {
    uVar7 = (ulong)((ushort *)((long)param_4 - (long)(int)*param_4))[3];
    lVar8 = 0;
    if (uVar7 != 0) {
      lVar8 = *(long *)((long)param_4 + uVar7);
    }
  }
  param_1[0x74] = lVar8;
  *(undefined4 *)(param_1 + 0x75) = 0;
  *(undefined2 *)((long)param_1 + 0x3ac) = 0;
  FUN_00de08d0(param_1 + 0x76,param_2);
  param_1[0x8a] = 0;
  param_1[0x89] = 0;
  param_1[0x88] = 0;
  param_1[0x8b] = param_2;
  param_1[0x8c] = 0;
  *(undefined4 *)(param_1 + 0x8d) = 0;
  *(undefined1 *)(param_1 + 0x8e) = 0;
  puVar9 = (ushort *)((long)param_4 - (long)(int)*param_4);
  if (*puVar9 < 0xb) {
    uVar11 = 0;
    uVar10 = 0;
    if (8 < *puVar9) {
      uVar3 = puVar9[4];
      goto joined_r0x00e958e8;
    }
LAB_00e95644:
    *(uint *)(param_1 + 0x75) = uVar10;
  }
  else {
    if ((ulong)puVar9[5] == 0) {
      uVar11 = 0;
      uVar3 = puVar9[4];
    }
    else {
      uVar11 = *(uint *)((long)param_4 + (ulong)puVar9[5]);
      if (1 < uVar11) {
        uVar11 = 2;
      }
      uVar3 = puVar9[4];
    }
joined_r0x00e958e8:
    if ((ulong)uVar3 == 0) {
      uVar10 = 0;
      goto LAB_00e95644;
    }
    uVar10 = *(uint *)((long)param_4 + (ulong)uVar3);
    if (uVar10 < 3) goto LAB_00e95644;
  }
  if (*(ushort *)((long)param_4 - (long)(int)*param_4) < 0xd) {
    bVar5 = false;
  }
  else {
    uVar7 = (ulong)((ushort *)((long)param_4 - (long)(int)*param_4))[6];
    bVar5 = false;
    if (uVar7 != 0) {
      bVar5 = *(char *)((long)param_4 + uVar7) != '\0';
    }
  }
  *(bool *)((long)param_1 + 0x3ac) = bVar5;
  puVar4 = PTR_DAT_02710860;
  uVar7 = (ulong)(int)*param_4;
  puVar1 = (uint *)((long)param_4 + (ulong)*(ushort *)((long)param_4 + (0xe - uVar7)));
  iVar2 = *(int *)((long)puVar1 + (ulong)*puVar1);
  iVar12 = iVar2;
  if (0x18 < iVar2) {
    iVar12 = 0x19;
  }
  if (0 < iVar2) {
    lVar16 = 0;
    lVar8 = 8;
    do {
      uVar7 = (ulong)*(ushort *)((long)param_4 + (0xe - (long)(int)uVar7));
      lVar6 = uVar7 + *(uint *)((long)param_4 + uVar7);
      lVar6 = lVar6 + (ulong)*(uint *)((long)param_4 + lVar16 * 4 + lVar6 + 4);
      lVar15 = lVar8 + (lVar6 - *(int *)((long)param_4 + lVar16 * 4 + lVar6 + 4));
      uVar3 = *(ushort *)((long)param_4 + lVar15 + -4);
      fVar18 = 0.0;
      uVar17 = 0;
      uVar7 = 0;
      if (4 < uVar3) {
        uVar17 = 0;
        if ((ulong)*(ushort *)((long)param_4 + lVar15) != 0) {
          uVar17 = *(undefined4 *)
                    ((long)param_4 +
                    lVar16 * 4 + lVar6 + (ulong)*(ushort *)((long)param_4 + lVar15) + 4);
        }
        if (uVar3 < 7) {
          fVar18 = 0.0;
        }
        else {
          uVar7 = (ulong)*(ushort *)((long)param_4 + lVar15 + 2);
          fVar18 = 0.0;
          if (uVar7 != 0) {
            fVar18 = *(float *)((long)param_4 + lVar16 * 4 + lVar6 + uVar7 + 4);
          }
          if ((8 < uVar3) && (uVar7 = (ulong)*(ushort *)((long)param_4 + lVar15 + 4), uVar7 != 0)) {
            uVar7 = (ulong)*(uint *)((long)param_4 + lVar16 * 4 + lVar6 + uVar7 + 4);
            goto LAB_00e957a0;
          }
        }
        uVar7 = 0;
      }
LAB_00e957a0:
      local_200[lVar16 * 2 + 1] = uVar7;
      local_200[lVar16 * 2] = CONCAT44(fVar18,uVar17);
      if ((char)param_1[0x8e] != '\0') {
        local_218 = (ulong *)CONCAT44(local_218._4_4_,ABS(fVar18));
        puVar14 = (undefined4 *)param_1[0x89];
        if (puVar14 < (undefined4 *)param_1[0x8a]) {
          lVar15 = param_1[0x8b];
          lVar6 = nn::os::GetTlsValue(*(undefined4 *)puVar4);
          if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_00e95944;
          *(long *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = lVar15;
          *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
          *puVar14 = local_218._0_4_;
          *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
          param_1[0x89] = param_1[0x89] + 4;
        }
        else {
          FUN_00e42aa0(param_1 + 0x88,&local_218);
        }
        uVar7 = local_200[lVar16 * 2];
        local_200[lVar16 * 2 + 1] = local_200[lVar16 * 2 + 1];
        local_200[lVar16 * 2] = uVar7 & 0xffffffff;
      }
      lVar16 = lVar16 + 1;
      if (iVar12 <= lVar16) goto code_r0x00e9584c;
      uVar7 = (ulong)*param_4;
      lVar8 = lVar8 + 4;
    } while( true );
  }
LAB_00e958fc:
  local_218 = local_200;
  local_208 = (int)param_1[0x75] == 2;
  local_210 = iVar12;
  uStack_20c = uVar11;
  FUN_00de09e0(param_1 + 0x76,&local_218);
  return;
code_r0x00e9584c:
  if (((char)param_1[0x8e] != '\0') && ((int)param_1[0x75] == 2)) {
    pfVar13 = (float *)param_1[0x89];
    if (pfVar13 == (float *)param_1[0x88]) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    local_218 = (ulong *)CONCAT44(local_218._4_4_,ABS(*(float *)param_1[0x88]));
    if (pfVar13 < (float *)param_1[0x8a]) {
      lVar16 = param_1[0x8b];
      lVar8 = nn::os::GetTlsValue(*(undefined4 *)puVar4);
      if (0xf < *(ulong *)(lVar8 + 0x80)) {
LAB_00e95944:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = lVar16;
      *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
      *pfVar13 = local_218._0_4_;
      *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
      param_1[0x89] = param_1[0x89] + 4;
    }
    else {
      FUN_00e42aa0(param_1 + 0x88,&local_218);
    }
  }
  goto LAB_00e958fc;
}


