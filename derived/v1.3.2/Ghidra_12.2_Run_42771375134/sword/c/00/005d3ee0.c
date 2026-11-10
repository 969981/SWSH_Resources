/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005d3ee0; name: FUN_005d3ee0
 */


void FUN_005d3ee0(undefined8 param_1,long *param_2,uint param_3,long param_4,undefined4 param_5)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  size_t __n;
  long lVar17;
  
  iVar2 = (**(code **)(*param_2 + 0xe0))(param_2,param_5,0);
  iVar3 = (**(code **)(*param_2 + 0xe8))(param_2,param_5,0);
  if ((-1 < iVar2) && (iVar3 != 0)) {
    iVar4 = FUN_005ed170(iVar3);
    uVar5 = (**(code **)(*param_2 + 0xd8))(param_2,param_5,0);
    uVar7 = (**(code **)(*param_2 + 0xd0))(param_2,uVar5);
    if (0 < (int)uVar7) {
      if ((int)param_3 < 1) {
        iVar2 = 1;
        do {
          (**(code **)(*param_2 + 0xe0))(param_2,param_5,iVar2);
          (**(code **)(*param_2 + 0xe8))(param_2,param_5,iVar2);
          iVar2 = iVar2 + 1;
        } while (iVar2 != 0x20);
      }
      else {
        lVar9 = (long)iVar2;
        lVar10 = (long)(int)uVar7;
        uVar11 = -(uVar7 >> 0x1f & 1) & 0xfffffff800000000 | (uVar7 & 0xffffffff) << 3;
        uVar8 = (ulong)param_3;
        lVar12 = uVar11 - lVar10;
        uVar13 = -(uVar7 >> 0x1f & 1) & 0xfffffffe00000000 | (uVar7 & 0xffffffff) << 1;
        lVar1 = uVar13 + lVar10;
        uVar7 = -(uVar7 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar7 & 0xffffffff) << 2;
        __n = (size_t)iVar4;
        iVar2 = 1;
        do {
          iVar4 = (**(code **)(*param_2 + 0xe0))(param_2,param_5,iVar2);
          iVar6 = (**(code **)(*param_2 + 0xe8))(param_2,param_5,iVar2);
          if ((-1 < iVar4) && (iVar6 == iVar3)) {
            lVar17 = (long)iVar4;
            if (uVar8 - 1 < 7) {
              lVar14 = 0;
            }
            else {
              lVar14 = 0;
              lVar15 = param_4;
              do {
                memcpy((void *)(lVar15 + lVar17),(void *)(lVar15 + lVar9),__n);
                memcpy((void *)(lVar15 + lVar10 + lVar17),(void *)(lVar15 + lVar9 + lVar10),__n);
                memcpy((void *)(lVar15 + uVar13 + lVar17),(void *)(lVar15 + uVar13 + lVar9),__n);
                memcpy((void *)(lVar15 + lVar1 + lVar17),(void *)(lVar15 + lVar1 + lVar9),__n);
                memcpy((void *)(lVar15 + uVar7 + lVar17),(void *)(lVar15 + uVar7 + lVar9),__n);
                memcpy((void *)(lVar15 + uVar7 + lVar10 + lVar17),
                       (void *)(lVar15 + uVar7 + lVar10 + lVar9),__n);
                memcpy((void *)(lVar15 + lVar1 * 2 + lVar17),(void *)(lVar15 + lVar1 * 2 + lVar9),
                       __n);
                memcpy((void *)(lVar15 + lVar12 + lVar17),(void *)(lVar15 + lVar12 + lVar9),__n);
                lVar15 = lVar15 + uVar11;
                lVar14 = lVar14 + 8;
              } while (uVar8 - (uVar8 & 7) != lVar14);
            }
            if ((param_3 & 7) != 0) {
              lVar16 = 0;
              lVar15 = -(uVar8 & 7);
              do {
                memcpy((void *)(param_4 + lVar10 * lVar14 + lVar17 + lVar16),
                       (void *)(param_4 + lVar9 + lVar10 * lVar14 + lVar16),__n);
                lVar16 = lVar16 + lVar10;
                lVar15 = lVar15 + 1;
              } while (lVar15 != 0);
            }
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 != 0x20);
      }
    }
  }
  return;
}


