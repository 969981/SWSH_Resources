/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014b3f40; name: FUN_014b3f40
 */


void FUN_014b3f40(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  char cVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  int iVar14;
  uint uVar15;
  undefined8 uVar16;
  
  *(undefined4 *)(param_1 + 8) = 0;
  uVar5 = FUN_0087b880(param_2,0);
  uVar6 = FUN_0087b880(param_2,1);
  uVar7 = FUN_0087b880(param_2,2);
  uVar8 = FUN_0087b880(param_2,3);
  uVar9 = FUN_0087b990(param_2,0);
  if ((((uVar9 != 0) && (uVar5 != uVar9)) && (uVar6 != uVar9)) &&
     ((uVar7 != uVar9 && (uVar8 != uVar9)))) {
    uVar15 = *(uint *)(param_1 + 8);
    if (uVar15 != 0) {
      uVar13 = 0;
      do {
        if (*(uint *)(param_1 + uVar13 * 4 + 0xc) == uVar9) goto LAB_014b4010;
        uVar11 = (int)uVar13 + 1;
        uVar13 = (ulong)uVar11;
      } while (uVar11 < uVar15);
    }
    *(uint *)(param_1 + 8) = uVar15 + 1;
    *(uint *)(param_1 + (ulong)uVar15 * 4 + 0xc) = uVar9;
  }
LAB_014b4010:
  uVar9 = FUN_0087b990(param_2,1);
  if (((uVar9 != 0) && (uVar5 != uVar9)) &&
     ((uVar6 != uVar9 && ((uVar7 != uVar9 && (uVar8 != uVar9)))))) {
    uVar15 = *(uint *)(param_1 + 8);
    if (uVar15 != 0) {
      uVar13 = 0;
      do {
        if (*(uint *)(param_1 + uVar13 * 4 + 0xc) == uVar9) goto LAB_014b4078;
        uVar11 = (int)uVar13 + 1;
        uVar13 = (ulong)uVar11;
      } while (uVar11 < uVar15);
    }
    *(uint *)(param_1 + 8) = uVar15 + 1;
    *(uint *)(param_1 + (ulong)uVar15 * 4 + 0xc) = uVar9;
  }
LAB_014b4078:
  uVar9 = FUN_0087b990(param_2,2);
  if ((((uVar9 != 0) && (uVar5 != uVar9)) && (uVar6 != uVar9)) &&
     ((uVar7 != uVar9 && (uVar8 != uVar9)))) {
    uVar15 = *(uint *)(param_1 + 8);
    if (uVar15 != 0) {
      uVar13 = 0;
      do {
        if (*(uint *)(param_1 + uVar13 * 4 + 0xc) == uVar9) goto LAB_014b40e0;
        uVar11 = (int)uVar13 + 1;
        uVar13 = (ulong)uVar11;
      } while (uVar11 < uVar15);
    }
    *(uint *)(param_1 + 8) = uVar15 + 1;
    *(uint *)(param_1 + (ulong)uVar15 * 4 + 0xc) = uVar9;
  }
LAB_014b40e0:
  uVar9 = FUN_0087b990(param_2,3);
  if (((uVar9 != 0) && (uVar5 != uVar9)) &&
     ((uVar6 != uVar9 && ((uVar7 != uVar9 && (uVar8 != uVar9)))))) {
    uVar15 = *(uint *)(param_1 + 8);
    if (uVar15 != 0) {
      uVar13 = 0;
      do {
        if (*(uint *)(param_1 + uVar13 * 4 + 0xc) == uVar9) goto LAB_014b4148;
        uVar11 = (int)uVar13 + 1;
        uVar13 = (ulong)uVar11;
      } while (uVar11 < uVar15);
    }
    *(uint *)(param_1 + 8) = uVar15 + 1;
    *(uint *)(param_1 + (ulong)uVar15 * 4 + 0xc) = uVar9;
  }
LAB_014b4148:
  puVar2 = PTR_DAT_02717468;
  iVar14 = 0;
  do {
    uVar13 = FUN_0087ccd0(param_2,iVar14);
    if (((uVar13 & 1) != 0) && (uVar13 = FUN_0087c4a0(param_2,iVar14), (uVar13 & 1) != 0)) {
      uVar16 = *(undefined8 *)puVar2;
      uVar10 = FUN_00888140(uVar16,iVar14 + 0x46a);
      uVar9 = FUN_00888190(uVar16,uVar10);
      uVar9 = uVar9 & 0xffff;
      if ((((uVar9 != 0 && uVar5 != uVar9) && uVar6 != uVar9) && uVar7 != uVar9) && uVar8 != uVar9)
      {
        uVar15 = *(uint *)(param_1 + 8);
        if (uVar15 != 0) {
          uVar13 = 0;
          do {
            if (*(uint *)(param_1 + uVar13 * 4 + 0xc) == uVar9) goto LAB_014b41e4;
            uVar11 = (int)uVar13 + 1;
            uVar13 = (ulong)uVar11;
          } while (uVar11 < uVar15);
        }
        *(uint *)(param_1 + 8) = uVar15 + 1;
        *(uint *)(param_1 + (ulong)uVar15 * 4 + 0xc) = uVar9;
      }
    }
LAB_014b41e4:
    iVar14 = iVar14 + 1;
    if (iVar14 == 100) {
      uVar9 = 0;
      do {
        cVar3 = FUN_00885ed0(*(undefined8 *)(param_1 + 0x408));
        if (cVar3 != '\0') {
          if (uVar9 == 2) {
            uVar15 = 0;
            do {
              uVar4 = FUN_00885f20(*(undefined8 *)(param_1 + 0x408),uVar15);
              if (1 < uVar4) {
                uVar11 = FUN_00885f20(*(undefined8 *)(param_1 + 0x408),uVar15);
                uVar12 = FUN_0087a5f0(param_2);
                if ((((uVar11 & 0xffff) <= uVar12) &&
                    (uVar11 = FUN_00885f40(*(undefined8 *)(param_1 + 0x408),uVar15), uVar5 != uVar11
                    )) && ((uVar6 != uVar11 && ((uVar7 != uVar11 && (uVar8 != uVar11)))))) {
                  uVar12 = *(uint *)(param_1 + 8);
                  if (uVar12 != 0) {
                    uVar13 = 0;
                    do {
                      if (*(uint *)(param_1 + uVar13 * 4 + 0xc) == uVar11) goto LAB_014b42ac;
                      uVar1 = (int)uVar13 + 1;
                      uVar13 = (ulong)uVar1;
                    } while (uVar1 < uVar12);
                  }
                  *(uint *)(param_1 + 8) = uVar12 + 1;
                  *(uint *)(param_1 + (ulong)uVar12 * 4 + 0xc) = uVar11;
                }
              }
LAB_014b42ac:
              uVar15 = uVar15 + 1;
              uVar11 = FUN_00885ed0(*(undefined8 *)(param_1 + 0x408));
            } while (uVar15 < (uVar11 & 0xff));
          }
          else {
            uVar15 = 0;
            do {
              uVar11 = FUN_00885f20(*(undefined8 *)(param_1 + 0x408),uVar15);
              if (uVar9 == (uVar11 & 0xffff)) {
                uVar11 = FUN_00885f20(*(undefined8 *)(param_1 + 0x408),uVar15);
                uVar12 = FUN_0087a5f0(param_2);
                if (((((uVar11 & 0xffff) <= uVar12) &&
                     (uVar11 = FUN_00885f40(*(undefined8 *)(param_1 + 0x408),uVar15),
                     uVar5 != uVar11)) && (uVar6 != uVar11)) &&
                   ((uVar7 != uVar11 && (uVar8 != uVar11)))) {
                  uVar12 = *(uint *)(param_1 + 8);
                  if (uVar12 != 0) {
                    uVar13 = 0;
                    do {
                      if (*(uint *)(param_1 + uVar13 * 4 + 0xc) == uVar11) goto LAB_014b4360;
                      uVar1 = (int)uVar13 + 1;
                      uVar13 = (ulong)uVar1;
                    } while (uVar1 < uVar12);
                  }
                  *(uint *)(param_1 + 8) = uVar12 + 1;
                  *(uint *)(param_1 + (ulong)uVar12 * 4 + 0xc) = uVar11;
                }
              }
LAB_014b4360:
              uVar15 = uVar15 + 1;
              uVar11 = FUN_00885ed0(*(undefined8 *)(param_1 + 0x408));
            } while (uVar15 < (uVar11 & 0xff));
          }
        }
        uVar9 = uVar9 + 1;
        if (uVar9 == 3) {
          return;
        }
      } while( true );
    }
  } while( true );
}


