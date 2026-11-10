/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013811f0; name: FUN_013811f0
 */


void FUN_013811f0(long param_1)

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
  float local_44;
  
  fVar14 = *(float *)(param_1 + 0x78) + *(float *)(param_1 + 0x230);
  *(float *)(param_1 + 0x230) = fVar14;
  if (*(float *)(param_1 + 0x234) <= fVar14) {
    pcVar7 = *(code **)(param_1 + 0x248);
    *(float *)(param_1 + 0x230) = *(float *)(param_1 + 0x234);
    *(undefined1 *)(param_1 + 0x200) = 0;
    if (pcVar7 != (code *)0x0) {
      *(undefined8 *)(param_1 + 600) = 0;
      *(undefined8 *)(param_1 + 0x250) = 0;
      *(undefined8 *)(param_1 + 0x248) = 0;
      *(undefined8 *)(param_1 + 0x240) = 0;
      (*pcVar7)(param_1 + 0x260);
    }
    if (*(code **)(param_1 + 0x2c0) != (code *)0x0) {
      (**(code **)(param_1 + 0x2c0))(param_1 + 0x2e0);
      pcVar7 = *(code **)(param_1 + 0x2c8);
      if (pcVar7 != (code *)0x0) {
        *(undefined8 *)(param_1 + 0x2d0) = 0;
        *(undefined8 *)(param_1 + 0x2d8) = 0;
        *(undefined8 *)(param_1 + 0x2c0) = 0;
        *(undefined8 *)(param_1 + 0x2c8) = 0;
        (*pcVar7)(param_1 + 0x2e0);
      }
    }
  }
  puVar4 = PTR_DAT_02715078;
  lVar8 = *(long *)(param_1 + 0x68);
  if ((lVar8 == 0) || (*(int *)(lVar8 + 0x54) == 0)) {
LAB_01381370:
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
          if (plVar11 == (long *)0x0) goto LAB_01381370;
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
          goto LAB_01381374;
        }
        lVar12 = 0;
        iVar10 = iVar5;
        if (iVar5 == 0) goto LAB_01381374;
      }
      ClearExclusiveLocal();
      lVar12 = 0;
      iVar10 = iVar5;
    } while (iVar5 != 0);
  }
LAB_01381374:
  puVar4 = PTR_PTR_02718e90;
  fVar15 = *(float *)(param_1 + 0x230) / *(float *)(param_1 + 0x234);
  fVar16 = *(float *)(param_1 + 0x210);
  fVar19 = *(float *)(param_1 + 0x220);
  lVar8 = (ulong)*(uint *)(param_1 + 0x204) * 8;
  fVar14 = (float)(**(code **)(PTR_PTR_02718e90 + lVar8))(fVar15);
  fVar20 = *(float *)(param_1 + 0x224);
  fVar17 = *(float *)(param_1 + 0x214);
  fVar13 = (float)(**(code **)(puVar4 + lVar8))(fVar15);
  fVar21 = *(float *)(param_1 + 0x228);
  fVar18 = *(float *)(param_1 + 0x218);
  fVar15 = (float)(**(code **)(puVar4 + lVar8))(fVar15);
  *(undefined1 *)(lVar12 + 0xc0) = 1;
  *(ulong *)(lVar12 + 0xb8) = (ulong)(uint)(fVar18 + (fVar21 - fVar18) * fVar15);
  *(ulong *)(lVar12 + 0xb0) =
       CONCAT44(fVar17 + (fVar20 - fVar17) * fVar13,fVar16 + (fVar19 - fVar16) * fVar14);
  if (lVar12 != 0) {
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
  }
  if (*(code **)(param_1 + 0x240) != (code *)0x0) {
    local_44 = *(float *)(param_1 + 0x230) / *(float *)(param_1 + 0x234);
    (**(code **)(param_1 + 0x240))(param_1 + 0x260,&local_44);
  }
  return;
}


