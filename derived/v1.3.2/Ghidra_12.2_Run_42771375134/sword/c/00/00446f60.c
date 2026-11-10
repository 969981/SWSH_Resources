/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00446f60; name: FUN_00446f60
 */


void FUN_00446f60(long param_1)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined *puVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 uStack_48;
  
  nn::os::LockMutex((MutexType *)PTR_DAT_02712fb8);
  uVar4 = *(uint *)(param_1 + 0x98);
  if (uVar4 != 0) {
    if (*(uint *)(param_1 + 0x90) != 0) {
      plVar1 = (long *)(param_1 + 0x88);
      lVar8 = *(long *)*plVar1;
      if (lVar8 == 0) {
        uVar7 = 0;
        do {
          uVar7 = uVar7 + 1;
          if (*(uint *)(param_1 + 0x90) <= uVar7) goto LAB_0044701c;
          lVar8 = ((long *)*plVar1)[uVar7];
        } while (lVar8 == 0);
      }
      else {
        uVar7 = 0;
      }
      iVar9 = 0;
      do {
        do {
          if (*(int *)(lVar8 + 0x7c) != 0) {
            puVar10 = (undefined8 *)
                      ((long)register0x00000008 + (long)iVar9 * 0x10 + (ulong)uVar4 * -0x10 + -0x40)
            ;
            iVar9 = iVar9 + 1;
            puVar10[1] = *(undefined8 *)(lVar8 + 0x18);
            *puVar10 = *(undefined8 *)(lVar8 + 0x10);
          }
          lVar8 = *(long *)(lVar8 + 0x20);
        } while (lVar8 != 0);
        do {
          uVar7 = uVar7 + 1;
          if (*(uint *)(param_1 + 0x90) <= uVar7) {
            nn::os::UnlockMutex((MutexType *)PTR_DAT_02712fb8);
            puVar5 = PTR_DAT_02712fb8;
            if (0 < iVar9) {
              lVar8 = (long)iVar9 + 1;
              puVar10 = &uStack_48 + (ulong)uVar4 * -2 + (long)iVar9 * 2;
              do {
                uVar2 = puVar10[-1];
                uVar3 = *puVar10;
                nn::os::LockMutex((MutexType *)puVar5);
                lVar6 = FUN_0044a9b0(plVar1,uVar2,uVar3);
                if ((lVar6 == 0) || (*(int *)(lVar6 + 0x7c) == 0)) {
                  nn::os::UnlockMutex((MutexType *)puVar5);
                }
                else {
                  nn::os::UnlockMutex((MutexType *)puVar5);
                  lVar6 = FUN_0044a9b0(plVar1,uVar2 & 0xffffffff,0);
                  if (lVar6 != 0) {
                    if (*(int *)(lVar6 + 0x7c) != 0) {
                      *(int *)(lVar6 + 0x7c) = *(int *)(lVar6 + 0x7c) + -1;
                    }
                    FUN_00442640(lVar6,1);
                  }
                }
                puVar10 = puVar10 + -2;
                lVar8 = lVar8 + -1;
              } while (1 < lVar8);
            }
            return;
          }
          lVar8 = *(long *)(*plVar1 + (ulong)uVar7 * 8);
        } while (lVar8 == 0);
      } while( true );
    }
  }
LAB_0044701c:
  nn::os::UnlockMutex((MutexType *)PTR_DAT_02712fb8);
  return;
}


