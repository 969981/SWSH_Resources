/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00608df0; name: FUN_00608df0
 */


/* WARNING: Removing unreachable block (ram,0x00609330) */

uint FUN_00608df0(long *param_1,long *param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  char *pcVar2;
  ulong uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  bool bVar8;
  uint uVar9;
  long lVar10;
  void *__s;
  code *pcVar11;
  ulong uVar12;
  byte *pbVar13;
  undefined1 *puVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  uint uVar19;
  ulong local_78;
  ulong local_70;
  byte local_68 [4];
  undefined1 local_64 [4];
  
  uVar1 = param_3 & 0xffff;
  if ((long)param_3 < 1) {
    uVar1 = param_3;
  }
  uVar3 = param_2[2];
  if ((ulong)param_2[1] <= uVar3 + 3) {
    return 0x55;
  }
  lVar15 = *param_1;
  if ((code *)param_2[5] == (code *)0x0) {
    pbVar13 = (byte *)(*param_2 + uVar3);
    if (pbVar13 != (byte *)0x0) {
      uVar12 = uVar3;
      goto LAB_00608e7c;
    }
    param_2[2] = uVar3 + 4;
    uVar9 = 2;
LAB_00608f1c:
    pcVar11 = (code *)param_2[5];
  }
  else {
    lVar10 = (*(code *)param_2[5])(param_2,uVar3,local_68,4);
    if (lVar10 != 4) {
      return 0x55;
    }
    pbVar13 = local_68;
    uVar12 = param_2[2];
LAB_00608e7c:
    bVar4 = *pbVar13;
    bVar5 = pbVar13[1];
    bVar6 = pbVar13[2];
    bVar7 = pbVar13[3];
    lVar10 = uVar12 + 4;
    param_2[2] = lVar10;
    if (((ulong)bVar4 << 0x18 | (ulong)bVar5 << 0x10 | (ulong)bVar6 << 8 | (ulong)bVar7) ==
        0x74797031) {
      if ((ulong)param_2[1] <= uVar12 + 5) {
        return 0x55;
      }
      if ((code *)param_2[5] == (code *)0x0) {
        puVar14 = (undefined1 *)(*param_2 + lVar10);
        if (puVar14 == (undefined1 *)0x0) {
          uVar9 = 0;
          uVar17 = uVar12 + 0xc;
          param_2[2] = uVar12 + 6;
          if ((ulong)param_2[1] < uVar17) {
            return 0x55;
          }
          goto LAB_00608fdc;
        }
        pcVar11 = (code *)0x0;
      }
      else {
        lVar10 = (*(code *)param_2[5])(param_2,lVar10,local_64,2);
        if (lVar10 != 2) {
          return 0x55;
        }
        lVar10 = param_2[2];
        pcVar11 = (code *)param_2[5];
        puVar14 = local_64;
      }
      uVar9 = (uint)CONCAT11(*puVar14,puVar14[1]);
      uVar17 = lVar10 + 8;
      param_2[2] = lVar10 + 2;
      if (pcVar11 == (code *)0x0) {
        if ((ulong)param_2[1] < uVar17) {
          return 0x55;
        }
      }
      else {
        lVar10 = (*pcVar11)(param_2,uVar17,0,0);
        if (lVar10 != 0) {
          return 0x55;
        }
      }
LAB_00608fdc:
      param_2[2] = uVar17;
      if (uVar9 == 0) {
        return 0x8e;
      }
      bVar8 = false;
      uVar19 = 0;
      local_78 = 0xffffffffffffffff;
      do {
        uVar12 = param_2[1];
        if (uVar12 <= uVar17 + 3) {
          return 0x55;
        }
        if ((code *)param_2[5] == (code *)0x0) {
          pbVar13 = (byte *)(*param_2 + uVar17);
          if (pbVar13 != (byte *)0x0) {
            pcVar11 = (code *)0x0;
            goto LAB_00609050;
          }
          uVar18 = uVar17 + 8;
          local_70 = 0;
          param_2[2] = uVar17 + 4;
          if (uVar12 < uVar18) {
            return 0x55;
          }
LAB_00609224:
          param_2[2] = uVar18;
          if (uVar12 <= uVar17 + 0xb) {
            return 0x55;
          }
        }
        else {
          lVar10 = (*(code *)param_2[5])(param_2,uVar17,local_68,4);
          if (lVar10 != 4) {
            return 0x55;
          }
          uVar17 = param_2[2];
          pcVar11 = (code *)param_2[5];
          pbVar13 = local_68;
LAB_00609050:
          local_70 = (ulong)*pbVar13 << 0x18 | (ulong)pbVar13[1] << 0x10 | (ulong)pbVar13[2] << 8 |
                     (ulong)pbVar13[3];
          uVar18 = uVar17 + 8;
          param_2[2] = uVar17 + 4;
          if (pcVar11 == (code *)0x0) {
            uVar12 = param_2[1];
            if (uVar12 < uVar18) {
              return 0x55;
            }
            goto LAB_00609224;
          }
          lVar10 = (*pcVar11)(param_2,uVar18,0,0);
          if (lVar10 != 0) {
            return 0x55;
          }
          uVar12 = param_2[1];
          param_2[2] = uVar18;
          if (uVar12 <= uVar17 + 0xb) {
            return 0x55;
          }
        }
        if ((code *)param_2[5] == (code *)0x0) {
          pbVar13 = (byte *)(*param_2 + uVar18);
          if (pbVar13 != (byte *)0x0) goto LAB_006090ec;
          uVar16 = 0;
        }
        else {
          lVar10 = (*(code *)param_2[5])(param_2,uVar18,local_68,4);
          if (lVar10 != 4) {
            return 0x55;
          }
          uVar12 = param_2[1];
          uVar18 = param_2[2];
          pbVar13 = local_68;
LAB_006090ec:
          uVar16 = (ulong)*pbVar13 << 0x18 | (ulong)pbVar13[1] << 0x10 | (ulong)pbVar13[2] << 8 |
                   (ulong)pbVar13[3];
        }
        lVar10 = uVar18 + 4;
        param_2[2] = lVar10;
        if (uVar12 <= uVar18 + 7) {
          return 0x55;
        }
        if ((code *)param_2[5] == (code *)0x0) {
          pbVar13 = (byte *)(*param_2 + lVar10);
          if (pbVar13 != (byte *)0x0) goto LAB_00609158;
          uVar12 = 0;
        }
        else {
          lVar10 = (*(code *)param_2[5])(param_2,lVar10,local_68,4);
          if (lVar10 != 4) {
            return 0x55;
          }
          lVar10 = param_2[2];
          pbVar13 = local_68;
LAB_00609158:
          uVar12 = (ulong)*pbVar13 << 0x18 | (ulong)pbVar13[1] << 0x10 | (ulong)pbVar13[2] << 8 |
                   (ulong)pbVar13[3];
        }
        uVar17 = lVar10 + 4;
        param_2[2] = uVar17;
        if (local_70 == 0x54595031) {
          uVar16 = uVar16 + 0x18;
          uVar12 = uVar12 - 0x18;
          bVar8 = false;
joined_r0x006091d8:
          if (-1 < (long)uVar1) {
            local_78 = local_78 + 1;
            goto LAB_006091e8;
          }
LAB_00609250:
          uVar17 = param_2[1];
          if (uVar17 < uVar16) {
            return 8;
          }
          if (uVar17 - uVar16 < uVar12) {
            return 8;
          }
          uVar16 = uVar16 + uVar3;
          if ((code *)param_2[5] == (code *)0x0) {
            if (uVar17 < uVar16) {
              return 0x55;
            }
          }
          else {
            lVar10 = (*(code *)param_2[5])(param_2,uVar16,0,0);
            if (lVar10 != 0) {
              return 0x55;
            }
          }
          param_2[2] = uVar16;
          if (0 < (long)uVar12) {
            __s = (void *)(**(code **)(lVar15 + 8))(lVar15,uVar12);
            if (__s != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              memset(__s,0,uVar12);
            }
            return 0x40;
          }
          if (uVar12 != 0) {
            return 6;
          }
          if ((ulong)param_2[1] <= uVar16) {
            return 0x55;
          }
          if ((code *)param_2[5] == (code *)0x0) {
            memcpy((void *)0x0,(void *)(*param_2 + uVar16),0);
            param_2[2] = uVar16;
          }
          else {
            lVar15 = (*(code *)param_2[5])(param_2,uVar16,0,0);
            param_2[2] = lVar15 + uVar16;
          }
          pcVar2 = "type1";
          if (bVar8) {
            pcVar2 = "cid";
          }
          uVar9 = FUN_006093d0(param_1,0,0,uVar1 & (long)uVar1 >> 0x3f,pcVar2,param_4);
          if ((uVar9 & 0xff) != 2) {
            return uVar9;
          }
          goto LAB_00608f1c;
        }
        if (local_70 == 0x43494420) {
          uVar16 = uVar16 + 0x16;
          uVar12 = uVar12 - 0x16;
          bVar8 = true;
          goto joined_r0x006091d8;
        }
LAB_006091e8:
        if ((-1 < (long)uVar1) && (local_78 == uVar1)) goto LAB_00609250;
        uVar19 = uVar19 + 1;
        if (uVar9 <= uVar19) {
          return 0x8e;
        }
      } while( true );
    }
    uVar9 = 2;
    pcVar11 = (code *)param_2[5];
  }
  if (pcVar11 == (code *)0x0) {
    if (uVar3 <= (ulong)param_2[1]) {
LAB_00608f64:
      param_2[2] = uVar3;
      return uVar9;
    }
  }
  else {
    lVar15 = (*pcVar11)(param_2,uVar3,0,0);
    if (lVar15 == 0) goto LAB_00608f64;
  }
  return 0x55;
}


