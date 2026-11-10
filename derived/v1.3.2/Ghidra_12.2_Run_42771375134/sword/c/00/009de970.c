/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009de970; name: FUN_009de970
 */


void FUN_009de970(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  char cVar2;
  byte bVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  int iVar14;
  long lVar15;
  uint uVar16;
  
  FUN_008f8110(param_2);
  uVar10 = FUN_008f0ca0();
  if (((uVar10 & 1) != 0) && (iVar5 = FUN_008f3790(param_2), iVar5 == 3)) {
    uVar11 = FUN_00931920(param_3);
    iVar5 = 0;
    do {
      uVar12 = FUN_008df3c0(uVar11);
      cVar2 = FUN_009141c0();
      if (cVar2 != '\0') {
        uVar16 = 0;
        do {
          uVar13 = FUN_00914330(uVar12,uVar16);
          uVar6 = FUN_008e0a00();
          uVar7 = FUN_008f94e0();
          uVar8 = FUN_008f5920();
          uVar6 = (uVar6 & 0xff) - (uVar8 & 0xff);
          uVar9 = FUN_008f98a0(param_2);
          uVar10 = FUN_008fafc0(param_2,uVar7,uVar9);
          if ((uVar10 & 1) == 0) {
            iVar14 = 3;
            if ((uVar7 & 0xff) < 2) {
              iVar14 = 0;
            }
          }
          else {
            uVar8 = FUN_008f98a0(param_2);
            iVar14 = 0;
            if ((uVar7 & 0xff) != (uVar8 & 0xff)) {
              iVar14 = 3;
            }
          }
          uVar6 = iVar14 + (uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU));
          if (4 < (uVar6 & 0xff)) {
            uVar6 = 5;
          }
          lVar15 = param_1 + ((ulong)uVar6 & 0xff) * 0x1a;
          if ((uVar10 & 1) == 0) {
            lVar15 = lVar15 + 0x9c;
          }
          cVar2 = FUN_008e2150(uVar13);
          if (cVar2 != '\0') {
            uVar10 = 0;
            do {
              uVar4 = FUN_008e2360(uVar13,uVar10 & 0xffffffff);
              lVar1 = lVar15 + uVar10 * 2;
              *(ushort *)(lVar1 + 10) = uVar4 & 0xff;
              uVar4 = FUN_008e23d0(uVar13,uVar10 & 0xffffffff);
              *(ushort *)(lVar1 + 0x12) = uVar4 & 0xff;
              uVar10 = uVar10 + 1;
              bVar3 = FUN_008e2150(uVar13);
            } while (uVar10 < bVar3);
          }
          uVar16 = uVar16 + 1;
          uVar6 = FUN_009141c0(uVar12);
        } while ((uVar16 & 0xff) < (uVar6 & 0xff));
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 != 5);
  }
  return;
}


