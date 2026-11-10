/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00606c40; name: FUN_00606c40
 */


undefined8
FUN_00606c40(long *param_1,long *param_2,ulong param_3,long param_4,ulong param_5,char param_6,
            undefined8 *param_7,size_t *param_8)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  byte *pbVar5;
  size_t sVar6;
  ushort *puVar7;
  code *pcVar8;
  ulong uVar9;
  long *plVar10;
  uint uVar11;
  int iVar12;
  long lVar13;
  ushort *puVar14;
  ushort uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong *puVar18;
  ushort local_68 [2];
  byte local_64 [4];
  
  lVar13 = *param_1;
  if ((code *)param_2[5] == (code *)0x0) {
    if ((ulong)param_2[1] < param_3) {
      return 0x55;
    }
    param_2[2] = param_3;
    if ((ulong)param_2[1] <= param_3 + 1) {
      return 0x55;
    }
  }
  else {
    lVar1 = (*(code *)param_2[5])(param_2,param_3,0,0);
    if (lVar1 != 0) {
      return 0x55;
    }
    param_2[2] = param_3;
    if ((ulong)param_2[1] <= param_3 + 1) {
      return 0x55;
    }
  }
  puVar18 = (ulong *)(param_2 + 1);
  if ((code *)param_2[5] == (code *)0x0) {
    puVar14 = (ushort *)(*param_2 + param_3);
    if (puVar14 == (ushort *)0x0) {
      uVar11 = 0;
      lVar1 = param_3 + 2;
      param_2[2] = lVar1;
      goto LAB_00606d60;
    }
    uVar9 = param_3;
  }
  else {
    lVar1 = (*(code *)param_2[5])(param_2,param_3,local_68,2);
    if (lVar1 != 2) {
      return 0x55;
    }
    puVar14 = local_68;
    uVar9 = param_2[2];
  }
  uVar11 = (int)(short)((ushort)(byte)*puVar14 << 8) | (uint)*(byte *)((long)puVar14 + 1);
  lVar1 = uVar9 + 2;
  param_2[2] = lVar1;
  if (0xfee < (int)uVar11) {
    return 8;
  }
  if ((int)uVar11 < 0) {
    return 1;
  }
LAB_00606d60:
  iVar12 = -1;
  do {
    uVar9 = *puVar18;
    if (uVar9 <= lVar1 + 3U) {
      return 0x55;
    }
    if ((code *)param_2[5] == (code *)0x0) {
      pbVar5 = (byte *)(*param_2 + lVar1);
      if (pbVar5 != (byte *)0x0) goto LAB_00606db4;
      uVar17 = 0;
    }
    else {
      lVar1 = (*(code *)param_2[5])(param_2,lVar1,local_64,4);
      if (lVar1 != 4) {
        return 0x55;
      }
      uVar9 = param_2[1];
      lVar1 = param_2[2];
      pbVar5 = local_64;
LAB_00606db4:
      uVar17 = (ulong)*pbVar5 << 0x18 | (ulong)pbVar5[1] << 0x10 | (ulong)pbVar5[2] << 8 |
               (ulong)pbVar5[3];
    }
    lVar3 = lVar1 + 4;
    param_2[2] = lVar3;
    if (uVar9 <= lVar1 + 5U) {
      return 0x55;
    }
    if ((code *)param_2[5] == (code *)0x0) {
      puVar14 = (ushort *)(*param_2 + lVar3);
      if (puVar14 != (ushort *)0x0) goto LAB_00606e24;
      uVar15 = 0;
    }
    else {
      lVar1 = (*(code *)param_2[5])(param_2,lVar3,local_68,2);
      if (lVar1 != 2) {
        return 0x55;
      }
      uVar9 = param_2[1];
      lVar3 = param_2[2];
      puVar14 = local_68;
LAB_00606e24:
      uVar15 = *puVar14 >> 8 | *puVar14 << 8;
    }
    lVar1 = lVar3 + 2;
    param_2[2] = lVar1;
    if (uVar9 <= lVar3 + 3U) {
      return 0x55;
    }
    if ((code *)param_2[5] == (code *)0x0) {
      puVar14 = (ushort *)(*param_2 + lVar1);
      uVar9 = 0;
      if (puVar14 != (ushort *)0x0) goto LAB_00606e7c;
    }
    else {
      lVar1 = (*(code *)param_2[5])(param_2,lVar1,local_68,2);
      if (lVar1 != 2) {
        return 0x55;
      }
      lVar1 = param_2[2];
      puVar14 = local_68;
LAB_00606e7c:
      uVar9 = (long)(short)((ushort)(byte)*puVar14 << 8) | (ulong)*(byte *)((long)puVar14 + 1);
    }
    lVar1 = lVar1 + 2;
    param_2[2] = lVar1;
    if (uVar17 == param_5) {
      *param_8 = (long)(short)uVar15 + 1;
      if (0xaa6 < uVar15) {
        return 8;
      }
      uVar9 = uVar9 + param_3;
      if ((code *)param_2[5] == (code *)0x0) {
        if (*puVar18 < uVar9) {
          return 0x55;
        }
      }
      else {
        lVar1 = (*(code *)param_2[5])(param_2,uVar9,0,0);
        if (lVar1 != 0) {
          return 0x55;
        }
      }
      param_2[2] = uVar9;
      sVar6 = *param_8;
      if ((long)sVar6 < 0) {
        return 6;
      }
      if (sVar6 != 0) {
        if (0x7ffffff < (long)sVar6) {
          return 10;
        }
        pvVar2 = (void *)(**(code **)(lVar13 + 8))(lVar13,sVar6 << 4);
        if (pvVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          memset(pvVar2,0,sVar6 << 4);
        }
        return 0x40;
      }
      puVar14 = (ushort *)0x0;
      sVar6 = *param_8;
      if ((long)sVar6 < 1) goto LAB_0060713c;
      lVar1 = 0;
      break;
    }
    iVar12 = iVar12 + 1;
    if ((int)uVar11 <= iVar12) {
      return 1;
    }
  } while( true );
LAB_00606fb8:
  lVar3 = param_2[2];
  if ((ulong)param_2[1] <= lVar3 + 1U) {
LAB_0060718c:
    *puVar14 = 0;
    goto LAB_0060722c;
  }
  if ((code *)param_2[5] == (code *)0x0) {
    puVar7 = (ushort *)(*param_2 + lVar3);
    uVar15 = 0;
    if (puVar7 != (ushort *)0x0) goto LAB_00607000;
  }
  else {
    lVar3 = (*(code *)param_2[5])(param_2,lVar3,local_68,2);
    if (lVar3 != 2) goto LAB_0060718c;
    lVar3 = param_2[2];
    puVar7 = local_68;
LAB_00607000:
    uVar15 = *puVar7 >> 8 | *puVar7 << 8;
  }
  param_2[2] = lVar3 + 2;
  *puVar14 = uVar15;
  lVar3 = param_2[2];
  uVar9 = lVar3 + 2;
  if ((code *)param_2[5] == (code *)0x0) {
    if ((*puVar18 < uVar9) || (param_2[2] = uVar9, *puVar18 <= lVar3 + 5U)) goto LAB_0060722c;
  }
  else {
    lVar4 = (*(code *)param_2[5])(param_2,uVar9,0,0);
    if ((lVar4 != 0) || (param_2[2] = uVar9, *puVar18 <= lVar3 + 5U)) goto LAB_0060722c;
  }
  if ((code *)param_2[5] == (code *)0x0) {
    pbVar5 = (byte *)(*param_2 + uVar9);
    if (pbVar5 != (byte *)0x0) {
      pcVar8 = (code *)0x0;
      goto LAB_006070b8;
    }
    uVar16 = 0;
    uVar17 = lVar3 + 10;
    param_2[2] = lVar3 + 6;
LAB_0060710c:
    if (*puVar18 < uVar17) {
LAB_0060722c:
      (**(code **)(lVar13 + 0x10))(lVar13,0);
      return 0x55;
    }
  }
  else {
    lVar3 = (*(code *)param_2[5])(param_2,uVar9,local_64,4);
    if (lVar3 != 4) goto LAB_0060722c;
    uVar9 = param_2[2];
    pcVar8 = (code *)param_2[5];
    pbVar5 = local_64;
LAB_006070b8:
    uVar16 = (ulong)pbVar5[2] << 8 | (ulong)pbVar5[1] << 0x10 | (ulong)pbVar5[3];
    uVar17 = uVar9 + 8;
    param_2[2] = uVar9 + 4;
    if (pcVar8 == (code *)0x0) goto LAB_0060710c;
    lVar3 = (*pcVar8)(param_2,uVar17,0,0);
    if (lVar3 != 0) goto LAB_0060722c;
  }
  param_2[2] = uVar17;
  *(ulong *)(puVar14 + 4) = uVar16;
  sVar6 = *param_8;
  lVar1 = lVar1 + 1;
  puVar14 = puVar14 + 8;
  if ((long)sVar6 <= lVar1) {
LAB_0060713c:
    if (param_6 != '\0') {
      qsort((void *)0x0,sVar6,0x10,(__compar_fn_t)&LAB_00607310);
      sVar6 = *param_8;
    }
    if ((long)sVar6 < 0) {
      return 6;
    }
    if (sVar6 == 0) {
      if (0 < (long)*param_8) {
        lVar13 = 0;
        plVar10 = (long *)&DAT_00000008;
        do {
          *(long *)(lVar13 * 8) = *plVar10 + param_4;
          lVar13 = lVar13 + 1;
          plVar10 = plVar10 + 2;
        } while (lVar13 < (long)*param_8);
      }
      *param_7 = 0;
      return 0;
    }
    if (0xfffffff < (long)sVar6) {
      return 10;
    }
    pvVar2 = (void *)(**(code **)(lVar13 + 8))(lVar13,sVar6 << 3);
    if (pvVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      memset(pvVar2,0,sVar6 << 3);
    }
    return 0x40;
  }
  goto LAB_00606fb8;
}


