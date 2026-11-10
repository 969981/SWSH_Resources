/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00600190; name: FUN_00600190
 */


void FUN_00600190(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int *piVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  
  if (*(long *)(param_1 + 0x58) != 0) {
    puVar1 = (undefined8 *)(param_1 + 0x48);
    do {
      puVar6 = (undefined8 *)*puVar1;
      if (puVar6 == (undefined8 *)0x0) break;
      puVar7 = (undefined8 *)puVar6[1];
      if (puVar7 == (undefined8 *)0x0) {
        *puVar1 = 0;
        *(undefined8 *)(param_1 + 0x50) = 0;
      }
      else {
        *puVar7 = 0;
        *puVar1 = puVar7;
      }
      *puVar6 = 0;
      puVar6[1] = 0;
      lVar9 = *(long *)(param_1 + 0x58) + -1;
      *(long *)(param_1 + 0x58) = lVar9;
    } while (lVar9 != 0);
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    puVar1 = (undefined8 *)(param_1 + 0x20);
    do {
      puVar6 = (undefined8 *)*puVar1;
      if (puVar6 == (undefined8 *)0x0) break;
      puVar7 = (undefined8 *)puVar6[1];
      if (puVar7 == (undefined8 *)0x0) {
        *puVar1 = 0;
        *(undefined8 *)(param_1 + 0x28) = 0;
      }
      else {
        *puVar7 = 0;
        *puVar1 = puVar7;
      }
      *puVar6 = 0;
      puVar6[1] = 0;
      lVar9 = *(long *)(param_1 + 0x30) + -1;
      *(long *)(param_1 + 0x30) = lVar9;
    } while (lVar9 != 0);
  }
  piVar8 = (int *)(param_1 + 0x70);
  plVar2 = (long *)(param_1 + 0x88);
  if (0 < *piVar8) {
    lVar9 = 0;
    puVar3 = PTR_DAT_02714508 + 0x10;
    do {
      lVar10 = *(long *)(*plVar2 + lVar9 * 8);
      plVar5 = (long *)(lVar10 + 0x38);
      if (((*(byte *)(lVar10 + 0x58) & 1) == 0) && (lVar11 = *plVar5, lVar11 != 0)) {
        plVar12 = *(long **)(lVar10 + 0x18);
        if (plVar12 != (long *)0x0) {
          lVar4 = (**(code **)(*plVar12 + 0x50))(plVar12,lVar11);
          if (lVar4 != 0) {
            lVar13 = lVar11;
            do {
              FUN_0060af00(lVar13);
              lVar4 = lVar4 + -1;
              lVar13 = lVar13 + 0x98;
            } while (lVar4 != 0);
          }
          (**(code **)(*plVar12 + 0x48))
                    (plVar12,lVar11,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
        }
        *plVar5 = 0;
      }
      *(undefined8 *)(lVar10 + 0x20) = 0;
      *(undefined8 *)(lVar10 + 0x28) = 0;
      *(undefined8 *)(lVar10 + 0x58) = 0;
      *plVar5 = 0;
      *(undefined8 *)(lVar10 + 0x40) = 0;
      *(undefined8 *)(lVar10 + 0x48) = 0;
      *(undefined4 *)(lVar10 + 0xc) = 0;
      if (((lVar9 != 0) && (lVar10 != 0)) &&
         (plVar12 = *(long **)(param_1 + 8), plVar12 != (long *)0x0)) {
        *(undefined **)(lVar10 + 0x10) = puVar3;
        *(undefined8 *)(lVar10 + 0x20) = 0;
        *(undefined8 *)(lVar10 + 0x28) = 0;
        *(undefined8 *)(lVar10 + 0x58) = 0;
        *(undefined8 *)(lVar10 + 0x40) = 0;
        *(undefined8 *)(lVar10 + 0x48) = 0;
        *plVar5 = 0;
        (**(code **)(*plVar12 + 0x48))
                  (plVar12,lVar10,"../../../../Include\\SiCore/SiCore_Pool.h",0xe7);
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 < *piVar8);
  }
  if (((*(byte *)(param_1 + 0xa8) & 1) == 0) && (*plVar2 != 0)) {
    plVar5 = *(long **)(param_1 + 0x68);
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x48))
                (plVar5,*plVar2,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar2 = 0;
  }
  piVar8[0] = 0;
  piVar8[1] = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *plVar2 = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  return;
}


