/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f39440; name: FUN_00f39440
 */


/* WARNING: Removing unreachable block (ram,0x00f395bc) */

float FUN_00f39440(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  float fVar11;
  long local_90 [16];
  
  plVar7 = *(long **)(param_1 + 0x38);
  plVar1 = (long *)(param_1 + 0x40);
  if (plVar7 != plVar1) {
    iVar3 = 0;
    plVar5 = plVar7;
    do {
      while( true ) {
        if (plVar5[4] == *param_2) goto LAB_00f394dc;
        iVar3 = iVar3 + 1;
        plVar8 = (long *)plVar5[1];
        if ((long *)plVar5[1] == (long *)0x0) break;
        do {
          plVar5 = plVar8;
          plVar8 = (long *)*plVar5;
        } while ((long *)*plVar5 != (long *)0x0);
LAB_00f394c0:
        if (plVar5 == plVar1) goto LAB_00f394d8;
      }
      plVar8 = plVar5 + 2;
      plVar10 = (long *)*plVar8;
      if ((long *)*plVar10 != plVar5) {
        do {
          lVar9 = *plVar8;
          plVar8 = (long *)(lVar9 + 0x10);
          plVar5 = (long *)*plVar8;
        } while (*plVar5 != lVar9);
        goto LAB_00f394c0;
      }
      plVar5 = plVar10;
    } while (plVar10 != plVar1);
LAB_00f394d8:
    iVar3 = -1;
LAB_00f394dc:
    iVar4 = 0;
    do {
      while( true ) {
        if (plVar7[4] == *param_3) {
          if (iVar3 == -1) {
            return 0.0;
          }
          if (iVar4 == -1) {
            return 0.0;
          }
          local_90[0xe] = 0;
          local_90[0xf] = 0;
          local_90[0xc] = 0;
          local_90[0xd] = 0;
          local_90[10] = 0;
          local_90[0xb] = 0;
          local_90[8] = 0;
          local_90[9] = 0;
          local_90[6] = 0;
          local_90[7] = 0;
          local_90[4] = 0;
          local_90[5] = 0;
          local_90[2] = 0;
          local_90[3] = 0;
          local_90[0] = 0;
          local_90[1] = 0;
          uVar2 = FUN_00f37770(0);
          if (uVar2 == 0) {
            return 0.0;
          }
          if (uVar2 == 1) {
            lVar9 = 0;
            fVar11 = 0.0;
          }
          else {
            fVar11 = 0.0;
            lVar6 = 0;
            do {
              lVar9 = lVar6 + 2;
              fVar11 = fVar11 + *(float *)(local_90[lVar6] + 0x74) +
                       *(float *)(local_90[lVar6 + 1] + 0x74);
              lVar6 = lVar9;
            } while ((ulong)uVar2 - ((ulong)uVar2 & 1) != lVar9);
            if ((uVar2 & 1) == 0) {
              return fVar11;
            }
          }
          return fVar11 + *(float *)(local_90[lVar9] + 0x74);
        }
        iVar4 = iVar4 + 1;
        plVar5 = (long *)plVar7[1];
        if ((long *)plVar7[1] == (long *)0x0) break;
        do {
          plVar7 = plVar5;
          plVar5 = (long *)*plVar7;
        } while ((long *)*plVar7 != (long *)0x0);
LAB_00f39538:
        if (plVar7 == plVar1) {
          return 0.0;
        }
      }
      plVar5 = plVar7 + 2;
      plVar8 = (long *)*plVar5;
      if ((long *)*plVar8 != plVar7) {
        do {
          lVar9 = *plVar5;
          plVar5 = (long *)(lVar9 + 0x10);
          plVar7 = (long *)*plVar5;
        } while (*plVar7 != lVar9);
        goto LAB_00f39538;
      }
      plVar7 = plVar8;
    } while (plVar8 != plVar1);
  }
  return 0.0;
}


