/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0063adc0; name: FUN_0063adc0
 */


undefined8 FUN_0063adc0(long param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  
  if (*(ulong *)(param_1 + 0x18) == param_2) {
    uVar8 = 1;
  }
  else if (param_2 == 0) {
    plVar9 = (long *)(param_1 + 0x28);
    if (((*(byte *)(param_1 + 0x48) & 1) == 0) && (lVar10 = *plVar9, lVar10 != 0)) {
      plVar13 = *(long **)(param_1 + 8);
      if (plVar13 != (long *)0x0) {
        (**(code **)(*plVar13 + 0x50))(plVar13,lVar10);
        (**(code **)(*plVar13 + 0x48))
                  (plVar13,lVar10,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
      }
      *plVar9 = 0;
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    uVar8 = 1;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *plVar9 = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  else {
    plVar9 = *(long **)(param_1 + 8);
    uVar8 = 0;
    if (plVar9 != (long *)0x0) {
      uVar14 = *(ulong *)(param_1 + 0x10);
      lVar10 = (**(code **)(*plVar9 + 0x40))
                         (plVar9,0x50,param_2,0x10,"../../../../Include\\SiCore/SiCore_Array.h",
                          0x5d1);
      uVar4 = param_2;
      if (uVar14 <= param_2) {
        uVar4 = uVar14;
      }
      uVar8 = 0;
      if (lVar10 != 0) {
        if ((uVar4 != 0) && ((param_3 & 1) != 0)) {
          uVar5 = param_2;
          if (uVar14 <= param_2) {
            uVar5 = uVar14;
          }
          if (uVar5 == 1) {
            lVar11 = 0;
          }
          else {
            lVar12 = 0;
            lVar11 = 0;
            do {
              puVar2 = (undefined8 *)(*(long *)(param_1 + 0x28) + lVar12);
              puVar3 = (undefined8 *)(lVar10 + lVar12);
              uVar8 = puVar2[1];
              lVar11 = lVar11 + 2;
              *puVar3 = *puVar2;
              puVar3[1] = uVar8;
              uVar8 = puVar2[2];
              uVar6 = puVar2[3];
              uVar7 = puVar2[5];
              puVar3[4] = puVar2[4];
              puVar3[5] = uVar7;
              puVar3[2] = uVar8;
              puVar3[3] = uVar6;
              uVar8 = puVar2[6];
              uVar6 = puVar2[7];
              uVar7 = puVar2[9];
              puVar3[8] = puVar2[8];
              puVar3[9] = uVar7;
              puVar3[6] = uVar8;
              puVar3[7] = uVar6;
              lVar1 = *(long *)(param_1 + 0x28) + lVar12;
              lVar12 = lVar12 + 0xa0;
              uVar8 = *(undefined8 *)(lVar1 + 0x58);
              puVar3[10] = *(undefined8 *)(lVar1 + 0x50);
              puVar3[0xb] = uVar8;
              uVar8 = *(undefined8 *)(lVar1 + 0x60);
              uVar6 = *(undefined8 *)(lVar1 + 0x68);
              uVar7 = *(undefined8 *)(lVar1 + 0x78);
              puVar3[0xe] = *(undefined8 *)(lVar1 + 0x70);
              puVar3[0xf] = uVar7;
              puVar3[0xc] = uVar8;
              puVar3[0xd] = uVar6;
              uVar8 = *(undefined8 *)(lVar1 + 0x80);
              uVar6 = *(undefined8 *)(lVar1 + 0x88);
              uVar7 = *(undefined8 *)(lVar1 + 0x98);
              puVar3[0x12] = *(undefined8 *)(lVar1 + 0x90);
              puVar3[0x13] = uVar7;
              puVar3[0x10] = uVar8;
              puVar3[0x11] = uVar6;
            } while (uVar4 - (uVar4 & 1) != lVar11);
          }
          if ((uVar4 & 1) != 0) {
            puVar2 = (undefined8 *)(*(long *)(param_1 + 0x28) + lVar11 * 0x50);
            puVar3 = (undefined8 *)(lVar10 + lVar11 * 0x50);
            uVar8 = puVar2[1];
            *puVar3 = *puVar2;
            puVar3[1] = uVar8;
            uVar8 = puVar2[2];
            uVar6 = puVar2[3];
            uVar7 = puVar2[5];
            puVar3[4] = puVar2[4];
            puVar3[5] = uVar7;
            puVar3[2] = uVar8;
            puVar3[3] = uVar6;
            uVar8 = puVar2[6];
            uVar6 = puVar2[7];
            uVar7 = puVar2[9];
            puVar3[8] = puVar2[8];
            puVar3[9] = uVar7;
            puVar3[6] = uVar8;
            puVar3[7] = uVar6;
          }
        }
        if (((*(byte *)(param_1 + 0x48) & 1) == 0) &&
           (lVar11 = *(long *)(param_1 + 0x28), lVar11 != 0)) {
          plVar9 = *(long **)(param_1 + 8);
          if (plVar9 != (long *)0x0) {
            (**(code **)(*plVar9 + 0x50))(plVar9,lVar11);
            (**(code **)(*plVar9 + 0x48))
                      (plVar9,lVar11,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
          }
          *(undefined8 *)(param_1 + 0x28) = 0;
        }
        uVar8 = 1;
        *(undefined8 *)(param_1 + 0x48) = 0;
        *(long *)(param_1 + 0x28) = lVar10;
        *(undefined8 *)(param_1 + 0x30) = 0;
        *(undefined8 *)(param_1 + 0x38) = 0;
        *(ulong *)(param_1 + 0x10) = uVar4;
        *(ulong *)(param_1 + 0x18) = param_2;
      }
    }
  }
  return uVar8;
}


