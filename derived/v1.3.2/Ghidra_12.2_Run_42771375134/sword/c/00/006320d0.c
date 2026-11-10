/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006320d0; name: FUN_006320d0
 */


void FUN_006320d0(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  int *piVar11;
  
  if (*(long *)(param_1 + 0x58) != 0) {
    puVar1 = (undefined8 *)(param_1 + 0x48);
    do {
      puVar5 = (undefined8 *)*puVar1;
      if (puVar5 == (undefined8 *)0x0) break;
      puVar6 = (undefined8 *)puVar5[1];
      if (puVar6 == (undefined8 *)0x0) {
        *puVar1 = 0;
        *(undefined8 *)(param_1 + 0x50) = 0;
      }
      else {
        *puVar6 = 0;
        *puVar1 = puVar6;
      }
      *puVar5 = 0;
      puVar5[1] = 0;
      lVar7 = *(long *)(param_1 + 0x58) + -1;
      *(long *)(param_1 + 0x58) = lVar7;
    } while (lVar7 != 0);
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    puVar1 = (undefined8 *)(param_1 + 0x20);
    do {
      puVar5 = (undefined8 *)*puVar1;
      if (puVar5 == (undefined8 *)0x0) break;
      puVar6 = (undefined8 *)puVar5[1];
      if (puVar6 == (undefined8 *)0x0) {
        *puVar1 = 0;
        *(undefined8 *)(param_1 + 0x28) = 0;
      }
      else {
        *puVar6 = 0;
        *puVar1 = puVar6;
      }
      *puVar5 = 0;
      puVar5[1] = 0;
      lVar7 = *(long *)(param_1 + 0x30) + -1;
      *(long *)(param_1 + 0x30) = lVar7;
    } while (lVar7 != 0);
  }
  piVar11 = (int *)(param_1 + 0x70);
  plVar2 = (long *)(param_1 + 0x88);
  if (0 < *piVar11) {
    lVar7 = 0;
    puVar3 = PTR_DAT_027145c0 + 0x10;
    do {
      lVar8 = *(long *)(*plVar2 + lVar7 * 8);
      plVar4 = (long *)(lVar8 + 0x38);
      if (((*(byte *)(lVar8 + 0x58) & 1) == 0) && (lVar9 = *plVar4, lVar9 != 0)) {
        plVar10 = *(long **)(lVar8 + 0x18);
        if (plVar10 != (long *)0x0) {
          (**(code **)(*plVar10 + 0x50))(plVar10,lVar9);
          (**(code **)(*plVar10 + 0x48))
                    (plVar10,lVar9,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
        }
        *plVar4 = 0;
      }
      *(undefined8 *)(lVar8 + 0x20) = 0;
      *(undefined8 *)(lVar8 + 0x28) = 0;
      *(undefined8 *)(lVar8 + 0x58) = 0;
      *plVar4 = 0;
      *(undefined8 *)(lVar8 + 0x40) = 0;
      *(undefined8 *)(lVar8 + 0x48) = 0;
      *(undefined4 *)(lVar8 + 0xc) = 0;
      if (((lVar7 != 0) && (lVar8 != 0)) &&
         (plVar10 = *(long **)(param_1 + 8), plVar10 != (long *)0x0)) {
        *(undefined **)(lVar8 + 0x10) = puVar3;
        *(undefined8 *)(lVar8 + 0x20) = 0;
        *(undefined8 *)(lVar8 + 0x28) = 0;
        *(undefined8 *)(lVar8 + 0x58) = 0;
        *plVar4 = 0;
        *(undefined8 *)(lVar8 + 0x40) = 0;
        *(undefined8 *)(lVar8 + 0x48) = 0;
        (**(code **)(*plVar10 + 0x48))
                  (plVar10,lVar8,"../../../../Include\\SiCore/SiCore_Pool.h",0xe7);
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < *piVar11);
  }
  if (((*(byte *)(param_1 + 0xa8) & 1) == 0) && (*plVar2 != 0)) {
    plVar4 = *(long **)(param_1 + 0x68);
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x48))
                (plVar4,*plVar2,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar2 = 0;
  }
  piVar11[0] = 0;
  piVar11[1] = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *plVar2 = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  return;
}


