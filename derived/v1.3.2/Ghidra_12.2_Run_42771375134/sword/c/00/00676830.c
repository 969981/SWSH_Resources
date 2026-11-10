/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00676830; name: FUN_00676830
 */


void FUN_00676830(long param_1)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  
  if (*(long **)(param_1 + 0xa8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0xa8) + 0x18))();
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
  if (*(long **)(param_1 + 0xa0) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0xa0) + 0x18))();
    *(undefined8 *)(param_1 + 0xa0) = 0;
  }
  puVar13 = (undefined8 *)(param_1 + 0xd0);
  uVar7 = *puVar13;
  plVar1 = (long *)(param_1 + 0xe8);
  if (0 < (int)uVar7) {
    plVar8 = *(long **)(param_1 + 8);
    if (plVar8 == (long *)0x0) {
      lVar10 = 0;
      do {
        if (*(long *)(*plVar1 + lVar10 * 8) != 0) {
          *(undefined8 *)(*plVar1 + lVar10 * 8) = 0;
          uVar7 = *puVar13;
        }
        lVar10 = lVar10 + 1;
      } while (lVar10 < (int)uVar7);
    }
    else {
      lVar10 = 0;
      puVar2 = PTR_DAT_02714d40 + 0x10;
      puVar3 = PTR_DAT_02714d38 + 0x10;
      do {
        lVar11 = *(long *)(*plVar1 + lVar10 * 8);
        if (lVar11 != 0) {
          *(undefined8 *)(*plVar1 + lVar10 * 8) = 0;
          plVar9 = (long *)(lVar11 + 0x88);
          *(undefined **)(lVar11 + 0x60) = puVar2;
          if (((*(byte *)(lVar11 + 0xa8) & 1) == 0) && (*plVar9 != 0)) {
            plVar5 = *(long **)(lVar11 + 0x68);
            if (plVar5 != (long *)0x0) {
              (**(code **)(*plVar5 + 0x48))
                        (plVar5,*plVar9,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
            }
            *plVar9 = 0;
          }
          *(undefined8 *)(lVar11 + 0x70) = 0;
          *(undefined8 *)(lVar11 + 0x78) = 0;
          *(undefined8 *)(lVar11 + 0xa8) = 0;
          *plVar9 = 0;
          *(undefined8 *)(lVar11 + 0x90) = 0;
          *(undefined8 *)(lVar11 + 0x98) = 0;
          puVar4 = (undefined8 *)(lVar11 + 0x38);
          *(undefined **)(lVar11 + 0x10) = puVar3;
          if (((*(byte *)(lVar11 + 0x58) & 1) == 0) &&
             (plVar9 = (long *)*puVar4, plVar9 != (long *)0x0)) {
            plVar5 = *(long **)(lVar11 + 0x18);
            if (plVar5 != (long *)0x0) {
              lVar6 = (**(code **)(*plVar5 + 0x50))(plVar5,plVar9);
              if (lVar6 != 0) {
                plVar12 = plVar9;
                do {
                  if ((long *)*plVar12 != (long *)0x0) {
                    (**(code **)(*(long *)*plVar12 + 0x18))();
                    *plVar12 = 0;
                  }
                  lVar6 = lVar6 + -1;
                  plVar12 = plVar12 + 3;
                } while (lVar6 != 0);
              }
              (**(code **)(*plVar5 + 0x48))
                        (plVar5,plVar9,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
            }
            *puVar4 = 0;
          }
          *(undefined8 *)(lVar11 + 0x20) = 0;
          *(undefined8 *)(lVar11 + 0x28) = 0;
          *(undefined8 *)(lVar11 + 0x58) = 0;
          *(undefined8 *)(lVar11 + 0x40) = 0;
          *(undefined8 *)(lVar11 + 0x48) = 0;
          *puVar4 = 0;
          (**(code **)(*plVar8 + 0x48))
                    (plVar8,lVar11,"../../../../Include\\SiCore/SiCore_Array.h",0x695);
          uVar7 = *puVar13;
        }
        lVar10 = lVar10 + 1;
      } while (lVar10 < (int)uVar7);
    }
  }
  if (((*(byte *)(param_1 + 0x108) & 1) == 0) && (*plVar1 != 0)) {
    plVar8 = *(long **)(param_1 + 200);
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x48))
                (plVar8,*plVar1,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar1 = 0;
  }
  *puVar13 = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *plVar1 = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x168) = 0;
  return;
}


