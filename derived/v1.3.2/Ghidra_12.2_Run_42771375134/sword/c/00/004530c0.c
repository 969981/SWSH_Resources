/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004530c0; name: FUN_004530c0
 */


float FUN_004530c0(long param_1,long *param_2,float *param_3)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  byte *pbVar5;
  long *plVar6;
  ulong uVar7;
  float *pfVar8;
  long lVar9;
  undefined8 uVar10;
  float fVar11;
  undefined1 auStack_68 [48];
  float local_38;
  float local_34;
  
  local_34 = 0.0;
  FUN_00452c80(param_1,&local_34,5,param_2);
  *param_3 = 0.0;
  FUN_00452c80(param_1,param_3,0x18,param_2);
  if ((*(long *)(param_1 + 0x50) != 0) &&
     (pbVar5 = *(byte **)(*(long *)(param_1 + 0x50) + 0x18), pbVar5 != (byte *)0x0)) {
    uVar3 = (ulong)*pbVar5;
    uVar7 = 0;
    pfVar8 = (float *)(pbVar5 + ((ulong)(*pbVar5 + 4) & 0x1fc));
    do {
      if (pbVar5[uVar7 + 1] == 5) {
        if (pfVar8 != (float *)0x0) {
          local_34 = local_34 + *pfVar8;
          uVar3 = (ulong)*pbVar5;
        }
        break;
      }
      uVar7 = uVar7 + 1;
      pfVar8 = pfVar8 + 4;
    } while (uVar7 < uVar3);
    uVar7 = 0;
    pfVar8 = (float *)(pbVar5 + ((ulong)((int)uVar3 + 4) & 0x1fc));
    do {
      if (pbVar5[uVar7 + 1] == 0x18) {
        if (pfVar8 != (float *)0x0) {
          *param_3 = *param_3 + *pfVar8;
        }
        break;
      }
      uVar7 = uVar7 + 1;
      pfVar8 = pfVar8 + 4;
    } while (uVar7 < uVar3);
  }
  plVar6 = *(long **)(param_1 + 0x58);
  if (plVar6 != (long *)0x0) {
    plVar4 = (long *)*plVar6;
    uVar1 = *(uint *)(plVar6 + 1);
    plVar6 = plVar4;
    if (uVar1 == 0) {
LAB_004531fc:
      if ((plVar6 != plVar4 + (ulong)uVar1 * 2) &&
         (pbVar5 = *(byte **)(plVar6[1] + 0x18), pbVar5 != (byte *)0x0)) {
        uVar3 = (ulong)*pbVar5;
        uVar7 = 0;
        pfVar8 = (float *)(pbVar5 + ((ulong)(*pbVar5 + 4) & 0x1fc));
        do {
          if (pbVar5[uVar7 + 1] == 5) {
            if (pfVar8 != (float *)0x0) {
              local_34 = local_34 + *pfVar8;
              uVar3 = (ulong)*pbVar5;
            }
            break;
          }
          uVar7 = uVar7 + 1;
          pfVar8 = pfVar8 + 4;
        } while (uVar7 < uVar3);
        uVar7 = 0;
        pfVar8 = (float *)(pbVar5 + ((ulong)((int)uVar3 + 4) & 0x1fc));
        do {
          if (pbVar5[uVar7 + 1] == 0x18) {
            if (pfVar8 != (float *)0x0) {
              *param_3 = *param_3 + *pfVar8;
            }
            break;
          }
          uVar7 = uVar7 + 1;
          pfVar8 = pfVar8 + 4;
        } while (uVar7 < uVar3);
      }
    }
    else {
      lVar9 = (ulong)uVar1 << 4;
      do {
        if (*plVar6 == *param_2) goto LAB_004531fc;
        lVar9 = lVar9 + -0x10;
        plVar6 = plVar6 + 2;
      } while (lVar9 != 0);
    }
  }
  plVar6 = *(long **)(param_1 + 0x128);
  if (plVar6 == (long *)0x0) {
    fVar11 = 0.0;
  }
  else {
    fVar11 = 0.0;
    do {
      pfVar8 = (float *)(plVar6 + 5);
      plVar6 = (long *)*plVar6;
      fVar11 = *pfVar8 + fVar11;
    } while (plVar6 != (long *)0x0);
  }
  if (fVar11 <= *(float *)(param_1 + 0xd0)) {
    fVar11 = *(float *)(param_1 + 0xd0);
  }
  local_34 = fVar11 + local_34;
  plVar6 = *(long **)(param_1 + 0x80);
  if ((((plVar6 != (long *)0x0) &&
       ((lVar9 = plVar6[0xc], lVar9 == 0 ||
        ((((*(int *)(lVar9 + 4) == 0 && (*(int *)(lVar9 + 0xc) == 0)) &&
          (*(int *)(lVar9 + 0x14) == 0)) && (*(int *)(lVar9 + 0x1c) == 0)))))) &&
      (((((iVar2 = (**(code **)(*plVar6 + 0x88))(plVar6), iVar2 != 10 &&
          (*(char *)((long)plVar6 + 0xcc) == '\0')) &&
         ((*(uint *)((long)plVar6 + 0x9c) & 0x1080000) == 0)) &&
        ((plVar6[0x10] != 0 && ((*(byte *)((long)plVar6 + 0x9a) & 0xe) == 0)))) &&
       ((plVar6[0x16] == 0 &&
        (((*(uint *)((long)plVar6 + 0x9c) >> 0x12 & 1) == 0 && (plVar6[0x11] == 0)))))))) &&
     (((ulong *)plVar6[7] == (ulong *)0x0 || ((*(ulong *)plVar6[7] & 0x380000000020) == 0)))) {
    uVar10 = *(undefined8 *)(param_1 + 0x80);
    memcpy(auStack_68,param_2,0x30);
    fVar11 = (float)FUN_004530c0(uVar10,auStack_68,&local_38);
    *param_3 = local_38 + *param_3 + fVar11;
  }
  return local_34;
}


