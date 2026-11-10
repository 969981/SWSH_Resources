/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004c78c0; name: FUN_004c78c0
 */


void FUN_004c78c0(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  float fVar11;
  
  puVar6 = PTR_DAT_02713500;
  for (lVar9 = *(long *)(PTR_DAT_02713500 + 0x10); lVar9 != 0; lVar9 = *(long *)(lVar9 + 0x68)) {
    if (*(int *)(lVar9 + 0x80) == 1) {
      FUN_004dc0b0(lVar9);
    }
  }
  FUN_004c9570();
  puVar5 = PTR_DAT_027134f8;
  fVar4 = DAT_01d4c4dc;
  fVar3 = DAT_01d4c2e8;
  fVar2 = DAT_01d4bf90;
  fVar1 = DAT_01d4bd24;
  uVar8 = 0;
  if (*(int *)(PTR_DAT_027134f8 + 8) != 0) {
    uVar10 = 0;
    do {
      while( true ) {
        lVar9 = *(long *)(*(long *)puVar5 + uVar10 * 8);
        plVar7 = *(long **)(lVar9 + 0x20);
        if (plVar7 != (long *)0x0) break;
        *(undefined4 *)(lVar9 + 0x38) = 0x3f800000;
LAB_004c79dc:
        fVar11 = (float)(*(uint *)(lVar9 + 0x38) & 0x7fffff | 0x3f800000);
        fVar11 = (fVar11 + -1.0) / (fVar11 + 1.0);
        *(float *)(lVar9 + 0x3c) =
             (fVar11 + fVar11 + (fVar11 + fVar11) * fVar11 * fVar11 * fVar1 +
             fVar4 * ((float)(*(uint *)(lVar9 + 0x38) >> 0x17 & 0xff) + fVar2)) * fVar3;
        uVar8 = *(uint *)(puVar5 + 8);
        uVar10 = uVar10 + 1;
        if (uVar8 <= uVar10) goto LAB_004c7a30;
      }
      if ((*(ushort *)((long)plVar7 + 0x154) >> 5 & 1) != 0) {
        if ((*(ushort *)((long)plVar7 + 0x154) >> 9 & 1) != 0) {
          (**(code **)(*plVar7 + 0x58))();
        }
        FUN_004d0200(lVar9);
        if (*(long *)(lVar9 + 0x20) != 0) goto LAB_004c79b4;
        goto LAB_004c79dc;
      }
      (**(code **)(*plVar7 + 0x50))(plVar7,0);
      FUN_004d0200(lVar9);
      if (*(long *)(lVar9 + 0x20) == 0) goto LAB_004c79dc;
LAB_004c79b4:
      if (*(long *)(lVar9 + 0x48) == 0) goto LAB_004c79dc;
      FUN_004cfc00(lVar9,0);
      uVar8 = *(uint *)(puVar5 + 8);
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar8);
  }
LAB_004c7a30:
  lVar9 = *(long *)(puVar6 + 0x10);
  if (lVar9 != 0) {
    do {
      if (*(int *)(lVar9 + 0x80) == 1) {
        FUN_004cfc00(lVar9,1);
      }
      lVar9 = *(long *)(lVar9 + 0x68);
    } while (lVar9 != 0);
    uVar8 = *(uint *)(puVar5 + 8);
  }
  while (uVar8 = uVar8 - 1, -1 < (int)uVar8) {
    if ((*(byte *)(*(long *)(*(long *)puVar5 + (ulong)uVar8 * 8) + 0x354) >> 1 & 1) != 0) {
      FUN_004c7ad0();
    }
  }
  FUN_004c7e50();
  for (lVar9 = *(long *)(puVar6 + 0x10); lVar9 != 0; lVar9 = *(long *)(lVar9 + 0x68)) {
    if (*(int *)(lVar9 + 0x80) == 1) {
      FUN_004d0100(lVar9);
    }
  }
  return;
}


