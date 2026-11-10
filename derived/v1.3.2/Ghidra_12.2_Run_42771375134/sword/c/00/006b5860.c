/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006b5860; name: FUN_006b5860
 */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_006b5860(long *param_1,long *param_2)

{
  long *plVar1;
  uint uVar2;
  byte bVar3;
  ushort uVar4;
  size_t sVar5;
  char *pcVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  int *piVar10;
  long *plVar11;
  byte *pbVar12;
  long *plVar13;
  ulong uVar14;
  byte *pbVar15;
  ushort *puVar16;
  long *plVar17;
  uint *puVar18;
  ulong uVar19;
  long lVar20;
  uint *puVar21;
  long *plVar22;
  long local_b0;
  long *local_a8;
  long local_a0;
  long local_98;
  long local_90;
  long *local_88;
  long local_80;
  long local_78;
  long local_70;
  long *plStack_68;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  lVar9 = param_2[4];
  uVar19 = 0xcbf29ce484222645;
  param_1[0xe] = (long)&DAT_01d38550;
  param_1[6] = (long)&DAT_01d38550;
  param_1[7] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = -0x340d631b7bddd9bb;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[2] = lVar9;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = -0x340d631b7bddd9bb;
  param_1[8] = 0;
  param_1[9] = -0x340d631b7bddd9bb;
  param_1[10] = (long)&DAT_01d38550;
  param_1[0xb] = 0;
  lVar9 = param_2[5];
  plVar17 = param_1 + 0x12;
  *plVar17 = 0;
  param_1[0x11] = lVar9;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  lVar9 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (((lVar9 == 0) || (*(long *)(lVar9 + 0x80) == 0)) ||
     (lVar9 = *(long *)(lVar9 + *(long *)(lVar9 + 0x80) * 8 + -8), lVar9 == 0)) {
    lVar9 = FUN_0075ecb0();
  }
  plVar13 = param_1 + 0x18;
  *plVar13 = 0;
  param_1[0x15] = lVar9;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  lVar9 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (((lVar9 == 0) || (*(long *)(lVar9 + 0x80) == 0)) ||
     (lVar9 = *(long *)(lVar9 + *(long *)(lVar9 + 0x80) * 8 + -8), lVar9 == 0)) {
    lVar9 = FUN_0075ecb0();
  }
  lVar20 = 0;
  plVar22 = param_1 + 0x1e;
  *plVar22 = 0;
  *(undefined8 *)((long)param_1 + 0x124) = 0x3f80000000000000;
  piVar10 = (int *)param_1[2];
  *(undefined4 *)(param_1 + 0x1d) = 0;
  param_1[0x1b] = lVar9;
  param_1[0x1c] = 0;
  param_1[0x1f] = 0;
  *(undefined1 *)(param_1 + 0x24) = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x26] = -0x340d631b7bddd9bb;
  param_1[0x27] = (long)&DAT_01d38550;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  if (4 < *(ushort *)((long)piVar10 - (long)*piVar10)) {
    uVar14 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[2];
    if (uVar14 == 0) {
      lVar20 = 0;
    }
    else {
      puVar18 = (uint *)((long)piVar10 + uVar14);
      lVar20 = (long)puVar18 + (ulong)*puVar18;
    }
  }
  pbVar12 = (byte *)(lVar20 + 4);
  sVar5 = strlen((char *)pbVar12);
  bVar3 = *(byte *)(lVar20 + 4);
  uVar14 = 0xcbf29ce484222645;
  if (bVar3 != 0) {
    uVar14 = 0xcbf29ce484222645;
    pbVar15 = (byte *)(lVar20 + 5);
    do {
      uVar14 = (uVar14 ^ bVar3) * 0x100000001b3;
      bVar3 = *pbVar15;
      pbVar15 = pbVar15 + 1;
    } while (bVar3 != 0);
  }
  param_1[5] = uVar14;
  param_1[6] = (long)pbVar12;
  param_1[7] = sVar5;
  if (param_1[8] != 0) {
    plVar11 = (long *)(param_1[8] + 0x48);
    (**(code **)(*plVar11 + 0x18))(plVar11);
    param_1[8] = 0;
  }
  param_1[8] = 0;
  pcVar6 = strrchr((char *)pbVar12,0x2f);
  if (pcVar6 != (char *)0x0) {
    pbVar12 = (byte *)(pcVar6 + 1);
  }
  sVar5 = strlen((char *)pbVar12);
  bVar3 = *pbVar12;
  uVar14 = 0xcbf29ce484222645;
  if (bVar3 != 0) {
    uVar14 = 0xcbf29ce484222645;
    pbVar15 = pbVar12;
    do {
      pbVar15 = pbVar15 + 1;
      uVar14 = (uVar14 ^ bVar3) * 0x100000001b3;
      bVar3 = *pbVar15;
    } while (bVar3 != 0);
  }
  param_1[9] = uVar14;
  param_1[10] = (long)pbVar12;
  param_1[0xb] = sVar5;
  if (param_1[0xc] != 0) {
    plVar11 = (long *)(param_1[0xc] + 0x48);
    (**(code **)(*plVar11 + 0x18))(plVar11);
    param_1[0xc] = 0;
  }
  piVar10 = (int *)param_1[2];
  param_1[0xc] = 0;
  lVar9 = 0;
  if (8 < *(ushort *)((long)piVar10 - (long)*piVar10)) {
    uVar14 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[4];
    if (uVar14 == 0) {
      lVar9 = 0;
    }
    else {
      puVar18 = (uint *)((long)piVar10 + uVar14);
      lVar9 = (long)puVar18 + (ulong)*puVar18;
    }
  }
  sVar5 = strlen((char *)(lVar9 + 4));
  bVar3 = *(byte *)(lVar9 + 4);
  if (bVar3 != 0) {
    pbVar12 = (byte *)(lVar9 + 5);
    do {
      uVar19 = (uVar19 ^ bVar3) * 0x100000001b3;
      bVar3 = *pbVar12;
      pbVar12 = pbVar12 + 1;
    } while (bVar3 != 0);
  }
  param_1[0xd] = uVar19;
  param_1[0xe] = lVar9 + 4;
  param_1[0xf] = sVar5;
  if (param_1[0x10] != 0) {
    plVar11 = (long *)(param_1[0x10] + 0x48);
    (**(code **)(*plVar11 + 0x18))(plVar11);
    piVar10 = (int *)param_1[2];
    param_1[0x10] = 0;
  }
  param_1[0x10] = 0;
  if (((0xc < *(ushort *)((long)piVar10 - (long)*piVar10)) &&
      (uVar19 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[6], uVar19 != 0)) &&
     ((puVar18 = (uint *)((long)piVar10 + uVar19),
      puVar18 = (uint *)((long)puVar18 + (ulong)*puVar18), puVar18 != (uint *)0x0 && (*puVar18 != 0)
      ))) {
    FUN_006b60a0(plVar13);
    puVar21 = puVar18 + 1;
    lVar9 = (ulong)*puVar18 << 2;
    if ((ulong)*puVar18 != 0) {
      do {
        while( true ) {
          plVar11 = (long *)*param_2;
          uVar2 = *puVar21;
          lVar20 = (**(code **)(*plVar11 + 0x10))(plVar11,0xd8,8);
          lVar7 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
          if (0xf < *(ulong *)(lVar7 + 0x80)) goto LAB_006b6094;
          *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = plVar11;
          *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
          FUN_006b7420(lVar20,*param_2,param_2[3],(long)puVar21 + (ulong)uVar2);
          local_80 = 0xd8;
          local_78 = 8;
          *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
          plVar1 = (long *)param_1[0x19];
          local_90 = lVar20;
          local_88 = plVar11;
          if ((long *)param_1[0x1a] <= plVar1) break;
          lVar7 = param_1[0x1b];
          lVar20 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
          if (0xf < *(ulong *)(lVar20 + 0x80)) goto LAB_006b6094;
          *(long *)(lVar20 + *(ulong *)(lVar20 + 0x80) * 8) = lVar7;
          *(long *)(lVar20 + 0x80) = *(long *)(lVar20 + 0x80) + 1;
          *plVar1 = local_90;
          plVar1[2] = local_80;
          plVar1[3] = local_78;
          plVar1[1] = (long)local_88;
          *(long *)(lVar20 + 0x80) = *(long *)(lVar20 + 0x80) + -1;
          param_1[0x19] = param_1[0x19] + 0x20;
LAB_006b5d3c:
          local_90 = 0;
          puVar21 = puVar21 + 1;
          lVar9 = lVar9 + -4;
          if (lVar9 == 0) goto LAB_006b5d48;
        }
        FUN_006b6fe0(plVar13,&local_90);
        lVar20 = local_90;
        if (local_90 == 0) goto LAB_006b5d3c;
        local_90 = 0;
        if (*(long *)(lVar20 + 0xc0) != 0) {
          (**(code **)(*(long *)(*(long *)(lVar20 + 0xc0) + 0x48) + 0x18))();
          *(undefined8 *)(lVar20 + 0xc0) = 0;
        }
        if (*(long *)(lVar20 + 0xa8) != 0) {
          (**(code **)(*(long *)(*(long *)(lVar20 + 0xa8) + 0x48) + 0x18))();
          *(undefined8 *)(lVar20 + 0xa8) = 0;
        }
        if (*(long *)(lVar20 + 0x90) != 0) {
          (**(code **)(*(long *)(*(long *)(lVar20 + 0x90) + 0x48) + 0x18))();
          *(undefined8 *)(lVar20 + 0x90) = 0;
        }
        FUN_006b5720(lVar20 + 0x58);
        if (*(long *)(lVar20 + 0x50) != 0) {
          (**(code **)(*(long *)(*(long *)(lVar20 + 0x50) + 0x48) + 0x18))();
          *(undefined8 *)(lVar20 + 0x50) = 0;
        }
        if (*(long *)(lVar20 + 0x28) != 0) {
          (**(code **)(*(long *)(*(long *)(lVar20 + 0x28) + 0x48) + 0x18))();
          *(undefined8 *)(lVar20 + 0x28) = 0;
        }
        (**(code **)(*local_88 + 0x18))(local_88,lVar20,local_80,local_78);
        puVar21 = puVar21 + 1;
        lVar9 = lVar9 + -4;
      } while (lVar9 != 0);
    }
  }
LAB_006b5d48:
  piVar10 = (int *)param_1[2];
  puVar16 = (ushort *)((long)piVar10 - (long)*piVar10);
  uVar4 = *puVar16;
  if (0xe < uVar4) {
    if ((((ulong)puVar16[7] != 0) &&
        (puVar18 = (uint *)((long)piVar10 + (ulong)puVar16[7]),
        puVar18 = (uint *)((long)puVar18 + (ulong)*puVar18), puVar18 != (uint *)0x0)) &&
       (*puVar18 != 0)) {
      FUN_006b6240(plVar17);
      lVar9 = (ulong)*puVar18 << 2;
      if ((ulong)*puVar18 == 0) {
        plVar13 = (long *)param_1[0x13];
        plVar17 = (long *)param_1[0x12];
        if (plVar13 != plVar17) goto joined_r0x006b5f18;
      }
      else {
        plVar13 = param_1 + 0x13;
        do {
          puVar18 = puVar18 + 1;
          local_90 = *param_2;
          local_88 = (long *)param_2[1];
          local_80 = param_2[2];
          local_78 = param_2[3];
          local_70 = (long)puVar18 + (ulong)*puVar18;
          plVar11 = (long *)*param_2;
          plStack_68 = param_1;
          lVar20 = (**(code **)(*plVar11 + 0x10))(plVar11,0x150,8);
          lVar7 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
          if (0xf < *(ulong *)(lVar7 + 0x80)) goto LAB_006b6094;
          *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = plVar11;
          *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
          FUN_006b5860(lVar20,&local_90);
          local_a0 = 0x150;
          local_98 = 8;
          *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
          plVar1 = (long *)param_1[0x13];
          local_b0 = lVar20;
          local_a8 = plVar11;
          if (plVar1 < (long *)param_1[0x14]) {
            lVar7 = param_1[0x15];
            lVar20 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
            if (0xf < *(ulong *)(lVar20 + 0x80)) goto LAB_006b6094;
            *(long *)(lVar20 + *(ulong *)(lVar20 + 0x80) * 8) = lVar7;
            *(long *)(lVar20 + 0x80) = *(long *)(lVar20 + 0x80) + 1;
            *plVar1 = local_b0;
            plVar1[1] = (long)local_a8;
            plVar1[2] = local_a0;
            plVar1[3] = local_98;
            *(long *)(lVar20 + 0x80) = *(long *)(lVar20 + 0x80) + -1;
            *plVar13 = *plVar13 + 0x20;
            local_b0 = 0;
          }
          else {
            FUN_006b71f0(plVar17,&local_b0);
            lVar20 = local_b0;
            local_b0 = 0;
            if (lVar20 != 0) {
              local_b0 = 0;
              FUN_006b5410(lVar20);
              (**(code **)(*local_a8 + 0x18))(local_a8,lVar20,local_a0,local_98);
            }
          }
          lVar9 = lVar9 + -4;
        } while (lVar9 != 0);
        plVar13 = (long *)*plVar13;
        plVar17 = (long *)param_1[0x12];
        if (plVar13 != plVar17) {
joined_r0x006b5f18:
          for (; plVar17 != plVar13; plVar17 = plVar17 + 4) {
            lVar9 = *plVar17;
            piVar10 = *(int **)(lVar9 + 0x10);
            if (((6 < *(ushort *)((long)piVar10 - (long)*piVar10)) &&
                (uVar19 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[3], uVar19 != 0)) &&
               (*(int *)((long)piVar10 + uVar19) == 1)) goto LAB_006b5f74;
          }
        }
      }
      lVar9 = 0;
LAB_006b5f74:
      piVar10 = (int *)param_1[2];
      param_1[0x22] = lVar9;
      puVar16 = (ushort *)((long)piVar10 - (long)*piVar10);
    }
    uVar4 = *puVar16;
  }
  if (uVar4 < 0xb) {
    lVar9 = 0;
  }
  else {
    if ((ulong)puVar16[5] == 0) {
      lVar9 = 0;
    }
    else {
      puVar18 = (uint *)((long)piVar10 + (ulong)puVar16[5]);
      lVar9 = (long)puVar18 + (ulong)*puVar18;
    }
    if ((0x10 < uVar4) && ((ulong)puVar16[8] != 0)) {
      puVar18 = (uint *)((long)piVar10 + (ulong)puVar16[8]);
      lVar20 = (long)puVar18 + (ulong)*puVar18;
      goto LAB_006b5fcc;
    }
  }
  lVar20 = 0;
LAB_006b5fcc:
  plVar17 = (long *)*param_2;
  lVar7 = (**(code **)(*plVar17 + 0x10))(plVar17,0x80,8);
  lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar8 + 0x80) < 0x10) {
    *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = plVar17;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
    FUN_006b9740(lVar7,*param_2,param_2[3],param_2[2],lVar9,lVar20);
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
    lVar9 = *plVar22;
    *plVar22 = lVar7;
    if (lVar9 != 0) {
      FUN_006b5580(param_1 + 0x1f);
    }
    param_1[0x1f] = (long)plVar17;
    param_1[0x20] = 0x80;
    param_1[0x21] = 8;
    return;
  }
LAB_006b6094:
                    /* WARNING: Subroutine does not return */
  abort();
}


