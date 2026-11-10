/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01380f50; name: FUN_01380f50
 */


void FUN_01380f50(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 uVar6;
  code *pcVar7;
  long lVar8;
  undefined *puVar9;
  int iVar10;
  long *plVar11;
  long lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  
  fVar15 = *(float *)(param_1 + 0x78) + *(float *)(param_1 + 0x170);
  *(float *)(param_1 + 0x170) = fVar15;
  if (*(float *)(param_1 + 0x174) <= fVar15) {
    *(float *)(param_1 + 0x170) = *(float *)(param_1 + 0x174);
    *(undefined1 *)(param_1 + 0x140) = 0;
    if (*(code **)(param_1 + 0x180) != (code *)0x0) {
      (**(code **)(param_1 + 0x180))(param_1 + 0x1a0);
      pcVar7 = *(code **)(param_1 + 0x188);
      if (pcVar7 != (code *)0x0) {
        *(undefined8 *)(param_1 + 400) = 0;
        *(undefined8 *)(param_1 + 0x198) = 0;
        *(undefined8 *)(param_1 + 0x180) = 0;
        *(undefined8 *)(param_1 + 0x188) = 0;
        (*pcVar7)(param_1 + 0x1a0);
      }
    }
  }
  puVar4 = PTR_DAT_02715078;
  lVar8 = *(long *)(param_1 + 0x68);
  if ((lVar8 == 0) || (*(int *)(lVar8 + 0x54) == 0)) {
LAB_013810bc:
    lVar12 = 0;
  }
  else {
    piVar1 = (int *)(lVar8 + 0x54);
    puVar9 = PTR_DAT_02715080;
    iVar10 = *(int *)(lVar8 + 0x54);
    do {
      while( true ) {
        plVar11 = *(long **)(lVar8 + 0x58);
        if ((*puVar4 & 1) == 0) {
          iVar5 = __cxa_guard_acquire(puVar4);
          puVar9 = PTR_DAT_02715080;
          if (iVar5 != 0) {
            uVar6 = FUN_00a87090();
            *(undefined8 *)PTR_DAT_02715080 = uVar6;
            __cxa_guard_release(puVar4);
            puVar9 = PTR_DAT_02715080;
          }
        }
        while( true ) {
          if (plVar11 == (long *)0x0) goto LAB_013810bc;
          if (plVar11 == (long *)puVar9) break;
          plVar11 = (long *)*plVar11;
        }
        iVar5 = *piVar1;
        if (iVar5 != iVar10) break;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar10 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar12 = 0;
          if (*(long *)(lVar8 + 0x60) != 0) {
            lVar12 = *(long *)(lVar8 + 0x60) + -0x50;
          }
          goto LAB_013810c0;
        }
        lVar12 = 0;
        iVar10 = iVar5;
        if (iVar5 == 0) goto LAB_013810c0;
      }
      ClearExclusiveLocal();
      lVar12 = 0;
      iVar10 = iVar5;
    } while (iVar5 != 0);
  }
LAB_013810c0:
  puVar4 = PTR_PTR_02718e90;
  fVar16 = *(float *)(param_1 + 0x170) / *(float *)(param_1 + 0x174);
  fVar17 = *(float *)(param_1 + 0x150);
  fVar21 = *(float *)(param_1 + 0x160);
  lVar8 = (ulong)*(uint *)(param_1 + 0x144) * 8;
  fVar15 = (float)(**(code **)(PTR_PTR_02718e90 + lVar8))(fVar16);
  fVar22 = *(float *)(param_1 + 0x164);
  fVar18 = *(float *)(param_1 + 0x154);
  fVar13 = (float)(**(code **)(puVar4 + lVar8))(fVar16);
  fVar23 = *(float *)(param_1 + 0x168);
  fVar19 = *(float *)(param_1 + 0x158);
  fVar14 = (float)(**(code **)(puVar4 + lVar8))(fVar16);
  fVar24 = *(float *)(param_1 + 0x16c);
  fVar20 = *(float *)(param_1 + 0x15c);
  fVar16 = (float)(**(code **)(puVar4 + lVar8))(fVar16);
  *(undefined1 *)(lVar12 + 0xc0) = 1;
  *(ulong *)(lVar12 + 0xa8) =
       CONCAT44(fVar20 + (fVar24 - fVar20) * fVar16,fVar19 + (fVar23 - fVar19) * fVar14);
  *(ulong *)(lVar12 + 0xa0) =
       CONCAT44(fVar18 + (fVar22 - fVar18) * fVar13,fVar17 + (fVar21 - fVar17) * fVar15);
  if (lVar12 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x013811b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
  return;
}


