/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f23910; name: FUN_00f23910
 */


void FUN_00f23910(long param_1)

{
  long *plVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  float fVar12;
  float fVar13;
  
  FUN_00f24860(*(undefined8 *)(param_1 + 0x488),*(undefined8 *)(param_1 + 0x490));
  puVar4 = PTR_DAT_0271fd50;
  puVar3 = PTR_DAT_0271fd48;
  fVar13 = DAT_01d4bb20;
  if (*(int *)(param_1 + 0x464) < 1) {
    plVar10 = *(long **)(param_1 + 0x488);
    plVar11 = *(long **)(param_1 + 0x490);
    if (plVar10 == plVar11) goto LAB_00f23a74;
  }
  else {
    lVar8 = 0;
    do {
      lVar9 = *(long *)(param_1 + 0x370 + lVar8 * 8);
      if (lVar9 == 0) break;
      fVar12 = *(float *)(lVar9 + 0xb8);
      if (fVar13 <= fVar12) {
        fVar12 = fVar13;
      }
      fVar13 = fVar12;
      lVar8 = lVar8 + 1;
    } while (lVar8 < *(int *)(param_1 + 0x464));
    plVar10 = *(long **)(param_1 + 0x488);
    plVar11 = *(long **)(param_1 + 0x490);
    if (plVar10 == plVar11) {
LAB_00f23a74:
      plVar11 = plVar10;
      goto LAB_00f23a78;
    }
  }
  fVar12 = DAT_01d4bd84;
  do {
    lVar8 = FUN_00f21fe0(*plVar10 + 0x50);
    plVar2 = *(long **)(lVar8 + 0x1f0);
    for (plVar1 = *(long **)(lVar8 + 0x1e8); plVar1 != plVar2; plVar1 = plVar1 + 1) {
      lVar8 = *plVar1;
      plVar7 = (long *)(*(code *)**(undefined8 **)(lVar8 + 0x50))((undefined8 *)(lVar8 + 0x50));
      if (((*puVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar3), iVar5 != 0)) {
        uVar6 = FUN_00e6aa90();
        *(undefined8 *)puVar4 = uVar6;
        __cxa_guard_release(puVar3);
      }
      for (; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
        if (plVar7 == (long *)puVar4) goto LAB_00f23a40;
      }
    }
    lVar8 = 0;
LAB_00f23a40:
    *(float *)(lVar8 + 0xc0) = fVar13;
    *(float *)(lVar8 + 0xc4) = fVar12;
    fVar12 = fVar12 + 7.5;
    plVar10 = plVar10 + 1;
  } while (plVar10 != plVar11);
  plVar10 = *(long **)(param_1 + 0x488);
  plVar11 = *(long **)(param_1 + 0x490);
LAB_00f23a78:
  FUN_00f254a0(plVar10,plVar11);
  return;
}


