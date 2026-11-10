/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01380cf0; name: FUN_01380cf0
 */


void FUN_01380cf0(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 uVar7;
  code *pcVar8;
  long lVar9;
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
  
  fVar14 = *(float *)(param_1 + 0x78) + *(float *)(param_1 + 0xb0);
  *(float *)(param_1 + 0xb0) = fVar14;
  if (*(float *)(param_1 + 0xb4) <= fVar14) {
    pcVar8 = *(code **)(param_1 + 0xc0);
    *(float *)(param_1 + 0xb0) = *(float *)(param_1 + 0xb4);
    *(undefined1 *)(param_1 + 0x80) = 0;
    if (pcVar8 != (code *)0x0) {
      (*pcVar8)(param_1 + 0xe0);
      pcVar8 = *(code **)(param_1 + 200);
      if (pcVar8 != (code *)0x0) {
        *(undefined8 *)(param_1 + 0xd0) = 0;
        *(undefined8 *)(param_1 + 0xd8) = 0;
        *(undefined8 *)(param_1 + 0xc0) = 0;
        *(undefined8 *)(param_1 + 200) = 0;
        (*pcVar8)(param_1 + 0xe0);
      }
    }
  }
  puVar5 = PTR_DAT_02715080;
  puVar4 = PTR_DAT_02715078;
  lVar9 = *(long *)(param_1 + 0x68);
  if ((lVar9 == 0) || (*(int *)(lVar9 + 0x54) == 0)) {
LAB_01380e44:
    lVar12 = 0;
  }
  else {
    piVar1 = (int *)(lVar9 + 0x54);
    iVar10 = *(int *)(lVar9 + 0x54);
    do {
      while( true ) {
        plVar11 = *(long **)(lVar9 + 0x58);
        if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
          uVar7 = FUN_00a87090();
          *(undefined8 *)puVar5 = uVar7;
          __cxa_guard_release(puVar4);
        }
        while( true ) {
          if (plVar11 == (long *)0x0) goto LAB_01380e44;
          if (plVar11 == (long *)puVar5) break;
          plVar11 = (long *)*plVar11;
        }
        iVar6 = *piVar1;
        if (iVar6 != iVar10) break;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar10 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar12 = 0;
          if (*(long *)(lVar9 + 0x60) != 0) {
            lVar12 = *(long *)(lVar9 + 0x60) + -0x50;
          }
          goto LAB_01380e48;
        }
        lVar12 = 0;
        iVar10 = iVar6;
        if (iVar6 == 0) goto LAB_01380e48;
      }
      ClearExclusiveLocal();
      lVar12 = 0;
      iVar10 = iVar6;
    } while (iVar6 != 0);
  }
LAB_01380e48:
  puVar4 = PTR_PTR_02718e90;
  fVar15 = *(float *)(param_1 + 0xb0) / *(float *)(param_1 + 0xb4);
  fVar16 = *(float *)(param_1 + 0x90);
  fVar19 = *(float *)(param_1 + 0xa0);
  lVar9 = (ulong)*(uint *)(param_1 + 0x84) * 8;
  fVar14 = (float)(**(code **)(PTR_PTR_02718e90 + lVar9))(fVar15);
  fVar20 = *(float *)(param_1 + 0xa4);
  fVar17 = *(float *)(param_1 + 0x94);
  fVar13 = (float)(**(code **)(puVar4 + lVar9))(fVar15);
  fVar21 = *(float *)(param_1 + 0xa8);
  fVar18 = *(float *)(param_1 + 0x98);
  fVar15 = (float)(**(code **)(puVar4 + lVar9))(fVar15);
  *(undefined1 *)(lVar12 + 0xc0) = 1;
  *(ulong *)(lVar12 + 0xd8) = (ulong)(uint)(fVar18 + (fVar21 - fVar18) * fVar15);
  *(ulong *)(lVar12 + 0xd0) =
       CONCAT44(fVar17 + (fVar20 - fVar17) * fVar13,fVar16 + (fVar19 - fVar16) * fVar14);
  if (lVar12 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01380f14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
  return;
}


