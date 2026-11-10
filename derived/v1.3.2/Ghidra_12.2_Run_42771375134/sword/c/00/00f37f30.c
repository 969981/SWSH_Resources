/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f37f30; name: FUN_00f37f30
 */


undefined8 FUN_00f37f30(long param_1,uint param_2,uint param_3)

{
  float *pfVar1;
  long lVar2;
  float fVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar3 = DAT_01d4c18c;
  uVar6 = 0xffffffff;
  *(undefined4 *)(param_1 + (ulong)param_2 * 4 + 0x400) = 0;
  fVar8 = *(float *)(param_1 + 0x400);
  if (0.0 <= fVar8) goto LAB_00f37fc0;
LAB_00f37fac:
  fVar8 = *(float *)(param_1 + 0x404);
  uVar5 = uVar6;
  fVar10 = fVar3;
  do {
    if (0.0 <= fVar8) {
      if (fVar10 <= fVar8 || *(char *)(param_1 + 0x481) != '\0') {
      }
      else {
        uVar5 = 1;
        fVar10 = fVar8;
      }
    }
    fVar9 = *(float *)(param_1 + 0x408);
    uVar6 = uVar5;
    fVar8 = fVar10;
    if (0.0 <= fVar9) {
      bVar4 = *(char *)(param_1 + 0x482) != '\0';
      fVar8 = fVar9;
      if (fVar10 <= fVar9 || bVar4) {
        fVar8 = fVar10;
      }
      uVar6 = 2;
      if (fVar10 <= fVar9 || bVar4) {
        uVar6 = uVar5;
      }
      fVar10 = *(float *)(param_1 + 0x40c);
      if (0.0 <= fVar10) goto LAB_00f380f4;
LAB_00f38024:
      fVar10 = *(float *)(param_1 + 0x410);
      fVar9 = fVar8;
      uVar5 = uVar6;
      if (fVar10 < 0.0) goto LAB_00f38030;
LAB_00f38120:
      bVar4 = *(char *)(param_1 + 0x484) != '\0';
      fVar8 = fVar10;
      if (fVar9 <= fVar10 || bVar4) {
        fVar8 = fVar9;
      }
      uVar6 = 4;
      if (fVar9 <= fVar10 || bVar4) {
        uVar6 = uVar5;
      }
      fVar10 = *(float *)(param_1 + 0x414);
      if (0.0 <= fVar10) goto LAB_00f3814c;
LAB_00f3803c:
      fVar10 = *(float *)(param_1 + 0x418);
      fVar9 = fVar8;
      uVar5 = uVar6;
      if (fVar10 < 0.0) goto LAB_00f38048;
LAB_00f38178:
      bVar4 = *(char *)(param_1 + 0x486) != '\0';
      fVar8 = fVar10;
      if (fVar9 <= fVar10 || bVar4) {
        fVar8 = fVar9;
      }
      uVar6 = 6;
      if (fVar9 <= fVar10 || bVar4) {
        uVar6 = uVar5;
      }
      fVar10 = *(float *)(param_1 + 0x41c);
      if (0.0 <= fVar10) goto LAB_00f381a4;
LAB_00f38054:
      fVar10 = *(float *)(param_1 + 0x420);
      fVar9 = fVar8;
      uVar5 = uVar6;
      if (fVar10 < 0.0) goto LAB_00f38060;
LAB_00f381d0:
      bVar4 = *(char *)(param_1 + 0x488) != '\0';
      fVar8 = fVar10;
      if (fVar9 <= fVar10 || bVar4) {
        fVar8 = fVar9;
      }
      uVar6 = 8;
      if (fVar9 <= fVar10 || bVar4) {
        uVar6 = uVar5;
      }
      fVar10 = *(float *)(param_1 + 0x424);
      if (0.0 <= fVar10) goto LAB_00f381fc;
LAB_00f3806c:
      fVar10 = *(float *)(param_1 + 0x428);
      fVar9 = fVar8;
      uVar5 = uVar6;
      if (fVar10 < 0.0) goto LAB_00f38078;
LAB_00f38228:
      bVar4 = *(char *)(param_1 + 0x48a) != '\0';
      fVar8 = fVar10;
      if (fVar9 <= fVar10 || bVar4) {
        fVar8 = fVar9;
      }
      uVar6 = 10;
      if (fVar9 <= fVar10 || bVar4) {
        uVar6 = uVar5;
      }
      fVar10 = *(float *)(param_1 + 0x42c);
      if (0.0 <= fVar10) goto LAB_00f38254;
LAB_00f38084:
      fVar10 = *(float *)(param_1 + 0x430);
      fVar9 = fVar8;
      uVar5 = uVar6;
      if (fVar10 < 0.0) goto LAB_00f38090;
LAB_00f38280:
      bVar4 = *(char *)(param_1 + 0x48c) != '\0';
      fVar8 = fVar10;
      if (fVar9 <= fVar10 || bVar4) {
        fVar8 = fVar9;
      }
      uVar6 = 0xc;
      if (fVar9 <= fVar10 || bVar4) {
        uVar6 = uVar5;
      }
      fVar10 = *(float *)(param_1 + 0x434);
      if (0.0 <= fVar10) goto LAB_00f382ac;
LAB_00f3809c:
      fVar10 = *(float *)(param_1 + 0x438);
      fVar9 = fVar8;
      uVar5 = uVar6;
      if (fVar10 < 0.0) goto LAB_00f380a8;
LAB_00f382d8:
      bVar4 = *(char *)(param_1 + 0x48e) != '\0';
      fVar8 = fVar10;
      if (fVar9 <= fVar10 || bVar4) {
        fVar8 = fVar9;
      }
      uVar6 = 0xe;
      if (fVar9 <= fVar10 || bVar4) {
        uVar6 = uVar5;
      }
      fVar10 = *(float *)(param_1 + 0x43c);
      uVar5 = uVar6;
      fVar9 = fVar8;
    }
    else {
      fVar10 = *(float *)(param_1 + 0x40c);
      if (fVar10 < 0.0) goto LAB_00f38024;
LAB_00f380f4:
      bVar4 = *(char *)(param_1 + 0x483) != '\0';
      fVar9 = fVar10;
      if (fVar8 <= fVar10 || bVar4) {
        fVar9 = fVar8;
      }
      uVar5 = 3;
      if (fVar8 <= fVar10 || bVar4) {
        uVar5 = uVar6;
      }
      fVar10 = *(float *)(param_1 + 0x410);
      if (0.0 <= fVar10) goto LAB_00f38120;
LAB_00f38030:
      fVar10 = *(float *)(param_1 + 0x414);
      fVar8 = fVar9;
      uVar6 = uVar5;
      if (fVar10 < 0.0) goto LAB_00f3803c;
LAB_00f3814c:
      bVar4 = *(char *)(param_1 + 0x485) != '\0';
      fVar9 = fVar10;
      if (fVar8 <= fVar10 || bVar4) {
        fVar9 = fVar8;
      }
      uVar5 = 5;
      if (fVar8 <= fVar10 || bVar4) {
        uVar5 = uVar6;
      }
      fVar10 = *(float *)(param_1 + 0x418);
      if (0.0 <= fVar10) goto LAB_00f38178;
LAB_00f38048:
      fVar10 = *(float *)(param_1 + 0x41c);
      fVar8 = fVar9;
      uVar6 = uVar5;
      if (fVar10 < 0.0) goto LAB_00f38054;
LAB_00f381a4:
      bVar4 = *(char *)(param_1 + 0x487) != '\0';
      fVar9 = fVar10;
      if (fVar8 <= fVar10 || bVar4) {
        fVar9 = fVar8;
      }
      uVar5 = 7;
      if (fVar8 <= fVar10 || bVar4) {
        uVar5 = uVar6;
      }
      fVar10 = *(float *)(param_1 + 0x420);
      if (0.0 <= fVar10) goto LAB_00f381d0;
LAB_00f38060:
      fVar10 = *(float *)(param_1 + 0x424);
      fVar8 = fVar9;
      uVar6 = uVar5;
      if (fVar10 < 0.0) goto LAB_00f3806c;
LAB_00f381fc:
      bVar4 = *(char *)(param_1 + 0x489) != '\0';
      fVar9 = fVar10;
      if (fVar8 <= fVar10 || bVar4) {
        fVar9 = fVar8;
      }
      uVar5 = 9;
      if (fVar8 <= fVar10 || bVar4) {
        uVar5 = uVar6;
      }
      fVar10 = *(float *)(param_1 + 0x428);
      if (0.0 <= fVar10) goto LAB_00f38228;
LAB_00f38078:
      fVar10 = *(float *)(param_1 + 0x42c);
      fVar8 = fVar9;
      uVar6 = uVar5;
      if (fVar10 < 0.0) goto LAB_00f38084;
LAB_00f38254:
      bVar4 = *(char *)(param_1 + 0x48b) != '\0';
      fVar9 = fVar10;
      if (fVar8 <= fVar10 || bVar4) {
        fVar9 = fVar8;
      }
      uVar5 = 0xb;
      if (fVar8 <= fVar10 || bVar4) {
        uVar5 = uVar6;
      }
      fVar10 = *(float *)(param_1 + 0x430);
      if (0.0 <= fVar10) goto LAB_00f38280;
LAB_00f38090:
      fVar10 = *(float *)(param_1 + 0x434);
      fVar8 = fVar9;
      uVar6 = uVar5;
      if (fVar10 < 0.0) goto LAB_00f3809c;
LAB_00f382ac:
      bVar4 = *(char *)(param_1 + 0x48d) != '\0';
      fVar9 = fVar10;
      if (fVar8 <= fVar10 || bVar4) {
        fVar9 = fVar8;
      }
      uVar5 = 0xd;
      if (fVar8 <= fVar10 || bVar4) {
        uVar5 = uVar6;
      }
      fVar10 = *(float *)(param_1 + 0x438);
      if (0.0 <= fVar10) goto LAB_00f382d8;
LAB_00f380a8:
      fVar10 = *(float *)(param_1 + 0x43c);
    }
    fVar8 = fVar9;
    uVar6 = uVar5;
    if (0.0 <= fVar10) {
      bVar4 = *(char *)(param_1 + 0x48f) != '\0';
      fVar8 = fVar10;
      if (fVar9 <= fVar10 || bVar4) {
        fVar8 = fVar9;
      }
      uVar6 = 0xf;
      if (fVar9 <= fVar10 || bVar4) {
        uVar6 = uVar5;
      }
    }
    if ((uVar6 != param_3) && (fVar8 == fVar3)) {
      return 0;
    }
    if (uVar6 == param_3) {
      *(uint *)(param_1 + 0x490) = param_2;
      *(uint *)(param_1 + 0x494) = param_3;
      return 1;
    }
    uVar7 = (ulong)uVar6;
    fVar8 = *(float *)(param_1 + uVar7 * 0x40);
    pfVar1 = (float *)(param_1 + (ulong)uVar6 * 4 + 0x400);
    if (0.0 <= fVar8) {
      fVar8 = fVar8 + *pfVar1;
      if ((*(float *)(param_1 + 0x400) < 0.0) || (fVar8 < *(float *)(param_1 + 0x400))) {
        *(float *)(param_1 + 0x400) = fVar8;
        *(uint *)(param_1 + 0x440) = uVar6;
      }
    }
    lVar2 = param_1 + uVar7 * 0x40;
    if (0.0 <= *(float *)(lVar2 + 4)) {
      fVar8 = *(float *)(lVar2 + 4) + *pfVar1;
      if ((*(float *)(param_1 + 0x404) < 0.0) || (fVar8 < *(float *)(param_1 + 0x404))) {
        *(float *)(param_1 + 0x404) = fVar8;
        *(uint *)(param_1 + 0x444) = uVar6;
      }
    }
    if (0.0 <= *(float *)(lVar2 + 8)) {
      fVar8 = *(float *)(lVar2 + 8) + *pfVar1;
      if ((*(float *)(param_1 + 0x408) < 0.0) || (fVar8 < *(float *)(param_1 + 0x408))) {
        *(float *)(param_1 + 0x408) = fVar8;
        *(uint *)(param_1 + 0x448) = uVar6;
      }
    }
    if (0.0 <= *(float *)(lVar2 + 0xc)) {
      fVar8 = *(float *)(lVar2 + 0xc) + *pfVar1;
      if ((*(float *)(param_1 + 0x40c) < 0.0) || (fVar8 < *(float *)(param_1 + 0x40c))) {
        *(float *)(param_1 + 0x40c) = fVar8;
        *(uint *)(param_1 + 0x44c) = uVar6;
      }
    }
    if (0.0 <= *(float *)(lVar2 + 0x10)) {
      fVar8 = *(float *)(lVar2 + 0x10) + *pfVar1;
      if ((*(float *)(param_1 + 0x410) < 0.0) || (fVar8 < *(float *)(param_1 + 0x410))) {
        *(float *)(param_1 + 0x410) = fVar8;
        *(uint *)(param_1 + 0x450) = uVar6;
      }
    }
    if (0.0 <= *(float *)(lVar2 + 0x14)) {
      fVar8 = *(float *)(lVar2 + 0x14) + *pfVar1;
      if ((*(float *)(param_1 + 0x414) < 0.0) || (fVar8 < *(float *)(param_1 + 0x414))) {
        *(float *)(param_1 + 0x414) = fVar8;
        *(uint *)(param_1 + 0x454) = uVar6;
      }
    }
    if (0.0 <= *(float *)(lVar2 + 0x18)) {
      fVar8 = *(float *)(lVar2 + 0x18) + *pfVar1;
      if ((*(float *)(param_1 + 0x418) < 0.0) || (fVar8 < *(float *)(param_1 + 0x418))) {
        *(float *)(param_1 + 0x418) = fVar8;
        *(uint *)(param_1 + 0x458) = uVar6;
      }
    }
    if (0.0 <= *(float *)(lVar2 + 0x1c)) {
      fVar8 = *(float *)(lVar2 + 0x1c) + *pfVar1;
      if ((*(float *)(param_1 + 0x41c) < 0.0) || (fVar8 < *(float *)(param_1 + 0x41c))) {
        *(float *)(param_1 + 0x41c) = fVar8;
        *(uint *)(param_1 + 0x45c) = uVar6;
      }
    }
    if (0.0 <= *(float *)(lVar2 + 0x20)) {
      fVar8 = *(float *)(lVar2 + 0x20) + *pfVar1;
      if ((*(float *)(param_1 + 0x420) < 0.0) || (fVar8 < *(float *)(param_1 + 0x420))) {
        *(float *)(param_1 + 0x420) = fVar8;
        *(uint *)(param_1 + 0x460) = uVar6;
      }
    }
    if (0.0 <= *(float *)(lVar2 + 0x24)) {
      fVar8 = *(float *)(lVar2 + 0x24) + *pfVar1;
      if ((*(float *)(param_1 + 0x424) < 0.0) || (fVar8 < *(float *)(param_1 + 0x424))) {
        *(float *)(param_1 + 0x424) = fVar8;
        *(uint *)(param_1 + 0x464) = uVar6;
      }
    }
    if (0.0 <= *(float *)(lVar2 + 0x28)) {
      fVar8 = *(float *)(lVar2 + 0x28) + *pfVar1;
      if ((*(float *)(param_1 + 0x428) < 0.0) || (fVar8 < *(float *)(param_1 + 0x428))) {
        *(float *)(param_1 + 0x428) = fVar8;
        *(uint *)(param_1 + 0x468) = uVar6;
      }
    }
    if (0.0 <= *(float *)(lVar2 + 0x2c)) {
      fVar8 = *(float *)(lVar2 + 0x2c) + *pfVar1;
      if ((*(float *)(param_1 + 0x42c) < 0.0) || (fVar8 < *(float *)(param_1 + 0x42c))) {
        *(float *)(param_1 + 0x42c) = fVar8;
        *(uint *)(param_1 + 0x46c) = uVar6;
      }
    }
    if (0.0 <= *(float *)(lVar2 + 0x30)) {
      fVar8 = *(float *)(lVar2 + 0x30) + *pfVar1;
      if ((*(float *)(param_1 + 0x430) < 0.0) || (fVar8 < *(float *)(param_1 + 0x430))) {
        *(float *)(param_1 + 0x430) = fVar8;
        *(uint *)(param_1 + 0x470) = uVar6;
      }
    }
    if (0.0 <= *(float *)(lVar2 + 0x34)) {
      fVar8 = *(float *)(lVar2 + 0x34) + *pfVar1;
      if ((*(float *)(param_1 + 0x434) < 0.0) || (fVar8 < *(float *)(param_1 + 0x434))) {
        *(float *)(param_1 + 0x434) = fVar8;
        *(uint *)(param_1 + 0x474) = uVar6;
      }
    }
    if (0.0 <= *(float *)(lVar2 + 0x38)) {
      fVar8 = *(float *)(lVar2 + 0x38) + *pfVar1;
      if ((*(float *)(param_1 + 0x438) < 0.0) || (fVar8 < *(float *)(param_1 + 0x438))) {
        *(float *)(param_1 + 0x438) = fVar8;
        *(uint *)(param_1 + 0x478) = uVar6;
      }
    }
    if (0.0 <= *(float *)(lVar2 + 0x3c)) {
      fVar8 = *(float *)(lVar2 + 0x3c) + *pfVar1;
      if ((*(float *)(param_1 + 0x43c) < 0.0) || (fVar8 < *(float *)(param_1 + 0x43c))) {
        *(float *)(param_1 + 0x43c) = fVar8;
        *(uint *)(param_1 + 0x47c) = uVar6;
      }
    }
    *(undefined1 *)(param_1 + uVar7 + 0x480) = 1;
    fVar8 = *(float *)(param_1 + 0x400);
    if (fVar8 < 0.0) goto LAB_00f37fac;
LAB_00f37fc0:
    bVar4 = *(char *)(param_1 + 0x480) != '\0';
    fVar10 = fVar8;
    if (fVar3 <= fVar8 || bVar4) {
      fVar10 = fVar3;
    }
    uVar5 = 0;
    if (fVar3 <= fVar8 || bVar4) {
      uVar5 = uVar6;
    }
    fVar8 = *(float *)(param_1 + 0x404);
  } while( true );
}


