/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00448b60; name: FUN_00448b60
 */


/* WARNING: Removing unreachable block (ram,0x00448d00) */

undefined8
FUN_00448b60(void *param_1,void *param_2,undefined4 param_3,uint param_4,uint param_5,
            undefined2 param_6)

{
  undefined2 *puVar1;
  undefined4 uVar2;
  ushort uVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  undefined2 *puVar13;
  long lVar14;
  ulong __n;
  undefined8 uVar15;
  undefined2 *puVar16;
  float fVar17;
  float fVar18;
  long local_a8 [2];
  ushort local_98;
  undefined4 local_96;
  undefined8 local_90;
  int local_78;
  undefined1 local_74;
  
  plVar10 = (long *)FUN_004dd890(3,0x40001,0);
  if (plVar10 == (long *)0x0) {
    uVar15 = 2;
  }
  else {
    __n = (ulong)param_5;
    memcpy(param_1,param_2,__n);
    puVar1 = (undefined2 *)((long)param_1 + (ulong)param_4);
    *puVar1 = 0xfffe;
    puVar1[7] = 0x10;
    puVar1[6] = param_6;
    if ((param_5 & 3) != 0) {
      uVar4 = 4 - (param_5 & 3);
      *(undefined4 *)((long)param_1 + (__n - 8)) = 0x4b4e554a;
      *(uint *)((long)param_1 + (__n - 4)) = uVar4;
                    /* WARNING: Subroutine does not return */
      memset((void *)((long)param_1 + __n + 8),0,(ulong)uVar4);
    }
    nn::os::LockMutex((MutexType *)PTR_DAT_02712af0);
    iVar9 = FUN_004ddd90(plVar10,param_2,param_3);
    puVar8 = PTR_DAT_02712af0;
    puVar7 = PTR_DAT_02712ac0;
    fVar6 = DAT_01d4c564;
    fVar5 = DAT_01d4c478;
    if (iVar9 == 1) {
      puVar16 = (undefined2 *)((long)param_1 + (ulong)param_5);
      do {
        local_a8[0] = 0;
        local_a8[1] = 0x2b00000000;
        local_96 = 0;
        local_90 = 0;
        local_74 = 0;
        local_78 = 0x2b;
        local_98 = (ushort)*(undefined4 *)puVar7;
        (**(code **)(*plVar10 + 0x60))(plVar10,local_a8);
        if ((local_78 == 0x2d) || (local_78 == 0x11)) {
          nn::os::UnlockMutex((MutexType *)puVar8);
          if ((ushort)local_96 != 0) {
            uVar3 = puVar1[1];
            uVar11 = (ulong)uVar3;
            if (uVar3 != 0) {
              uVar12 = 0;
              do {
                puVar13 = puVar16;
                if (uVar3 == 1) {
                  lVar14 = 0;
LAB_00448d8c:
                  fVar17 = *(float *)(local_a8[0] + (uVar12 + lVar14 * (ulong)local_98) * 4) * fVar6
                  ;
                  fVar18 = fVar6;
                  if ((fVar17 < fVar6) && (fVar18 = fVar5, fVar5 < fVar17)) {
                    fVar18 = fVar17;
                  }
                  *puVar13 = (short)(int)fVar18;
                }
                else {
                  lVar14 = 0;
                  do {
                    fVar17 = *(float *)(local_a8[0] + (uVar12 + lVar14 * (ulong)local_98) * 4) *
                             fVar6;
                    fVar18 = fVar6;
                    if ((fVar17 < fVar6) && (fVar18 = fVar5, fVar5 < fVar17)) {
                      fVar18 = fVar17;
                    }
                    *puVar13 = (short)(int)fVar18;
                    fVar17 = *(float *)(local_a8[0] + (uVar12 + (lVar14 + 1) * (ulong)local_98) * 4)
                             * fVar6;
                    fVar18 = fVar6;
                    if ((fVar17 < fVar6) && (fVar18 = fVar5, fVar5 < fVar17)) {
                      fVar18 = fVar17;
                    }
                    lVar14 = lVar14 + 2;
                    puVar13[1] = (short)(int)fVar18;
                    puVar13 = puVar13 + 2;
                  } while (uVar11 - (uVar11 & 1) != lVar14);
                  if ((uVar3 & 1) != 0) goto LAB_00448d8c;
                }
                puVar16 = puVar16 + uVar11;
                uVar12 = uVar12 + 1;
              } while (uVar12 < (ushort)local_96);
            }
          }
          nn::os::LockMutex((MutexType *)puVar8);
        }
        (**(code **)(*plVar10 + 0x18))(plVar10);
      } while (local_78 == 0x2d);
      if (local_78 == 0x11) {
        uVar15 = 1;
      }
      else {
        uVar15 = 2;
      }
      *(int *)((long)param_1 + (__n - 4)) =
           (int)puVar16 - (int)(undefined2 *)((long)param_1 + (ulong)param_5);
    }
    else {
      uVar15 = 2;
    }
    (**(code **)(*plVar10 + 0x58))(plVar10);
    uVar2 = *(undefined4 *)PTR_DAT_02712e28;
    (**(code **)*plVar10)(plVar10);
    FUN_00404870(uVar2,plVar10);
    nn::os::UnlockMutex((MutexType *)PTR_DAT_02712af0);
  }
  return uVar15;
}


