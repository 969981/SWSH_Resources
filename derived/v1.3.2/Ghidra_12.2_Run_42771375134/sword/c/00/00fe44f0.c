/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fe44f0; name: FUN_00fe44f0
 */


bool FUN_00fe44f0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  bool bVar7;
  long *plVar8;
  undefined8 uVar9;
  long *plVar10;
  char *pcVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  
  puVar1 = PTR_DAT_02710860;
  plVar8 = *(long **)(param_1 + 0x60);
  plVar10 = *(long **)(param_1 + 0x68);
  if (plVar10 != plVar8) {
    lVar12 = 0;
    uVar14 = 0;
    do {
      puVar6 = (undefined8 *)((long)plVar8 + lVar12);
      puVar3 = *(undefined8 **)(param_1 + 0x98);
      if (puVar3 < *(undefined8 **)(param_1 + 0xa0)) {
        uVar9 = *(undefined8 *)(param_1 + 0xa8);
        lVar2 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
        if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = uVar9;
        *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
        uVar9 = *puVar6;
        *puVar6 = 0;
        *puVar3 = uVar9;
        uVar5 = puVar6[3];
        uVar9 = puVar6[2];
        puVar3[1] = puVar6[1];
        puVar3[2] = uVar9;
        puVar3[3] = uVar5;
        *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
        *(long *)(param_1 + 0x98) = *(long *)(param_1 + 0x98) + 0x20;
      }
      else {
        FUN_00d32a20(param_1 + 0x90,puVar6);
      }
      plVar8 = *(long **)(param_1 + 0x60);
      plVar10 = *(long **)(param_1 + 0x68);
      uVar14 = uVar14 + 1;
      lVar12 = lVar12 + 0x20;
    } while (uVar14 < (ulong)((long)plVar10 - (long)plVar8 >> 5));
  }
  if (plVar8 != plVar10) {
    do {
      plVar13 = plVar10 + -4;
      lVar12 = *plVar13;
      *plVar13 = 0;
      if (lVar12 != 0) {
        puVar6 = *(undefined8 **)(lVar12 + 0x28);
        *(undefined8 *)(lVar12 + 0x28) = 0;
        if (puVar6 != (undefined8 *)0x0) {
          pcVar4 = (code *)puVar6[1];
          if (pcVar4 != (code *)0x0) {
            puVar6[2] = 0;
            puVar6[3] = 0;
            *puVar6 = 0;
            puVar6[1] = 0;
            (*pcVar4)(puVar6 + 4);
          }
          (**(code **)(**(long **)(lVar12 + 0x30) + 0x18))
                    (*(long **)(lVar12 + 0x30),puVar6,*(undefined8 *)(lVar12 + 0x38),
                     *(undefined8 *)(lVar12 + 0x40));
        }
        puVar6 = *(undefined8 **)(lVar12 + 8);
        *(undefined8 *)(lVar12 + 8) = 0;
        if (puVar6 != (undefined8 *)0x0) {
          pcVar4 = (code *)puVar6[1];
          if (pcVar4 != (code *)0x0) {
            puVar6[2] = 0;
            puVar6[3] = 0;
            *puVar6 = 0;
            puVar6[1] = 0;
            (*pcVar4)(puVar6 + 4);
          }
          (**(code **)(**(long **)(lVar12 + 0x10) + 0x18))
                    (*(long **)(lVar12 + 0x10),puVar6,*(undefined8 *)(lVar12 + 0x18),
                     *(undefined8 *)(lVar12 + 0x20));
        }
        (**(code **)(*(long *)plVar10[-3] + 0x18))
                  ((long *)plVar10[-3],lVar12,plVar10[-2],plVar10[-1]);
      }
      plVar10 = plVar13;
    } while (plVar8 != plVar13);
  }
  puVar6 = *(undefined8 **)(param_1 + 0x90);
  *(long **)(param_1 + 0x68) = plVar8;
  if (puVar6 != *(undefined8 **)(param_1 + 0x98)) {
    bVar7 = true;
    do {
      pcVar11 = (char *)*puVar6;
      if (*pcVar11 == '\0') {
        uVar14 = (*(code *)**(undefined8 **)(pcVar11 + 8))(*(undefined8 **)(pcVar11 + 8) + 4);
        if ((uVar14 & 1) == 0) {
          bVar7 = false;
        }
        else {
          puVar3 = *(undefined8 **)(pcVar11 + 0x28);
          if (puVar3 != (undefined8 *)0x0) {
            (*(code *)*puVar3)(puVar3 + 4);
          }
          *pcVar11 = '\x01';
        }
      }
      puVar6 = puVar6 + 4;
    } while (puVar6 != *(undefined8 **)(param_1 + 0x98));
    if (!bVar7) {
      return false;
    }
    plVar8 = *(long **)(param_1 + 0x68);
  }
  return plVar8 == *(long **)(param_1 + 0x60);
}


