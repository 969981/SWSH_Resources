/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004e8c60; name: FUN_004e8c60
 */


void FUN_004e8c60(undefined8 param_1,undefined8 param_2,long param_3,long param_4,uint param_5,
                 uint param_6,long param_7,long param_8)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  lVar5 = -4;
  if (*(long *)(param_3 + 0x38) != -1) {
    lVar5 = *(long *)(param_3 + 0x38);
  }
  puVar4 = (undefined8 *)FUN_004e7e80(lVar5,*(undefined8 *)(*(long *)(param_4 + 8) + 0x48));
  if ((puVar4 != (undefined8 *)0x0) &&
     (iVar2 = *(int *)(puVar4 + 10), *(int *)(puVar4 + 10) = iVar2 + -1, iVar2 + -1 == 0)) {
    uVar3 = *(undefined4 *)PTR_DAT_02712a90;
    (**(code **)*puVar4)(puVar4);
    FUN_00404870(uVar3,puVar4);
  }
  *(long *)(param_8 + (ulong)param_6 * 8) = param_3;
  *(undefined4 *)(param_3 + 0x5c) = *(undefined4 *)(param_4 + 100);
  if ((param_6 < param_5) &&
     (uVar6 = (ulong)*(uint *)(param_3 + 0x30), *(uint *)(param_3 + 0x30) != 0)) {
    plVar8 = *(long **)(param_3 + 0x28);
    if (param_6 == 0) {
      plVar10 = plVar8;
      do {
        if (*(char *)(*plVar10 + 0x98) != '\0') {
          FUN_004ea9a0(param_1,param_2,*plVar10,param_4,param_5,0,param_7,param_8);
          plVar8 = *(long **)(param_3 + 0x28);
          uVar6 = (ulong)*(uint *)(param_3 + 0x30);
        }
        plVar10 = plVar10 + 1;
      } while (plVar10 != plVar8 + uVar6);
    }
    else {
      plVar10 = plVar8;
      do {
        lVar5 = *plVar10;
        if (*(char *)(lVar5 + 0x98) != '\0') {
          uVar9 = 0;
          do {
            if (*(long *)(param_7 + uVar9 * 8) == lVar5) goto LAB_004e8da4;
            uVar1 = (int)uVar9 + 1;
            uVar9 = (ulong)uVar1;
          } while (uVar1 < param_6);
          lVar7 = *(long *)(param_7 + (ulong)(param_6 - 1) * 8);
          fVar12 = *(float *)(lVar7 + 0x4c) - *(float *)(lVar5 + 0x4c);
          fVar11 = *(float *)(lVar7 + 0x48) - *(float *)(lVar5 + 0x48);
          fVar13 = *(float *)(lVar7 + 0x50) - *(float *)(lVar5 + 0x50);
          FUN_004ea9a0(SQRT(fVar11 * fVar11 + fVar12 * fVar12 + fVar13 * fVar13) + (float)param_1,
                       param_2,lVar5,param_4,param_5,param_6,param_7,param_8);
          plVar8 = *(long **)(param_3 + 0x28);
          uVar6 = (ulong)*(uint *)(param_3 + 0x30);
        }
LAB_004e8da4:
        plVar10 = plVar10 + 1;
      } while (plVar10 != plVar8 + uVar6);
    }
  }
  return;
}


