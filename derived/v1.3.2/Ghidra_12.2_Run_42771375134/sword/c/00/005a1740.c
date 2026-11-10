/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005a1740; name: FUN_005a1740
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_005a1740(int *param_1)

{
  long lVar1;
  int *piVar2;
  int *piVar3;
  long *plVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  int *piVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined8 local_d0;
  int local_c8;
  
  puVar6 = (undefined8 *)
           FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,0x21c58,
                        "C:/workspace/YEBIS_draft/src/GPU/GPUGlareDef.cpp",0x4b9,0);
  if (puVar6 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)0x0;
  }
  else {
    lVar8 = 0;
    puVar7 = puVar6 + 1;
    *puVar6 = 0x14;
    do {
      lVar9 = 0;
      do {
        lVar1 = lVar9 + 0x6c;
        *(undefined8 *)((long)puVar6 + lVar9 + 0xc) = 0x3f80000000000000;
        *(undefined8 *)((long)puVar6 + lVar9 + 0x14) = 0x3dcccccd;
        *(undefined8 *)((long)puVar6 + lVar9 + 0x5c) = 0x3ecccccd3f800000;
        *(undefined8 *)((long)puVar6 + lVar9 + 0x24) = 0x3f8000003f800000;
        *(undefined8 *)((long)puVar6 + lVar9 + 0x2c) = 0x3f8000003f800000;
        *(undefined8 *)((long)puVar6 + lVar9 + 0x34) = 0x3f8000003f800000;
        *(undefined8 *)((long)puVar6 + lVar9 + 0x3c) = 0x3f8000003f800000;
        *(undefined8 *)((long)puVar6 + lVar9 + 0x44) = 0x3f8000003f800000;
        *(undefined8 *)((long)puVar6 + lVar9 + 0x4c) = 0x3f0000003f800000;
        *(undefined8 *)((long)puVar6 + lVar9 + 0x1c) = 0x3f8000003f800000;
        *(undefined8 *)((long)puVar6 + lVar9 + 0x54) = 0x3e4ccccd3f4ccccd;
        *(undefined8 *)((long)puVar6 + lVar9 + 100) = 0;
        *(undefined8 *)((long)puVar6 + lVar9 + 0x6c) = 0x3f8000003f800000;
        lVar9 = lVar1;
      } while (lVar1 != 0x1b00);
      lVar8 = lVar8 + 1;
      puVar6 = (undefined8 *)((long)puVar6 + 0x1b04);
    } while (lVar8 != 0x14);
  }
  *(undefined8 **)PTR_DAT_02713c58 = puVar7;
  plVar4 = (long *)PTR_DAT_02713c58;
  if (((DAT_02762e30 & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(&DAT_02762e30), plVar4 = (long *)PTR_DAT_02713c58, iVar5 != 0)) {
    puVar6 = (undefined8 *)&DAT_02761958;
    do {
      *(undefined4 *)((long)puVar6 + 4) = 0xffffffff;
      puVar6[1] = 0x7f7fffff7f7fffff;
      *(undefined4 *)(puVar6 + 2) = 0x7f7fffff;
      *(undefined4 *)((long)puVar6 + 0x14) = 0x7f7fffff;
      *(undefined4 *)(puVar6 + 3) = 0x7f7fffff;
      *(undefined4 *)((long)puVar6 + 0x1c) = 0x7f7fffff;
      *(undefined4 *)(puVar6 + 4) = 0x7f7fffff;
      *(undefined4 *)((long)puVar6 + 0x24) = 0x7f7fffff;
      *(undefined4 *)(puVar6 + 5) = 0x7f7fffff;
      *(undefined4 *)((long)puVar6 + 0x2c) = 0x7f7fffff;
      *(undefined4 *)(puVar6 + 6) = 0x7f7fffff;
      *(undefined4 *)((long)puVar6 + 0x34) = 0x7f7fffff;
      *(undefined4 *)(puVar6 + 7) = 0x7f7fffff;
      *(undefined4 *)((long)puVar6 + 0x3c) = 0x7f7fffff;
      *(undefined1 *)(puVar6 + 0xe) = 1;
      *(undefined8 *)((long)puVar6 + 0x74) = 0xffffffff7f7fffff;
      *(undefined8 *)((long)puVar6 + 0x7c) = 0x7f7fffff7f7fffff;
      *(undefined4 *)((long)puVar6 + 0x84) = 0x7f7fffff;
      *(undefined4 *)(puVar6 + 0x11) = 0x7f7fffff;
      *(undefined4 *)((long)puVar6 + 0x8c) = 0x7f7fffff;
      *(undefined4 *)(puVar6 + 0x12) = 0x7f7fffff;
      *(undefined4 *)((long)puVar6 + 0x94) = 0x7f7fffff;
      *(undefined4 *)(puVar6 + 0x13) = 0x7f7fffff;
      *(undefined4 *)((long)puVar6 + 0x9c) = 0x7f7fffff;
      *(undefined4 *)(puVar6 + 0x14) = 0x7f7fffff;
      *(undefined4 *)((long)puVar6 + 0xa4) = 0x7f7fffff;
      *(undefined4 *)(puVar6 + 0x15) = 0x7f7fffff;
      *(undefined4 *)((long)puVar6 + 0xac) = 0x7f7fffff;
      *(undefined4 *)(puVar6 + 0x16) = 0x7f7fffff;
      *(undefined8 *)((long)puVar6 + 0xb4) = 0x7f7fffff7f7fffff;
      *(undefined8 *)((long)puVar6 + 0xbc) = 0x7f7fffff7f7fffff;
      *(undefined8 *)((long)puVar6 + 0xc4) = 0x7f7fffff7f7fffff;
      *(undefined8 *)((long)puVar6 + 0xcc) = 0x7f7fffff7f7fffff;
      *(undefined8 *)((long)puVar6 + 0xd4) = 0x7f7fffff7f7fffff;
      *(undefined8 *)((long)puVar6 + 0xdc) = 0x7f7fffff7f7fffff;
      *(undefined1 *)((long)puVar6 + 0xe4) = 1;
      *(undefined4 *)(puVar6 + 0x1f) = 0x7f7fffff;
      *(undefined4 *)((long)puVar6 + 0xfc) = 0x7f7fffff;
      *(undefined4 *)(puVar6 + 0x20) = 0x7f7fffff;
      *(undefined4 *)((long)puVar6 + 0x104) = 0x7f7fffff;
      *(undefined4 *)(puVar6 + 0x21) = 0x7f7fffff;
      *(undefined4 *)((long)puVar6 + 0x10c) = 0x7f7fffff;
      *(undefined4 *)(puVar6 + 0x22) = 0x7f7fffff;
      *(undefined4 *)((long)puVar6 + 0x114) = 0x7f7fffff;
      *(undefined4 *)(puVar6 + 0x23) = 0x7f7fffff;
      *(undefined4 *)((long)puVar6 + 0x11c) = 0x7f7fffff;
      *(undefined4 *)(puVar6 + 0x24) = 0x7f7fffff;
      *(undefined4 *)((long)puVar6 + 0x124) = 0x7f7fffff;
      *(undefined1 *)(puVar6 + 0x2b) = 1;
      puVar6[8] = 0x7f7fffff7f7fffff;
      puVar6[9] = 0x7f7fffff7f7fffff;
      puVar6[10] = 0x7f7fffff7f7fffff;
      puVar6[0xb] = 0x7f7fffff7f7fffff;
      puVar6[0xc] = 0x7f7fffff7f7fffff;
      puVar6[0xd] = 0x7f7fffff7f7fffff;
      puVar6[0x1d] = 0xffffffff7f7fffff;
      puVar6[0x1e] = 0x7f7fffff7f7fffff;
      puVar6[0x25] = 0x7f7fffff7f7fffff;
      puVar6[0x26] = 0x7f7fffff7f7fffff;
      puVar6[0x27] = 0x7f7fffff7f7fffff;
      puVar6[0x28] = 0x7f7fffff7f7fffff;
      puVar6[0x29] = 0x7f7fffff7f7fffff;
      puVar6[0x2a] = 0x7f7fffff7f7fffff;
      *(undefined8 *)((long)puVar6 + 0x15c) = 0xffffffff7f7fffff;
      *(undefined8 *)((long)puVar6 + 0x164) = 0x7f7fffff7f7fffff;
      *(undefined4 *)((long)puVar6 + 0x16c) = 0x7f7fffff;
      *(undefined4 *)(puVar6 + 0x2e) = 0x7f7fffff;
      *(undefined4 *)((long)puVar6 + 0x174) = 0x7f7fffff;
      *(undefined4 *)(puVar6 + 0x2f) = 0x7f7fffff;
      *(undefined4 *)((long)puVar6 + 0x17c) = 0x7f7fffff;
      *(undefined4 *)(puVar6 + 0x30) = 0x7f7fffff;
      *(undefined4 *)((long)puVar6 + 0x184) = 0x7f7fffff;
      *(undefined4 *)(puVar6 + 0x31) = 0x7f7fffff;
      *(undefined4 *)((long)puVar6 + 0x18c) = 0x7f7fffff;
      *(undefined4 *)(puVar6 + 0x32) = 0x7f7fffff;
      *(undefined4 *)((long)puVar6 + 0x194) = 0x7f7fffff;
      *(undefined4 *)(puVar6 + 0x33) = 0x7f7fffff;
      *(undefined8 *)((long)puVar6 + 0x19c) = 0x7f7fffff7f7fffff;
      *(undefined8 *)((long)puVar6 + 0x1a4) = 0x7f7fffff7f7fffff;
      *(undefined8 *)((long)puVar6 + 0x1ac) = 0x7f7fffff7f7fffff;
      *(undefined8 *)((long)puVar6 + 0x1b4) = 0x7f7fffff7f7fffff;
      *(undefined8 *)((long)puVar6 + 0x1bc) = 0x7f7fffff7f7fffff;
      *(undefined8 *)((long)puVar6 + 0x1c4) = 0x7f7fffff7f7fffff;
      *(undefined1 *)((long)puVar6 + 0x1cc) = 1;
      *(undefined4 *)(puVar6 + 0x3c) = 0x7f7fffff;
      *(undefined4 *)((long)puVar6 + 0x1e4) = 0x7f7fffff;
      *(undefined4 *)(puVar6 + 0x3d) = 0x7f7fffff;
      *(undefined4 *)((long)puVar6 + 0x1ec) = 0x7f7fffff;
      *(undefined4 *)(puVar6 + 0x3e) = 0x7f7fffff;
      *(undefined4 *)((long)puVar6 + 500) = 0x7f7fffff;
      *(undefined4 *)(puVar6 + 0x3f) = 0x7f7fffff;
      *(undefined4 *)((long)puVar6 + 0x1fc) = 0x7f7fffff;
      *(undefined4 *)(puVar6 + 0x40) = 0x7f7fffff;
      *(undefined4 *)((long)puVar6 + 0x204) = 0x7f7fffff;
      *(undefined4 *)(puVar6 + 0x41) = 0x7f7fffff;
      *(undefined4 *)((long)puVar6 + 0x20c) = 0x7f7fffff;
      puVar6[0x42] = 0x7f7fffff7f7fffff;
      puVar6[0x43] = 0x7f7fffff7f7fffff;
      puVar6[0x44] = 0x7f7fffff7f7fffff;
      puVar6[0x45] = 0x7f7fffff7f7fffff;
      puVar6[0x46] = 0x7f7fffff7f7fffff;
      puVar6[0x47] = 0x7f7fffff7f7fffff;
      *(undefined1 *)(puVar6 + 0x48) = 1;
      *(undefined4 *)((long)puVar6 + 0x244) = 0x7f7fffff;
      *(undefined4 *)(puVar6 + 0x49) = 0xffffffff;
      puVar6[0x3a] = 0xffffffff7f7fffff;
      puVar6[0x3b] = 0x7f7fffff7f7fffff;
      *(undefined8 *)((long)puVar6 + 0x24c) = 0x7f7fffff7f7fffff;
      *(undefined4 *)((long)puVar6 + 0x254) = 0x7f7fffff;
      *(undefined4 *)(puVar6 + 0x4b) = 0x7f7fffff;
      *(undefined4 *)((long)puVar6 + 0x25c) = 0x7f7fffff;
      *(undefined4 *)(puVar6 + 0x4c) = 0x7f7fffff;
      *(undefined4 *)((long)puVar6 + 0x264) = 0x7f7fffff;
      *(undefined4 *)(puVar6 + 0x4d) = 0x7f7fffff;
      *(undefined4 *)((long)puVar6 + 0x26c) = 0x7f7fffff;
      *(undefined4 *)(puVar6 + 0x4e) = 0x7f7fffff;
      *(undefined4 *)((long)puVar6 + 0x274) = 0x7f7fffff;
      *(undefined4 *)(puVar6 + 0x4f) = 0x7f7fffff;
      *(undefined4 *)((long)puVar6 + 0x27c) = 0x7f7fffff;
      *(undefined4 *)(puVar6 + 0x50) = 0x7f7fffff;
      *(undefined8 *)((long)puVar6 + 0x284) = 0x7f7fffff7f7fffff;
      *(undefined8 *)((long)puVar6 + 0x28c) = 0x7f7fffff7f7fffff;
      *(undefined8 *)((long)puVar6 + 0x294) = 0x7f7fffff7f7fffff;
      *(undefined8 *)((long)puVar6 + 0x29c) = 0x7f7fffff7f7fffff;
      *(undefined8 *)((long)puVar6 + 0x2a4) = 0x7f7fffff7f7fffff;
      *(undefined8 *)((long)puVar6 + 0x2ac) = 0x7f7fffff7f7fffff;
      *(undefined1 *)((long)puVar6 + 0x2b4) = 1;
      puVar6[0x57] = 0xffffffff7f7fffff;
      puVar6[0x58] = 0x7f7fffff7f7fffff;
      *(undefined4 *)(puVar6 + 0x59) = 0x7f7fffff;
      *(undefined4 *)((long)puVar6 + 0x2cc) = 0x7f7fffff;
      *(undefined4 *)(puVar6 + 0x5a) = 0x7f7fffff;
      *(undefined4 *)((long)puVar6 + 0x2d4) = 0x7f7fffff;
      *(undefined4 *)(puVar6 + 0x5b) = 0x7f7fffff;
      *(undefined4 *)((long)puVar6 + 0x2dc) = 0x7f7fffff;
      *(undefined4 *)(puVar6 + 0x5c) = 0x7f7fffff;
      *(undefined4 *)((long)puVar6 + 0x2e4) = 0x7f7fffff;
      *(undefined4 *)(puVar6 + 0x5d) = 0x7f7fffff;
      *(undefined4 *)((long)puVar6 + 0x2ec) = 0x7f7fffff;
      *(undefined4 *)(puVar6 + 0x5e) = 0x7f7fffff;
      *(undefined4 *)((long)puVar6 + 0x2f4) = 0x7f7fffff;
      puVar6[0x5f] = 0x7f7fffff7f7fffff;
      puVar6[0x60] = 0x7f7fffff7f7fffff;
      puVar6[0x61] = 0x7f7fffff7f7fffff;
      puVar6[0x62] = 0x7f7fffff7f7fffff;
      puVar6[99] = 0x7f7fffff7f7fffff;
      puVar6[100] = 0x7f7fffff7f7fffff;
      *(undefined1 *)(puVar6 + 0x65) = 1;
      *(undefined8 *)((long)puVar6 + 0x32c) = 0xffffffff7f7fffff;
      *(undefined8 *)((long)puVar6 + 0x334) = 0x7f7fffff7f7fffff;
      *(undefined4 *)((long)puVar6 + 0x33c) = 0x7f7fffff;
      *(undefined4 *)(puVar6 + 0x68) = 0x7f7fffff;
      *(undefined4 *)((long)puVar6 + 0x344) = 0x7f7fffff;
      *(undefined4 *)(puVar6 + 0x69) = 0x7f7fffff;
      *(undefined4 *)((long)puVar6 + 0x34c) = 0x7f7fffff;
      *(undefined4 *)(puVar6 + 0x6a) = 0x7f7fffff;
      *(undefined4 *)((long)puVar6 + 0x354) = 0x7f7fffff;
      *(undefined4 *)(puVar6 + 0x6b) = 0x7f7fffff;
      *(undefined4 *)((long)puVar6 + 0x35c) = 0x7f7fffff;
      *(undefined4 *)(puVar6 + 0x6c) = 0x7f7fffff;
      *(undefined4 *)((long)puVar6 + 0x364) = 0x7f7fffff;
      *(undefined4 *)(puVar6 + 0x6d) = 0x7f7fffff;
      *(undefined8 *)((long)puVar6 + 0x36c) = 0x7f7fffff7f7fffff;
      *(undefined8 *)((long)puVar6 + 0x374) = 0x7f7fffff7f7fffff;
      *(undefined8 *)((long)puVar6 + 0x37c) = 0x7f7fffff7f7fffff;
      *(undefined8 *)((long)puVar6 + 900) = 0x7f7fffff7f7fffff;
      *(undefined8 *)((long)puVar6 + 0x38c) = 0x7f7fffff7f7fffff;
      *(undefined8 *)((long)puVar6 + 0x394) = 0x7f7fffff7f7fffff;
      *(undefined1 *)((long)puVar6 + 0x39c) = 1;
      *(undefined4 *)(puVar6 + 0x74) = 0x7f7fffff;
      puVar6 = puVar6 + 0x7a;
    } while (puVar6 != &DAT_02762c68);
    __cxa_guard_release(&DAT_02762e30);
    plVar4 = (long *)PTR_DAT_02713c58;
  }
  if (param_1 == (int *)0x0) {
    DAT_02761d1c = 3;
  }
  else {
    DAT_02761d1c = *param_1 + 3;
  }
  DAT_02761958 = 0;
  DAT_02761b3c = DAT_02762e8c * DAT_02762eac;
  DAT_02761b38 = DAT_02762e88 * DAT_02762ea8;
  DAT_02761b40 = DAT_02762e90 * DAT_02762eb0;
  DAT_02761b44 = DAT_02762e94 * DAT_02762eb4;
  DAT_02761974 = DAT_02761b44 * 4.0;
  DAT_02761968 = DAT_02761b38 * 4.0;
  DAT_02761d00 = &DAT_02762e78;
  DAT_02761d18 = 4;
  DAT_02761d08 = 0x3f8000003f800000;
  DAT_02761d10 = 0x3f8000003f800000;
  _DAT_02761980 = 0x3f8000003f800000;
  fVar15 = DAT_02762e98 * DAT_02762e98;
  fVar12 = DAT_02762e9c * DAT_02762e9c;
  _DAT_02761988 = 0x3f8000003f800000;
  _DAT_02761990 = 0x3f8000003f800000;
  DAT_0276196c = DAT_02761b3c * 4.0;
  DAT_02761970 = DAT_02761b40 * 4.0;
  DAT_02761cfc = 2;
  DAT_02761998 = 0x3e99999a3e4ccccd;
  DAT_027619a8 = 0xbe99999a3ecccccd;
  _DAT_0276195c = 0xbf8ccccdffffffff;
  DAT_027619a0 = 0x3d4ccccd3f59999a;
  ram0x027619d0 = 0xbfb33333ffffffff;
  fVar14 = DAT_02762ea0 * DAT_02762ea0;
  fVar13 = DAT_02762ea4 * DAT_02762ea4;
  _DAT_027619ec = 0x3fe000003fe00000;
  _DAT_027619f4 = 0x3fe000003fe00000;
  DAT_027619dc = fVar15 * DAT_01d4c774;
  DAT_027619e0 = fVar12 * DAT_01d4c774;
  _DAT_027619fc = 0x3e8000003e800000;
  _DAT_02761a04 = 0x3e8000003e800000;
  DAT_027619e8 = fVar13 * DAT_01d4c774;
  DAT_027619e4 = fVar14 * DAT_01d4c774;
  DAT_02761a0c = 0x3f0000003e4ccccd;
  DAT_02761a14 = 0xbca3d70a3f266666;
  DAT_02761a1c = 0x3f19999a3f59999a;
  DAT_02761a24 = 0x3f8000003f000000;
  DAT_02761a50 = DAT_02762ea8 * DAT_02762ea8;
  DAT_02761a54 = DAT_02762eac * DAT_02762eac;
  DAT_02761a58 = DAT_02762eb0 * DAT_02762eb0;
  DAT_02761a5c = DAT_02762eb4 * DAT_02762eb4;
  DAT_02761a2c = 0x3f6666663f8ccccd;
  DAT_02761a34 = 0x3f0000003f800000;
  DAT_027619c0 = 0x3f4000003fa00000;
  DAT_02761a48 = 0xc00000003fc00000;
  DAT_02761d20 = 0x3e4ccccd;
  DAT_02761960._4_4_ = 0x3e800000;
  _DAT_02761978 = 0x3f8000003f800000;
  DAT_027619b0 = 0x3f8000003dcccccd;
  DAT_027619b8 = 0x3f8000003f800000;
  DAT_027619c8 = 0;
  DAT_027619cc._0_4_ = 0x3d4ccccd;
  DAT_027619d4._4_4_ = 0x3ee66666;
  DAT_02761a3c = 0;
  DAT_02761a40 = 0xffffffff00000000;
  _DAT_02761a60 = 0x3f8000003f800000;
  _DAT_02761a68 = 0x3f8000003f800000;
  _DAT_02761a70 = 0x3f8000003f800000;
  _DAT_02761a78 = 0x3f8000003f800000;
  DAT_02761a80 = 0x7f7fffff3f800000;
  DAT_02761a88 = &DAT_7f7fffff00000000;
  DAT_02761a90 = 0x3dcccccd40000000;
  DAT_02761a98 = 0x3f00000000000000;
  DAT_02761aa0 = 0x3f8000003f800000;
  DAT_02761aa8 = 0;
  DAT_02761ab0 = 0;
  DAT_02761ab4._0_4_ = 0;
  ram0x02761ab8 = 0xbf99999affffffff;
  DAT_02761abc._4_4_ = 0x3e800000;
  DAT_02761ac4 = DAT_02762ea8 * DAT_02762e98;
  _DAT_02761ad4 = 0x3f3333333f333333;
  _DAT_02761adc = 0x3f3333333f333333;
  DAT_02761ac8 = DAT_02762eac * DAT_02762e9c;
  _DAT_02761ae4 = 0x3fa666663fa66666;
  _DAT_02761aec = 0x3fa666663fa66666;
  DAT_02761af4 = 0x3dcccccd3ecccccd;
  DAT_02761afc = 0x7f7fffff7f7fffff;
  DAT_02761b24 = 1;
  DAT_02761acc = DAT_02762eb0 * DAT_02762ea0;
  DAT_02761ad0 = DAT_02762eb4 * DAT_02762ea4;
  _DAT_02761b60 = CONCAT44(DAT_02762ed0._4_4_,(float)DAT_02762ed0);
  DAT_02761b04 = 0x7f7fffff7f7fffff;
  DAT_02761b0c = 0x7f7fffff7f7fffff;
  DAT_02761b4c = 1.0 - DAT_02762ec8._4_4_ * DAT_01d4c39c;
  DAT_02761b54 = 1.0 - DAT_02762ed0._4_4_ * DAT_01d4c39c;
  DAT_02761bb0 = DAT_02762eac * DAT_02762e7c;
  DAT_02761b14 = 0x7f7fffff7f7fffff;
  DAT_02761b1c = 0x7f7fffff7f7fffff;
  DAT_02761bac = DAT_02762ea8 * DAT_02762e78;
  DAT_02761b48 = 1.0 - (float)DAT_02762ec8 * DAT_01d4c39c;
  DAT_02761b50 = 1.0 - (float)DAT_02762ed0 * DAT_01d4c39c;
  DAT_02761bb4 = DAT_02762eb0 * DAT_02762e80;
  if (DAT_02761b48 <= 0.0) {
    DAT_02761b48 = 0.0;
  }
  if (DAT_02761b4c <= 0.0) {
    DAT_02761b4c = 0.0;
  }
  if (DAT_02761b50 <= 0.0) {
    DAT_02761b50 = 0.0;
  }
  if (DAT_02761b54 <= 0.0) {
    DAT_02761b54 = 0.0;
  }
  ram0x02761b2c = 0xc0133333ffffffff;
  DAT_02761b30._4_4_ = 0x3e8f5c29;
  DAT_02761b28._0_4_ = 0x7f7fffff;
  _DAT_02761b58 = CONCAT44(DAT_02762ec8._4_4_,(float)DAT_02762ec8);
  DAT_02761b68 = 0x3ecccccd3ecccccd;
  ram0x02761b7c = 0x3f8000003f000000;
  DAT_02761b70._0_4_ = 0x3f800000;
  DAT_02761b80._4_4_ = 0x7f7fffff;
  ram0x02761b74 = 0x3fc000003f000000;
  DAT_02761b88 = 0x3f8000003f800000;
  DAT_02761b90 = 0;
  DAT_02761b98 = 0;
  DAT_02761b9c = 0x3da3d70a;
  DAT_02761bb8 = DAT_02762eb4 * DAT_02762e84;
  _DAT_02761ba0 = 0xc04ccccdffffffff;
  DAT_02761ba4._4_4_ = 0x3f000000;
  DAT_02761be4 = 0x3e99999a00000000;
  _DAT_02761bbc = 0x3f8000003f800000;
  _DAT_02761bc4 = 0x3f8000003f800000;
  _DAT_02761bd4 = 0;
  _DAT_02761bcc = 0;
  DAT_02761bdc = 0x3f0000003f800000;
  DAT_02761bf4._4_4_ = 0x7f7fffff;
  DAT_02761bfc = 0x3f8000003f800000;
  DAT_02761c04 = 0;
  DAT_02761c0c = 0;
  DAT_02761c10._0_4_ = 0;
  DAT_02761d28 = 4;
  DAT_02761bec = 0x3f19999a40000000;
  DAT_02761bf4._0_4_ = 0x3f800000;
  if (param_1 == (int *)0x0) {
    DAT_027620ec = 4;
  }
  else {
    DAT_027620ec = param_1[1] + 4;
  }
  DAT_02761d40 = DAT_02762e90 * fVar14 * 4.0;
  DAT_02761d38 = DAT_02762e88 * fVar15 * 4.0;
  DAT_02761d3c = DAT_02762e8c * fVar12 * 4.0;
  DAT_02761d44 = DAT_02762e94 * fVar13 * 4.0;
  DAT_027620d0 = &DAT_02762e78;
  DAT_027620e8 = 4;
  DAT_027620d8 = 0x3f8000003f800000;
  DAT_027620e0 = 0x3f8000003f800000;
  DAT_027620f0 = 0x3e4ccccd;
  DAT_02761d30._4_4_ = 0x3e6147ae;
  _DAT_02761d60 = CONCAT44(DAT_02762ec0._4_4_,(float)DAT_02762ec0);
  _DAT_02761d58 = CONCAT44(DAT_02762eb8._4_4_,(float)DAT_02762eb8);
  _DAT_02761dcc = CONCAT44(DAT_02762ec8._4_4_,(float)DAT_02762ec8);
  DAT_02761dd4 = CONCAT44(DAT_02762ed0._4_4_,(float)DAT_02762ed0);
  DAT_02761d90 = 0x3eb333333f000000;
  DAT_02761dfc = 0x3f8000003f800000;
  DAT_02761e04 = 0x3eb333333f000000;
  DAT_02761dac = DAT_02761b38 + DAT_02761b38;
  DAT_02761db0 = DAT_02761b3c + DAT_02761b3c;
  DAT_02761db4 = DAT_02761b40 + DAT_02761b40;
  DAT_02761db8 = DAT_02761b44 + DAT_02761b44;
  DAT_02761e20 = DAT_02762e88 * DAT_02762e88 * DAT_02762e98 * DAT_01d4bcb8;
  DAT_02761e24 = DAT_02762e8c * DAT_02762e8c * DAT_02762e9c * DAT_01d4bcb8;
  DAT_02761e28 = DAT_02762e90 * DAT_02762e90 * DAT_02762ea0 * DAT_01d4bcb8;
  DAT_02761e2c = DAT_02762e94 * DAT_02762e94 * DAT_02762ea4 * DAT_01d4bcb8;
  _DAT_02761d2c = 0xbf666666ffffffff;
  DAT_02761d68 = 0x3e8000003dcccccd;
  DAT_02761d70 = 0x3d4ccccd3f800000;
  DAT_02761ddc = 0x3f8000003dcccccd;
  DAT_02761de4 = 0x3d4ccccd3f800000;
  DAT_02761e18 = 0x3fc00000;
  DAT_02761e1c = 0x3f400000;
  DAT_02761e48 = CONCAT44(DAT_02762ec0._4_4_,(float)DAT_02762ec0);
  DAT_027620cc = 6;
  DAT_02761d78 = 0xbe8000003e99999a;
  DAT_02761d88 = 0x3f4ccccd3f800000;
  DAT_02761dec = 0xbe99999a41200000;
  DAT_02761df4 = 0x3f8000003d4ccccd;
  DAT_02761d48 = 0x7f7fffff;
  DAT_02761d4c = 0x7f7fffff;
  DAT_02761d50 = 0x7f7fffff;
  DAT_02761d54 = 0x7f7fffff;
  DAT_02761d80 = 0x3f8000003e800000;
  DAT_02761d98 = 0;
  DAT_02761d9c = 0xffffffffbd4ccccd;
  DAT_02761da4 = 0x3f0000003fc00000;
  DAT_02761dbc = 0x7f7fffff;
  DAT_02761dc0 = 0x7f7fffff;
  DAT_02761dc4 = 0x7f7fffff;
  DAT_02761dc8 = 0x7f7fffff;
  DAT_02761e0c = 0;
  DAT_02761e10 = 0xffffffff3d4ccccd;
  DAT_02761ebc = DAT_02762ef0 * 0.25;
  DAT_02761eb4 = DAT_02762ee8 * 0.25;
  DAT_02761eb8 = DAT_02762eec * 0.25;
  DAT_02761ec0 = DAT_02762ef4 * 0.25;
  DAT_02761e94 = fVar15 * 0.5;
  DAT_02761e30 = 0x7f7fffff;
  DAT_02761e34 = 0x7f7fffff;
  DAT_02761e38 = 0x7f7fffff;
  DAT_02761e3c = 0x7f7fffff;
  DAT_02761e40 = CONCAT44(DAT_02762eb8._4_4_,(float)DAT_02762eb8);
  DAT_02761e50 = 0x3f8000003dcccccd;
  DAT_02761e58 = 0x3cf5c28f3f400000;
  DAT_02761e60 = 0x3f19999a3f800000;
  DAT_02761e68 = 0x3e99999a;
  DAT_02761e6c = 0x3f800000;
  DAT_02761e70 = 0x3f8000003f800000;
  DAT_02761e78 = 0x3f4000003f99999a;
  DAT_02761e80 = 0;
  DAT_02761e84 = 0;
  DAT_02761e88 = 0xc0000000ffffffff;
  DAT_02761e98 = fVar12 * 0.5;
  DAT_02761e9c = fVar14 * 0.5;
  DAT_02761ea0 = fVar13 * 0.5;
  DAT_02761e90 = 0x3f8ccccd;
  fVar11 = DAT_02762e8c * DAT_02762e8c * DAT_02762e8c;
  DAT_02761f0c = fVar11 + fVar11;
  fVar11 = DAT_02762e90 * DAT_02762e90 * DAT_02762e90;
  DAT_02761f10 = fVar11 + fVar11;
  fVar11 = DAT_02762e88 * DAT_02762e88 * DAT_02762e88;
  DAT_02761f08 = fVar11 + fVar11;
  fVar11 = DAT_02762e94 * DAT_02762e94 * DAT_02762e94;
  DAT_02761f14 = fVar11 + fVar11;
  DAT_02761ea4 = 0x7f7fffff;
  DAT_02761ea8 = 0x7f7fffff;
  DAT_02761eac = 0x7f7fffff;
  DAT_02761eb0 = 0x7f7fffff;
  DAT_02761ed4 = 0x3f800000;
  DAT_02761ec4 = 0x3f8000003dcccccd;
  DAT_02761ecc = 0xbccccccd3f000000;
  DAT_02761ed8 = 0x3f0000003f666666;
  DAT_02761f04 = 0x3ee66666;
  DAT_02761ee0 = 0x3f800000;
  DAT_02761ef4 = 0;
  DAT_02761ef8 = 0;
  DAT_02761ee4 = 0x3f4000003f800000;
  DAT_02761eec = 0x3f4000003f99999a;
  DAT_02761f18 = 1.0 - (float)DAT_02762eb8 * DAT_01d4bfc0;
  DAT_02761f1c = 1.0 - DAT_02762eb8._4_4_ * DAT_01d4bfc0;
  DAT_02761f20 = 1.0 - (float)DAT_02762ec0 * DAT_01d4bfc0;
  DAT_02761f24 = 1.0 - DAT_02762ec0._4_4_ * DAT_01d4bfc0;
  if (DAT_02761f18 <= 0.0) {
    DAT_02761f18 = 0.0;
  }
  if (DAT_02761f1c <= 0.0) {
    DAT_02761f1c = 0.0;
  }
  if (DAT_02761f20 <= 0.0) {
    DAT_02761f20 = 0.0;
  }
  if (DAT_02761f24 <= 0.0) {
    DAT_02761f24 = 0.0;
  }
  DAT_02761f7c = DAT_02762e98 * fVar15 + DAT_02762e98 * fVar15;
  DAT_02761efc = 0xbf9ae148ffffffff;
  DAT_02761f28 = CONCAT44(DAT_02762eb8._4_4_,(float)DAT_02762eb8);
  DAT_02761f30 = CONCAT44(DAT_02762ec0._4_4_,(float)DAT_02762ec0);
  DAT_02761f38 = 0x3e99999a3dcccccd;
  DAT_02761f40 = 0x3d75c28f3f000000;
  DAT_02761f48 = 0xbecccccd3f000000;
  DAT_02761f50 = 0x3f8000003dcccccd;
  DAT_02761f58 = 0x3f6666663f800000;
  DAT_02761f60 = 0x3f3333333fa00000;
  DAT_02761f80 = DAT_02762e9c * fVar12 + DAT_02762e9c * fVar12;
  DAT_02761f84 = DAT_02762ea0 * fVar14 + DAT_02762ea0 * fVar14;
  DAT_02761f6c = 0xffffffff00000000;
  DAT_02761f74 = 0x3edae147bf9322d1;
  DAT_02761f9c = CONCAT44(DAT_02762eb8._4_4_,(float)DAT_02762eb8);
  DAT_02761fa4 = CONCAT44(DAT_02762ec0._4_4_,(float)DAT_02762ec0);
  DAT_02761f88 = DAT_02762ea4 * fVar13 + DAT_02762ea4 * fVar13;
  DAT_027624bc = 8;
  DAT_027620f8 = 8;
  DAT_02761f68 = 0;
  DAT_02761fac = 0x3e99999a3dcccccd;
  DAT_02761fb4 = 0x3d75c28f3f000000;
  DAT_02761fbc = 0xbec28f5c3f000000;
  DAT_02761fc4 = 0x3f8000003d4ccccd;
  DAT_02761fcc = 0x3f6666663f800000;
  DAT_02761fd4 = 0x3f3333333fa00000;
  DAT_02761fdc = 0;
  DAT_02761fe0 = 0;
  if (param_1 != (int *)0x0) {
    DAT_027624bc = param_1[2] + 8;
  }
  DAT_027624b8 = 4;
  DAT_027624a8 = 0x3f80000000000000;
  DAT_0276288c = 0xc;
  DAT_027624a0 = &DAT_02762e78;
  DAT_027624b0 = 0x3d4ccccd;
  DAT_027624c0 = 0x3d4ccccd;
  DAT_0276249c = 0;
  DAT_027624c8 = 0xc;
  if (param_1 != (int *)0x0) {
    DAT_0276288c = param_1[3] + 0xc;
  }
  DAT_02762888 = 4;
  DAT_02762870 = &DAT_02762e78;
  DAT_02762c5c = 0x10;
  DAT_02762878 = 0;
  DAT_0276287c = 0x3d4ccccd;
  DAT_02762880 = 0x3f800000;
  DAT_02762890 = 0x3f000000;
  DAT_0276286c = 0;
  DAT_02762898 = 0x10;
  if (param_1 != (int *)0x0) {
    DAT_02762c5c = param_1[4] + 0x10;
  }
  piVar10 = &DAT_02761958;
  DAT_02762c48 = 0x3f0000003f800000;
  DAT_02762c58 = 4;
  DAT_02762c3c = 6;
  DAT_02762c40 = &DAT_02762e78;
  DAT_02762c50 = 0x3f8000003f800000;
  DAT_02762c60 = 0x3f000000;
  DAT_0276289c = 0x3fd9999affffffff;
  DAT_027628c8 = CONCAT44(DAT_02762f08._4_4_,(float)DAT_02762f08);
  DAT_027628d0 = CONCAT44(DAT_02762f10._4_4_,(float)DAT_02762f10);
  DAT_027628c0 = 1.0 - (float)DAT_02762f10 * DAT_01d4bdf0;
  DAT_027628b8 = 1.0 - (float)DAT_02762f08 * DAT_01d4bdf0;
  DAT_027628bc = 1.0 - DAT_02762f08._4_4_ * DAT_01d4bdf0;
  if (DAT_027628b8 <= 0.0) {
    DAT_027628b8 = 0.0;
  }
  DAT_027628c4 = 1.0 - DAT_02762f10._4_4_ * DAT_01d4bdf0;
  if (DAT_027628bc <= 0.0) {
    DAT_027628bc = 0.0;
  }
  if (DAT_027628c0 <= 0.0) {
    DAT_027628c0 = 0.0;
  }
  if (DAT_027628c4 <= 0.0) {
    DAT_027628c4 = 0.0;
  }
  DAT_027628a4 = 0x3e23d70a;
  DAT_027628d8 = 0x3f19999a3f666666;
  DAT_027628e0 = 0xbd4ccccd3f800000;
  DAT_027628e8 = 0x3f99999a3fcccccd;
  DAT_027628f0 = 0x7f7fffff3f800000;
  DAT_027628f8 = 0x3f8000003e800000;
  DAT_02762900 = 0x7f7fffff7f7fffff;
  DAT_02762908 = 0;
  DAT_02762990 = DAT_02761bac * 3.0;
  DAT_02762998 = DAT_02761bb4 * 3.0;
  lVar8 = 5;
  DAT_0276290c = 0xffffffff3d4ccccd;
  DAT_02762914 = 0x3e99999a;
  DAT_02762918 = 0xbd8f5c29;
  DAT_0276293c = 0x3fa66666;
  DAT_02762940 = 0x3fa66666;
  DAT_02762944 = 0x3fa66666;
  DAT_02762948 = 0x3fa66666;
  DAT_0276292c = 0x3f333333;
  DAT_02762930 = 0x3f333333;
  DAT_02762934 = 0x3f333333;
  DAT_02762938 = 0x3f333333;
  DAT_02762994 = DAT_02761bb0 * 3.0;
  DAT_0276299c = DAT_02761bb8 * 3.0;
  DAT_0276294c = 0x3f0000003ecccccd;
  DAT_02762954 = 0x3dcccccd3f800000;
  DAT_0276295c = 0xbecccccd3fa66666;
  DAT_02762964 = 0x3f800000;
  DAT_02762968 = 0x7f7fffff;
  DAT_0276296c = 0x3f8000003e800000;
  DAT_02762974 = 0x7f7fffff7f7fffff;
  DAT_0276297c = 0;
  DAT_02762988 = 0x3de147aebecccccd;
  DAT_027629b0 = CONCAT44(DAT_02762ec8._4_4_,(float)DAT_02762ec8);
  DAT_027629b8 = CONCAT44(DAT_02762ed0._4_4_,(float)DAT_02762ed0);
  DAT_027629c0 = 0x3ecccccd;
  DAT_027629cc = 0xbdcccccd;
  DAT_02762a04 = DAT_02762e88 * DAT_02762e98 + DAT_02762e88 * DAT_02762e98;
  DAT_02762a08 = DAT_02762e8c * DAT_02762e9c + DAT_02762e8c * DAT_02762e9c;
  DAT_027629d0 = 0x40000000;
  DAT_027629c4 = 0x3f800000;
  DAT_027629c8 = 0x3f800000;
  DAT_027629d8 = 0x3f800000;
  DAT_02762980 = 0xffffffffbd4ccccd;
  DAT_02762a0c = DAT_02762e90 * DAT_02762ea0 + DAT_02762e90 * DAT_02762ea0;
  DAT_02762a10 = DAT_02762e94 * DAT_02762ea4 + DAT_02762e94 * DAT_02762ea4;
  DAT_027629d4 = 0x7f7fffff;
  DAT_027629dc = 0x7f7fffff;
  DAT_027629e0 = 0x3f8000003e800000;
  DAT_027629e8 = 0x7f7fffff7f7fffff;
  DAT_027629f0 = 0;
  DAT_027629f4 = 0x3d4ccccd;
  DAT_02762a14 = 1.0 - (float)DAT_02762ef8 * DAT_01d4bcf8;
  DAT_02762a18 = 1.0 - DAT_02762ef8._4_4_ * DAT_01d4bcf8;
  DAT_02762a1c = 1.0 - (float)DAT_02762f00 * DAT_01d4bcf8;
  DAT_02762a20 = 1.0 - DAT_02762f00._4_4_ * DAT_01d4bcf8;
  if (DAT_02762a18 <= 0.0) {
    DAT_02762a18 = 0.0;
  }
  if (DAT_02762a14 <= 0.0) {
    DAT_02762a14 = 0.0;
  }
  if (DAT_02762a1c <= 0.0) {
    DAT_02762a1c = 0.0;
  }
  if (DAT_02762a20 <= 0.0) {
    DAT_02762a20 = 0.0;
  }
  DAT_027629f8 = 0xbf333333ffffffff;
  DAT_02762a00 = 0xbe051eb8;
  DAT_02762a24 = CONCAT44(DAT_02762ef8._4_4_,(float)DAT_02762ef8);
  DAT_02762a2c = CONCAT44(DAT_02762f00._4_4_,(float)DAT_02762f00);
  DAT_02762a34 = 0x3ecccccd3f333333;
  DAT_02762a3c = 0x3f19999a3f800000;
  DAT_02762a44 = 0xbf0000003fd9999a;
  DAT_02762a4c = 0x7f7fffff3f800000;
  DAT_02762a54 = 0x3f8000003e800000;
  DAT_02762a5c = 0x7f7fffff7f7fffff;
  DAT_02762a64 = 0;
  DAT_02762a70 = 0xbe570a3dbf8ccccd;
  DAT_02762a98 = CONCAT44(DAT_02762eb8._4_4_,(float)DAT_02762eb8);
  DAT_02762aa0 = CONCAT44(DAT_02762ec0._4_4_,(float)DAT_02762ec0);
  DAT_02762aa8 = 0x3f4000003e99999a;
  DAT_02762a90 = 1.0 - (float)DAT_02762ec0 * DAT_01d4c7a8;
  DAT_02762a88 = 1.0 - (float)DAT_02762eb8 * DAT_01d4c7a8;
  DAT_02762a8c = 1.0 - DAT_02762eb8._4_4_ * DAT_01d4c7a8;
  DAT_02762a94 = 1.0 - DAT_02762ec0._4_4_ * DAT_01d4c7a8;
  if (DAT_02762a94 <= 0.0) {
    DAT_02762a94 = 0.0;
  }
  if (DAT_02762a88 <= 0.0) {
    DAT_02762a88 = 0.0;
  }
  if (DAT_02762a8c <= 0.0) {
    DAT_02762a8c = 0.0;
  }
  if (DAT_02762a90 <= 0.0) {
    DAT_02762a90 = 0.0;
  }
  DAT_02762aec = DAT_02761b38 * 0.5;
  DAT_02762af4 = DAT_02761b40 * 0.5;
  DAT_02762af0 = DAT_02761b3c * 0.5;
  DAT_02762af8 = DAT_02761b44 * 0.5;
  DAT_02762ab8 = 0x3e99999a3fb33333;
  DAT_02762a68 = 0xffffffffbd4ccccd;
  DAT_02762ab0 = 0xbd4ccccd3f800000;
  DAT_02762ac0 = 0x7f7fffff3f800000;
  DAT_02762ac8 = 0x3f8000003e800000;
  DAT_02762ad0 = 0x7f7fffff7f7fffff;
  DAT_02762ad8 = 0;
  DAT_02762adc = 0xffffffff3d4ccccd;
  DAT_02762ae4 = 0x3eb33333c00ccccd;
  DAT_02762afc = 0x3f0000003f000000;
  DAT_02762b10 = 0x3fc000003fc00000;
  DAT_02762b20 = 0x3f8000003f333333;
  DAT_02762b28 = 0x3ff333333e4ccccd;
  DAT_02762b08 = 0x3fc000003f000000;
  DAT_02762b30 = 0x3f800000c00ccccd;
  DAT_02762b04 = 0x3f000000;
  DAT_02762b18 = 0x3f0000003fc00000;
  DAT_02762b38 = 0x7f7fffff;
  DAT_02762b3c = 0x3f8000003e800000;
  DAT_02762b44 = 0x7f7fffff7f7fffff;
  DAT_02762b4c = 0;
  DAT_02762b50 = 0xbd4ccccd;
  PTR_DAT_02713c58 = (undefined *)plVar4;
  DAT_02761f8c = DAT_02761f18;
  DAT_02761f90 = DAT_02761f1c;
  DAT_02761f94 = DAT_02761f20;
  DAT_02761f98 = DAT_02761f24;
  DAT_027628a8 = DAT_02761ac4;
  DAT_027628ac = DAT_02761ac8;
  DAT_027628b0 = DAT_02761acc;
  DAT_027628b4 = DAT_02761ad0;
  DAT_0276291c = DAT_02761dac;
  DAT_02762920 = DAT_02761db0;
  DAT_02762924 = DAT_02761db4;
  DAT_02762928 = DAT_02761db8;
  DAT_027629a0 = DAT_02761b48;
  DAT_027629a4 = DAT_02761b4c;
  DAT_027629a8 = DAT_02761b50;
  DAT_027629ac = DAT_02761b54;
  DAT_02762a78 = DAT_02761bac;
  DAT_02762a7c = DAT_02761bb0;
  DAT_02762a80 = DAT_02761bb4;
  DAT_02762a84 = DAT_02761bb8;
  do {
    local_d0 = *(undefined8 *)(piVar10 + 0xea);
    piVar2 = piVar10 + 1;
    piVar3 = piVar10 + 0xec;
    local_f0 = 0x6c078966;
    uStack_ec = 0xdd5254a5;
    local_c8 = piVar10[0xf0];
    local_e8 = 0xb9523b81;
    uStack_e4 = 0x3df95b3;
    FUN_005a2c90(piVar10[0xf2],&local_f0,piVar10[0xf1],*plVar4 + (long)*piVar10 * 0x1b04,piVar2,
                 piVar10[0xe9],piVar3,8,1);
    local_d0 = *(undefined8 *)(piVar10 + 0xea);
    local_c8 = piVar10[0xf0];
    local_f0 = 0x6c078966;
    uStack_ec = 0xdd5254a5;
    local_e8 = 0xb9523b81;
    uStack_e4 = 0x3df95b3;
    FUN_005a2c90(piVar10[0xf2],&local_f0,piVar10[0xf1],*plVar4 + (long)*piVar10 * 0x1b04 + 0x1b04,
                 piVar2,piVar10[0xe9],piVar3,0x10,3);
    local_d0 = *(undefined8 *)(piVar10 + 0xea);
    local_c8 = piVar10[0xf0];
    local_f0 = 0x6c078966;
    uStack_ec = 0xdd5254a5;
    local_e8 = 0xb9523b81;
    uStack_e4 = 0x3df95b3;
    FUN_005a2c90(piVar10[0xf2],&local_f0,piVar10[0xf1],*plVar4 + (long)*piVar10 * 0x1b04 + 0x3608,
                 piVar2,piVar10[0xe9],piVar3,0x20,3);
    local_d0 = *(undefined8 *)(piVar10 + 0xea);
    local_c8 = piVar10[0xf0];
    local_f0 = 0x6c078966;
    uStack_ec = 0xdd5254a5;
    local_e8 = 0xb9523b81;
    uStack_e4 = 0x3df95b3;
    FUN_005a2c90(piVar10[0xf2],&local_f0,piVar10[0xf1],*plVar4 + (long)*piVar10 * 0x1b04 + 0x510c,
                 piVar2,piVar10[0xe9],piVar3,0x40,5);
    lVar8 = lVar8 + -1;
    piVar10 = piVar10 + 0xf4;
  } while (lVar8 != 0);
  return 0;
}


