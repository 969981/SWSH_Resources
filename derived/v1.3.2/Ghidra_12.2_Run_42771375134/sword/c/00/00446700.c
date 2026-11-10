/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00446700; name: FUN_00446700
 */


int FUN_00446700(long param_1,void *param_2,long param_3)

{
  MutexType *pMVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  int iVar6;
  size_t sVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  char *__s;
  long lVar11;
  undefined1 auStack_a8 [72];
  
  puVar5 = PTR_DAT_02712ae8;
  lVar11 = *(long *)(param_3 + 0x18);
  if (lVar11 != 0) {
    do {
      if (*(short *)(lVar11 + 0x34) == 0x2103) {
        lVar9 = *(long *)puVar5;
        uVar2 = *(uint *)(lVar11 + 0x30);
        pMVar1 = (MutexType *)(lVar9 + 0xa8);
        nn::os::LockMutex(pMVar1);
        uVar3 = *(uint *)(lVar9 + 0xd0);
        if (uVar3 != 0) {
          uVar4 = 0;
          if (uVar3 != 0) {
            uVar4 = uVar2 / uVar3;
          }
          plVar10 = *(long **)(*(long *)(lVar9 + 200) + (ulong)(uVar2 - uVar4 * uVar3) * 8);
          if (plVar10 != (long *)0x0) {
            while (*(uint *)(plVar10 + 2) != uVar2) {
              plVar10 = (long *)plVar10[1];
              if (plVar10 == (long *)0x0) goto LAB_00446910;
            }
            *(int *)((long)plVar10 + 0x14) = *(int *)((long)plVar10 + 0x14) + 1;
            nn::os::UnlockMutex(pMVar1);
            iVar6 = FUN_00446700(param_1,param_2,plVar10);
            (**(code **)(*plVar10 + 0x18))(plVar10);
            if (iVar6 != 1) goto LAB_0044691c;
            goto LAB_00446900;
          }
        }
LAB_00446910:
        nn::os::UnlockMutex(pMVar1);
        iVar6 = 2;
LAB_0044691c:
        lVar9 = *(long *)(param_3 + 0x18);
joined_r0x00446924:
        if (lVar9 == lVar11) {
          return iVar6;
        }
        do {
          if (*(short *)(lVar9 + 0x34) == 0x2103) {
            lVar8 = *(long *)puVar5;
            uVar2 = *(uint *)(lVar9 + 0x30);
            pMVar1 = (MutexType *)(lVar8 + 0xa8);
            nn::os::LockMutex(pMVar1);
            uVar3 = *(uint *)(lVar8 + 0xd0);
            if (uVar3 != 0) {
              uVar4 = 0;
              if (uVar3 != 0) {
                uVar4 = uVar2 / uVar3;
              }
              for (plVar10 = *(long **)(*(long *)(lVar8 + 200) + (ulong)(uVar2 - uVar4 * uVar3) * 8)
                  ; plVar10 != (long *)0x0; plVar10 = (long *)plVar10[1]) {
                if (*(uint *)(plVar10 + 2) == uVar2) {
                  *(int *)((long)plVar10 + 0x14) = *(int *)((long)plVar10 + 0x14) + 1;
                  nn::os::UnlockMutex(pMVar1);
                  FUN_00446bb0(param_1,plVar10);
                  (**(code **)(*plVar10 + 0x18))(plVar10);
                  lVar9 = *(long *)(lVar9 + 0x18);
                  goto joined_r0x00446a08;
                }
              }
            }
            nn::os::UnlockMutex(pMVar1);
            lVar9 = *(long *)(lVar9 + 0x18);
          }
          else {
            if (*(short *)(lVar9 + 0x34) == 0x403) {
              FUN_00482e30(*(undefined4 *)(lVar9 + 0x30));
              lVar8 = FUN_0044a9b0(param_1 + 0x88,*(undefined4 *)(lVar9 + 0x38),0);
              if (lVar8 != 0) {
                FUN_00442640(lVar8,0);
              }
            }
            lVar9 = *(long *)(lVar9 + 0x18);
          }
joined_r0x00446a08:
          if (lVar9 == lVar11) {
            return iVar6;
          }
        } while( true );
      }
      if (*(short *)(lVar11 + 0x34) == 0x403) {
        uVar2 = *(uint *)(lVar11 + 0x38);
        *(uint *)((long)param_2 + 4) = uVar2;
        uVar3 = *(uint *)(param_1 + 0xb0);
        if (uVar3 != 0) {
          uVar4 = 0;
          if (uVar3 != 0) {
            uVar4 = uVar2 / uVar3;
          }
          for (plVar10 = *(long **)(*(long *)(param_1 + 0xa8) + (ulong)(uVar2 - uVar4 * uVar3) * 8);
              plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
            if (*(uint *)(plVar10 + 1) == uVar2) {
              __s = (char *)plVar10[2];
              if (*(char *)((long)param_2 + 0x10) != '\0') {
                FUN_00404870(*(undefined4 *)PTR_DAT_02712a90,*(undefined8 *)((long)param_2 + 8));
              }
              *(undefined8 *)((long)param_2 + 8) = 0;
              *(undefined1 *)((long)param_2 + 0x10) = 0;
              sVar7 = strlen(__s);
              if ((((sVar7 < 5) || (__s[sVar7 - 4] != '.')) || (__s[sVar7 - 3] != 'b')) ||
                 ((__s[sVar7 - 2] != 'n' || (__s[sVar7 - 1] != 'k')))) {
                FUN_00442070((undefined8 *)((long)param_2 + 8),__s,&DAT_01d43b31);
              }
              else {
                *(char **)((long)param_2 + 8) = __s;
                *(undefined1 *)((long)param_2 + 0x10) = 0;
              }
              break;
            }
          }
        }
        memcpy(auStack_a8,param_2,0x48);
        iVar6 = FUN_00446a60(param_1,auStack_a8,2,0,0);
        if (iVar6 == 1) {
          iVar6 = FUN_00482db0(*(undefined4 *)(lVar11 + 0x30));
          if (iVar6 == 1) goto LAB_00446900;
          lVar9 = FUN_0044a9b0(param_1 + 0x88,*(undefined4 *)(lVar11 + 0x38),0);
          if (lVar9 != 0) {
            FUN_00442640(lVar9,0);
            lVar9 = *(long *)(param_3 + 0x18);
            goto joined_r0x00446924;
          }
        }
        goto LAB_0044691c;
      }
LAB_00446900:
      lVar11 = *(long *)(lVar11 + 0x18);
    } while (lVar11 != 0);
  }
  return 1;
}


