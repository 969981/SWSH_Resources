/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003ac6b0; name: FUN_003ac6b0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_003ac6b0(long param_1)

{
  long lVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  byte bVar5;
  long *plVar6;
  int *piVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  int iVar13;
  
  iVar2 = *(int *)(param_1 + 0x2a0);
  iVar4 = iVar2 * 0xc + 8;
  iVar13 = iVar4 + *(int *)(param_1 + 0x2a8) * 0x20;
  if (iVar13 == 0) {
    piVar7 = (int *)0x0;
    iVar13 = *(int *)(param_1 + 0x2a0);
    _DAT_00000004 = 0;
    iRam0000000000000000 = iVar2;
  }
  else {
    plVar6 = (long *)FUN_00400d30();
    piVar7 = (int *)(**(code **)(*plVar6 + 0x10))
                              (plVar6,iVar13,"NonTrackedAlloc",
                               "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/SimulationController/src/particles/ScParticleSystemSim.cpp"
                               ,0x33b);
    iVar13 = *(int *)(param_1 + 0x2a8);
    *piVar7 = iVar2;
    piVar7[1] = iVar4 + iVar13 * 0x20;
    iVar13 = *(int *)(param_1 + 0x2a0);
  }
  if (iVar13 != 0) {
    uVar10 = 0;
    plVar6 = (long *)(piVar7 + 2);
    do {
      lVar9 = *(long *)(*(long *)(param_1 + 0x298) + uVar10 * 8);
      *plVar6 = *(long *)(lVar9 + 0x50);
      *(undefined4 *)(plVar6 + 1) = 0;
      plVar11 = (long *)((long)plVar6 + 0xc);
      if (*(ushort *)(lVar9 + 0x4a) != 0) {
        iVar13 = -(uint)*(ushort *)(lVar9 + 0x4a);
        plVar12 = *(long **)(lVar9 + 0x40);
        do {
          if ((*(char *)(*(long *)(*plVar12 + 0x40) + 0x1b) == '\0') &&
             (lVar9 = *(long *)(*plVar12 + 0x30),
             (*(byte *)(*(long *)(lVar9 + 0x40) + 0x40) >> 2 & 1) == 0)) {
            bVar5 = FUN_003fcf10(lVar9);
            lVar1 = *(long *)(*(long *)(lVar9 + 0x10) + 0x50) + 0x10;
            if ((bVar5 & 1) == 0) {
              lVar8 = 0;
            }
            else {
              lVar8 = FUN_00191610(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x48) + 0x8a0) + 8)
                                   ,lVar1);
            }
            lVar9 = *(long *)(lVar9 + 0x40);
            bVar3 = *(byte *)(lVar9 + 0x40);
            *plVar11 = lVar1;
            plVar11[1] = lVar9 + 0x20;
            plVar11[2] = lVar8;
            *(byte *)((long)plVar11 + 0x19) = bVar5 & 1;
            *(byte *)(plVar11 + 3) = bVar3 >> 4 & 1;
            plVar11 = plVar11 + 4;
            *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
          }
          iVar13 = iVar13 + 1;
          plVar12 = plVar12 + 1;
        } while (iVar13 != 0);
      }
      plVar6 = plVar11;
      uVar10 = uVar10 + 1;
    } while (uVar10 < *(uint *)(param_1 + 0x2a0));
  }
                    /* WARNING: Could not recover jumptable at 0x003ac844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x58) + 0x68))(*(long **)(param_1 + 0x58),piVar7);
  return;
}


