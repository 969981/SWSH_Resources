/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ffe070; name: FUN_00ffe070
 */


void FUN_00ffe070(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined1 auStack_48 [8];
  
  *(undefined1 *)(param_1 + 0x490) = 1;
  puVar9 = *(undefined8 **)(*(long *)(param_1 + 0x450) + 0x80);
  lVar5 = *(long *)(*(long *)(param_1 + 0x450) + 0x88);
  puVar12 = puVar9 + lVar5 * 0x22;
  if (lVar5 != 0) {
    do {
      uVar3 = (*(code *)puVar9[2])(puVar9 + 6);
      if (((uVar3 & 1) != 0) && (uVar3 = (*(code *)puVar9[0x12])(puVar9 + 0x16), (uVar3 & 1) != 0))
      goto LAB_00ffe0d8;
      puVar9 = puVar9 + 0x22;
    } while (puVar9 != puVar12);
    puVar9 = puVar12;
  }
LAB_00ffe0d8:
  puVar13 = puVar9 + 0x22;
  if (puVar12 != puVar9 && puVar13 != puVar12) {
    do {
      puVar1 = puVar13 + 6;
      uVar3 = (*(code *)puVar13[2])(puVar1);
      if (((uVar3 & 1) == 0) || (uVar3 = (*(code *)puVar13[0x12])(puVar13 + 0x16), (uVar3 & 1) == 0)
         ) {
        *puVar9 = *puVar13;
        pcVar4 = (code *)puVar9[3];
        if (pcVar4 != (code *)0x0) {
          puVar9[4] = 0;
          puVar9[5] = 0;
          puVar9[2] = 0;
          puVar9[3] = 0;
          (*pcVar4)(puVar9 + 6);
        }
        if ((code *)puVar13[5] != (code *)0x0) {
          (*(code *)puVar13[5])(puVar1,puVar9 + 6);
          uVar6 = puVar13[2];
          uVar2 = puVar13[3];
          uVar8 = puVar13[5];
          puVar9[4] = puVar13[4];
          puVar9[5] = uVar8;
          puVar9[2] = uVar6;
          puVar9[3] = uVar2;
          pcVar4 = (code *)puVar13[3];
          if (pcVar4 != (code *)0x0) {
            puVar13[4] = 0;
            puVar13[5] = 0;
            puVar13[2] = 0;
            puVar13[3] = 0;
            (*pcVar4)(puVar1);
          }
        }
        pcVar4 = (code *)puVar9[0x13];
        if (pcVar4 != (code *)0x0) {
          puVar9[0x14] = 0;
          puVar9[0x15] = 0;
          puVar9[0x12] = 0;
          puVar9[0x13] = 0;
          (*pcVar4)(puVar9 + 0x16);
        }
        if ((code *)puVar13[0x15] != (code *)0x0) {
          (*(code *)puVar13[0x15])(puVar13 + 0x16,puVar9 + 0x16);
          uVar6 = puVar13[0x12];
          uVar2 = puVar13[0x13];
          uVar8 = puVar13[0x15];
          puVar9[0x14] = puVar13[0x14];
          puVar9[0x15] = uVar8;
          puVar9[0x12] = uVar6;
          puVar9[0x13] = uVar2;
          pcVar4 = (code *)puVar13[0x13];
          if (pcVar4 != (code *)0x0) {
            puVar13[0x14] = 0;
            puVar13[0x15] = 0;
            puVar13[0x12] = 0;
            puVar13[0x13] = 0;
            (*pcVar4)(puVar13 + 0x16);
          }
        }
        puVar9 = puVar9 + 0x22;
      }
      puVar13 = puVar13 + 0x22;
    } while (puVar12 != puVar13);
  }
  lVar5 = *(long *)(param_1 + 0x450);
  FUN_00ffe300(auStack_48,lVar5 + 0x40,puVar9,
               *(long *)(lVar5 + 0x80) + *(long *)(lVar5 + 0x88) * 0x110);
  *(undefined1 *)(param_1 + 0x490) = 0;
  plVar10 = (long *)(*(long *)(param_1 + 0x470) + 0x88);
  if (*plVar10 == 0) {
LAB_00ffe2e0:
    *plVar10 = 0;
    return;
  }
  lVar5 = *(long *)(param_1 + 0x450);
  if (*(ulong *)(lVar5 + 0x88) < 0x10) {
    lVar7 = *plVar10 * 0x110;
    lVar11 = *(long *)(*(long *)(param_1 + 0x470) + 0x80);
    do {
      lVar7 = lVar7 + -0x110;
      FUN_01000bf0(lVar5 + 0x40,lVar11);
      if (lVar7 == 0) {
        lVar5 = *(long *)(param_1 + 0x470);
        plVar10 = (long *)(lVar5 + 0x88);
        lVar11 = *plVar10;
        if (lVar11 != 0) {
          lVar5 = *(long *)(lVar5 + 0x80) + 0xb0;
          do {
            pcVar4 = *(code **)(lVar5 + -0x18);
            if (pcVar4 != (code *)0x0) {
              *(undefined8 *)(lVar5 + -0x10) = 0;
              *(undefined8 *)(lVar5 + -8) = 0;
              *(undefined8 *)(lVar5 + -0x20) = 0;
              *(undefined8 *)(lVar5 + -0x18) = 0;
              (*pcVar4)(lVar5);
            }
            pcVar4 = *(code **)(lVar5 + -0x98);
            lVar11 = lVar11 + -1;
            if (pcVar4 != (code *)0x0) {
              *(undefined8 *)(lVar5 + -0x90) = 0;
              *(undefined8 *)(lVar5 + -0x88) = 0;
              *(undefined8 *)(lVar5 + -0xa0) = 0;
              *(undefined8 *)(lVar5 + -0x98) = 0;
              (*pcVar4)(lVar5 + -0x80);
            }
            lVar5 = lVar5 + 0x110;
          } while (lVar11 != 0);
        }
        goto LAB_00ffe2e0;
      }
      plVar10 = (long *)(param_1 + 0x450);
      if (*(char *)(param_1 + 0x490) != '\0') {
        plVar10 = (long *)(param_1 + 0x470);
      }
      lVar5 = *plVar10;
      lVar11 = lVar11 + 0x110;
    } while (*(ulong *)(lVar5 + 0x88) < 0x10);
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


