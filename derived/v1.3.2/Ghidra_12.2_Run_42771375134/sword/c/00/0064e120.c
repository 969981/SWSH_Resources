/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0064e120; name: FUN_0064e120
 */


undefined8 FUN_0064e120(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  
  uVar14 = *(ulong *)(param_1 + 0x2060);
  if (uVar14 == 0x80) goto LAB_0064e310;
  if (*(ulong *)(param_1 + 0x2068) < 0x80) {
    plVar9 = *(long **)(param_1 + 0x2058);
    if (plVar9 != (long *)0x0) {
      lVar13 = (**(code **)(*plVar9 + 0x40))
                         (plVar9,0x40,0x80,0x10,"../../../../Include\\SiCore/SiCore_Array.h",0x5d1);
      uVar4 = uVar14;
      if (0x7f < uVar14) {
        uVar4 = 0x80;
      }
      if (lVar13 != 0) {
        if (uVar4 != 0) {
          if (uVar14 == 1) {
            lVar11 = 0;
          }
          else {
            uVar5 = 0xffffffffffffff7f;
            if (0xffffffffffffff7f < ~uVar14) {
              uVar5 = ~uVar14;
            }
            lVar12 = 0;
            lVar11 = 0;
            do {
              puVar2 = (undefined8 *)(*(long *)(param_1 + 0x2078) + lVar12);
              puVar3 = (undefined8 *)(lVar13 + lVar12);
              uVar10 = *puVar2;
              uVar6 = puVar2[1];
              lVar11 = lVar11 + 2;
              uVar7 = puVar2[3];
              puVar3[2] = puVar2[2];
              puVar3[3] = uVar7;
              *puVar3 = uVar10;
              puVar3[1] = uVar6;
              uVar10 = puVar2[4];
              uVar6 = puVar2[5];
              uVar7 = puVar2[7];
              puVar3[6] = puVar2[6];
              puVar3[7] = uVar7;
              puVar3[4] = uVar10;
              puVar3[5] = uVar6;
              lVar1 = *(long *)(param_1 + 0x2078) + lVar12;
              lVar12 = lVar12 + 0x80;
              uVar10 = *(undefined8 *)(lVar1 + 0x40);
              uVar6 = *(undefined8 *)(lVar1 + 0x48);
              uVar7 = *(undefined8 *)(lVar1 + 0x58);
              puVar3[10] = *(undefined8 *)(lVar1 + 0x50);
              puVar3[0xb] = uVar7;
              puVar3[8] = uVar10;
              puVar3[9] = uVar6;
              uVar10 = *(undefined8 *)(lVar1 + 0x60);
              uVar6 = *(undefined8 *)(lVar1 + 0x68);
              uVar7 = *(undefined8 *)(lVar1 + 0x78);
              puVar3[0xe] = *(undefined8 *)(lVar1 + 0x70);
              puVar3[0xf] = uVar7;
              puVar3[0xc] = uVar10;
              puVar3[0xd] = uVar6;
            } while (~(uVar4 & 1) - uVar5 != lVar11);
          }
          if ((uVar4 & 1) != 0) {
            puVar2 = (undefined8 *)(*(long *)(param_1 + 0x2078) + lVar11 * 0x40);
            puVar3 = (undefined8 *)(lVar13 + lVar11 * 0x40);
            uVar10 = *puVar2;
            uVar6 = puVar2[1];
            uVar7 = puVar2[3];
            puVar3[2] = puVar2[2];
            puVar3[3] = uVar7;
            *puVar3 = uVar10;
            puVar3[1] = uVar6;
            uVar10 = puVar2[4];
            uVar6 = puVar2[5];
            uVar7 = puVar2[7];
            puVar3[6] = puVar2[6];
            puVar3[7] = uVar7;
            puVar3[4] = uVar10;
            puVar3[5] = uVar6;
          }
        }
        if (((*(byte *)(param_1 + 0x2098) & 1) == 0) &&
           (lVar11 = *(long *)(param_1 + 0x2078), lVar11 != 0)) {
          plVar9 = *(long **)(param_1 + 0x2058);
          if (plVar9 != (long *)0x0) {
            (**(code **)(*plVar9 + 0x50))(plVar9,lVar11);
            (**(code **)(*plVar9 + 0x48))
                      (plVar9,lVar11,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
          }
          *(undefined8 *)(param_1 + 0x2078) = 0;
        }
        *(undefined8 *)(param_1 + 0x2098) = 0;
        *(undefined8 *)(param_1 + 0x2088) = 0;
        *(undefined8 *)(param_1 + 0x2080) = 0;
        *(long *)(param_1 + 0x2078) = lVar13;
        *(ulong *)(param_1 + 0x2060) = uVar4;
        *(undefined8 *)(param_1 + 0x2068) = 0x80;
        goto LAB_0064e2fc;
      }
    }
    *(undefined8 *)(param_1 + 0x2060) = 0;
    *(undefined8 *)(param_1 + 0x2088) = 0;
    *(undefined8 *)(param_1 + 0x2080) = 0;
  }
  else {
    lVar13 = *(long *)(param_1 + 0x2078);
LAB_0064e2fc:
    *(undefined8 *)(param_1 + 0x2060) = 0x80;
    *(long *)(param_1 + 0x2080) = lVar13;
    *(long *)(param_1 + 0x2088) = lVar13 + 0x2000;
  }
LAB_0064e310:
  uVar10 = (**(code **)(**(long **)(param_1 + 0x18) + 0x2a8))();
  puVar8 = PTR_DAT_02714478;
  lVar13 = 0;
  do {
    (**(code **)puVar8)(*(long *)(param_1 + 0x2078) + lVar13,uVar10);
    lVar13 = lVar13 + 0x40;
  } while (lVar13 != 0x2000);
  *(undefined1 *)(param_1 + 0x20a8) = 1;
  return 1;
}


