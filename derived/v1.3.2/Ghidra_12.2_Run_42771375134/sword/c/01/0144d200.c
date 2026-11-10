/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0144d200; name: FUN_0144d200
 */


char FUN_0144d200(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  byte *pbVar9;
  undefined8 uVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  float fVar15;
  long local_68;
  
  lVar13 = *(long *)(*(long *)PTR_DAT_02710798 + 0x268);
  if (lVar13 != 0) {
    (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
  }
  iVar6 = FUN_01452170(param_1,param_2);
  if (iVar6 == 1) {
LAB_0144d268:
    cVar1 = '\x01';
    uVar10 = 1;
  }
  else {
    lVar8 = FUN_0152d900(lVar13,param_2);
    pbVar9 = (byte *)FUN_0152d910(lVar13,*(undefined1 *)(lVar8 + 2));
    if (*pbVar9 == 0) {
      lVar12 = 0;
      fVar15 = 0.0;
    }
    else {
      iVar6 = 0;
      uVar14 = 0;
      lVar12 = 0;
      do {
        FUN_0152da80(&local_68,lVar13,*(undefined1 *)(lVar8 + 2),uVar14,param_3);
        if (lVar12 != 0) {
          (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
        }
        lVar12 = local_68;
        if (local_68 != 0) {
          (**(code **)(*(long *)(local_68 + 0x48) + 0x10))();
        }
        cVar1 = FUN_014525d0(param_1,param_2,0);
        cVar2 = FUN_014525d0(param_1,param_2,1);
        cVar3 = FUN_014525d0(param_1,param_2,2);
        cVar4 = FUN_0087eca0(lVar12);
        cVar5 = FUN_0087ed40(lVar12);
        if (lVar12 != 0) {
          (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))();
        }
        uVar14 = uVar14 + 1;
        iVar6 = iVar6 + (uint)((cVar4 == cVar3 || (cVar4 == cVar1 || cVar4 == cVar2)) ||
                              (cVar5 == cVar3 || (cVar5 == cVar1 || cVar5 == cVar2)));
      } while (uVar14 < *pbVar9);
      fVar15 = (float)iVar6;
    }
    iVar6 = FUN_01451f10(param_1,param_2);
    if (iVar6 < 1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    fVar15 = fVar15 / (float)iVar6;
    if (1.0 <= fVar15) {
      iVar6 = 0;
      iVar11 = 0;
    }
    else if (DAT_01d4be10 <= fVar15) {
      iVar11 = 0x1e;
      iVar6 = 0x32;
    }
    else if (fVar15 <= DAT_01d4be64) {
      if (fVar15 <= DAT_01d4c4a8) {
        if (fVar15 <= DAT_01d4c554) {
          iVar6 = 0x5a;
          if (fVar15 <= 0.0) {
            iVar6 = 100;
          }
          iVar11 = 0x14;
          if (fVar15 <= 0.0) {
            iVar11 = 0;
          }
        }
        else {
          iVar11 = 0x1e;
          iVar6 = 0x50;
        }
      }
      else {
        iVar11 = 0x28;
        iVar6 = 0x46;
      }
    }
    else {
      iVar11 = 0x28;
      iVar6 = 0x3c;
    }
    iVar7 = FUN_0152e3a0(lVar13,param_2,99);
    cVar1 = iVar6 - iVar11 <= iVar7;
    if (iVar6 <= iVar7) {
      cVar1 = '\x02';
    }
    if (lVar12 != 0) {
      (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
    }
    if (cVar1 == '\0') {
      uVar10 = 0;
    }
    else {
      if (cVar1 == '\x01') goto LAB_0144d268;
      if (cVar1 != '\x02') goto LAB_0144d27c;
      uVar10 = 2;
    }
  }
  FUN_0152d980(lVar13,param_2,uVar10);
LAB_0144d27c:
  if (lVar13 != 0) {
    (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
  }
  return cVar1;
}


