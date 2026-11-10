/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00432780; name: FUN_00432780
 */


undefined8 FUN_00432780(long param_1,uint param_2)

{
  long *plVar1;
  undefined *puVar2;
  ulong uVar3;
  uint uVar4;
  uint *puVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  
  nn::os::LockMutex((MutexType *)PTR_DAT_02712af0);
  puVar2 = PTR_DAT_02712d68;
  if (param_2 < 0x200) {
    if (param_2 == 0) {
      uVar11 = 1;
    }
    else {
      uVar3 = 0;
      uVar4 = 1;
      uVar11 = 1;
LAB_004327d0:
      do {
        if ((uVar4 & param_2) != 0) {
          plVar9 = *(long **)(puVar2 + uVar3 * 0x10);
          puVar5 = (uint *)(puVar2 + uVar3 * 0x10 + 8);
          uVar4 = *puVar5;
          uVar8 = (ulong)uVar4;
          plVar1 = plVar9 + uVar8 * 2;
          plVar7 = plVar9;
          if (uVar4 != 0) {
            lVar10 = uVar8 << 4;
            plVar6 = plVar9;
            do {
              plVar7 = plVar6;
              if (*plVar6 == param_1) break;
              lVar10 = lVar10 + -0x10;
              plVar6 = plVar6 + 2;
              plVar7 = plVar1;
            } while (lVar10 != 0);
          }
          if (plVar1 == plVar7) {
            uVar11 = 0x1f;
            uVar4 = (int)uVar3 + 1;
            uVar3 = (ulong)uVar4;
            uVar4 = 1 << (ulong)(uVar4 & 0x1f);
            if (param_2 < uVar4) break;
            goto LAB_004327d0;
          }
          if (plVar7 < plVar1 + -2) {
            uVar8 = (long)plVar9 + (uVar8 * 0x10 - (long)plVar7) + -0x11;
            uVar4 = ((uint)(uVar8 >> 4) & 0xfffffff) + 1;
            if ((uVar4 & 7) != 0) {
              lVar10 = -((ulong)uVar4 & 7);
              plVar9 = plVar7;
              do {
                plVar7 = plVar9 + 2;
                *plVar9 = *plVar7;
                plVar9[1] = plVar9[3];
                lVar10 = lVar10 + 1;
                plVar9 = plVar7;
              } while (lVar10 != 0);
            }
            if (0x6f < uVar8) {
              do {
                *plVar7 = plVar7[2];
                plVar7[1] = plVar7[3];
                plVar7[2] = plVar7[4];
                plVar7[3] = plVar7[5];
                plVar7[4] = plVar7[6];
                plVar7[5] = plVar7[7];
                plVar7[6] = plVar7[8];
                plVar7[7] = plVar7[9];
                plVar7[8] = plVar7[10];
                plVar7[9] = plVar7[0xb];
                plVar7[10] = plVar7[0xc];
                plVar7[0xb] = plVar7[0xd];
                plVar7[0xc] = plVar7[0xe];
                plVar7[0xd] = plVar7[0xf];
                plVar9 = plVar7 + 0x10;
                plVar7[0xe] = *plVar9;
                plVar7[0xf] = plVar7[0x11];
                plVar7 = plVar9;
              } while (plVar9 < plVar1 + -2);
            }
            uVar4 = *puVar5;
          }
          *puVar5 = uVar4 - 1;
        }
        uVar4 = (int)uVar3 + 1;
        uVar3 = (ulong)uVar4;
        uVar4 = 1 << (ulong)(uVar4 & 0x1f);
      } while (uVar4 <= param_2);
    }
  }
  else {
    uVar11 = 0x1f;
  }
  nn::os::UnlockMutex((MutexType *)PTR_DAT_02712af0);
  return uVar11;
}


