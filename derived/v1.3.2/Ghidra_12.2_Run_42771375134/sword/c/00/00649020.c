/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00649020; name: FUN_00649020
 */


undefined8 FUN_00649020(long param_1,long *param_2,long param_3,float *param_4,float *param_5)

{
  char cVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  void *pvVar9;
  float fVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  ulong uVar26;
  float fVar27;
  float fVar28;
  float local_13c;
  float local_138;
  float fStack_12c;
  float local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  float local_f4;
  undefined8 local_f0;
  float local_88;
  float local_84;
  
  if (*(char *)(param_3 + 0x54) == '\0') {
    uVar7 = FUN_00648b20(param_1,param_2,param_3,param_4,param_5);
    return uVar7;
  }
  if (param_2 == (long *)0x0) {
    return 0;
  }
  puVar6 = (undefined8 *)(**(code **)(**(long **)(param_1 + 0x490) + 0x2a8))();
  *puVar6 = *(undefined8 *)(param_1 + 0x820 + (ulong)*(uint *)(param_3 + 0x80) * 8 + 0xe0);
  puVar6[1] = *(undefined8 *)(param_1 + 0x820 + (ulong)*(uint *)(param_3 + 0x80) * 8 + 0x230);
  *(uint *)(puVar6 + 0x31) = *(uint *)(puVar6 + 0x31) | 0xffff;
  FUN_005ed7d0(&local_88,param_2);
  if (*(char *)(param_3 + 0x54) == '\0') {
    if (*(uint *)(param_3 + 0x58) < 6) {
      fVar15 = *param_4;
      fVar16 = param_4[1];
      fVar10 = param_4[2];
      fVar14 = param_4[3];
      switch(*(uint *)(param_3 + 0x58)) {
      case 0:
        if (param_5 == (float *)0x0) {
          fVar20 = 1.0;
          local_13c = -1.0;
          local_138 = -1.0;
          fVar17 = 1.0;
        }
        else {
          local_138 = *param_5;
          if ((param_5[1] - local_138 <= 0.0) || (param_5[3] - param_5[2] <= 0.0)) {
            return 0;
          }
          lVar8 = (**(code **)(*param_2 + 0x98))(param_2);
          local_138 = local_138 / (float)*(int *)(lVar8 + 0x14);
          local_13c = param_5[2];
          lVar8 = (**(code **)(*param_2 + 0x98))(param_2);
          fVar17 = param_5[1];
          local_13c = local_13c / (float)*(int *)(lVar8 + 0x18);
          lVar8 = (**(code **)(*param_2 + 0x98))(param_2);
          fVar17 = fVar17 / (float)*(int *)(lVar8 + 0x14);
          fVar20 = param_5[3];
          lVar8 = (**(code **)(*param_2 + 0x98))(param_2);
          fVar20 = fVar20 / (float)*(int *)(lVar8 + 0x18);
        }
        if (*(char *)(param_1 + 0x184) == '\0') {
          FUN_00647410(param_1);
          iVar11 = *(int *)(param_1 + 0x174);
          if (iVar11 < 1) {
            iVar12 = 0;
          }
          else {
            iVar12 = 0;
            if (iVar11 != 0) {
              iVar12 = *(int *)(param_1 + 0x170) / iVar11;
            }
          }
          *(int *)(param_1 + 0x17c) = iVar12;
          *(undefined4 *)(param_1 + 0x180) = 5;
          *(undefined1 *)(param_1 + 0x184) = 1;
          if (*(long *)(param_1 + 0x160) == 0) {
            *(undefined1 *)(param_1 + 0x184) = 0;
          }
          else {
            *(long *)(param_1 + 0x168) = *(long *)(param_1 + 0x160);
            *(undefined4 *)(param_1 + 0x178) = 0;
          }
        }
        local_138 = local_138 + local_88;
        FUN_006479e0(fVar15,fVar10,0,0x3f800000,param_1,0,0);
        FUN_006479e0(0x3f800000,fVar20 + local_84,fVar17 + local_88,0x3f800000,param_1,5,0);
        if (((*(char *)(param_1 + 0x184) != '\0') &&
            (pvVar9 = *(void **)(param_1 + 0x168), pvVar9 != (void *)0x0)) &&
           (pvVar9 < (void *)(*(long *)(param_1 + 0x160) + (long)*(int *)(param_1 + 0x170)))) {
          memcpy(pvVar9,(void *)(param_1 + 400),(long)*(int *)(param_1 + 0x174));
          *(long *)(param_1 + 0x168) = *(long *)(param_1 + 0x168) + (long)*(int *)(param_1 + 0x174);
          iVar11 = *(int *)(param_1 + 0x178) + 1;
          *(int *)(param_1 + 0x178) = iVar11;
          if (*(int *)(param_1 + 0x17c) <= iVar11) {
            FUN_006475b0(param_1,0,0);
          }
        }
        local_13c = local_13c + local_84;
        FUN_006479e0(fVar16,fVar10,0,0x3f800000,param_1,0,0);
        FUN_006479e0(0x3f800000,fVar20 + local_84,local_138,0x3f800000,param_1,5,0);
        if (((*(char *)(param_1 + 0x184) != '\0') &&
            (pvVar9 = *(void **)(param_1 + 0x168), pvVar9 != (void *)0x0)) &&
           (pvVar9 < (void *)(*(long *)(param_1 + 0x160) + (long)*(int *)(param_1 + 0x170)))) {
          memcpy(pvVar9,(void *)(param_1 + 400),(long)*(int *)(param_1 + 0x174));
          *(long *)(param_1 + 0x168) = *(long *)(param_1 + 0x168) + (long)*(int *)(param_1 + 0x174);
          iVar11 = *(int *)(param_1 + 0x178) + 1;
          *(int *)(param_1 + 0x178) = iVar11;
          if (*(int *)(param_1 + 0x17c) <= iVar11) {
            FUN_006475b0(param_1,0,0);
          }
        }
        FUN_006479e0(fVar15,fVar14,0,0x3f800000,param_1,0,0);
        FUN_006479e0(0x3f800000,local_13c,fVar17 + local_88,0x3f800000,param_1,5,0);
        if (((*(char *)(param_1 + 0x184) != '\0') &&
            (pvVar9 = *(void **)(param_1 + 0x168), pvVar9 != (void *)0x0)) &&
           (pvVar9 < (void *)(*(long *)(param_1 + 0x160) + (long)*(int *)(param_1 + 0x170)))) {
          memcpy(pvVar9,(void *)(param_1 + 400),(long)*(int *)(param_1 + 0x174));
          *(long *)(param_1 + 0x168) = *(long *)(param_1 + 0x168) + (long)*(int *)(param_1 + 0x174);
          iVar11 = *(int *)(param_1 + 0x178) + 1;
          *(int *)(param_1 + 0x178) = iVar11;
          if (*(int *)(param_1 + 0x17c) <= iVar11) {
            FUN_006475b0(param_1,0,0);
          }
        }
        FUN_006479e0(fVar16,fVar14,0,0x3f800000,param_1,0,0);
        fVar20 = 1.0;
        break;
      case 1:
        if (param_5 == (float *)0x0) {
          fVar17 = 1.0;
          local_13c = -1.0;
          fVar20 = -1.0;
          local_138 = 1.0;
        }
        else {
          fVar20 = *param_5;
          if (param_5[1] - fVar20 <= 0.0) {
            return 0;
          }
          if (param_5[3] - param_5[2] <= 0.0) {
            return 0;
          }
          lVar8 = (**(code **)(*param_2 + 0x98))(param_2);
          fVar20 = fVar20 / (float)*(int *)(lVar8 + 0x14);
          local_13c = param_5[2];
          lVar8 = (**(code **)(*param_2 + 0x98))(param_2);
          local_13c = local_13c / (float)*(int *)(lVar8 + 0x18);
          local_138 = param_5[1];
          lVar8 = (**(code **)(*param_2 + 0x98))(param_2);
          fVar17 = param_5[3];
          local_138 = local_138 / (float)*(int *)(lVar8 + 0x14);
          lVar8 = (**(code **)(*param_2 + 0x98))(param_2);
          fVar17 = fVar17 / (float)*(int *)(lVar8 + 0x18);
        }
        if (*(char *)(param_1 + 0x184) == '\0') {
          FUN_00647410(param_1);
          iVar11 = *(int *)(param_1 + 0x174);
          if (iVar11 < 1) {
            iVar12 = 0;
          }
          else {
            iVar12 = 0;
            if (iVar11 != 0) {
              iVar12 = *(int *)(param_1 + 0x170) / iVar11;
            }
          }
          *(int *)(param_1 + 0x17c) = iVar12;
          *(undefined4 *)(param_1 + 0x180) = 5;
          *(undefined1 *)(param_1 + 0x184) = 1;
          if (*(long *)(param_1 + 0x160) == 0) {
            *(undefined1 *)(param_1 + 0x184) = 0;
          }
          else {
            *(long *)(param_1 + 0x168) = *(long *)(param_1 + 0x160);
            *(undefined4 *)(param_1 + 0x178) = 0;
          }
        }
        local_138 = local_138 + local_88;
        FUN_006479e0(fVar15,fVar10,0,0x3f800000,param_1,0,0);
        FUN_006479e0(0xbf800000,fVar17 + local_84,fVar20 + local_88,0x3f800000,param_1,5,0);
        if (((*(char *)(param_1 + 0x184) != '\0') &&
            (pvVar9 = *(void **)(param_1 + 0x168), pvVar9 != (void *)0x0)) &&
           (pvVar9 < (void *)(*(long *)(param_1 + 0x160) + (long)*(int *)(param_1 + 0x170)))) {
          memcpy(pvVar9,(void *)(param_1 + 400),(long)*(int *)(param_1 + 0x174));
          *(long *)(param_1 + 0x168) = *(long *)(param_1 + 0x168) + (long)*(int *)(param_1 + 0x174);
          iVar11 = *(int *)(param_1 + 0x178) + 1;
          *(int *)(param_1 + 0x178) = iVar11;
          if (*(int *)(param_1 + 0x17c) <= iVar11) {
            FUN_006475b0(param_1,0,0);
          }
        }
        local_13c = local_13c + local_84;
        FUN_006479e0(fVar16,fVar10,0,0x3f800000,param_1,0,0);
        FUN_006479e0(0xbf800000,fVar17 + local_84,local_138,0x3f800000,param_1,5,0);
        if (((*(char *)(param_1 + 0x184) != '\0') &&
            (pvVar9 = *(void **)(param_1 + 0x168), pvVar9 != (void *)0x0)) &&
           (pvVar9 < (void *)(*(long *)(param_1 + 0x160) + (long)*(int *)(param_1 + 0x170)))) {
          memcpy(pvVar9,(void *)(param_1 + 400),(long)*(int *)(param_1 + 0x174));
          *(long *)(param_1 + 0x168) = *(long *)(param_1 + 0x168) + (long)*(int *)(param_1 + 0x174);
          iVar11 = *(int *)(param_1 + 0x178) + 1;
          *(int *)(param_1 + 0x178) = iVar11;
          if (*(int *)(param_1 + 0x17c) <= iVar11) {
            FUN_006475b0(param_1,0,0);
          }
        }
        FUN_006479e0(fVar15,fVar14,0,0x3f800000,param_1,0,0);
        FUN_006479e0(0xbf800000,local_13c,fVar20 + local_88,0x3f800000,param_1,5,0);
        if (((*(char *)(param_1 + 0x184) != '\0') &&
            (pvVar9 = *(void **)(param_1 + 0x168), pvVar9 != (void *)0x0)) &&
           (pvVar9 < (void *)(*(long *)(param_1 + 0x160) + (long)*(int *)(param_1 + 0x170)))) {
          memcpy(pvVar9,(void *)(param_1 + 400),(long)*(int *)(param_1 + 0x174));
          *(long *)(param_1 + 0x168) = *(long *)(param_1 + 0x168) + (long)*(int *)(param_1 + 0x174);
          iVar11 = *(int *)(param_1 + 0x178) + 1;
          *(int *)(param_1 + 0x178) = iVar11;
          if (*(int *)(param_1 + 0x17c) <= iVar11) {
            FUN_006475b0(param_1,0,0);
          }
        }
        FUN_006479e0(fVar16,fVar14,0,0x3f800000,param_1,0,0);
        fVar20 = -1.0;
        break;
      case 2:
        if (param_5 == (float *)0x0) {
          fVar20 = 1.0;
          fVar17 = -1.0;
          fVar18 = -1.0;
          local_138 = 1.0;
        }
        else {
          fVar17 = *param_5;
          if (param_5[1] - fVar17 <= 0.0) {
            return 0;
          }
          if (param_5[3] - param_5[2] <= 0.0) {
            return 0;
          }
          lVar8 = (**(code **)(*param_2 + 0x98))(param_2);
          fVar17 = fVar17 / (float)*(int *)(lVar8 + 0x14);
          fVar18 = param_5[2];
          lVar8 = (**(code **)(*param_2 + 0x98))(param_2);
          fVar18 = fVar18 / (float)*(int *)(lVar8 + 0x18);
          fVar20 = param_5[1];
          lVar8 = (**(code **)(*param_2 + 0x98))(param_2);
          local_138 = param_5[3];
          fVar20 = fVar20 / (float)*(int *)(lVar8 + 0x14);
          lVar8 = (**(code **)(*param_2 + 0x98))(param_2);
          local_138 = local_138 / (float)*(int *)(lVar8 + 0x18);
        }
        if (*(char *)(param_1 + 0x184) == '\0') {
          FUN_00647410(param_1);
          iVar11 = *(int *)(param_1 + 0x174);
          if (iVar11 < 1) {
            iVar12 = 0;
          }
          else {
            iVar12 = 0;
            if (iVar11 != 0) {
              iVar12 = *(int *)(param_1 + 0x170) / iVar11;
            }
          }
          *(int *)(param_1 + 0x17c) = iVar12;
          *(undefined4 *)(param_1 + 0x180) = 5;
          *(undefined1 *)(param_1 + 0x184) = 1;
          if (*(long *)(param_1 + 0x160) == 0) {
            *(undefined1 *)(param_1 + 0x184) = 0;
          }
          else {
            *(long *)(param_1 + 0x168) = *(long *)(param_1 + 0x160);
            *(undefined4 *)(param_1 + 0x178) = 0;
          }
        }
        fVar20 = fVar20 + local_88;
        FUN_006479e0(fVar15,fVar10,0,0x3f800000,param_1,0,0);
        FUN_006479e0(fVar17 + local_88,0x3f800000,fVar18 + local_84,0x3f800000,param_1,5,0);
        if (((*(char *)(param_1 + 0x184) != '\0') &&
            (pvVar9 = *(void **)(param_1 + 0x168), pvVar9 != (void *)0x0)) &&
           (pvVar9 < (void *)(*(long *)(param_1 + 0x160) + (long)*(int *)(param_1 + 0x170)))) {
          memcpy(pvVar9,(void *)(param_1 + 400),(long)*(int *)(param_1 + 0x174));
          *(long *)(param_1 + 0x168) = *(long *)(param_1 + 0x168) + (long)*(int *)(param_1 + 0x174);
          iVar11 = *(int *)(param_1 + 0x178) + 1;
          *(int *)(param_1 + 0x178) = iVar11;
          if (*(int *)(param_1 + 0x17c) <= iVar11) {
            FUN_006475b0(param_1,0,0);
          }
        }
        local_138 = local_138 + local_84;
        FUN_006479e0(fVar16,fVar10,0,0x3f800000,param_1,0,0);
        FUN_006479e0(fVar20,0x3f800000,fVar18 + local_84,0x3f800000,param_1,5,0);
        if (((*(char *)(param_1 + 0x184) != '\0') &&
            (pvVar9 = *(void **)(param_1 + 0x168), pvVar9 != (void *)0x0)) &&
           (pvVar9 < (void *)(*(long *)(param_1 + 0x160) + (long)*(int *)(param_1 + 0x170)))) {
          memcpy(pvVar9,(void *)(param_1 + 400),(long)*(int *)(param_1 + 0x174));
          *(long *)(param_1 + 0x168) = *(long *)(param_1 + 0x168) + (long)*(int *)(param_1 + 0x174);
          iVar11 = *(int *)(param_1 + 0x178) + 1;
          *(int *)(param_1 + 0x178) = iVar11;
          if (*(int *)(param_1 + 0x17c) <= iVar11) {
            FUN_006475b0(param_1,0,0);
          }
        }
        FUN_006479e0(fVar15,fVar14,0,0x3f800000,param_1,0,0);
        FUN_006479e0(fVar17 + local_88,0x3f800000,local_138,0x3f800000,param_1,5,0);
        if (((*(char *)(param_1 + 0x184) != '\0') &&
            (pvVar9 = *(void **)(param_1 + 0x168), pvVar9 != (void *)0x0)) &&
           (pvVar9 < (void *)(*(long *)(param_1 + 0x160) + (long)*(int *)(param_1 + 0x170)))) {
          memcpy(pvVar9,(void *)(param_1 + 400),(long)*(int *)(param_1 + 0x174));
          *(long *)(param_1 + 0x168) = *(long *)(param_1 + 0x168) + (long)*(int *)(param_1 + 0x174);
          iVar11 = *(int *)(param_1 + 0x178) + 1;
          *(int *)(param_1 + 0x178) = iVar11;
          if (*(int *)(param_1 + 0x17c) <= iVar11) {
            FUN_006475b0(param_1,0,0);
          }
        }
        FUN_006479e0(fVar16,fVar14,0,0x3f800000,param_1,0,0);
        local_13c = 1.0;
        break;
      case 3:
        if (param_5 == (float *)0x0) {
          fVar20 = 1.0;
          fVar17 = -1.0;
          local_138 = -1.0;
          fVar18 = 1.0;
        }
        else {
          fVar17 = *param_5;
          if (param_5[1] - fVar17 <= 0.0) {
            return 0;
          }
          if (param_5[3] - param_5[2] <= 0.0) {
            return 0;
          }
          lVar8 = (**(code **)(*param_2 + 0x98))(param_2);
          fVar17 = fVar17 / (float)*(int *)(lVar8 + 0x14);
          local_138 = param_5[2];
          lVar8 = (**(code **)(*param_2 + 0x98))(param_2);
          local_138 = local_138 / (float)*(int *)(lVar8 + 0x18);
          fVar20 = param_5[1];
          lVar8 = (**(code **)(*param_2 + 0x98))(param_2);
          fVar18 = param_5[3];
          fVar20 = fVar20 / (float)*(int *)(lVar8 + 0x14);
          lVar8 = (**(code **)(*param_2 + 0x98))(param_2);
          fVar18 = fVar18 / (float)*(int *)(lVar8 + 0x18);
        }
        if (*(char *)(param_1 + 0x184) == '\0') {
          FUN_00647410(param_1);
          iVar11 = *(int *)(param_1 + 0x174);
          if (iVar11 < 1) {
            iVar12 = 0;
          }
          else {
            iVar12 = 0;
            if (iVar11 != 0) {
              iVar12 = *(int *)(param_1 + 0x170) / iVar11;
            }
          }
          *(int *)(param_1 + 0x17c) = iVar12;
          *(undefined4 *)(param_1 + 0x180) = 5;
          *(undefined1 *)(param_1 + 0x184) = 1;
          if (*(long *)(param_1 + 0x160) == 0) {
            *(undefined1 *)(param_1 + 0x184) = 0;
          }
          else {
            *(long *)(param_1 + 0x168) = *(long *)(param_1 + 0x160);
            *(undefined4 *)(param_1 + 0x178) = 0;
          }
        }
        fVar20 = fVar20 + local_88;
        FUN_006479e0(fVar15,fVar10,0,0x3f800000,param_1,0,0);
        FUN_006479e0(fVar17 + local_88,0xbf800000,fVar18 + local_84,0x3f800000,param_1,5,0);
        if (((*(char *)(param_1 + 0x184) != '\0') &&
            (pvVar9 = *(void **)(param_1 + 0x168), pvVar9 != (void *)0x0)) &&
           (pvVar9 < (void *)(*(long *)(param_1 + 0x160) + (long)*(int *)(param_1 + 0x170)))) {
          memcpy(pvVar9,(void *)(param_1 + 400),(long)*(int *)(param_1 + 0x174));
          *(long *)(param_1 + 0x168) = *(long *)(param_1 + 0x168) + (long)*(int *)(param_1 + 0x174);
          iVar11 = *(int *)(param_1 + 0x178) + 1;
          *(int *)(param_1 + 0x178) = iVar11;
          if (*(int *)(param_1 + 0x17c) <= iVar11) {
            FUN_006475b0(param_1,0,0);
          }
        }
        local_138 = local_138 + local_84;
        FUN_006479e0(fVar16,fVar10,0,0x3f800000,param_1,0,0);
        FUN_006479e0(fVar20,0xbf800000,fVar18 + local_84,0x3f800000,param_1,5,0);
        if (((*(char *)(param_1 + 0x184) != '\0') &&
            (pvVar9 = *(void **)(param_1 + 0x168), pvVar9 != (void *)0x0)) &&
           (pvVar9 < (void *)(*(long *)(param_1 + 0x160) + (long)*(int *)(param_1 + 0x170)))) {
          memcpy(pvVar9,(void *)(param_1 + 400),(long)*(int *)(param_1 + 0x174));
          *(long *)(param_1 + 0x168) = *(long *)(param_1 + 0x168) + (long)*(int *)(param_1 + 0x174);
          iVar11 = *(int *)(param_1 + 0x178) + 1;
          *(int *)(param_1 + 0x178) = iVar11;
          if (*(int *)(param_1 + 0x17c) <= iVar11) {
            FUN_006475b0(param_1,0,0);
          }
        }
        FUN_006479e0(fVar15,fVar14,0,0x3f800000,param_1,0,0);
        FUN_006479e0(fVar17 + local_88,0xbf800000,local_138,0x3f800000,param_1,5,0);
        if (((*(char *)(param_1 + 0x184) != '\0') &&
            (pvVar9 = *(void **)(param_1 + 0x168), pvVar9 != (void *)0x0)) &&
           (pvVar9 < (void *)(*(long *)(param_1 + 0x160) + (long)*(int *)(param_1 + 0x170)))) {
          memcpy(pvVar9,(void *)(param_1 + 400),(long)*(int *)(param_1 + 0x174));
          *(long *)(param_1 + 0x168) = *(long *)(param_1 + 0x168) + (long)*(int *)(param_1 + 0x174);
          iVar11 = *(int *)(param_1 + 0x178) + 1;
          *(int *)(param_1 + 0x178) = iVar11;
          if (*(int *)(param_1 + 0x17c) <= iVar11) {
            FUN_006475b0(param_1,0,0);
          }
        }
        FUN_006479e0(fVar16,fVar14,0,0x3f800000,param_1,0,0);
        local_13c = -1.0;
        break;
      case 4:
        if (param_5 == (float *)0x0) {
          fVar20 = 1.0;
          fVar17 = -1.0;
          local_13c = -1.0;
          fVar18 = 1.0;
        }
        else {
          fVar17 = *param_5;
          if (param_5[1] - fVar17 <= 0.0) {
            return 0;
          }
          if (param_5[3] - param_5[2] <= 0.0) {
            return 0;
          }
          lVar8 = (**(code **)(*param_2 + 0x98))(param_2);
          fVar17 = fVar17 / (float)*(int *)(lVar8 + 0x14);
          local_13c = param_5[2];
          lVar8 = (**(code **)(*param_2 + 0x98))(param_2);
          local_13c = local_13c / (float)*(int *)(lVar8 + 0x18);
          fVar20 = param_5[1];
          lVar8 = (**(code **)(*param_2 + 0x98))(param_2);
          fVar18 = param_5[3];
          fVar20 = fVar20 / (float)*(int *)(lVar8 + 0x14);
          lVar8 = (**(code **)(*param_2 + 0x98))(param_2);
          fVar18 = fVar18 / (float)*(int *)(lVar8 + 0x18);
        }
        if (*(char *)(param_1 + 0x184) == '\0') {
          FUN_00647410(param_1);
          iVar11 = *(int *)(param_1 + 0x174);
          if (iVar11 < 1) {
            iVar12 = 0;
          }
          else {
            iVar12 = 0;
            if (iVar11 != 0) {
              iVar12 = *(int *)(param_1 + 0x170) / iVar11;
            }
          }
          *(int *)(param_1 + 0x17c) = iVar12;
          *(undefined4 *)(param_1 + 0x180) = 5;
          *(undefined1 *)(param_1 + 0x184) = 1;
          if (*(long *)(param_1 + 0x160) == 0) {
            *(undefined1 *)(param_1 + 0x184) = 0;
          }
          else {
            *(long *)(param_1 + 0x168) = *(long *)(param_1 + 0x160);
            *(undefined4 *)(param_1 + 0x178) = 0;
          }
        }
        fVar20 = fVar20 + local_88;
        FUN_006479e0(fVar15,fVar10,0,0x3f800000,param_1,0,0);
        FUN_006479e0(fVar17 + local_88,fVar18 + local_84,0x3f800000,0x3f800000,param_1,5,0);
        if (((*(char *)(param_1 + 0x184) != '\0') &&
            (pvVar9 = *(void **)(param_1 + 0x168), pvVar9 != (void *)0x0)) &&
           (pvVar9 < (void *)(*(long *)(param_1 + 0x160) + (long)*(int *)(param_1 + 0x170)))) {
          memcpy(pvVar9,(void *)(param_1 + 400),(long)*(int *)(param_1 + 0x174));
          *(long *)(param_1 + 0x168) = *(long *)(param_1 + 0x168) + (long)*(int *)(param_1 + 0x174);
          iVar11 = *(int *)(param_1 + 0x178) + 1;
          *(int *)(param_1 + 0x178) = iVar11;
          if (*(int *)(param_1 + 0x17c) <= iVar11) {
            FUN_006475b0(param_1,0,0);
          }
        }
        local_13c = local_13c + local_84;
        FUN_006479e0(fVar16,fVar10,0,0x3f800000,param_1,0,0);
        FUN_006479e0(fVar20,fVar18 + local_84,0x3f800000,0x3f800000,param_1,5,0);
        if (((*(char *)(param_1 + 0x184) != '\0') &&
            (pvVar9 = *(void **)(param_1 + 0x168), pvVar9 != (void *)0x0)) &&
           (pvVar9 < (void *)(*(long *)(param_1 + 0x160) + (long)*(int *)(param_1 + 0x170)))) {
          memcpy(pvVar9,(void *)(param_1 + 400),(long)*(int *)(param_1 + 0x174));
          *(long *)(param_1 + 0x168) = *(long *)(param_1 + 0x168) + (long)*(int *)(param_1 + 0x174);
          iVar11 = *(int *)(param_1 + 0x178) + 1;
          *(int *)(param_1 + 0x178) = iVar11;
          if (*(int *)(param_1 + 0x17c) <= iVar11) {
            FUN_006475b0(param_1,0,0);
          }
        }
        FUN_006479e0(fVar15,fVar14,0,0x3f800000,param_1,0,0);
        FUN_006479e0(fVar17 + local_88,local_13c,0x3f800000,0x3f800000,param_1,5,0);
        if (((*(char *)(param_1 + 0x184) != '\0') &&
            (pvVar9 = *(void **)(param_1 + 0x168), pvVar9 != (void *)0x0)) &&
           (pvVar9 < (void *)(*(long *)(param_1 + 0x160) + (long)*(int *)(param_1 + 0x170)))) {
          memcpy(pvVar9,(void *)(param_1 + 400),(long)*(int *)(param_1 + 0x174));
          *(long *)(param_1 + 0x168) = *(long *)(param_1 + 0x168) + (long)*(int *)(param_1 + 0x174);
          iVar11 = *(int *)(param_1 + 0x178) + 1;
          *(int *)(param_1 + 0x178) = iVar11;
          if (*(int *)(param_1 + 0x17c) <= iVar11) {
            FUN_006475b0(param_1,0,0);
          }
        }
        FUN_006479e0(fVar16,fVar14,0,0x3f800000,param_1,0,0);
        local_138 = 1.0;
        break;
      case 5:
        if (param_5 == (float *)0x0) {
          fVar18 = 1.0;
          fVar20 = -1.0;
          local_13c = -1.0;
          fVar17 = 1.0;
        }
        else {
          fVar20 = *param_5;
          if (param_5[1] - fVar20 <= 0.0) {
            return 0;
          }
          if (param_5[3] - param_5[2] <= 0.0) {
            return 0;
          }
          lVar8 = (**(code **)(*param_2 + 0x98))(param_2);
          local_13c = param_5[2];
          fVar20 = fVar20 / (float)*(int *)(lVar8 + 0x14);
          lVar8 = (**(code **)(*param_2 + 0x98))(param_2);
          local_13c = local_13c / (float)*(int *)(lVar8 + 0x18);
          fVar18 = param_5[1];
          lVar8 = (**(code **)(*param_2 + 0x98))(param_2);
          fVar18 = fVar18 / (float)*(int *)(lVar8 + 0x14);
          fVar17 = param_5[3];
          lVar8 = (**(code **)(*param_2 + 0x98))(param_2);
          fVar17 = fVar17 / (float)*(int *)(lVar8 + 0x18);
        }
        if (*(char *)(param_1 + 0x184) == '\0') {
          FUN_00647410(param_1);
          iVar11 = *(int *)(param_1 + 0x174);
          if (iVar11 < 1) {
            iVar12 = 0;
          }
          else {
            iVar12 = 0;
            if (iVar11 != 0) {
              iVar12 = *(int *)(param_1 + 0x170) / iVar11;
            }
          }
          *(int *)(param_1 + 0x17c) = iVar12;
          *(undefined4 *)(param_1 + 0x180) = 5;
          *(undefined1 *)(param_1 + 0x184) = 1;
          if (*(long *)(param_1 + 0x160) == 0) {
            *(undefined1 *)(param_1 + 0x184) = 0;
          }
          else {
            *(long *)(param_1 + 0x168) = *(long *)(param_1 + 0x160);
            *(undefined4 *)(param_1 + 0x178) = 0;
          }
        }
        fVar20 = fVar20 + local_88;
        FUN_006479e0(fVar15,fVar10,0,0x3f800000,param_1,0,0);
        FUN_006479e0(fVar18 + local_88,fVar17 + local_84,0xbf800000,0x3f800000,param_1,5,0);
        if (((*(char *)(param_1 + 0x184) != '\0') &&
            (pvVar9 = *(void **)(param_1 + 0x168), pvVar9 != (void *)0x0)) &&
           (pvVar9 < (void *)(*(long *)(param_1 + 0x160) + (long)*(int *)(param_1 + 0x170)))) {
          memcpy(pvVar9,(void *)(param_1 + 400),(long)*(int *)(param_1 + 0x174));
          *(long *)(param_1 + 0x168) = *(long *)(param_1 + 0x168) + (long)*(int *)(param_1 + 0x174);
          iVar11 = *(int *)(param_1 + 0x178) + 1;
          *(int *)(param_1 + 0x178) = iVar11;
          if (*(int *)(param_1 + 0x17c) <= iVar11) {
            FUN_006475b0(param_1,0,0);
          }
        }
        local_13c = local_13c + local_84;
        FUN_006479e0(fVar16,fVar10,0,0x3f800000,param_1,0,0);
        FUN_006479e0(fVar20,fVar17 + local_84,0xbf800000,0x3f800000,param_1,5,0);
        if (((*(char *)(param_1 + 0x184) != '\0') &&
            (pvVar9 = *(void **)(param_1 + 0x168), pvVar9 != (void *)0x0)) &&
           (pvVar9 < (void *)(*(long *)(param_1 + 0x160) + (long)*(int *)(param_1 + 0x170)))) {
          memcpy(pvVar9,(void *)(param_1 + 400),(long)*(int *)(param_1 + 0x174));
          *(long *)(param_1 + 0x168) = *(long *)(param_1 + 0x168) + (long)*(int *)(param_1 + 0x174);
          iVar11 = *(int *)(param_1 + 0x178) + 1;
          *(int *)(param_1 + 0x178) = iVar11;
          if (*(int *)(param_1 + 0x17c) <= iVar11) {
            FUN_006475b0(param_1,0,0);
          }
        }
        FUN_006479e0(fVar15,fVar14,0,0x3f800000,param_1,0,0);
        FUN_006479e0(fVar18 + local_88,local_13c,0xbf800000,0x3f800000,param_1,5,0);
        if (((*(char *)(param_1 + 0x184) != '\0') &&
            (pvVar9 = *(void **)(param_1 + 0x168), pvVar9 != (void *)0x0)) &&
           (pvVar9 < (void *)(*(long *)(param_1 + 0x160) + (long)*(int *)(param_1 + 0x170)))) {
          memcpy(pvVar9,(void *)(param_1 + 400),(long)*(int *)(param_1 + 0x174));
          *(long *)(param_1 + 0x168) = *(long *)(param_1 + 0x168) + (long)*(int *)(param_1 + 0x174);
          iVar11 = *(int *)(param_1 + 0x178) + 1;
          *(int *)(param_1 + 0x178) = iVar11;
          if (*(int *)(param_1 + 0x17c) <= iVar11) {
            FUN_006475b0(param_1,0,0);
          }
        }
        FUN_006479e0(fVar16,fVar14,0,0x3f800000,param_1,0,0);
        local_138 = -1.0;
      }
      FUN_006479e0(fVar20,local_13c,local_138,0x3f800000,param_1,5,0);
      if (*(char *)(param_1 + 0x184) != '\0') {
        pvVar9 = *(void **)(param_1 + 0x168);
        if ((pvVar9 != (void *)0x0) &&
           (pvVar9 < (void *)(*(long *)(param_1 + 0x160) + (long)*(int *)(param_1 + 0x170)))) {
          memcpy(pvVar9,(void *)(param_1 + 400),(long)*(int *)(param_1 + 0x174));
          *(long *)(param_1 + 0x168) = *(long *)(param_1 + 0x168) + (long)*(int *)(param_1 + 0x174);
          iVar11 = *(int *)(param_1 + 0x178) + 1;
          *(int *)(param_1 + 0x178) = iVar11;
          if (*(int *)(param_1 + 0x17c) <= iVar11) {
            FUN_006475b0(param_1,0,0);
          }
        }
        if (*(char *)(param_1 + 0x184) != '\0') {
          FUN_006475b0(param_1,1,0);
          *(undefined1 *)(param_1 + 0x184) = 0;
          return 1;
        }
      }
    }
  }
  else {
    fVar10 = *param_4;
    fVar14 = param_4[2];
    fVar16 = (param_4[1] - fVar10) * 0.25;
    fVar20 = (param_4[3] - fVar14) / 3.0;
    fVar15 = fVar16;
    if (fVar20 <= fVar16) {
      fVar15 = fVar20;
      if (fVar20 < fVar16) {
        fVar16 = fVar20;
      }
    }
    fStack_12c = -1.0;
    local_128 = -1.0;
    fVar20 = -1.0;
    local_f4 = 1.0;
    fVar18 = ((param_4[3] - fVar14) - fVar15 * 3.0) * 0.5;
    fVar22 = ((param_4[1] - fVar10) - fVar16 * 4.0) * 0.5;
    fVar27 = fVar18 + fVar14 + fVar15;
    fVar28 = fVar22 + fVar10 + fVar16 + fVar16;
    fVar19 = fVar22 + fVar10 + fVar16 * 3.0;
    fVar21 = fVar18 + fVar14 + fVar15 + fVar15;
    fVar17 = fVar22 + fVar10 + fVar16;
    fVar16 = fVar22 + fVar10 + fVar16 * 4.0;
    fVar15 = fVar18 + fVar14 + fVar15 * 3.0;
    local_f0 = 0x3f8000003f800000;
    local_120 = 0x3f8000003f800000;
    local_118 = 0xbf800000bf800000;
    local_110 = 0x3f800000bf800000;
    local_108 = 0x3f8000003f800000;
    if (param_5 == (float *)0x0) {
      fVar23 = -1.0;
      cVar1 = *(char *)(param_1 + 0x184);
      uVar2 = local_120;
      uVar3 = local_118;
      uVar4 = local_110;
      uVar5 = local_108;
      uVar26 = local_f0;
    }
    else {
      fVar20 = *param_5;
      if (param_5[1] - fVar20 <= 0.0) {
        return 0;
      }
      if (param_5[3] - param_5[2] <= 0.0) {
        return 0;
      }
      lVar8 = (**(code **)(*param_2 + 0x98))(param_2);
      iVar11 = *(int *)(lVar8 + 0x14);
      fVar23 = param_5[2];
      lVar8 = (**(code **)(*param_2 + 0x98))(param_2);
      iVar12 = *(int *)(lVar8 + 0x18);
      fVar24 = param_5[1];
      lVar8 = (**(code **)(*param_2 + 0x98))(param_2);
      iVar13 = *(int *)(lVar8 + 0x14);
      fVar25 = param_5[3];
      lVar8 = (**(code **)(*param_2 + 0x98))(param_2);
      local_128 = local_88 + fVar20 / (float)iVar11;
      fStack_12c = local_84 + fVar23 / (float)iVar12;
      local_120 = CONCAT44(local_88 + fVar24 / (float)iVar13,
                           fVar25 / (float)*(int *)(lVar8 + 0x18) + local_84);
      fVar20 = *param_5;
      lVar8 = (**(code **)(*param_2 + 0x98))(param_2);
      iVar11 = *(int *)(lVar8 + 0x14);
      fVar23 = param_5[2];
      lVar8 = (**(code **)(*param_2 + 0x98))(param_2);
      iVar12 = *(int *)(lVar8 + 0x18);
      fVar24 = param_5[1];
      lVar8 = (**(code **)(*param_2 + 0x98))(param_2);
      iVar13 = *(int *)(lVar8 + 0x14);
      fVar25 = param_5[3];
      lVar8 = (**(code **)(*param_2 + 0x98))(param_2);
      local_118 = CONCAT44(0xbf800000,local_88 + fVar20 / (float)iVar11);
      local_110 = CONCAT44(local_88 + fVar24 / (float)iVar13,local_84 + fVar23 / (float)iVar12);
      local_108 = CONCAT44(fVar25 / (float)*(int *)(lVar8 + 0x18) + local_84,0x3f800000);
      fVar20 = *param_5;
      lVar8 = (**(code **)(*param_2 + 0x98))(param_2);
      iVar11 = *(int *)(lVar8 + 0x14);
      fVar23 = param_5[2];
      lVar8 = (**(code **)(*param_2 + 0x98))(param_2);
      iVar12 = *(int *)(lVar8 + 0x18);
      fVar24 = param_5[1];
      lVar8 = (**(code **)(*param_2 + 0x98))(param_2);
      iVar13 = *(int *)(lVar8 + 0x14);
      fVar25 = param_5[3];
      lVar8 = (**(code **)(*param_2 + 0x98))(param_2);
      fVar20 = local_88 + fVar20 / (float)iVar11;
      fVar23 = local_84 + fVar23 / (float)iVar12;
      local_f4 = local_88 + fVar24 / (float)iVar13;
      local_f0 = CONCAT44(0x3f800000,fVar25 / (float)*(int *)(lVar8 + 0x18) + local_84);
      cVar1 = *(char *)(param_1 + 0x184);
      uVar2 = local_120;
      uVar3 = local_118;
      uVar4 = local_110;
      uVar5 = local_108;
      uVar26 = local_f0;
    }
    if (cVar1 == '\0') {
      FUN_00647410(param_1);
      iVar11 = *(int *)(param_1 + 0x174);
      if (iVar11 < 1) {
        iVar12 = 0;
      }
      else {
        iVar12 = 0;
        if (iVar11 != 0) {
          iVar12 = *(int *)(param_1 + 0x170) / iVar11;
        }
      }
      *(int *)(param_1 + 0x17c) = iVar12;
      *(undefined4 *)(param_1 + 0x180) = 5;
      *(undefined1 *)(param_1 + 0x184) = 1;
      if (*(long *)(param_1 + 0x160) == 0) {
        *(undefined1 *)(param_1 + 0x184) = 0;
      }
      else {
        *(long *)(param_1 + 0x168) = *(long *)(param_1 + 0x160);
        *(undefined4 *)(param_1 + 0x178) = 0;
      }
    }
    FUN_006479e0(fVar28,fVar27,0,0x3f800000,param_1,0,0);
    local_120._4_4_ = (undefined4)(uVar2 >> 0x20);
    FUN_006479e0(0x3f800000,uVar2 & 0xffffffff,local_120._4_4_,0x3f800000,param_1,5,0);
    if (((*(char *)(param_1 + 0x184) != '\0') &&
        (pvVar9 = *(void **)(param_1 + 0x168), pvVar9 != (void *)0x0)) &&
       (pvVar9 < (void *)(*(long *)(param_1 + 0x160) + (long)*(int *)(param_1 + 0x170)))) {
      memcpy(pvVar9,(void *)(param_1 + 400),(long)*(int *)(param_1 + 0x174));
      *(long *)(param_1 + 0x168) = *(long *)(param_1 + 0x168) + (long)*(int *)(param_1 + 0x174);
      iVar11 = *(int *)(param_1 + 0x178) + 1;
      *(int *)(param_1 + 0x178) = iVar11;
      if (*(int *)(param_1 + 0x17c) <= iVar11) {
        FUN_006475b0(param_1,0,0);
      }
    }
    FUN_006479e0(fVar19,fVar27,0,0x3f800000,param_1,0,0);
    FUN_006479e0(0x3f800000,uVar2 & 0xffffffff,local_128,0x3f800000,param_1,5,0);
    if (((*(char *)(param_1 + 0x184) != '\0') &&
        (pvVar9 = *(void **)(param_1 + 0x168), pvVar9 != (void *)0x0)) &&
       (pvVar9 < (void *)(*(long *)(param_1 + 0x160) + (long)*(int *)(param_1 + 0x170)))) {
      memcpy(pvVar9,(void *)(param_1 + 400),(long)*(int *)(param_1 + 0x174));
      *(long *)(param_1 + 0x168) = *(long *)(param_1 + 0x168) + (long)*(int *)(param_1 + 0x174);
      iVar11 = *(int *)(param_1 + 0x178) + 1;
      *(int *)(param_1 + 0x178) = iVar11;
      if (*(int *)(param_1 + 0x17c) <= iVar11) {
        FUN_006475b0(param_1,0,0);
      }
    }
    FUN_006479e0(fVar28,fVar21,0,0x3f800000,param_1,0,0);
    FUN_006479e0(0x3f800000,fStack_12c,local_120._4_4_,0x3f800000,param_1,5,0);
    if (((*(char *)(param_1 + 0x184) != '\0') &&
        (pvVar9 = *(void **)(param_1 + 0x168), pvVar9 != (void *)0x0)) &&
       (pvVar9 < (void *)(*(long *)(param_1 + 0x160) + (long)*(int *)(param_1 + 0x170)))) {
      memcpy(pvVar9,(void *)(param_1 + 400),(long)*(int *)(param_1 + 0x174));
      *(long *)(param_1 + 0x168) = *(long *)(param_1 + 0x168) + (long)*(int *)(param_1 + 0x174);
      iVar11 = *(int *)(param_1 + 0x178) + 1;
      *(int *)(param_1 + 0x178) = iVar11;
      if (*(int *)(param_1 + 0x17c) <= iVar11) {
        FUN_006475b0(param_1,0,0);
      }
    }
    FUN_006479e0(fVar19,fVar21,0,0x3f800000,param_1,0,0);
    FUN_006479e0(0x3f800000,fStack_12c,local_128,0x3f800000,param_1,5,0);
    if (*(char *)(param_1 + 0x184) != '\0') {
      pvVar9 = *(void **)(param_1 + 0x168);
      if ((pvVar9 != (void *)0x0) &&
         (pvVar9 < (void *)(*(long *)(param_1 + 0x160) + (long)*(int *)(param_1 + 0x170)))) {
        memcpy(pvVar9,(void *)(param_1 + 400),(long)*(int *)(param_1 + 0x174));
        *(long *)(param_1 + 0x168) = *(long *)(param_1 + 0x168) + (long)*(int *)(param_1 + 0x174);
        iVar11 = *(int *)(param_1 + 0x178) + 1;
        *(int *)(param_1 + 0x178) = iVar11;
        if (*(int *)(param_1 + 0x17c) <= iVar11) {
          FUN_006475b0(param_1,0,0);
        }
      }
      if (*(char *)(param_1 + 0x184) != '\0') {
        FUN_006475b0(param_1,1,0);
        *(undefined1 *)(param_1 + 0x184) = 0;
      }
    }
    FUN_00647410(param_1);
    iVar11 = *(int *)(param_1 + 0x174);
    if (iVar11 < 1) {
      iVar12 = 0;
    }
    else {
      iVar12 = 0;
      if (iVar11 != 0) {
        iVar12 = *(int *)(param_1 + 0x170) / iVar11;
      }
    }
    *(int *)(param_1 + 0x17c) = iVar12;
    *(undefined4 *)(param_1 + 0x180) = 5;
    *(undefined1 *)(param_1 + 0x184) = 1;
    if (*(long *)(param_1 + 0x160) == 0) {
      *(undefined1 *)(param_1 + 0x184) = 0;
    }
    else {
      *(long *)(param_1 + 0x168) = *(long *)(param_1 + 0x160);
      *(undefined4 *)(param_1 + 0x178) = 0;
    }
    FUN_006479e0(fVar22 + fVar10,fVar27,0,0x3f800000,param_1,0,0);
    FUN_006479e0(0xbf800000,uVar2 & 0xffffffff,local_128,0x3f800000,param_1,5,0);
    if (((*(char *)(param_1 + 0x184) != '\0') &&
        (pvVar9 = *(void **)(param_1 + 0x168), pvVar9 != (void *)0x0)) &&
       (pvVar9 < (void *)(*(long *)(param_1 + 0x160) + (long)*(int *)(param_1 + 0x170)))) {
      memcpy(pvVar9,(void *)(param_1 + 400),(long)*(int *)(param_1 + 0x174));
      *(long *)(param_1 + 0x168) = *(long *)(param_1 + 0x168) + (long)*(int *)(param_1 + 0x174);
      iVar11 = *(int *)(param_1 + 0x178) + 1;
      *(int *)(param_1 + 0x178) = iVar11;
      if (*(int *)(param_1 + 0x17c) <= iVar11) {
        FUN_006475b0(param_1,0,0);
      }
    }
    FUN_006479e0(fVar17,fVar27,0,0x3f800000,param_1,0,0);
    FUN_006479e0(0xbf800000,uVar2 & 0xffffffff,local_120._4_4_,0x3f800000,param_1,5,0);
    if (((*(char *)(param_1 + 0x184) != '\0') &&
        (pvVar9 = *(void **)(param_1 + 0x168), pvVar9 != (void *)0x0)) &&
       (pvVar9 < (void *)(*(long *)(param_1 + 0x160) + (long)*(int *)(param_1 + 0x170)))) {
      memcpy(pvVar9,(void *)(param_1 + 400),(long)*(int *)(param_1 + 0x174));
      *(long *)(param_1 + 0x168) = *(long *)(param_1 + 0x168) + (long)*(int *)(param_1 + 0x174);
      iVar11 = *(int *)(param_1 + 0x178) + 1;
      *(int *)(param_1 + 0x178) = iVar11;
      if (*(int *)(param_1 + 0x17c) <= iVar11) {
        FUN_006475b0(param_1,0,0);
      }
    }
    FUN_006479e0(fVar22 + fVar10,fVar21,0,0x3f800000,param_1,0,0);
    FUN_006479e0(0xbf800000,fStack_12c,local_128,0x3f800000,param_1,5,0);
    if (((*(char *)(param_1 + 0x184) != '\0') &&
        (pvVar9 = *(void **)(param_1 + 0x168), pvVar9 != (void *)0x0)) &&
       (pvVar9 < (void *)(*(long *)(param_1 + 0x160) + (long)*(int *)(param_1 + 0x170)))) {
      memcpy(pvVar9,(void *)(param_1 + 400),(long)*(int *)(param_1 + 0x174));
      *(long *)(param_1 + 0x168) = *(long *)(param_1 + 0x168) + (long)*(int *)(param_1 + 0x174);
      iVar11 = *(int *)(param_1 + 0x178) + 1;
      *(int *)(param_1 + 0x178) = iVar11;
      if (*(int *)(param_1 + 0x17c) <= iVar11) {
        FUN_006475b0(param_1,0,0);
      }
    }
    FUN_006479e0(fVar17,fVar21,0,0x3f800000,param_1,0,0);
    FUN_006479e0(0xbf800000,fStack_12c,local_120._4_4_,0x3f800000,param_1,5,0);
    if (*(char *)(param_1 + 0x184) != '\0') {
      pvVar9 = *(void **)(param_1 + 0x168);
      if ((pvVar9 != (void *)0x0) &&
         (pvVar9 < (void *)(*(long *)(param_1 + 0x160) + (long)*(int *)(param_1 + 0x170)))) {
        memcpy(pvVar9,(void *)(param_1 + 400),(long)*(int *)(param_1 + 0x174));
        *(long *)(param_1 + 0x168) = *(long *)(param_1 + 0x168) + (long)*(int *)(param_1 + 0x174);
        iVar11 = *(int *)(param_1 + 0x178) + 1;
        *(int *)(param_1 + 0x178) = iVar11;
        if (*(int *)(param_1 + 0x17c) <= iVar11) {
          FUN_006475b0(param_1,0,0);
        }
      }
      if (*(char *)(param_1 + 0x184) != '\0') {
        FUN_006475b0(param_1,1,0);
        *(undefined1 *)(param_1 + 0x184) = 0;
      }
    }
    FUN_00647410(param_1);
    iVar11 = *(int *)(param_1 + 0x174);
    if (iVar11 < 1) {
      iVar12 = 0;
    }
    else {
      iVar12 = 0;
      if (iVar11 != 0) {
        iVar12 = *(int *)(param_1 + 0x170) / iVar11;
      }
    }
    *(int *)(param_1 + 0x17c) = iVar12;
    *(undefined4 *)(param_1 + 0x180) = 5;
    *(undefined1 *)(param_1 + 0x184) = 1;
    if (*(long *)(param_1 + 0x160) == 0) {
      *(undefined1 *)(param_1 + 0x184) = 0;
    }
    else {
      *(long *)(param_1 + 0x168) = *(long *)(param_1 + 0x160);
      *(undefined4 *)(param_1 + 0x178) = 0;
    }
    FUN_006479e0(fVar17,fVar18 + fVar14,0,0x3f800000,param_1,0,0);
    FUN_006479e0(uVar3 & 0xffffffff,uVar5 & 0xffffffff,uVar4 & 0xffffffff,0x3f800000,param_1,5,0);
    if (((*(char *)(param_1 + 0x184) != '\0') &&
        (pvVar9 = *(void **)(param_1 + 0x168), pvVar9 != (void *)0x0)) &&
       (pvVar9 < (void *)(*(long *)(param_1 + 0x160) + (long)*(int *)(param_1 + 0x170)))) {
      memcpy(pvVar9,(void *)(param_1 + 400),(long)*(int *)(param_1 + 0x174));
      *(long *)(param_1 + 0x168) = *(long *)(param_1 + 0x168) + (long)*(int *)(param_1 + 0x174);
      iVar11 = *(int *)(param_1 + 0x178) + 1;
      *(int *)(param_1 + 0x178) = iVar11;
      if (*(int *)(param_1 + 0x17c) <= iVar11) {
        FUN_006475b0(param_1,0,0);
      }
    }
    FUN_006479e0(fVar28,fVar18 + fVar14,0,0x3f800000,param_1,0,0);
    local_110._4_4_ = (undefined4)(uVar4 >> 0x20);
    FUN_006479e0(local_110._4_4_,uVar5 & 0xffffffff,uVar4 & 0xffffffff,0x3f800000,param_1,5,0);
    if (((*(char *)(param_1 + 0x184) != '\0') &&
        (pvVar9 = *(void **)(param_1 + 0x168), pvVar9 != (void *)0x0)) &&
       (pvVar9 < (void *)(*(long *)(param_1 + 0x160) + (long)*(int *)(param_1 + 0x170)))) {
      memcpy(pvVar9,(void *)(param_1 + 400),(long)*(int *)(param_1 + 0x174));
      *(long *)(param_1 + 0x168) = *(long *)(param_1 + 0x168) + (long)*(int *)(param_1 + 0x174);
      iVar11 = *(int *)(param_1 + 0x178) + 1;
      *(int *)(param_1 + 0x178) = iVar11;
      if (*(int *)(param_1 + 0x17c) <= iVar11) {
        FUN_006475b0(param_1,0,0);
      }
    }
    FUN_006479e0(fVar17,fVar27,0,0x3f800000,param_1,0,0);
    local_108._4_4_ = (undefined4)(uVar5 >> 0x20);
    FUN_006479e0(uVar3 & 0xffffffff,uVar5 & 0xffffffff,local_108._4_4_,0x3f800000,param_1,5,0);
    if (((*(char *)(param_1 + 0x184) != '\0') &&
        (pvVar9 = *(void **)(param_1 + 0x168), pvVar9 != (void *)0x0)) &&
       (pvVar9 < (void *)(*(long *)(param_1 + 0x160) + (long)*(int *)(param_1 + 0x170)))) {
      memcpy(pvVar9,(void *)(param_1 + 400),(long)*(int *)(param_1 + 0x174));
      *(long *)(param_1 + 0x168) = *(long *)(param_1 + 0x168) + (long)*(int *)(param_1 + 0x174);
      iVar11 = *(int *)(param_1 + 0x178) + 1;
      *(int *)(param_1 + 0x178) = iVar11;
      if (*(int *)(param_1 + 0x17c) <= iVar11) {
        FUN_006475b0(param_1,0,0);
      }
    }
    FUN_006479e0(fVar28,fVar27,0,0x3f800000,param_1,0,0);
    FUN_006479e0(local_110._4_4_,uVar5 & 0xffffffff,local_108._4_4_,0x3f800000,param_1,5,0);
    if (*(char *)(param_1 + 0x184) != '\0') {
      pvVar9 = *(void **)(param_1 + 0x168);
      if ((pvVar9 != (void *)0x0) &&
         (pvVar9 < (void *)(*(long *)(param_1 + 0x160) + (long)*(int *)(param_1 + 0x170)))) {
        memcpy(pvVar9,(void *)(param_1 + 400),(long)*(int *)(param_1 + 0x174));
        *(long *)(param_1 + 0x168) = *(long *)(param_1 + 0x168) + (long)*(int *)(param_1 + 0x174);
        iVar11 = *(int *)(param_1 + 0x178) + 1;
        *(int *)(param_1 + 0x178) = iVar11;
        if (*(int *)(param_1 + 0x17c) <= iVar11) {
          FUN_006475b0(param_1,0,0);
        }
      }
      if (*(char *)(param_1 + 0x184) != '\0') {
        FUN_006475b0(param_1,1,0);
        *(undefined1 *)(param_1 + 0x184) = 0;
      }
    }
    FUN_00647410(param_1);
    iVar11 = *(int *)(param_1 + 0x174);
    if (iVar11 < 1) {
      iVar12 = 0;
    }
    else {
      iVar12 = 0;
      if (iVar11 != 0) {
        iVar12 = *(int *)(param_1 + 0x170) / iVar11;
      }
    }
    *(int *)(param_1 + 0x17c) = iVar12;
    *(undefined4 *)(param_1 + 0x180) = 5;
    *(undefined1 *)(param_1 + 0x184) = 1;
    if (*(long *)(param_1 + 0x160) == 0) {
      *(undefined1 *)(param_1 + 0x184) = 0;
    }
    else {
      *(long *)(param_1 + 0x168) = *(long *)(param_1 + 0x160);
      *(undefined4 *)(param_1 + 0x178) = 0;
    }
    FUN_006479e0(fVar17,fVar21,0,0x3f800000,param_1,0,0);
    local_118._4_4_ = (undefined4)(uVar3 >> 0x20);
    FUN_006479e0(uVar3 & 0xffffffff,local_118._4_4_,local_108._4_4_,0x3f800000,param_1,5,0);
    if (((*(char *)(param_1 + 0x184) != '\0') &&
        (pvVar9 = *(void **)(param_1 + 0x168), pvVar9 != (void *)0x0)) &&
       (pvVar9 < (void *)(*(long *)(param_1 + 0x160) + (long)*(int *)(param_1 + 0x170)))) {
      memcpy(pvVar9,(void *)(param_1 + 400),(long)*(int *)(param_1 + 0x174));
      *(long *)(param_1 + 0x168) = *(long *)(param_1 + 0x168) + (long)*(int *)(param_1 + 0x174);
      iVar11 = *(int *)(param_1 + 0x178) + 1;
      *(int *)(param_1 + 0x178) = iVar11;
      if (*(int *)(param_1 + 0x17c) <= iVar11) {
        FUN_006475b0(param_1,0,0);
      }
    }
    FUN_006479e0(fVar28,fVar21,0,0x3f800000,param_1,0,0);
    FUN_006479e0(local_110._4_4_,local_118._4_4_,local_108._4_4_,0x3f800000,param_1,5,0);
    if (((*(char *)(param_1 + 0x184) != '\0') &&
        (pvVar9 = *(void **)(param_1 + 0x168), pvVar9 != (void *)0x0)) &&
       (pvVar9 < (void *)(*(long *)(param_1 + 0x160) + (long)*(int *)(param_1 + 0x170)))) {
      memcpy(pvVar9,(void *)(param_1 + 400),(long)*(int *)(param_1 + 0x174));
      *(long *)(param_1 + 0x168) = *(long *)(param_1 + 0x168) + (long)*(int *)(param_1 + 0x174);
      iVar11 = *(int *)(param_1 + 0x178) + 1;
      *(int *)(param_1 + 0x178) = iVar11;
      if (*(int *)(param_1 + 0x17c) <= iVar11) {
        FUN_006475b0(param_1,0,0);
      }
    }
    FUN_006479e0(fVar17,fVar15,0,0x3f800000,param_1,0,0);
    FUN_006479e0(uVar3 & 0xffffffff,local_118._4_4_,uVar4 & 0xffffffff,0x3f800000,param_1,5,0);
    if (((*(char *)(param_1 + 0x184) != '\0') &&
        (pvVar9 = *(void **)(param_1 + 0x168), pvVar9 != (void *)0x0)) &&
       (pvVar9 < (void *)(*(long *)(param_1 + 0x160) + (long)*(int *)(param_1 + 0x170)))) {
      memcpy(pvVar9,(void *)(param_1 + 400),(long)*(int *)(param_1 + 0x174));
      *(long *)(param_1 + 0x168) = *(long *)(param_1 + 0x168) + (long)*(int *)(param_1 + 0x174);
      iVar11 = *(int *)(param_1 + 0x178) + 1;
      *(int *)(param_1 + 0x178) = iVar11;
      if (*(int *)(param_1 + 0x17c) <= iVar11) {
        FUN_006475b0(param_1,0,0);
      }
    }
    FUN_006479e0(fVar28,fVar15,0,0x3f800000,param_1,0,0);
    FUN_006479e0(local_110._4_4_,local_118._4_4_,uVar4 & 0xffffffff,0x3f800000,param_1,5,0);
    if (*(char *)(param_1 + 0x184) != '\0') {
      pvVar9 = *(void **)(param_1 + 0x168);
      if ((pvVar9 != (void *)0x0) &&
         (pvVar9 < (void *)(*(long *)(param_1 + 0x160) + (long)*(int *)(param_1 + 0x170)))) {
        memcpy(pvVar9,(void *)(param_1 + 400),(long)*(int *)(param_1 + 0x174));
        *(long *)(param_1 + 0x168) = *(long *)(param_1 + 0x168) + (long)*(int *)(param_1 + 0x174);
        iVar11 = *(int *)(param_1 + 0x178) + 1;
        *(int *)(param_1 + 0x178) = iVar11;
        if (*(int *)(param_1 + 0x17c) <= iVar11) {
          FUN_006475b0(param_1,0,0);
        }
      }
      if (*(char *)(param_1 + 0x184) != '\0') {
        FUN_006475b0(param_1,1,0);
        *(undefined1 *)(param_1 + 0x184) = 0;
      }
    }
    FUN_00647410(param_1);
    iVar11 = *(int *)(param_1 + 0x174);
    if (iVar11 < 1) {
      iVar12 = 0;
    }
    else {
      iVar12 = 0;
      if (iVar11 != 0) {
        iVar12 = *(int *)(param_1 + 0x170) / iVar11;
      }
    }
    *(int *)(param_1 + 0x17c) = iVar12;
    *(undefined4 *)(param_1 + 0x180) = 5;
    *(undefined1 *)(param_1 + 0x184) = 1;
    if (*(long *)(param_1 + 0x160) == 0) {
      *(undefined1 *)(param_1 + 0x184) = 0;
    }
    else {
      *(long *)(param_1 + 0x168) = *(long *)(param_1 + 0x160);
      *(undefined4 *)(param_1 + 0x178) = 0;
    }
    FUN_006479e0(fVar17,fVar27,0,0x3f800000,param_1,0,0);
    local_f0._4_4_ = (undefined4)(uVar26 >> 0x20);
    FUN_006479e0(fVar20,uVar26 & 0xffffffff,local_f0._4_4_,0x3f800000,param_1,5,0);
    if (((*(char *)(param_1 + 0x184) != '\0') &&
        (pvVar9 = *(void **)(param_1 + 0x168), pvVar9 != (void *)0x0)) &&
       (pvVar9 < (void *)(*(long *)(param_1 + 0x160) + (long)*(int *)(param_1 + 0x170)))) {
      memcpy(pvVar9,(void *)(param_1 + 400),(long)*(int *)(param_1 + 0x174));
      *(long *)(param_1 + 0x168) = *(long *)(param_1 + 0x168) + (long)*(int *)(param_1 + 0x174);
      iVar11 = *(int *)(param_1 + 0x178) + 1;
      *(int *)(param_1 + 0x178) = iVar11;
      if (*(int *)(param_1 + 0x17c) <= iVar11) {
        FUN_006475b0(param_1,0,0);
      }
    }
    FUN_006479e0(fVar28,fVar27,0,0x3f800000,param_1,0,0);
    uVar26 = uVar26 & 0xffffffff;
    FUN_006479e0(local_f4,uVar26,local_f0._4_4_,0x3f800000,param_1,5,0);
    if (((*(char *)(param_1 + 0x184) != '\0') &&
        (pvVar9 = *(void **)(param_1 + 0x168), pvVar9 != (void *)0x0)) &&
       (pvVar9 < (void *)(*(long *)(param_1 + 0x160) + (long)*(int *)(param_1 + 0x170)))) {
      memcpy(pvVar9,(void *)(param_1 + 400),(long)*(int *)(param_1 + 0x174));
      *(long *)(param_1 + 0x168) = *(long *)(param_1 + 0x168) + (long)*(int *)(param_1 + 0x174);
      iVar11 = *(int *)(param_1 + 0x178) + 1;
      *(int *)(param_1 + 0x178) = iVar11;
      if (*(int *)(param_1 + 0x17c) <= iVar11) {
        FUN_006475b0(param_1,0,0);
      }
    }
    FUN_006479e0(fVar17,fVar21,0,0x3f800000,param_1,0,0);
    FUN_006479e0(fVar20,fVar23,local_f0._4_4_,0x3f800000,param_1,5,0);
    if (((*(char *)(param_1 + 0x184) != '\0') &&
        (pvVar9 = *(void **)(param_1 + 0x168), pvVar9 != (void *)0x0)) &&
       (pvVar9 < (void *)(*(long *)(param_1 + 0x160) + (long)*(int *)(param_1 + 0x170)))) {
      memcpy(pvVar9,(void *)(param_1 + 400),(long)*(int *)(param_1 + 0x174));
      *(long *)(param_1 + 0x168) = *(long *)(param_1 + 0x168) + (long)*(int *)(param_1 + 0x174);
      iVar11 = *(int *)(param_1 + 0x178) + 1;
      *(int *)(param_1 + 0x178) = iVar11;
      if (*(int *)(param_1 + 0x17c) <= iVar11) {
        FUN_006475b0(param_1,0,0);
      }
    }
    FUN_006479e0(fVar28,fVar21,0,0x3f800000,param_1,0,0);
    FUN_006479e0(local_f4,fVar23,local_f0._4_4_,0x3f800000,param_1,5,0);
    if (*(char *)(param_1 + 0x184) != '\0') {
      pvVar9 = *(void **)(param_1 + 0x168);
      if ((pvVar9 != (void *)0x0) &&
         (pvVar9 < (void *)(*(long *)(param_1 + 0x160) + (long)*(int *)(param_1 + 0x170)))) {
        memcpy(pvVar9,(void *)(param_1 + 400),(long)*(int *)(param_1 + 0x174));
        *(long *)(param_1 + 0x168) = *(long *)(param_1 + 0x168) + (long)*(int *)(param_1 + 0x174);
        iVar11 = *(int *)(param_1 + 0x178) + 1;
        *(int *)(param_1 + 0x178) = iVar11;
        if (*(int *)(param_1 + 0x17c) <= iVar11) {
          FUN_006475b0(param_1,0,0);
        }
      }
      if (*(char *)(param_1 + 0x184) != '\0') {
        FUN_006475b0(param_1,1,0);
        *(undefined1 *)(param_1 + 0x184) = 0;
      }
    }
    FUN_00647410(param_1);
    iVar11 = *(int *)(param_1 + 0x174);
    if (iVar11 < 1) {
      iVar12 = 0;
    }
    else {
      iVar12 = 0;
      if (iVar11 != 0) {
        iVar12 = *(int *)(param_1 + 0x170) / iVar11;
      }
    }
    *(int *)(param_1 + 0x17c) = iVar12;
    *(undefined4 *)(param_1 + 0x180) = 5;
    *(undefined1 *)(param_1 + 0x184) = 1;
    if (*(long *)(param_1 + 0x160) == 0) {
      *(undefined1 *)(param_1 + 0x184) = 0;
    }
    else {
      *(long *)(param_1 + 0x168) = *(long *)(param_1 + 0x160);
      *(undefined4 *)(param_1 + 0x178) = 0;
    }
    FUN_006479e0(fVar19,fVar27,0,0x3f800000,param_1,0,0);
    FUN_006479e0(local_f4,uVar26,0xbf800000,0x3f800000,param_1,5,0);
    if (((*(char *)(param_1 + 0x184) != '\0') &&
        (pvVar9 = *(void **)(param_1 + 0x168), pvVar9 != (void *)0x0)) &&
       (pvVar9 < (void *)(*(long *)(param_1 + 0x160) + (long)*(int *)(param_1 + 0x170)))) {
      memcpy(pvVar9,(void *)(param_1 + 400),(long)*(int *)(param_1 + 0x174));
      *(long *)(param_1 + 0x168) = *(long *)(param_1 + 0x168) + (long)*(int *)(param_1 + 0x174);
      iVar11 = *(int *)(param_1 + 0x178) + 1;
      *(int *)(param_1 + 0x178) = iVar11;
      if (*(int *)(param_1 + 0x17c) <= iVar11) {
        FUN_006475b0(param_1,0,0);
      }
    }
    FUN_006479e0(fVar16,fVar27,0,0x3f800000,param_1,0,0);
    FUN_006479e0(fVar20,uVar26,0xbf800000,0x3f800000,param_1,5,0);
    if (((*(char *)(param_1 + 0x184) != '\0') &&
        (pvVar9 = *(void **)(param_1 + 0x168), pvVar9 != (void *)0x0)) &&
       (pvVar9 < (void *)(*(long *)(param_1 + 0x160) + (long)*(int *)(param_1 + 0x170)))) {
      memcpy(pvVar9,(void *)(param_1 + 400),(long)*(int *)(param_1 + 0x174));
      *(long *)(param_1 + 0x168) = *(long *)(param_1 + 0x168) + (long)*(int *)(param_1 + 0x174);
      iVar11 = *(int *)(param_1 + 0x178) + 1;
      *(int *)(param_1 + 0x178) = iVar11;
      if (*(int *)(param_1 + 0x17c) <= iVar11) {
        FUN_006475b0(param_1,0,0);
      }
    }
    FUN_006479e0(fVar19,fVar21,0,0x3f800000,param_1,0,0);
    FUN_006479e0(local_f4,fVar23,0xbf800000,0x3f800000,param_1,5,0);
    if (((*(char *)(param_1 + 0x184) != '\0') &&
        (pvVar9 = *(void **)(param_1 + 0x168), pvVar9 != (void *)0x0)) &&
       (pvVar9 < (void *)(*(long *)(param_1 + 0x160) + (long)*(int *)(param_1 + 0x170)))) {
      memcpy(pvVar9,(void *)(param_1 + 400),(long)*(int *)(param_1 + 0x174));
      *(long *)(param_1 + 0x168) = *(long *)(param_1 + 0x168) + (long)*(int *)(param_1 + 0x174);
      iVar11 = *(int *)(param_1 + 0x178) + 1;
      *(int *)(param_1 + 0x178) = iVar11;
      if (*(int *)(param_1 + 0x17c) <= iVar11) {
        FUN_006475b0(param_1,0,0);
      }
    }
    FUN_006479e0(fVar16,fVar21,0,0x3f800000,param_1,0,0);
    FUN_006479e0(fVar20,fVar23,0xbf800000,0x3f800000,param_1,5,0);
    if (*(char *)(param_1 + 0x184) != '\0') {
      pvVar9 = *(void **)(param_1 + 0x168);
      if ((pvVar9 != (void *)0x0) &&
         (pvVar9 < (void *)(*(long *)(param_1 + 0x160) + (long)*(int *)(param_1 + 0x170)))) {
        memcpy(pvVar9,(void *)(param_1 + 400),(long)*(int *)(param_1 + 0x174));
        *(long *)(param_1 + 0x168) = *(long *)(param_1 + 0x168) + (long)*(int *)(param_1 + 0x174);
        iVar11 = *(int *)(param_1 + 0x178) + 1;
        *(int *)(param_1 + 0x178) = iVar11;
        if (*(int *)(param_1 + 0x17c) <= iVar11) {
          FUN_006475b0(param_1,0,0);
        }
      }
      if (*(char *)(param_1 + 0x184) != '\0') {
        FUN_006475b0(param_1,1,0);
        *(undefined1 *)(param_1 + 0x184) = 0;
      }
    }
  }
  return 1;
}


