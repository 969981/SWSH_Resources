/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00646280; name: FUN_00646280
 */


undefined8 FUN_00646280(long param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  
  if (*(ulong *)(param_1 + 0x18) == param_2) {
    uVar4 = 1;
  }
  else if (param_2 == 0) {
    plVar5 = (long *)(param_1 + 0x28);
    if (((*(byte *)(param_1 + 0x48) & 1) == 0) && (lVar6 = *plVar5, lVar6 != 0)) {
      plVar12 = *(long **)(param_1 + 8);
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x50))(plVar12,lVar6);
        (**(code **)(*plVar12 + 0x48))
                  (plVar12,lVar6,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
      }
      *plVar5 = 0;
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    uVar4 = 1;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *plVar5 = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  else {
    plVar5 = *(long **)(param_1 + 8);
    uVar4 = 0;
    if (plVar5 != (long *)0x0) {
      uVar14 = *(ulong *)(param_1 + 0x10);
      lVar6 = (**(code **)(*plVar5 + 0x40))
                        (plVar5,0x38,param_2,0x10,"../../../../Include\\SiCore/SiCore_Array.h",0x5d1
                        );
      uVar4 = 0;
      if (lVar6 != 0) {
        if (0 < (long)param_2) {
          uVar7 = param_2 & 3;
          lVar13 = lVar6;
          if (2 < param_2 - 1) {
            lVar9 = uVar7 - param_2;
            do {
              *(undefined4 *)(lVar13 + 0x30) = 0;
              *(undefined8 *)(lVar13 + 0x20) = 0;
              *(undefined8 *)(lVar13 + 0x28) = 0;
              lVar9 = lVar9 + 4;
              *(undefined4 *)(lVar13 + 0x68) = 0;
              *(undefined4 *)(lVar13 + 0xa0) = 0;
              *(undefined4 *)(lVar13 + 0xd8) = 0;
              *(undefined8 *)(lVar13 + 0x10) = 0;
              *(undefined8 *)(lVar13 + 0x18) = 0;
              *(undefined8 *)(lVar13 + 0x58) = 0;
              *(undefined8 *)(lVar13 + 0x60) = 0;
              *(undefined8 *)(lVar13 + 0x48) = 0;
              *(undefined8 *)(lVar13 + 0x50) = 0;
              *(undefined8 *)(lVar13 + 0x90) = 0;
              *(undefined8 *)(lVar13 + 0x98) = 0;
              *(undefined8 *)(lVar13 + 0x80) = 0;
              *(undefined8 *)(lVar13 + 0x88) = 0;
              *(undefined8 *)(lVar13 + 200) = 0;
              *(undefined8 *)(lVar13 + 0xd0) = 0;
              *(undefined8 *)(lVar13 + 0xb8) = 0;
              *(undefined8 *)(lVar13 + 0xc0) = 0;
              lVar13 = lVar13 + 0xe0;
            } while (lVar9 != 0);
          }
          if (uVar7 != 0) {
            lVar9 = -uVar7;
            puVar8 = (undefined8 *)(lVar13 + 0x10);
            do {
              *(undefined4 *)(puVar8 + 4) = 0;
              puVar8[2] = 0;
              puVar8[3] = 0;
              lVar9 = lVar9 + 1;
              *puVar8 = 0;
              puVar8[1] = 0;
              puVar8 = puVar8 + 7;
            } while (lVar9 != 0);
          }
        }
        uVar7 = param_2;
        if (uVar14 <= param_2) {
          uVar7 = uVar14;
        }
        if ((uVar7 != 0) && ((param_3 & 1) != 0)) {
          uVar3 = param_2;
          if (uVar14 <= param_2) {
            uVar3 = uVar14;
          }
          if (uVar3 == 1) {
            lVar9 = 0;
          }
          else {
            lVar13 = 0;
            lVar9 = 0;
            do {
              puVar8 = (undefined8 *)(*(long *)(param_1 + 0x28) + lVar13);
              uVar10 = puVar8[2];
              uVar4 = *puVar8;
              puVar2 = (undefined8 *)(lVar6 + lVar13);
              puVar2[1] = puVar8[1];
              puVar2[2] = uVar10;
              *puVar2 = uVar4;
              uVar4 = puVar8[3];
              uVar10 = puVar8[4];
              uVar11 = puVar8[5];
              *(undefined4 *)(puVar2 + 6) = *(undefined4 *)(puVar8 + 6);
              puVar2[3] = uVar4;
              puVar2[4] = uVar10;
              puVar2[5] = uVar11;
              lVar1 = *(long *)(param_1 + 0x28) + lVar13;
              lVar13 = lVar13 + 0x70;
              uVar10 = *(undefined8 *)(lVar1 + 0x48);
              uVar4 = *(undefined8 *)(lVar1 + 0x40);
              puVar2[7] = *(undefined8 *)(lVar1 + 0x38);
              puVar2[8] = uVar4;
              puVar2[9] = uVar10;
              uVar11 = *(undefined8 *)(lVar1 + 0x60);
              uVar4 = *(undefined8 *)(lVar1 + 0x50);
              uVar10 = *(undefined8 *)(lVar1 + 0x58);
              lVar9 = lVar9 + 2;
              *(undefined4 *)(puVar2 + 0xd) = *(undefined4 *)(lVar1 + 0x68);
              puVar2[0xb] = uVar10;
              puVar2[0xc] = uVar11;
              puVar2[10] = uVar4;
            } while (uVar7 - (uVar7 & 1) != lVar9);
          }
          if ((uVar7 & 1) != 0) {
            puVar8 = (undefined8 *)(*(long *)(param_1 + 0x28) + lVar9 * 0x38);
            puVar2 = (undefined8 *)(lVar6 + lVar9 * 0x38);
            uVar10 = puVar8[2];
            uVar4 = puVar8[1];
            *puVar2 = *puVar8;
            puVar2[1] = uVar4;
            puVar2[2] = uVar10;
            uVar11 = puVar8[5];
            uVar4 = puVar8[3];
            uVar10 = puVar8[4];
            *(undefined4 *)(puVar2 + 6) = *(undefined4 *)(puVar8 + 6);
            puVar2[4] = uVar10;
            puVar2[5] = uVar11;
            puVar2[3] = uVar4;
          }
        }
        if (((*(byte *)(param_1 + 0x48) & 1) == 0) &&
           (lVar13 = *(long *)(param_1 + 0x28), lVar13 != 0)) {
          plVar5 = *(long **)(param_1 + 8);
          if (plVar5 != (long *)0x0) {
            (**(code **)(*plVar5 + 0x50))(plVar5,lVar13);
            (**(code **)(*plVar5 + 0x48))
                      (plVar5,lVar13,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
          }
          *(undefined8 *)(param_1 + 0x28) = 0;
        }
        uVar4 = 1;
        *(undefined8 *)(param_1 + 0x48) = 0;
        *(long *)(param_1 + 0x28) = lVar6;
        *(undefined8 *)(param_1 + 0x30) = 0;
        *(undefined8 *)(param_1 + 0x38) = 0;
        *(ulong *)(param_1 + 0x10) = uVar7;
        *(ulong *)(param_1 + 0x18) = param_2;
      }
    }
  }
  return uVar4;
}


