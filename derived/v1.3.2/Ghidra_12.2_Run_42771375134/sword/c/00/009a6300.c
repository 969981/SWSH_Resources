/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009a6300; name: FUN_009a6300
 */


void FUN_009a6300(long param_1,undefined2 *param_2,undefined8 *param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined1 uVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  long lVar15;
  char local_68 [4];
  undefined1 local_64 [4];
  
  *param_2 = 0;
  *(undefined1 *)(param_2 + 1) = 0;
  FUN_008e0a00(*param_3);
  uVar3 = FUN_008f94e0();
  cVar6 = *(char *)((long)param_3 + 0xb);
  if (cVar6 == '\x1f') {
    uVar7 = 0;
    uVar14 = 0;
    uVar8 = 5;
  }
  else {
    uVar7 = FUN_008f94e0(cVar6);
    uVar14 = FUN_009425f0(param_1,uVar7);
    bVar4 = FUN_00914430(uVar14,cVar6);
    uVar14 = FUN_00942380(param_1);
    bVar5 = FUN_008f9f90(uVar14,uVar7);
    uVar8 = FUN_00942580(param_1,cVar6);
    uVar7 = 0;
    if (bVar5 <= bVar4) {
      uVar7 = 2;
    }
    uVar14 = FUN_009424e0(2,param_1,cVar6);
  }
  uVar11 = FUN_009423b0(param_1);
  FUN_00936060(uVar11,0x23,uVar3,*(undefined2 *)(param_3 + 1));
  if (*(short *)(param_3 + 1) == 0x34e) {
LAB_009a63e8:
    uVar14 = FUN_009423b0(param_1);
    uVar11 = 0x51;
  }
  else {
    uVar12 = FUN_008ec410();
    if ((uVar12 & 1) != 0) {
      FUN_009a65b0(param_1,*param_3,*(undefined2 *)(param_3 + 1),local_64,local_68,param_3[2]);
      uVar3 = 0;
      if (local_68[0] != '\0') {
        uVar3 = 2;
      }
      *(undefined1 *)param_2 = uVar3;
      *(undefined1 *)((long)param_2 + 1) = local_64[0];
      *(undefined1 *)(param_2 + 1) = 1;
      return;
    }
    uVar11 = FUN_008ec3f0(*(undefined2 *)(param_3 + 1),0x10);
    if ((int)uVar11 == 3) {
      uVar12 = FUN_009a67d0(param_1);
      if ((uVar12 & 1) != 0) {
        *param_2 = 0x101;
        return;
      }
      goto LAB_009a63e8;
    }
    uVar12 = FUN_009a6940(uVar11,*(undefined2 *)(param_3 + 1),uVar7,uVar8);
    if ((uVar12 & 1) != 0) {
      uVar11 = FUN_00942380(param_1);
      FUN_0094dc20(uVar11,*(undefined2 *)(param_3 + 1));
      uVar7 = 0xa2;
      if ((uVar8 & 0xff) != 5) {
        uVar7 = 0xa3;
      }
      uVar11 = FUN_009423a0(param_1);
      uVar9 = FUN_00917fb0(uVar11,uVar7);
      puVar2 = PTR_DAT_027184d8;
      lVar15 = 0;
      bVar1 = false;
      do {
        iVar10 = FUN_008ec3f0(*(undefined2 *)(param_3 + 1),*(undefined4 *)(puVar2 + lVar15));
        if (iVar10 != 0) {
          cVar6 = (**(code **)(puVar2 + lVar15 + 8))
                            (param_1 + (*(long *)(puVar2 + lVar15 + 0x10) >> 1),uVar14,
                             *(undefined2 *)(param_3 + 1),iVar10,*(undefined1 *)((long)param_3 + 10)
                            );
          bVar1 = (bool)(bVar1 | cVar6 != '\0');
        }
        lVar15 = lVar15 + 0x18;
      } while (lVar15 != 0x1c8);
      uVar13 = 0xf;
      if ((uVar8 & 0xff) != 5) {
        uVar13 = 3;
      }
      if (bVar1) {
        uVar11 = FUN_009423a0(3,param_1);
        if ((uVar8 & 0xff) == 5) {
          FUN_00918050(uVar11,uVar9,uVar7,uVar13);
        }
        else {
          FUN_00918050(uVar11,uVar9,uVar7,uVar8,uVar13);
        }
        *(undefined1 *)((long)param_2 + 1) = 1;
        uVar11 = FUN_00942380(param_1);
        FUN_008fa440(uVar11,uVar14,*(undefined2 *)(param_3 + 1));
        goto LAB_009a63f8;
      }
      goto LAB_009a63e8;
    }
    uVar14 = FUN_009423b0(param_1);
    uVar11 = 0xdb;
  }
  FUN_00936020(uVar14,uVar11);
LAB_009a63f8:
  *(undefined1 *)param_2 = 0;
  return;
}


