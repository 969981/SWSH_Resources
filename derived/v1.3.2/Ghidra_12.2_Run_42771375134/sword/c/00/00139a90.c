/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00139a90; name: FUN_00139a90
 */


uint FUN_00139a90(uint *param_1,uint *param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  undefined2 uVar4;
  undefined8 uVar5;
  uint *puVar6;
  bool bVar7;
  uint uVar8;
  long lVar9;
  uint *puVar10;
  uint uVar11;
  ulong uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined4 *puVar16;
  undefined4 local_468;
  undefined4 local_64;
  
  uVar11 = param_1[1];
  if (uVar11 == 0xffffffff) {
    uVar11 = param_1[10];
    uVar15 = param_1[0xb] & 0x7fffffff;
    uVar1 = uVar11 + 1;
    uVar8 = uVar11;
    if (uVar15 < uVar1) {
      uVar13 = 2;
      if (uVar15 != 0) {
        uVar13 = param_1[0xb] << 1;
      }
      if (uVar13 <= uVar1) {
        uVar13 = uVar1;
      }
      if (uVar15 < uVar13) {
        FUN_0013c030(param_1 + 8);
        uVar8 = param_1[10];
      }
    }
    puVar16 = (undefined4 *)(*(long *)(param_1 + 8) + (ulong)uVar8 * 0xc);
    uVar15 = 0;
    param_1[10] = uVar1;
  }
  else {
    puVar16 = (undefined4 *)(*(long *)(param_1 + 8) + (ulong)uVar11 * 0xc);
    param_1[1] = puVar16[2];
    uVar15 = (*(ushort *)((long)puVar16 + 6) >> 1 ^ 0xffffffff) & 1;
  }
  uVar8 = *param_1;
  uVar1 = param_4 & 1 | uVar15 << 1 | uVar11 << 2;
  if (uVar8 == 0) {
    uVar13 = 0;
    bVar7 = true;
  }
  else {
    uVar12 = 0;
    uVar13 = 0;
    bVar7 = true;
    puVar6 = (uint *)(*(long *)(param_1 + 4) + 0x10);
    do {
      if (*param_2 <= *puVar6) {
        if (puVar6[-3] <= param_2[3]) {
          if (param_2[1] <= puVar6[1]) {
            if (puVar6[-2] <= param_2[4]) {
              if (param_2[2] <= puVar6[2]) {
                if (puVar6[-1] <= param_2[5]) {
                  bVar3 = false;
                  if ((((puVar6[-3] <= *param_2) && (puVar6[-2] <= param_2[1])) &&
                      (bVar3 = false, puVar6[-1] <= param_2[2])) &&
                     ((param_2[3] <= *puVar6 && (param_2[4] <= puVar6[1])))) {
                    bVar3 = (bool)(bVar7 & param_2[5] <= puVar6[2]);
                  }
                  bVar7 = bVar3;
                  if (*(int *)(*(long *)(puVar6 + 4) + 0x70) == 0xffff) {
                    uVar5 = FUN_00400880();
                    FUN_00400890(uVar5,0x20,
                                 "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelAABB/src/BpBroadPhaseMBP.cpp"
                                 ,0xa3f,
                                 "MBP::addObject: 64K objects in single region reached. Some collisions might be lost."
                                );
                    uVar14 = uVar13;
                  }
                  else {
                    uVar14 = uVar13 + 1;
                    uVar4 = FUN_001372a0(*(long *)(puVar6 + 4),param_2,uVar1,param_4 & 1);
                    *(undefined2 *)(&local_468 + uVar13) = uVar4;
                    *(short *)((long)&local_468 + (ulong)uVar13 * 4 + 2) = (short)uVar12;
                  }
                  uVar13 = uVar14;
                }
              }
            }
          }
        }
      }
      uVar12 = uVar12 + 1;
      puVar6 = puVar6 + 0xe;
    } while (uVar8 != uVar12);
    if (uVar13 != 0) {
      if (uVar13 == 1) {
        puVar16[2] = local_468;
      }
      else {
        puVar6 = param_1 + (ulong)uVar13 * 4 + 0x26;
        uVar8 = param_1[(ulong)uVar13 + 0x42a];
        if (uVar8 == 0xffffffff) {
          puVar10 = param_1 + (ulong)uVar13 * 4 + 0x28;
          uVar8 = *puVar10;
          uVar12 = (ulong)uVar8;
          puVar16[2] = uVar8;
          uVar14 = param_1[(ulong)uVar13 * 4 + 0x29] & 0x7fffffff;
          uVar8 = uVar8 + uVar13;
          if (uVar14 < uVar8) {
            uVar2 = 2;
            if (uVar14 != 0) {
              uVar2 = param_1[(ulong)uVar13 * 4 + 0x29] << 1;
            }
            if (uVar2 <= uVar8) {
              uVar2 = uVar8;
            }
            if (uVar14 < uVar2) {
              FUN_001ed4d0(puVar6);
              uVar12 = (ulong)*puVar10;
            }
          }
          lVar9 = *(long *)puVar6;
          *puVar10 = uVar8;
          puVar6 = (uint *)(lVar9 + uVar12 * 4);
        }
        else {
          puVar16[2] = uVar8;
          puVar6 = (uint *)(*(long *)puVar6 + (ulong)uVar8 * 4);
          param_1[(ulong)uVar13 + 0x42a] = *puVar6;
        }
        memcpy(puVar6,&local_468,(ulong)(uVar13 << 2));
      }
    }
  }
  *(short *)(puVar16 + 1) = (short)uVar13;
  uVar4 = 0;
  if (uVar15 != 0) {
    uVar4 = 2;
  }
  puVar6 = param_1 + 0x534;
  uVar15 = uVar11 >> 5;
  if ((uVar13 == 0) || (!bVar7)) {
    if (param_1[0x536] <= uVar15) {
      FUN_00136460(puVar6,uVar11);
    }
    *(uint *)(*(long *)puVar6 + (ulong)uVar15 * 4) =
         *(uint *)(*(long *)puVar6 + (ulong)uVar15 * 4) | 1 << (ulong)(uVar11 & 0x1f);
  }
  else {
    if (param_1[0x536] <= uVar15) {
      FUN_00136460(puVar6,uVar11);
    }
    *(uint *)(*(long *)puVar6 + (ulong)uVar15 * 4) =
         *(uint *)(*(long *)puVar6 + (ulong)uVar15 * 4) &
         (1 << (ulong)(uVar11 & 0x1f) ^ 0xffffffffU);
  }
  if (uVar13 == 0) {
    puVar16[2] = uVar1;
    local_64 = param_3;
    if (param_1[0x52e] < (param_1[0x52f] & 0x7fffffff)) {
      *(undefined4 *)(*(long *)(param_1 + 0x52c) + (ulong)param_1[0x52e] * 4) = param_3;
      param_1[0x52e] = param_1[0x52e] + 1;
    }
    else {
      FUN_001b4230(param_1 + 0x52c,&local_64);
    }
  }
  if ((param_4 & 1) == 0) {
    if (param_1[0x20] <= uVar15) {
      FUN_00136460(param_1 + 0x1e,uVar11);
    }
    lVar9 = *(long *)(param_1 + 0x1e);
    *(uint *)(lVar9 + (ulong)uVar15 * 4) =
         *(uint *)(lVar9 + (ulong)uVar15 * 4) | 1 << (ulong)(uVar11 & 0x1f);
  }
  *(undefined2 *)((long)puVar16 + 6) = uVar4;
  *puVar16 = param_3;
  return uVar1;
}


