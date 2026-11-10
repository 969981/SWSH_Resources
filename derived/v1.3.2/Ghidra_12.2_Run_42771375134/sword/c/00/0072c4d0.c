/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0072c4d0; name: FUN_0072c4d0
 */


void FUN_0072c4d0(long param_1)

{
  bool bVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  undefined *puVar7;
  undefined *puVar8;
  uint *puVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  
  puVar8 = PTR_DAT_02715500;
  puVar7 = PTR_DAT_02710460;
  lVar4 = *(long *)(param_1 + 0x110);
  lVar5 = *(long *)(param_1 + 0x118);
  do {
    while( true ) {
      if (lVar4 == lVar5) {
        return;
      }
      if (*(long *)(lVar4 + 0x28) != 0) {
        lVar15 = *(long *)(lVar4 + 0xb0);
        iVar6 = *(int *)puVar8;
        *(int *)(lVar15 + 0x138) = iVar6;
        FUN_006f6a10(*(undefined8 *)puVar7,lVar15);
        lVar2 = lVar15 + (long)iVar6 * 0x70 + 0x58;
        puVar9 = (uint *)thunk_FUN_0199c7e0(lVar2);
        if (*(long *)(lVar4 + 0x28) != 0) {
          uVar14 = 1;
          uVar13 = 0;
          do {
            uVar12 = uVar14;
            *puVar9 = (uint)((*(ulong *)(*(long *)(lVar4 + 0x20) +
                                        (uVar13 >> 3 & 0x1ffffffffffffff8)) & 1L << (uVar13 & 0x3f))
                            != 0);
            puVar9 = (uint *)((long)puVar9 + (long)*(int *)(lVar15 + (long)iVar6 * 0x70 + 0xc0));
            uVar14 = (ulong)((int)uVar12 + 1);
            uVar13 = uVar12;
          } while (uVar12 < *(ulong *)(lVar4 + 0x28));
        }
        thunk_FUN_0199c800(lVar2);
      }
      if (*(long *)(lVar4 + 0x58) == *(long *)(lVar4 + 0x50)) break;
      lVar16 = *(long *)(lVar4 + 0xb8);
      iVar6 = *(int *)puVar8;
      *(int *)(lVar16 + 0x138) = iVar6;
      FUN_006f6a10(*(undefined8 *)puVar7,lVar16);
      lVar2 = lVar16 + (long)iVar6 * 0x70 + 0x58;
      puVar10 = (undefined4 *)thunk_FUN_0199c7e0(lVar2);
      lVar15 = *(long *)(lVar4 + 0x50);
      if (*(long *)(lVar4 + 0x58) != lVar15) {
        uVar14 = 0;
        uVar13 = 1;
        do {
          *puVar10 = *(undefined4 *)(lVar15 + uVar14 * 4);
          puVar10 = (undefined4 *)
                    ((long)puVar10 + (long)*(int *)(lVar16 + (long)iVar6 * 0x70 + 0xc0));
          lVar15 = *(long *)(lVar4 + 0x50);
          bVar1 = uVar13 < (ulong)(*(long *)(lVar4 + 0x58) - lVar15 >> 2);
          uVar14 = uVar13;
          uVar13 = (ulong)((int)uVar13 + 1);
        } while (bVar1);
      }
      thunk_FUN_0199c800(lVar2);
      if (*(long *)(lVar4 + 0x88) != *(long *)(lVar4 + 0x80)) goto LAB_0072c648;
LAB_0072c5b4:
      lVar4 = lVar4 + 200;
    }
    if (*(long *)(lVar4 + 0x88) == *(long *)(lVar4 + 0x80)) goto LAB_0072c5b4;
LAB_0072c648:
    lVar16 = *(long *)(lVar4 + 0xc0);
    iVar6 = *(int *)puVar8;
    *(int *)(lVar16 + 0x138) = iVar6;
    FUN_006f6a10(*(undefined8 *)puVar7,lVar16);
    lVar2 = lVar16 + (long)iVar6 * 0x70 + 0x58;
    puVar11 = (undefined8 *)thunk_FUN_0199c7e0(lVar2);
    lVar15 = *(long *)(lVar4 + 0x80);
    if (*(long *)(lVar4 + 0x88) != lVar15) {
      uVar14 = 1;
      uVar13 = 0;
      do {
        uVar12 = uVar14;
        puVar3 = (undefined8 *)(lVar15 + uVar13 * 0x10);
        puVar11[1] = puVar3[1];
        *puVar11 = *puVar3;
        puVar11 = (undefined8 *)((long)puVar11 + (long)*(int *)(lVar16 + (long)iVar6 * 0x70 + 0xc0))
        ;
        lVar15 = *(long *)(lVar4 + 0x80);
        uVar14 = (ulong)((int)uVar12 + 1);
        uVar13 = uVar12;
      } while (uVar12 < (ulong)(*(long *)(lVar4 + 0x88) - lVar15 >> 4));
    }
    thunk_FUN_0199c800(lVar2);
    lVar4 = lVar4 + 200;
  } while( true );
}


