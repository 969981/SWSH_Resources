/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009a7340; name: FUN_009a7340
 */


ulong FUN_009a7340(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  uint param_5,int param_6)

{
  int iVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  undefined2 uVar5;
  ushort uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  int iVar12;
  float fVar13;
  
  iVar7 = FUN_008e12a0(param_4,0xf);
  uVar10 = iVar7 * 3;
  iVar7 = FUN_008e12a0(param_4,0xd);
  iVar7 = uVar10 + iVar7 * -2;
  fVar13 = -0.5;
  if (iVar7 != 0) {
    fVar13 = 0.5;
  }
  iVar7 = (int)(fVar13 + (float)(uint)(iVar7 * 0x1000));
  uVar11 = FUN_008f35c0(param_1,4);
  if ((uVar11 & 1) != 0) {
    uVar8 = FUN_008f9050(param_1);
    lVar2 = 0x800;
    if (uVar8 < 0x1f) {
      lVar2 = 0x4cd;
    }
    lVar3 = 0xb33;
    if (uVar8 < 0x97) {
      lVar3 = lVar2;
    }
    lVar2 = 0xccd;
    if (uVar8 < 0x12d) {
      lVar2 = lVar3;
    }
    lVar3 = 0xe66;
    if (uVar8 < 0x1c3) {
      lVar3 = lVar2;
    }
    lVar2 = 0x1000;
    if (uVar8 < 0x259) {
      lVar2 = lVar3;
    }
    iVar7 = (int)(lVar2 * iVar7 + 0x800U >> 0xc);
  }
  uVar5 = FUN_008e1290(param_4);
  iVar9 = FUN_008ec470(uVar5,*(undefined1 *)(param_4 + 0x33d),8);
  if ((param_5 & 0xffff) == 0x1ef) {
    uVar6 = FUN_008e4cb0(param_4);
    iVar12 = 0x14;
    if (2999 < uVar6) {
      iVar12 = 0x1e;
    }
    iVar1 = 0;
    if (1999 < uVar6) {
      iVar1 = iVar12;
    }
    iVar12 = -0x14;
    if (999 < uVar6) {
      iVar12 = iVar1;
    }
    iVar12 = iVar12 + iVar9;
    if (iVar12 < 2) {
      iVar12 = 1;
    }
    iVar12 = iVar12 * iVar7;
    iVar7 = FUN_009a75a0(param_1,param_2,param_3,param_4,0x1ef);
  }
  else {
    iVar12 = iVar9 * iVar7;
    iVar7 = FUN_009a75a0(param_1,param_2,param_3,param_4,param_5);
    if ((param_5 & 0xffff) == 0x353) goto LAB_009a74e0;
  }
  uVar11 = FUN_009a7970(param_4);
  iVar9 = 0x19a;
  if ((uVar11 & 1) == 0) {
    iVar9 = iVar7;
  }
  iVar7 = iVar9;
LAB_009a74e0:
  uVar8 = 0;
  if (uVar10 != 0) {
    uVar8 = (uint)((long)iVar7 * (long)iVar12 + 0x800U >> 0xc) / uVar10;
  }
  uVar10 = FUN_008e12a0(param_4,0x11);
  if ((uVar10 & 0xffff) < 0x15) {
    uVar8 = (int)((0x1e - (uVar10 & 0xffff)) * uVar8) / 10;
  }
  uVar10 = FUN_008e19f0(param_4);
  if (uVar10 < 6) {
    uVar4 = 1 << (ulong)(uVar10 & 0x1f);
    uVar10 = (uint)((long)(int)uVar8 * 0x2800 + 0x800U >> 0xc);
    if ((uVar4 & 0xc) == 0) {
      uVar10 = uVar8;
    }
    uVar8 = (uint)((long)(int)uVar8 * 0x1800 + 0x800U >> 0xc);
    if ((uVar4 & 0x32) == 0) {
      uVar8 = uVar10;
    }
  }
  return (long)(int)uVar8 * (long)param_6 + 0x800U >> 0xc;
}


