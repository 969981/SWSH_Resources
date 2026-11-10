/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004448d0; name: FUN_004448d0
 */


/* WARNING: Type propagation algorithm not settling */

int FUN_004448d0(long param_1,long param_2,int param_3,uint param_4)

{
  MutexType *pMVar1;
  uint uVar2;
  undefined *puVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  void *pvVar7;
  undefined8 *puVar8;
  void *__dest;
  uint uVar9;
  long *plVar10;
  uint uVar11;
  uint *puVar12;
  long lVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
  int iVar17;
  ulong uVar18;
  long *plVar19;
  float fVar20;
  uint local_8c;
  uint local_88;
  int iStack_84;
  int local_80 [2];
  short *local_78;
  undefined1 auStack_68 [4];
  undefined1 auStack_64 [4];
  
  fVar4 = DAT_01d4bee0;
  if (param_3 != 0) {
    uVar9 = *(uint *)(param_2 + 0x48);
    uVar11 = *(uint *)(param_2 + 0x4c);
    if (uVar9 < uVar11) {
      iVar6 = 0;
      pMVar1 = (MutexType *)(param_1 + 0x48);
      lVar13 = 0;
      uVar14 = 0;
      do {
        while( true ) {
          lVar16 = lVar13;
          puVar12 = (uint *)(*(long *)(param_2 + 0x30) + lVar16 * 0xc);
          uVar2 = *puVar12;
          uVar15 = puVar12[1];
          iVar6 = (uVar15 - uVar14) + iVar6;
          if (uVar2 != 0) break;
          uVar9 = uVar9 + 1;
          *(uint *)(param_2 + 0x48) = uVar9;
          lVar13 = lVar16 + 1;
          uVar14 = uVar15;
          if (uVar11 <= uVar9) goto LAB_00444ce8;
        }
        uVar11 = *(uint *)(*(long *)(param_2 + 0x30) + lVar16 * 0xc + 8);
        nn::os::LockMutex(pMVar1);
        uVar9 = *(uint *)(param_1 + 0x78);
        iVar17 = (int)lVar16;
        if (uVar9 == 0) {
LAB_00444a74:
          FUN_0044a360(param_1 + 0x68);
          uVar9 = *(uint *)(param_1 + 0x78);
          if (uVar9 == 0) {
LAB_00444d44:
            nn::os::UnlockMutex(pMVar1);
            goto joined_r0x00444d54;
          }
          uVar14 = 0;
          if (uVar9 != 0) {
            uVar14 = uVar2 / uVar9;
          }
          uVar18 = (ulong)(uVar2 - uVar14 * uVar9);
          plVar10 = (long *)(*(long *)(param_1 + 0x70) + uVar18 * 8);
        }
        else {
          uVar14 = 0;
          if (uVar9 != 0) {
            uVar14 = uVar2 / uVar9;
          }
          uVar18 = (ulong)(uVar2 - uVar14 * uVar9);
          plVar10 = (long *)(*(long *)(param_1 + 0x70) + uVar18 * 8);
          for (plVar19 = (long *)*plVar10; plVar19 != (long *)0x0; plVar19 = (long *)*plVar19) {
            if (*(uint *)(plVar19 + 1) == uVar2) {
              plVar10 = plVar19 + 2;
              *(int *)(plVar19 + 6) = *(int *)(plVar19 + 6) + 1;
              if (*plVar10 != 0) goto LAB_00444cc0;
              iVar5 = *(int *)(plVar19 + 5);
              puVar3 = PTR_DAT_02712b90;
              goto joined_r0x00444b94;
            }
          }
          fVar20 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x80));
          if (fVar4 < fVar20 / (float)uVar9) goto LAB_00444a74;
        }
        do {
          plVar10 = (long *)*plVar10;
          if (plVar10 == (long *)0x0) {
            puVar8 = (undefined8 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x38);
            if (puVar8 == (undefined8 *)0x0) goto LAB_00444d44;
            *puVar8 = *(undefined8 *)(*(long *)(param_1 + 0x70) + uVar18 * 8);
            *(uint *)(puVar8 + 1) = uVar2;
            plVar10 = puVar8 + 2;
            *plVar10 = 0;
            puVar8[4] = 0;
            puVar8[5] = 0;
            *(undefined4 *)(puVar8 + 6) = 1;
            *(undefined4 *)(puVar8 + 3) = 0;
            *(undefined8 **)(*(long *)(param_1 + 0x70) + uVar18 * 8) = puVar8;
            *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
            goto LAB_00444b20;
          }
        } while (*(uint *)(plVar10 + 1) != uVar2);
        plVar10 = plVar10 + 2;
LAB_00444b20:
        puVar3 = PTR_DAT_02712b90;
        *(uint *)((long)plVar10 + 0x24) = uVar2;
        iVar5 = (int)plVar10[3];
joined_r0x00444b94:
        if (iVar5 == 0) {
          if ((*(int *)(puVar3 + 0x18) == -1) ||
             (__dest = (void *)FUN_00404750(*(int *)(puVar3 + 0x18),uVar11,0x10),
             __dest == (void *)0x0)) goto LAB_00444d3c;
          nn::os::UnlockMutex(pMVar1);
          if (iVar6 == 0) {
LAB_00444bf0:
            local_8c = 0;
            iVar5 = FUN_0044e400(param_1 + 8,__dest,uVar11,&local_8c);
            if ((iVar5 == 1) && (uVar11 != local_8c)) {
              iVar5 = 2;
              nn::os::LockMutex(pMVar1);
            }
            else {
              uVar15 = local_8c + uVar15;
              if ((param_4 & 1) != 0) {
                iVar6 = FUN_0045fb10(__dest,uVar11,local_80,0,auStack_64,auStack_68,&iStack_84,
                                     &local_88,0,0,1);
                if (((iVar6 == 1) && (local_88 + iStack_84 <= uVar11)) && (*local_78 == -1)) {
                  uVar9 = local_88;
                  if ((local_88 & 3) != 0) {
                    uVar9 = (4 - (local_88 & 3) | 8) + local_88;
                  }
                  uVar9 = uVar9 + *(int *)(local_78 + 0xc) * (uint)(ushort)local_78[1] * 2;
                  pvVar7 = (void *)FUN_00404750(*(undefined4 *)(PTR_DAT_02712b90 + 0x18),uVar9,4);
                  if (pvVar7 != (void *)0x0) {
                    iVar6 = FUN_00448b60(pvVar7,__dest,uVar11,(int)local_78 - (int)__dest,local_88,
                                         (ulong)(ushort)local_78[1] << 1);
                    if (iVar6 == 1) {
                      FUN_004047f0(*(undefined4 *)(PTR_DAT_02712b90 + 0x18),__dest);
                      __dest = pvVar7;
                      uVar11 = uVar9;
                      goto LAB_00444ca4;
                    }
                    FUN_004047f0(*(undefined4 *)(PTR_DAT_02712b90 + 0x18),pvVar7);
                  }
                }
              }
LAB_00444ca4:
              nn::os::LockMutex(pMVar1);
              if (iVar5 == 1) {
                iVar6 = 0;
                goto LAB_00444cb8;
              }
            }
          }
          else {
            local_80[0] = 0;
            iVar5 = FUN_0044df40(param_1 + 8,iVar6,local_80);
            if (iVar6 == local_80[0]) {
              if (iVar5 == 1) goto LAB_00444bf0;
            }
            else {
              iVar5 = 2;
            }
            nn::os::LockMutex(pMVar1);
          }
          FUN_004047f0(*(undefined4 *)(PTR_DAT_02712b90 + 0x18),__dest);
LAB_00444d7c:
          FUN_00446e30(param_1,plVar10);
          nn::os::UnlockMutex(pMVar1);
          goto joined_r0x00444d94;
        }
        if (*(int *)(puVar3 + 0x18) == -1) {
LAB_00444d3c:
          iVar5 = 0x34;
          goto LAB_00444d7c;
        }
        uVar11 = *(uint *)(plVar10[2] + 0x10);
        __dest = (void *)FUN_00404750(*(int *)(puVar3 + 0x18),(ulong)uVar11,0x10);
        if (__dest == (void *)0x0) goto LAB_00444d3c;
        memcpy(__dest,*(void **)(plVar10[2] + 8),(ulong)uVar11);
LAB_00444cb8:
        *(uint *)(plVar10 + 1) = uVar11;
        *plVar10 = (long)__dest;
LAB_00444cc0:
        *(int *)(param_2 + 0x48) = *(int *)(param_2 + 0x48) + 1;
        nn::os::UnlockMutex(pMVar1);
        uVar9 = *(uint *)(param_2 + 0x48);
        uVar11 = *(uint *)(param_2 + 0x4c);
        lVar13 = lVar16 + 1;
        uVar14 = uVar15;
      } while (uVar9 < uVar11);
LAB_00444ce8:
      lVar16 = lVar16 + 1;
      param_3 = iVar6 + (param_3 - uVar15);
    }
    else {
      lVar16 = 0;
    }
    if (param_3 != 0) {
      local_80[0] = 0;
      FUN_0044df40(param_1 + 8,param_3,local_80);
      if (param_3 != local_80[0]) {
        iVar17 = (int)lVar16;
joined_r0x00444d54:
        iVar5 = 2;
joined_r0x00444d94:
        if (iVar17 < 1) {
          return iVar5;
        }
        lVar13 = (long)(int)lVar16 + 1;
        lVar16 = (long)(int)lVar16 * 0xc;
        do {
          lVar16 = lVar16 + -0xc;
          if (*(int *)(*(long *)(param_2 + 0x30) + lVar16) != 0) {
            FUN_00448ea0(param_1);
          }
          lVar13 = lVar13 + -1;
        } while (1 < lVar13);
        return iVar5;
      }
    }
    *(byte *)(param_2 + 0x78) = *(byte *)(param_2 + 0x78) | 4;
  }
  return 1;
}


