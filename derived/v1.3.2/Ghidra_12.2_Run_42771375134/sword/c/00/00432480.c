/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00432480; name: FUN_00432480
 */


/* WARNING: Removing unreachable block (ram,0x004326d0) */
/* WARNING: Removing unreachable block (ram,0x0043257c) */
/* WARNING: Removing unreachable block (ram,0x0043256c) */

int FUN_00432480(code *param_1,uint param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  uint *puVar16;
  ulong uVar17;
  
  nn::os::LockMutex((MutexType *)PTR_DAT_02712af0);
  puVar7 = PTR_DAT_02712d68;
  iVar8 = 0x1f;
  if ((param_1 == (code *)0x0) || (0x1ff < param_2)) goto LAB_00432728;
  if (param_2 != 0) {
    uVar17 = 0;
    uVar11 = 1;
    do {
      if ((uVar11 & param_2) == 0) {
        iVar8 = 1;
      }
      else {
        plVar1 = (long *)(puVar7 + uVar17 * 0x10);
        puVar16 = (uint *)(plVar1 + 1);
        uVar6 = *puVar16;
        uVar11 = *(uint *)((long)plVar1 + 0xc);
        if (uVar11 <= uVar6) {
          uVar11 = uVar11 + 1;
          lVar9 = FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar11 << 4);
          if (lVar9 == 0) {
            iVar8 = 0x34;
            break;
          }
          lVar10 = *plVar1;
          if (lVar10 != 0 && lVar10 != lVar9) {
            uVar5 = *puVar16;
            uVar13 = (ulong)uVar5;
            if (uVar5 != 0) {
              if (uVar13 - 1 < 3) {
                lVar12 = 0;
              }
              else {
                lVar10 = 0;
                lVar12 = 0;
                do {
                  puVar4 = (undefined8 *)(lVar9 + lVar10);
                  if (puVar4 != (undefined8 *)0x0) {
                    *puVar4 = 0;
                    puVar4[1] = 0;
                  }
                  lVar15 = *plVar1;
                  puVar4[1] = ((undefined8 *)(lVar15 + lVar10))[1];
                  lVar2 = lVar9 + lVar10;
                  *puVar4 = *(undefined8 *)(lVar15 + lVar10);
                  *(undefined8 *)(lVar2 + 0x10) = 0;
                  *(undefined8 *)(lVar2 + 0x18) = 0;
                  lVar15 = *plVar1;
                  *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(lVar15 + lVar10 + 0x18);
                  *(undefined8 *)(lVar2 + 0x10) = *(undefined8 *)(lVar15 + lVar10 + 0x10);
                  *(undefined8 *)(lVar2 + 0x20) = 0;
                  *(undefined8 *)(lVar2 + 0x28) = 0;
                  lVar15 = *plVar1;
                  *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(lVar15 + lVar10 + 0x28);
                  uVar14 = *(undefined8 *)(lVar15 + lVar10 + 0x20);
                  *(undefined8 *)(lVar2 + 0x30) = 0;
                  *(undefined8 *)(lVar2 + 0x38) = 0;
                  *(undefined8 *)(lVar2 + 0x20) = uVar14;
                  lVar15 = *plVar1 + lVar10;
                  lVar10 = lVar10 + 0x40;
                  *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)(lVar15 + 0x30);
                  lVar12 = lVar12 + 4;
                  *(undefined8 *)(lVar2 + 0x38) = *(undefined8 *)(lVar15 + 0x38);
                } while (uVar13 - (uVar13 & 3) != lVar12);
              }
              if ((uVar5 & 3) != 0) {
                lVar12 = lVar12 << 4;
                lVar10 = -(uVar13 & 3);
                do {
                  puVar4 = (undefined8 *)(lVar9 + lVar12);
                  if (puVar4 != (undefined8 *)0x0) {
                    *puVar4 = 0;
                    puVar4[1] = 0;
                  }
                  puVar3 = (undefined8 *)(*plVar1 + lVar12);
                  lVar12 = lVar12 + 0x10;
                  puVar4[1] = puVar3[1];
                  lVar10 = lVar10 + 1;
                  *puVar4 = *puVar3;
                } while (lVar10 != 0);
              }
              lVar10 = *plVar1;
            }
            FUN_00404870(*(undefined4 *)PTR_DAT_02712a90,lVar10);
          }
          *plVar1 = lVar9;
          *(uint *)((long)plVar1 + 0xc) = uVar11;
        }
        if (uVar11 <= uVar6) {
          iVar8 = 0x34;
          break;
        }
        uVar11 = *puVar16;
        lVar9 = *plVar1;
        *puVar16 = uVar11 + 1;
        puVar4 = (undefined8 *)(lVar9 + (ulong)uVar11 * 0x10);
        if (puVar4 != (undefined8 *)0x0) {
          *puVar4 = param_1;
          *(undefined8 *)(lVar9 + (ulong)uVar11 * 0x10 + 8) = param_3;
        }
        iVar8 = 0x34;
        if (puVar4 != (undefined8 *)0x0) {
          iVar8 = 1;
        }
        if (iVar8 != 1) break;
      }
      uVar11 = (int)uVar17 + 1;
      uVar17 = (ulong)uVar11;
      uVar11 = 1 << (ulong)(uVar11 & 0x1f);
    } while (uVar11 <= param_2);
    if (iVar8 != 1) goto LAB_00432728;
    if ((param_2 & 1) != 0) {
      if (((DAT_02737d80 & 1) == 0) && (iVar8 = __cxa_guard_acquire(), iVar8 != 0)) {
        DAT_02737d78 = PTR_DAT_02712d70 + 0x10;
        __cxa_guard_release(&DAT_02737d80);
      }
      iVar8 = 1;
      (*param_1)(&DAT_02737d78,1,param_3);
      goto LAB_00432728;
    }
  }
  iVar8 = 1;
LAB_00432728:
  nn::os::UnlockMutex((MutexType *)PTR_DAT_02712af0);
  return iVar8;
}


