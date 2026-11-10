/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006096e0; name: FUN_006096e0
 */


/* WARNING: Type propagation algorithm not settling */

int FUN_006096e0(long *param_1,long *param_2,undefined8 param_3,long param_4,undefined8 *param_5)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  ulong uVar6;
  long lVar7;
  byte *pbVar8;
  ulong uVar9;
  ulong __n;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long local_88;
  long local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  byte local_64 [4];
  
  lVar10 = *param_1;
  iVar2 = FUN_00606450();
  if (iVar2 != 0) {
    return iVar2;
  }
  iVar2 = FUN_00606c40(param_1,param_2,uStack_70,local_78,0x504f5354,1,&local_80,&local_88);
  if (iVar2 != 0) {
    iVar2 = FUN_00606c40(param_1,param_2,uStack_70,local_78,0x73666e74,0,&local_80,&local_88);
    if (iVar2 != 0) {
      return iVar2;
    }
    lVar11 = 0;
    if (local_88 != 0) {
      lVar11 = param_4 / local_88;
    }
    uVar6 = param_4 - lVar11 * local_88;
    uVar6 = uVar6 ^ (long)uVar6 >> 0x3f;
    if (local_88 <= (long)uVar6) {
      iVar2 = 1;
      goto joined_r0x00609d3c;
    }
    lVar11 = *param_1;
    uVar12 = *(ulong *)(local_80 + uVar6 * 8);
    if ((code *)param_2[5] == (code *)0x0) {
      if ((uVar12 <= (ulong)param_2[1]) && (param_2[2] = uVar12, uVar12 + 3 < (ulong)param_2[1]))
      goto LAB_006099ac;
    }
    else {
      lVar3 = (*(code *)param_2[5])(param_2,uVar12,0,0);
      if ((lVar3 == 0) && (param_2[2] = uVar12, uVar12 + 3 < (ulong)param_2[1])) {
LAB_006099ac:
        if ((code *)param_2[5] == (code *)0x0) {
          pbVar8 = (byte *)(*param_2 + uVar12);
          if (pbVar8 == (byte *)0x0) {
            param_2[2] = uVar12 + 4;
            iVar2 = 1;
            goto joined_r0x00609d3c;
          }
          uVar9 = uVar12;
        }
        else {
          lVar3 = (*(code *)param_2[5])(param_2,uVar12,local_64,4);
          if (lVar3 != 4) goto LAB_00609d84;
          pbVar8 = local_64;
          uVar9 = param_2[2];
        }
        bVar1 = *pbVar8;
        __n = (ulong)bVar1 << 0x18 | (ulong)pbVar8[1] << 0x10 | (ulong)pbVar8[2] << 8 |
              (ulong)pbVar8[3];
        param_2[2] = uVar9 + 4;
        if (__n == 0) {
          iVar2 = 1;
          goto joined_r0x00609d3c;
        }
        if ((ulong)bVar1 != 0) {
          iVar2 = 9;
          goto joined_r0x00609d3c;
        }
        iVar2 = FUN_00608df0(param_1,param_2,uVar6,param_5);
        if (iVar2 == 0) {
          iVar2 = 0;
          goto joined_r0x00609d3c;
        }
        uVar12 = uVar12 + 4;
        if ((code *)param_2[5] == (code *)0x0) {
          if (uVar12 <= (ulong)param_2[1]) goto LAB_00609e44;
        }
        else {
          lVar3 = (*(code *)param_2[5])(param_2,uVar12,0,0);
          if (lVar3 == 0) {
LAB_00609e44:
            param_2[2] = uVar12;
            pvVar5 = (void *)(**(code **)(lVar11 + 8))(lVar11,__n);
            if (pvVar5 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              memset(pvVar5,0,__n);
            }
            iVar2 = 0x40;
            goto joined_r0x00609d3c;
          }
        }
      }
    }
LAB_00609d84:
    iVar2 = 0x55;
joined_r0x00609d3c:
    if (local_80 != 0) {
      (**(code **)(lVar10 + 0x10))(lVar10,local_80);
    }
    if (iVar2 == 0) {
      *(long *)*param_5 = local_88;
      return 0;
    }
    return iVar2;
  }
  if (param_4 + 1U < 2) {
    if (local_88 < 1) {
      iVar2 = 10;
      goto joined_r0x00609e0c;
    }
    lVar7 = *param_1;
    lVar11 = 0;
    lVar3 = 0;
    iVar2 = 0x55;
    do {
      uVar6 = *(ulong *)(local_80 + lVar11 * 8);
      if ((code *)param_2[5] == (code *)0x0) {
        if (uVar6 <= (ulong)param_2[1]) {
          param_2[2] = uVar6;
          if (uVar6 + 3 < (ulong)param_2[1]) goto LAB_0060987c;
LAB_006099dc:
          iVar2 = 0x55;
        }
        goto LAB_00609e10;
      }
      lVar4 = (*(code *)param_2[5])(param_2,uVar6,0,0);
      if (lVar4 != 0) goto LAB_00609e10;
      param_2[2] = uVar6;
      if ((ulong)param_2[1] <= uVar6 + 3) goto LAB_006099dc;
LAB_0060987c:
      if ((code *)param_2[5] == (code *)0x0) {
        pbVar8 = (byte *)(*param_2 + uVar6);
        if (pbVar8 != (byte *)0x0) goto LAB_006098d8;
        param_2[2] = uVar6 + 4;
        uVar12 = 0;
        if (0xffffff < lVar3 + 6U) goto LAB_00609948;
      }
      else {
        lVar4 = (*(code *)param_2[5])(param_2,uVar6,local_64,4);
        if (lVar4 != 4) goto LAB_006099dc;
        uVar6 = param_2[2];
        pbVar8 = local_64;
LAB_006098d8:
        bVar1 = *pbVar8;
        uVar12 = (ulong)bVar1 << 0x18 | (ulong)pbVar8[1] << 0x10 | (ulong)pbVar8[2] << 8 |
                 (ulong)pbVar8[3];
        param_2[2] = uVar6 + 4;
        if (((ulong)bVar1 != 0) || (0xffffff - uVar12 < lVar3 + 6U)) {
LAB_00609948:
          iVar2 = 9;
          goto LAB_00609e10;
        }
      }
      lVar3 = lVar3 + 6 + uVar12;
      lVar11 = lVar11 + 1;
    } while (lVar11 < local_88);
    uVar6 = lVar3 + 2;
    if (uVar6 < 6) {
      iVar2 = 10;
    }
    else if ((long)uVar6 < 1) {
      iVar2 = 6;
    }
    else {
      pvVar5 = (void *)(**(code **)(lVar7 + 8))(lVar7,uVar6);
      if (pvVar5 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        memset(pvVar5,0,uVar6);
      }
      iVar2 = 0x40;
    }
  }
  else {
    iVar2 = 1;
joined_r0x00609e0c:
    if (local_80 == 0) goto LAB_00609e20;
  }
LAB_00609e10:
  (**(code **)(lVar10 + 0x10))(lVar10,local_80);
LAB_00609e20:
  if (iVar2 == 0) {
    *(undefined8 *)*param_5 = 1;
  }
  return iVar2;
}


