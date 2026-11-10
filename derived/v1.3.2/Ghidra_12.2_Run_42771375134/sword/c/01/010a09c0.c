/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010a09c0; name: FUN_010a09c0
 */


void FUN_010a09c0(long param_1)

{
  ulong uVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  ulong *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  long local_58;
  
  puVar3 = PTR_DAT_02710860;
  lVar4 = *(long *)(param_1 + 0x58);
  lVar6 = *(long *)(param_1 + 0x60);
  if (lVar4 == lVar6) {
    lVar4 = *(long *)(param_1 + 0x88);
    lVar6 = *(long *)(param_1 + 0x90);
    if (lVar4 == lVar6) goto LAB_010a0bb8;
  }
  else {
    lVar12 = lVar4;
    while( true ) {
      local_58 = (lVar12 - lVar4 >> 2) * -0x79435e50d79435e5;
      plVar2 = *(long **)(param_1 + 0x90);
      if (plVar2 < *(long **)(param_1 + 0x98)) {
        uVar13 = *(undefined8 *)(param_1 + 0xa0);
        lVar4 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
        if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = uVar13;
        *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
        *plVar2 = local_58;
        *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
        *(long *)(param_1 + 0x90) = *(long *)(param_1 + 0x90) + 8;
      }
      else {
        FUN_010a6620(param_1 + 0x88,&local_58);
      }
      if (lVar6 + -0x4c == lVar12) break;
      lVar4 = *(long *)(param_1 + 0x58);
      lVar12 = lVar12 + 0x4c;
    }
    lVar4 = *(long *)(param_1 + 0x88);
    lVar6 = *(long *)(param_1 + 0x90);
    if (lVar4 == lVar6) goto LAB_010a0bb8;
  }
  lVar6 = lVar6 - lVar4;
  if (lVar6 == 8) {
    uVar9 = 0;
  }
  else {
    puVar5 = *(ulong **)(*(long *)PTR_DAT_02710848 + 0x98);
    if (lVar6 == 0) {
      uVar7 = *puVar5;
      uVar9 = puVar5[1] + uVar7;
      uVar8 = puVar5[1] ^ uVar7;
      *puVar5 = uVar8 ^ (uVar7 >> 0x28 | uVar7 << 0x18) ^ uVar8 << 0x10;
      puVar5[1] = uVar8 >> 0x1b | uVar8 << 0x25;
    }
    else {
      uVar7 = lVar6 >> 3;
      uVar8 = (0x40 - LZCOUNT(uVar7)) -
              (ulong)((0xffffffffffffffffU >> (0x41U - (0x40 - LZCOUNT(uVar7)) & 0x3f) & uVar7) == 0
                     );
      uVar9 = uVar8 >> 6;
      if ((uVar8 & 0x3f) != 0) {
        uVar9 = uVar9 + 1;
      }
      uVar10 = 0;
      if (uVar9 != 0) {
        uVar10 = uVar8 / uVar9;
      }
      uVar1 = 0;
      if (uVar9 <= uVar8) {
        uVar1 = 0xffffffffffffffff >> (-uVar10 & 0x3f);
      }
      uVar8 = *puVar5;
      uVar10 = puVar5[1];
      do {
        uVar11 = uVar8 ^ uVar10;
        uVar9 = uVar8 + uVar10;
        uVar10 = uVar11 >> 0x1b | uVar11 << 0x25;
        uVar8 = uVar11 ^ (uVar8 >> 0x28 | uVar8 << 0x18) ^ uVar11 << 0x10;
        uVar9 = uVar9 & uVar1;
      } while (uVar7 <= uVar9);
      *puVar5 = uVar8;
      puVar5[1] = uVar10;
    }
  }
  lVar4 = *(long *)(*(long *)(param_1 + 0x88) + uVar9 * 8);
  *(undefined1 *)(param_1 + 0xb8) = 1;
  if (*(long *)PTR_DAT_02710958 != 0) {
    FUN_01211350(*(long *)PTR_DAT_02710958,*(long *)(param_1 + 0x58) + lVar4 * 0x4c);
  }
LAB_010a0bb8:
  lVar4 = *(long *)(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0x50) = 0;
  lVar6 = *(long *)(param_1 + 0x60);
  while (lVar12 = lVar6, lVar12 != lVar4) {
    lVar6 = lVar12 + -0x4c;
    if (*(char *)(lVar12 + -0x48) != '\0') {
      *(undefined1 *)(lVar12 + -0x48) = 0;
    }
  }
  *(long *)(param_1 + 0x60) = lVar4;
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_1 + 0x88);
  return;
}


