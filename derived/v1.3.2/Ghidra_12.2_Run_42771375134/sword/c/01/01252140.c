/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01252140; name: FUN_01252140
 */


void FUN_01252140(long param_1,long *param_2)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  long *plVar11;
  undefined1 *puVar12;
  undefined4 *puVar13;
  undefined1 uVar14;
  undefined4 uVar15;
  
  plVar11 = (long *)(param_1 + 0x48);
  puVar5 = (undefined1 *)*plVar11;
  *(undefined1 **)(param_1 + 0x50) = puVar5;
  puVar13 = (undefined4 *)*param_2;
  puVar2 = (undefined4 *)param_2[1];
  if (puVar13 == puVar2) {
    return;
  }
  puVar7 = *(undefined1 **)(param_1 + 0x58);
  uVar15 = *puVar13;
  uVar14 = (undefined1)uVar15;
  if (puVar7 <= puVar5) goto LAB_012521c0;
  do {
    *puVar5 = (char)uVar15;
    *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + 1;
    while( true ) {
      puVar13 = puVar13 + 1;
      if (puVar13 == puVar2) {
        return;
      }
      puVar5 = *(undefined1 **)(param_1 + 0x50);
      puVar7 = *(undefined1 **)(param_1 + 0x58);
      uVar15 = *puVar13;
      uVar14 = (undefined1)uVar15;
      if (puVar5 < puVar7) break;
LAB_012521c0:
      lVar8 = *plVar11;
      puVar12 = puVar5 + (1 - lVar8);
      if ((long)puVar12 < 0) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      if ((ulong)((long)puVar7 - lVar8) < 0x3fffffffffffffff) {
        puVar7 = (undefined1 *)(((long)puVar7 - lVar8) * 2);
        if (puVar12 <= puVar7) {
          puVar12 = puVar7;
        }
        if (puVar12 != (undefined1 *)0x0) goto LAB_012521f8;
        lVar6 = 0;
      }
      else {
        puVar12 = (undefined1 *)0x7fffffffffffffff;
LAB_012521f8:
        lVar6 = FUN_017cd750(puVar12);
      }
      puVar7 = puVar5 + (lVar6 - lVar8);
      puVar9 = puVar7 + 1;
      *puVar7 = uVar14;
      puVar1 = *(undefined1 **)(param_1 + 0x48);
      puVar10 = *(undefined1 **)(param_1 + 0x50);
      puVar4 = puVar1;
      if (puVar10 != puVar1) {
        lVar3 = -(long)puVar10;
        do {
          puVar7 = puVar7 + -1;
          puVar10 = puVar10 + -1;
          *puVar7 = *puVar10;
        } while (puVar1 != puVar10);
        puVar4 = (undefined1 *)*plVar11;
        puVar7 = puVar1 + (long)(puVar5 + lVar6 + (lVar3 - lVar8));
      }
      *(undefined1 **)(param_1 + 0x48) = puVar7;
      *(undefined1 **)(param_1 + 0x50) = puVar9;
      *(undefined1 **)(param_1 + 0x58) = puVar12 + lVar6;
      if (puVar4 != (undefined1 *)0x0) {
        FUN_017cd7a0();
      }
    }
  } while( true );
}


