/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008f3420; name: FUN_008f3420
 */


void FUN_008f3420(long param_1)

{
  byte bVar1;
  undefined2 uVar2;
  ushort uVar3;
  short sVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined2 *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  
  lVar12 = *(long *)(param_1 + 0x88);
  if ((*(char *)(lVar12 + 0x3b8) == '\0') && (*(long *)(param_1 + 0x188) != 0)) {
    uVar6 = FUN_00931aa0(*(undefined8 *)(param_1 + 0x610));
    uVar5 = FUN_00930550(uVar6,0);
    *(undefined4 *)(lVar12 + 0xb24) = uVar5;
    uVar6 = FUN_00931aa0(*(undefined8 *)(param_1 + 0x610));
    uVar2 = FUN_009305b0(uVar6,0,0);
    *(undefined2 *)(lVar12 + 0xb2a) = uVar2;
    puVar7 = (undefined2 *)FUN_009319d0(*(undefined8 *)(param_1 + 0x610));
    *(undefined2 *)(lVar12 + 0xb2c) = *puVar7;
    *(undefined2 *)(lVar12 + 0xb2e) = puVar7[1];
    *(undefined2 *)(lVar12 + 0xb30) = puVar7[2];
    *(undefined2 *)(lVar12 + 0xb32) = puVar7[3];
    *(undefined2 *)(lVar12 + 0xb34) = puVar7[5];
    if (*(int *)(*(long *)(param_1 + 0x88) + 0xae8) == 1) {
      *(undefined2 *)(lVar12 + 0xb36) = 1;
    }
    uVar6 = FUN_00931920(*(undefined8 *)(param_1 + 0x610));
    uVar6 = FUN_008df3b0(uVar6,0);
    bVar1 = FUN_009141c0();
    if (bVar1 != 0) {
      uVar11 = 0;
      do {
        uVar8 = FUN_00914310(uVar6,uVar11);
        uVar3 = FUN_008e2230();
        *(ushort *)(lVar12 + 0xb3c) = *(short *)(lVar12 + 0xb3c) + (uVar3 & 0xff);
        sVar4 = FUN_008e12a0(uVar8,0xd);
        uVar11 = uVar11 + 1;
        *(short *)(lVar12 + 0xb28) = *(short *)(lVar12 + 0xb28) + sVar4;
      } while (bVar1 != uVar11);
    }
    uVar6 = FUN_009319b0(*(undefined8 *)(param_1 + 0x610));
    uVar2 = FUN_00913360(uVar6,0);
    *(undefined2 *)(lVar12 + 0xb3a) = uVar2;
    uVar6 = FUN_00931920(*(undefined8 *)(param_1 + 0x610));
    FUN_008df3b0(uVar6,1);
    uVar3 = FUN_009142a0();
    *(ushort *)(lVar12 + 0xb38) = uVar3 & 0xff;
    uVar9 = FUN_008efa90(*(undefined4 *)(param_1 + 0x150),
                         *(undefined1 *)(*(long *)(param_1 + 0x88) + 0x3b9),3);
    if ((uVar9 & 1) != 0) {
      uVar6 = FUN_00931920(*(undefined8 *)(param_1 + 0x610));
      lVar10 = FUN_008df3b0(uVar6,3);
      if (lVar10 != 0) {
        bVar1 = FUN_009142a0();
        *(ushort *)(lVar12 + 0xb38) = *(short *)(lVar12 + 0xb38) + (ushort)bVar1;
      }
    }
  }
  return;
}


