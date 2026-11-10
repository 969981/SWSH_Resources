/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003a6200; name: FUN_003a6200
 */


void FUN_003a6200(long *param_1,ulong param_2,long *param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  uint *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined4 local_38;
  undefined4 local_34;
  
  uVar5 = (uint)param_2;
  if (uVar5 == 0) {
    local_38 = 0;
    FUN_001ed3f0(param_1,param_2,&local_38);
    FUN_001ed4d0(param_1,(int)param_1[1]);
  }
  else {
    uVar2 = uVar5 + (uVar5 >> 2);
    uVar3 = *(uint *)((long)param_1 + 0xc) & 0x7fffffff;
    uVar4 = 0;
    if (uVar3 - uVar2 < 0x401 || (*(uint *)((long)param_1 + 0xc) >> 1 & 0x3fffffff) <= uVar2) {
      uVar4 = uVar3;
    }
    if (uVar4 < uVar5) {
      local_34 = 0;
      FUN_001ed3f0(param_1,0,&local_34);
      FUN_001ed4d0(param_1,(int)param_1[1]);
      if ((*(uint *)((long)param_1 + 0xc) & 0x7fffffff) < uVar2) {
        FUN_001ed4d0(param_1,uVar2);
      }
    }
    lVar6 = *param_1;
    *(uint *)(param_1 + 1) = uVar5;
    if ((param_2 & 0xffffffff) - 1 < 3) {
      lVar10 = 0;
    }
    else {
      lVar10 = 0;
      puVar11 = (undefined8 *)(lVar6 + 8);
      do {
        lVar10 = lVar10 + 4;
        puVar11[-1] = 0xffffffffffffffff;
        *puVar11 = 0xffffffffffffffff;
        puVar11 = puVar11 + 2;
      } while ((param_2 & 0xffffffff) - (param_2 & 3) != lVar10);
    }
    if ((param_2 & 3) != 0) {
      lVar13 = -(param_2 & 3);
      puVar7 = (undefined4 *)(lVar6 + lVar10 * 4);
      do {
        lVar13 = lVar13 + 1;
        *puVar7 = 0xffffffff;
        puVar7 = puVar7 + 1;
      } while (lVar13 != 0);
    }
    uVar5 = *(uint *)(param_3 + 8);
    if (uVar5 != 0) {
      lVar6 = param_3[2];
      lVar10 = *param_3;
      uVar9 = 0;
      do {
        puVar12 = (uint *)(lVar6 + uVar9 * 0x1c + 0x18);
        uVar2 = *puVar12;
        if ((uVar2 & 1) != 0) {
          uVar3 = uVar2 >> 1 & 0xf;
          if (uVar3 != 0) {
            lVar13 = *param_1;
            uVar8 = (undefined4)uVar9;
            *(undefined4 *)(lVar13 + (ulong)*(uint *)(lVar10 + (ulong)(uVar2 >> 5) * 4) * 4) = uVar8
            ;
            if (uVar3 != 1) {
              uVar2 = (uVar2 >> 1) + 3 & 3;
              if ((ulong)uVar3 - 2 < 3) {
                lVar15 = 1;
              }
              else {
                lVar14 = 0;
                do {
                  lVar15 = lVar14;
                  lVar14 = lVar15 * 4;
                  *(undefined4 *)
                   (lVar13 + (ulong)*(uint *)(lVar10 + (ulong)(*puVar12 >> 5) * 4 + lVar14 + 4) * 4)
                       = uVar8;
                  *(undefined4 *)
                   (lVar13 + (ulong)*(uint *)(lVar10 + (ulong)(*puVar12 >> 5) * 4 + lVar14 + 8) * 4)
                       = uVar8;
                  *(undefined4 *)
                   (lVar13 + (ulong)*(uint *)(lVar10 + (ulong)(*puVar12 >> 5) * 4 + lVar14 + 0xc) *
                             4) = uVar8;
                  *(undefined4 *)
                   (lVar13 + (ulong)*(uint *)(lVar10 + (ulong)(*puVar12 >> 5) * 4 + lVar14 + 0x10) *
                             4) = uVar8;
                  lVar14 = lVar15 + 4;
                } while (((ulong)uVar3 - 1) - (ulong)uVar2 != lVar15 + 4);
                lVar15 = lVar15 + 5;
              }
              if (uVar2 != 0) {
                lVar15 = lVar10 + lVar15 * 4;
                lVar14 = -(ulong)uVar2;
                do {
                  lVar14 = lVar14 + 1;
                  puVar1 = (uint *)(lVar15 + (ulong)(*puVar12 >> 5) * 4);
                  lVar15 = lVar15 + 4;
                  *(undefined4 *)(lVar13 + (ulong)*puVar1 * 4) = uVar8;
                } while (lVar14 != 0);
              }
            }
          }
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 != uVar5);
    }
  }
  return;
}


