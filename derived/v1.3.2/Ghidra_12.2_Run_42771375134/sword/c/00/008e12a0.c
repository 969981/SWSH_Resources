/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008e12a0; name: FUN_008e12a0
 */


ulong FUN_008e12a0(long param_1,int param_2)

{
  undefined2 uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 uVar7;
  int iVar8;
  undefined2 *puVar9;
  uint uVar10;
  double dVar11;
  double dVar12;
  
  lVar4 = *(long *)(param_1 + 0x460);
  if (lVar4 != 0) {
    if (param_2 == 0xb) {
      uVar5 = FUN_00932ae0(lVar4,4);
      iVar8 = 0xb;
      param_2 = 9;
    }
    else {
      if (param_2 != 9) goto LAB_008e1300;
      uVar5 = FUN_00932ae0(lVar4,4);
      iVar8 = 9;
      param_2 = 0xb;
    }
    if ((uVar5 & 1) == 0) {
      param_2 = iVar8;
    }
  }
LAB_008e1300:
  switch(param_2) {
  case 1:
    uVar5 = (ulong)*(char *)(param_1 + 0x2b4);
    break;
  case 2:
    uVar5 = (ulong)*(char *)(param_1 + 0x2b5);
    break;
  case 3:
    uVar5 = (ulong)*(char *)(param_1 + 0x2b6);
    break;
  case 4:
    uVar5 = (ulong)*(char *)(param_1 + 0x2b7);
    break;
  case 5:
    uVar5 = (ulong)*(char *)(param_1 + 0x2b8);
    break;
  case 6:
    uVar5 = (ulong)*(char *)(param_1 + 0x2b9);
    break;
  case 7:
    uVar5 = (ulong)*(char *)(param_1 + 0x2ba);
    break;
  case 8:
    uVar7 = *(undefined1 *)(param_1 + 0x2b4);
    uVar1 = *(undefined2 *)(param_1 + 0x2a2);
    goto LAB_008e150c;
  case 9:
    if ((*(long *)(param_1 + 0x460) == 0) ||
       (uVar5 = FUN_00932ae0(*(long *)(param_1 + 0x460),4), (uVar5 & 1) == 0)) {
      puVar9 = (undefined2 *)(param_1 + 0x2a4);
    }
    else {
      puVar9 = (undefined2 *)(param_1 + 0x2a8);
    }
    uVar7 = *(undefined1 *)(param_1 + 0x2b5);
    goto LAB_008e1508;
  case 10:
    uVar7 = *(undefined1 *)(param_1 + 0x2b6);
    uVar1 = *(undefined2 *)(param_1 + 0x2a6);
    goto LAB_008e150c;
  case 0xb:
    if ((*(long *)(param_1 + 0x460) == 0) ||
       (uVar5 = FUN_00932ae0(*(long *)(param_1 + 0x460),4), (uVar5 & 1) == 0)) {
      uVar7 = *(undefined1 *)(param_1 + 0x2b7);
      puVar9 = (undefined2 *)(param_1 + 0x2a8);
    }
    else {
      uVar7 = *(undefined1 *)(param_1 + 0x2b7);
      puVar9 = (undefined2 *)(param_1 + 0x2a4);
    }
LAB_008e1508:
    uVar1 = *puVar9;
    goto LAB_008e150c;
  case 0xc:
    uVar7 = *(undefined1 *)(param_1 + 0x2b8);
    uVar1 = *(undefined2 *)(param_1 + 0x2aa);
LAB_008e150c:
    uVar3 = FUN_008ec270(uVar1,uVar7);
    uVar5 = (ulong)(uVar3 & 0xffff);
    break;
  case 0xd:
    uVar5 = (ulong)*(ushort *)(param_1 + 0x74);
    break;
  case 0xe:
    uVar5 = (ulong)*(ushort *)(param_1 + 0x74);
    if (*(char *)(param_1 + 0x298) != '\0') {
      dVar12 = (double)NEON_ucvtf((ulong)*(ushort *)(param_1 + 0x72));
      dVar12 = (double)((uint)*(ushort *)(param_1 + 0x74) * 100) / dVar12;
      dVar11 = 0.5;
      if (dVar12 <= 0.0) {
        dVar11 = -0.5;
      }
      uVar10 = (uint)(dVar12 * DAT_01cd5438 + dVar11);
      uVar5 = FUN_008e12a0(param_1,0x10);
      uVar6 = FUN_008ec010(uVar5,uVar10);
      uVar2 = FUN_008ec010(uVar5 & 0xffffffff,uVar10);
      uVar3 = (uint)((uVar6 & 0xffffffff) / 100);
      if (uVar2 % 100 != 0) {
        uVar3 = uVar3 + 1;
      }
      dVar12 = 0.0;
      if ((uVar10 & 0xfff) != 0) {
        dVar12 = (double)(uVar10 & 0xfff) * DAT_01cd5200;
      }
      if (dVar12 + (double)((int)uVar10 >> 0xc) != 0.0 && uVar3 == 0) {
        uVar3 = 1;
      }
      uVar5 = (ulong)uVar3;
    }
    break;
  case 0xf:
    uVar5 = (ulong)*(ushort *)(param_1 + 0x72);
    break;
  case 0x10:
    uVar3 = FUN_00879910(*(undefined8 *)(param_1 + 0x60),0);
    uVar5 = (ulong)(uVar3 & 0xffff);
    break;
  case 0x11:
    uVar5 = (ulong)*(byte *)(param_1 + 0x7c);
    break;
  case 0x12:
switchD_008e131c_caseD_12:
    return (ulong)*(ushort *)(param_1 + 0x338);
  case 0x13:
    if (((*(byte *)(param_1 + 0x110) & 7) == 0) &&
       (((*(long *)(param_1 + 0x460) == 0 ||
         (uVar5 = FUN_00932f50(*(long *)(param_1 + 0x460),*(undefined2 *)(param_1 + 0x338)),
         (uVar5 & 1) != 0)) ||
        (uVar5 = FUN_00932f40(*(undefined8 *)(param_1 + 0x460)), (uVar5 & 1) == 0))))
    goto switchD_008e131c_caseD_12;
  default:
    uVar5 = 0;
    break;
  case 0x14:
    uVar5 = (ulong)*(byte *)(param_1 + 0x2af);
    break;
  case 0x15:
    uVar5 = (ulong)*(byte *)(param_1 + 0x80);
    break;
  case 0x16:
    uVar5 = (ulong)*(uint *)(param_1 + 0x68);
    break;
  case 0x17:
    uVar5 = (ulong)*(uint *)(param_1 + 0x6c);
    break;
  case 0x18:
    uVar5 = (ulong)*(byte *)(param_1 + 0x7e);
    break;
  case 0x19:
    uVar5 = (ulong)*(byte *)(param_1 + 0x7f);
  }
  return uVar5;
}


