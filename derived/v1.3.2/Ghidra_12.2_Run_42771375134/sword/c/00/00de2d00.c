/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00de2d00; name: FUN_00de2d00
 */


void FUN_00de2d00(long *param_1,undefined8 param_2,undefined8 param_3,uint *param_4)

{
  char cVar1;
  ushort uVar2;
  undefined *puVar3;
  bool bVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  char *pcVar8;
  int *piVar9;
  ushort *puVar10;
  uint *puVar11;
  long lVar12;
  uint *puVar13;
  char *pcVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  char *local_70;
  long local_68;
  long local_60;
  ulong uStack_58;
  long local_50;
  long local_48;
  
  if ((*(ushort *)((long)param_4 - (long)(int)*param_4) < 5) ||
     (uVar6 = (ulong)((ushort *)((long)param_4 - (long)(int)*param_4))[2], uVar6 == 0)) {
    lVar7 = 0;
  }
  else {
    puVar11 = (uint *)((long)param_4 + uVar6);
    lVar7 = (long)puVar11 + (ulong)*puVar11;
  }
  FUN_00dbc9a0(param_1,param_2,param_3,lVar7);
  puVar3 = PTR_DAT_0271ec60;
  *(undefined1 *)(param_1 + 0xa5) = 0;
  param_1[0xa0] = 0;
  param_1[0x9f] = 0;
  param_1[0x9e] = 0;
  param_1[0x9d] = 0;
  param_1[0x9c] = 0;
  param_1[0x9b] = 0;
  param_1[0x9a] = 0;
  param_1[0x99] = 0;
  param_1[0x98] = 0;
  *param_1 = (long)(puVar3 + 0x10);
  param_1[9] = (long)(puVar3 + 0x250);
  param_1[10] = (long)(puVar3 + 0x290);
  FUN_00dc9c00(param_1 + 0xa8);
  lVar7 = 0;
  if (6 < *(ushort *)((long)param_4 - (long)(int)*param_4)) {
    uVar6 = (ulong)((ushort *)((long)param_4 - (long)(int)*param_4))[3];
    lVar7 = 0;
    if (uVar6 != 0) {
      lVar7 = *(long *)((long)param_4 + uVar6);
    }
  }
  param_1[0x98] = lVar7;
  if ((*(ushort *)((long)param_4 - (long)(int)*param_4) < 9) ||
     (uVar6 = (ulong)((ushort *)((long)param_4 - (long)(int)*param_4))[4], uVar6 == 0)) {
    lVar7 = 0;
    pcVar14 = &DAT_00000004;
    cVar1 = DAT_00000004;
  }
  else {
    puVar11 = (uint *)((long)param_4 + uVar6);
    lVar7 = (long)puVar11 + (ulong)*puVar11;
    pcVar14 = (char *)(lVar7 + 4);
    cVar1 = *pcVar14;
  }
  if (cVar1 != '\0') {
    pcVar8 = (char *)(lVar7 + 5);
    do {
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    local_70 = pcVar14;
    FUN_0156c3a0(&local_48,&local_70,".gfbmdl");
    local_70 = pcVar14;
    FUN_0156c3a0(&local_50,&local_70,".gfbanm");
    FUN_006cf0c0(&local_70,&local_48);
    uVar6 = uStack_58;
    param_1[0x7e] = (long)local_70;
    param_1[0x7f] = local_68;
    param_1[0x80] = local_60;
    if (uStack_58 != 0) {
      (**(code **)(*(long *)(uStack_58 + 0x48) + 0x10))();
    }
    lVar7 = param_1[0x81];
    param_1[0x81] = uVar6;
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
    }
    FUN_00dd8640(param_1,&local_70,0);
    if (uStack_58 != 0) {
      (**(code **)(*(long *)(uStack_58 + 0x48) + 0x18))();
      uStack_58 = 0;
    }
    FUN_006cf0c0(&local_70,&local_50);
    FUN_00dda040(param_1,&local_70,0);
    if (uStack_58 != 0) {
      (**(code **)(*(long *)(uStack_58 + 0x48) + 0x18))();
      uStack_58 = 0;
    }
    if (local_50 != 0) {
      (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
      local_50 = 0;
    }
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      local_48 = 0;
    }
  }
  param_1[0x99] = -0x340d631b7bddd9bb;
  param_1[0xa1] = 0;
  param_1[0x9a] = -0x340d631b7bddd9bb;
  param_1[0x9b] = -0x340d631b7bddd9bb;
  param_1[0xa2] = 0;
  param_1[0x9c] = -0x340d631b7bddd9bb;
  param_1[0x9d] = -0x340d631b7bddd9bb;
  param_1[0xa3] = 0;
  param_1[0x9e] = -0x340d631b7bddd9bb;
  param_1[0x9f] = -0x340d631b7bddd9bb;
  param_1[0xa4] = 0;
  param_1[0xa0] = -0x340d631b7bddd9bb;
  uVar6 = (ulong)(int)*param_4;
  puVar10 = (ushort *)((long)param_4 - uVar6);
  uVar2 = *puVar10;
  if (0x10 < uVar2) {
    if (((ulong)puVar10[8] != 0) &&
       (puVar11 = (uint *)((long)param_4 + (ulong)puVar10[8]),
       lVar7 = (long)puVar11 + (ulong)*puVar11, lVar7 != 0)) {
      puVar11 = (uint *)(lVar7 + 4);
      lVar7 = 0x99;
      while( true ) {
        uVar5 = (uint)uVar6;
        lVar12 = (long)(int)uVar5;
        puVar10 = (ushort *)((long)param_4 - lVar12);
        puVar13 = (uint *)0x0;
        if (0x10 < *puVar10) {
          puVar13 = (uint *)0x0;
          if ((ulong)puVar10[8] != 0) {
            puVar13 = (uint *)((long)param_4 + (ulong)puVar10[8]);
            puVar13 = (uint *)((long)puVar13 + (ulong)*puVar13);
          }
        }
        if (puVar11 == puVar13 + (ulong)*puVar13 * 2 + 1) break;
        param_1[lVar7] = *(long *)puVar11;
        if (6 < lVar7 - 0x99U) {
          uVar5 = *param_4;
          lVar12 = (long)(int)uVar5;
          uVar2 = *(ushort *)((long)param_4 - lVar12);
joined_r0x00de3038:
          if (uVar2 < 0x13) {
            lVar7 = 0;
          }
          else {
            uVar6 = (ulong)*(ushort *)((long)param_4 + (0x12 - lVar12));
            lVar7 = 0;
            if (uVar6 != 0) {
              puVar11 = (uint *)((long)param_4 + uVar6);
              lVar7 = (long)puVar11 + (ulong)*puVar11;
            }
          }
          puVar11 = (uint *)(lVar7 + 4);
          lVar7 = 0x142;
          puVar10 = (ushort *)((long)param_4 - (long)(int)uVar5);
          if (0x12 < *puVar10) goto LAB_00de3090;
          do {
            puVar13 = (uint *)0x0;
            while( true ) {
              if (puVar11 == puVar13 + (ulong)*puVar13 + 1) goto LAB_00de30d4;
              *(uint *)((long)param_1 + lVar7 * 4) = *puVar11;
              if (6 < lVar7 - 0x142U) {
                puVar10 = (ushort *)((long)param_4 - (long)(int)*param_4);
                goto LAB_00de30d4;
              }
              puVar11 = puVar11 + 1;
              lVar7 = lVar7 + 1;
              puVar10 = (ushort *)((long)param_4 - (long)(int)*param_4);
              if (*puVar10 < 0x13) break;
LAB_00de3090:
              puVar13 = (uint *)0x0;
              if ((ulong)puVar10[9] != 0) {
                puVar13 = (uint *)((long)param_4 + (ulong)puVar10[9]);
                puVar13 = (uint *)((long)puVar13 + (ulong)*puVar13);
              }
            }
          } while( true );
        }
        uVar6 = (ulong)*param_4;
        puVar11 = puVar11 + 2;
        lVar7 = lVar7 + 1;
      }
      uVar2 = *puVar10;
      goto joined_r0x00de3038;
    }
LAB_00de30d4:
    uVar2 = *puVar10;
  }
  uVar15 = 0;
  uVar16 = 0;
  if (10 < uVar2) {
    uVar16 = 0;
    if ((ulong)puVar10[5] != 0) {
      uVar16 = *(undefined4 *)((long)param_4 + (ulong)puVar10[5]);
    }
  }
  *(undefined4 *)((long)param_1 + 0x52c) = uVar16;
  if ((0xc < *(ushort *)((long)param_4 - (long)(int)*param_4)) &&
     (uVar6 = (ulong)((ushort *)((long)param_4 - (long)(int)*param_4))[6], uVar6 != 0)) {
    uVar15 = *(undefined4 *)((long)param_4 + uVar6);
  }
  *(undefined4 *)(param_1 + 0xa6) = uVar15;
  if (*(ushort *)((long)param_4 - (long)(int)*param_4) < 0x17) {
    piVar9 = (int *)0x0;
  }
  else {
    uVar6 = (ulong)((ushort *)((long)param_4 - (long)(int)*param_4))[0xb];
    piVar9 = (int *)0x0;
    if (uVar6 != 0) {
      param_4 = (uint *)((long)param_4 + uVar6);
      piVar9 = (int *)((long)param_4 + (ulong)*param_4);
    }
  }
  uVar6 = (ulong)*(ushort *)((long)piVar9 + (4 - (long)*piVar9));
  bVar4 = false;
  if (uVar6 != 0) {
    bVar4 = *(char *)((long)piVar9 + uVar6) != '\0';
  }
  local_70 = (char *)CONCAT71((int7)((ulong)local_70 >> 8),bVar4);
  puVar11 = (uint *)((long)piVar9 + (ulong)*(ushort *)((long)piVar9 + (6 - (long)*piVar9)));
  piVar9 = (int *)((long)puVar11 + (ulong)*puVar11);
  puVar10 = (ushort *)((long)piVar9 - (long)*piVar9);
  uVar2 = *puVar10;
  if (uVar2 < 5) {
    uVar15 = 0;
  }
  else {
    uVar15 = 0;
    if ((ulong)puVar10[2] != 0) {
      uVar15 = *(undefined4 *)((long)piVar9 + (ulong)puVar10[2]);
    }
    if (6 < uVar2) {
      uVar6 = 0;
      if ((ulong)puVar10[3] != 0) {
        uVar6 = (ulong)*(uint *)((long)piVar9 + (ulong)puVar10[3]);
      }
      uStack_58 = 0;
      if ((8 < uVar2) && ((ulong)puVar10[4] != 0)) {
        uStack_58 = (ulong)*(uint *)((long)piVar9 + (ulong)puVar10[4]);
      }
      goto LAB_00de31f0;
    }
  }
  uVar6 = 0;
  uStack_58 = uVar6;
LAB_00de31f0:
  local_60 = CONCAT44((int)uVar6,uVar15);
  FUN_00dc9c40(param_1 + 0xa8,&local_70);
  if ((param_1[0x98] == -0x340d631b7bddd9bb) && (*pcVar14 == '\0')) {
    *(undefined1 *)(param_1 + 0xa5) = 1;
  }
  return;
}


