/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009fcab0; name: FUN_009fcab0
 */


byte FUN_009fcab0(long param_1,undefined8 *param_2)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  char cVar12;
  byte bVar13;
  byte bVar14;
  
  uVar10 = 0;
  do {
    uVar5 = FUN_009ff3e0(*(undefined8 *)(param_1 + 0x10),uVar10);
    cVar2 = FUN_009ff420(*(undefined8 *)(param_1 + 0x10),uVar10);
    if (uVar5 != 0) {
      iVar6 = FUN_00884820(*param_2);
      if (iVar6 == 0) {
LAB_009fcc78:
        bVar14 = 0;
        goto LAB_009fcc7c;
      }
      if (cVar2 != -1) {
        uVar11 = 0;
        do {
          lVar8 = (**(code **)(*(long *)*param_2 + 0x50))((long *)*param_2,uVar11);
          if (lVar8 != 0) {
            (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
          }
          uVar9 = FUN_0087d610(lVar8,2);
          if ((uVar9 & 1) == 0) {
            uVar7 = FUN_008783b0(lVar8);
            cVar3 = FUN_008783c0(lVar8);
            if ((uVar7 != uVar5) || (cVar2 != cVar3)) goto LAB_009fcb8c;
            bVar1 = true;
          }
          else {
LAB_009fcb8c:
            bVar1 = false;
          }
          if (lVar8 != 0) {
            (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
          }
          if (bVar1) goto LAB_009fcc60;
          uVar11 = uVar11 + 1 & 0xff;
          uVar7 = FUN_00884820(*param_2);
          if (uVar7 <= uVar11) goto LAB_009fcc78;
        } while( true );
      }
      uVar11 = 0;
      while( true ) {
        lVar8 = (**(code **)(*(long *)*param_2 + 0x50))((long *)*param_2,uVar11);
        if (lVar8 != 0) {
          (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
        }
        uVar9 = FUN_0087d610(lVar8,2);
        if ((uVar9 & 1) == 0) {
          uVar7 = FUN_008783b0(lVar8);
          FUN_008783c0(lVar8);
          bVar1 = uVar7 == uVar5;
        }
        else {
          bVar1 = false;
        }
        if (lVar8 != 0) {
          (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
        }
        if (bVar1) break;
        uVar11 = uVar11 + 1 & 0xff;
        uVar7 = FUN_00884820(*param_2);
        if (uVar7 <= uVar11) goto LAB_009fcc78;
      }
    }
LAB_009fcc60:
    uVar10 = uVar10 + 1;
  } while ((uVar10 & 0xff) < 9);
  bVar14 = 1;
LAB_009fcc7c:
  uVar10 = 0;
  cVar2 = '\0';
  bVar13 = 0;
  do {
    uVar5 = FUN_009ff460(*(undefined8 *)(param_1 + 0x10),uVar10);
    cVar3 = FUN_009ff4a0(*(undefined8 *)(param_1 + 0x10),uVar10);
    if (uVar5 != 0) {
      iVar6 = FUN_00884820(*param_2);
      if (iVar6 != 0) {
        if (cVar3 == -1) {
          uVar11 = 0;
          do {
            lVar8 = (**(code **)(*(long *)*param_2 + 0x50))((long *)*param_2,uVar11);
            if (lVar8 != 0) {
              (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
            }
            uVar9 = FUN_0087d610(lVar8,2);
            if ((uVar9 & 1) == 0) {
              uVar7 = FUN_008783b0(lVar8);
              FUN_008783c0(lVar8);
              bVar1 = uVar7 == uVar5;
            }
            else {
              bVar1 = false;
            }
            if (lVar8 != 0) {
              (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
            }
            cVar2 = bVar1 + cVar2;
            uVar11 = uVar11 + 1 & 0xff;
            uVar7 = FUN_00884820(*param_2);
          } while (uVar11 < uVar7);
        }
        else {
          uVar11 = 0;
          do {
            lVar8 = (**(code **)(*(long *)*param_2 + 0x50))((long *)*param_2,uVar11);
            if (lVar8 != 0) {
              (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
            }
            uVar9 = FUN_0087d610(lVar8,2);
            if ((uVar9 & 1) == 0) {
              uVar7 = FUN_008783b0(lVar8);
              cVar4 = FUN_008783c0(lVar8);
              if ((uVar7 != uVar5) || (cVar3 != cVar4)) goto LAB_009fcd3c;
              cVar12 = '\x01';
              cVar4 = '\x01';
            }
            else {
LAB_009fcd3c:
              cVar12 = '\0';
              cVar4 = '\0';
            }
            if (lVar8 != 0) {
              (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
              cVar4 = cVar12;
            }
            cVar2 = cVar4 + cVar2;
            uVar11 = uVar11 + 1 & 0xff;
            uVar7 = FUN_00884820(*param_2);
          } while (uVar11 < uVar7);
        }
      }
      bVar13 = 1;
    }
    uVar10 = uVar10 + 1;
    if (8 < (uVar10 & 0xff)) {
      return bVar14 & (bVar13 ^ 1 | cVar2 != '\0');
    }
  } while( true );
}


