/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00644340; name: FUN_00644340
 */


undefined8 FUN_00644340(float param_1,long param_2,long param_3,float *param_4,uint param_5)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  int iVar5;
  long *plVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int local_1070 [1024];
  
  param_4[0] = 0.0;
  param_4[1] = 0.0;
  if (param_3 != 0) {
    if ((*(long *)(param_2 + 0x20) == 0) || (*(long *)(param_2 + 0x18) == 0)) {
      return 0;
    }
    if ((param_5 >> 0xd & 1) == 0) {
      FUN_005c4dc0();
    }
    else {
      FUN_005c4e40(param_3,local_1070,0x400);
    }
    lVar3 = (**(code **)(**(long **)(param_2 + 0x20) + 0xa0))();
    fVar11 = (float)(int)((float)(*(int *)(lVar3 + 8) - *(int *)(lVar3 + 0xc)) * param_1);
    bVar7 = false;
    if ((param_5 >> 5 & 1) == 0) {
      iVar8 = 1;
      iVar5 = local_1070[0];
      while (fVar12 = 0.0, iVar5 != 0) {
        while (iVar5 != 10) {
          plVar6 = *(long **)(param_2 + 0x20);
          if (plVar6 == (long *)0x0) {
            return 0;
          }
          plVar4 = (long *)(**(code **)(*plVar6 + 0x28))(plVar6);
          iVar2 = (**(code **)(*plVar4 + 0x70))();
          if (iVar2 != 8) {
            return 0;
          }
          lVar3 = FUN_005ffc90(plVar6,iVar5);
          if (lVar3 == 0) {
            return 0;
          }
          if ((*(int *)(lVar3 + 0x68) < 1) && (*(int *)(lVar3 + 0x6c) < 1)) {
            iVar5 = local_1070[iVar8];
            if (iVar5 == 0) goto LAB_006445a4;
          }
          else {
            iVar2 = local_1070[iVar8];
            if (iVar2 != 0) {
              iVar5 = iVar2;
            }
            iVar9 = 3;
            if (iVar2 != 0) {
              iVar9 = 0;
            }
            bVar7 = true;
            fVar10 = fVar12 + (float)*(int *)(lVar3 + 0x58);
            if (iVar9 != 0) goto LAB_00644594;
          }
          fVar12 = fVar12 + (float)*(int *)(lVar3 + 0x58);
          iVar8 = iVar8 + 1;
          if (iVar5 == 0) goto LAB_006445a4;
        }
        if (0.0 < fVar12) {
          fVar10 = *param_4;
          if (*param_4 <= fVar12) {
            fVar10 = fVar12;
          }
          *param_4 = fVar10;
          bVar7 = false;
          param_4[1] = fVar11 + param_4[1];
        }
        lVar3 = (long)iVar8;
        iVar8 = iVar8 + 1;
        iVar5 = local_1070[lVar3];
      }
LAB_006445a4:
      if (!bVar7) {
        return 1;
      }
    }
    else {
      fVar12 = 0.0;
      iVar8 = 1;
      iVar5 = local_1070[0];
joined_r0x006444e8:
      while (iVar5 == 10) {
        iVar5 = local_1070[iVar8];
LAB_006444f0:
        iVar8 = iVar8 + 1;
      }
      if (iVar5 == 0) goto LAB_006445a4;
      plVar6 = *(long **)(param_2 + 0x20);
      if (plVar6 == (long *)0x0) {
        return 0;
      }
      plVar4 = (long *)(**(code **)(*plVar6 + 0x28))(plVar6);
      iVar2 = (**(code **)(*plVar4 + 0x70))();
      if (iVar2 != 8) {
        return 0;
      }
      lVar3 = FUN_005ffc90(plVar6,iVar5);
      if (lVar3 == 0) {
        return 0;
      }
      if ((*(int *)(lVar3 + 0x68) < 1) && (*(int *)(lVar3 + 0x6c) < 1)) {
        lVar1 = (long)iVar8;
        if (local_1070[lVar1] == 0) goto LAB_006445a4;
        fVar12 = fVar12 + (float)*(int *)(lVar3 + 0x58);
        iVar8 = iVar8 + 1;
        iVar5 = local_1070[lVar1];
        goto joined_r0x006444e8;
      }
      iVar2 = local_1070[iVar8];
      fVar12 = fVar12 + (float)*(int *)(lVar3 + 0x58);
      if (iVar2 != 0) {
        iVar5 = iVar2;
      }
      iVar9 = 3;
      if (iVar2 != 0) {
        iVar9 = 0;
      }
      bVar7 = true;
      fVar10 = fVar12;
      if (iVar9 == 0) goto LAB_006444f0;
LAB_00644594:
      fVar12 = fVar10;
      if (iVar9 != 3) {
        return 0;
      }
    }
    fVar10 = *param_4;
    if (*param_4 <= fVar12) {
      fVar10 = fVar12;
    }
    *param_4 = fVar10;
    param_4[1] = fVar11 + param_4[1];
  }
  return 1;
}


