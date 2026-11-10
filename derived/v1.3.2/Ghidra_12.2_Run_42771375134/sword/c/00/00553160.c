/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00553160; name: FUN_00553160
 */


undefined8 FUN_00553160(long *param_1,char *param_2)

{
  float __x;
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  
  FUN_0059ebe0(param_1,0);
  *(undefined8 *)((long)param_1 + 0x3d) = 0;
  puVar1 = PTR_DAT_02713c20;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined1 *)((long)param_1 + 0x7a) = 0;
  *(undefined4 *)((long)param_1 + 0x7c) = 1;
  *(undefined2 *)(param_1 + 0xf) = 0x101;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined4 *)((long)param_1 + 0x84) = 2;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined4 *)((long)param_1 + 0x8c) = 1;
  *(undefined2 *)(param_1 + 0x14) = 0;
  param_1[0x13] = 0;
  *(undefined1 *)((long)param_1 + 0xac) = 0;
  *(undefined8 *)((long)param_1 + 0xa4) = 0;
  *(undefined8 *)((long)param_1 + 0xbd) = 0;
  *(undefined2 *)(param_1 + 0x1f) = 0x101;
  *(undefined1 *)((long)param_1 + 0xfa) = 0;
  *(undefined4 *)((long)param_1 + 0xfc) = 1;
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined4 *)((long)param_1 + 0x104) = 2;
  *(undefined1 *)(param_1 + 0x21) = 0;
  *(undefined4 *)((long)param_1 + 0x10c) = 1;
  *(undefined2 *)(param_1 + 0x24) = 0;
  param_1[0x23] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  puVar1 = PTR_PTR_02713988;
  *(undefined1 *)((long)param_1 + 300) = 0;
  *(undefined8 *)((long)param_1 + 0x124) = 0;
  uVar2 = FUN_005b9a50(*(undefined8 *)puVar1,1,"C:/workspace/YEBIS_draft/src/GPU/GPURenderGlare.cpp"
                       ,0x132,0);
  FUN_005a0790();
  FUN_005a10c0();
  *(undefined8 *)PTR_DAT_02713c28 = uVar2;
  if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
    FUN_00551860(param_1 + 2,PTR_s_CRenderGlare_02713c30);
  }
  else {
    FUN_00550fe0(auStack_50,PTR_s_CRenderGlare_02713c30);
    FUN_005528d0(auStack_40,auStack_50,&DAT_01ce77a5);
    FUN_005528d0(auStack_40 + 0x10,auStack_40,param_2);
    FUN_00551670(param_1 + 2,auStack_40 + 0x10);
    FUN_00551380(auStack_40 + 0x10);
    FUN_00551380(auStack_40);
    FUN_00551380(auStack_50);
  }
  *(undefined2 *)(param_1 + 0xf) = 0x101;
  *(undefined2 *)(param_1 + 0x1f) = 0x101;
  *(undefined8 *)((long)param_1 + 0x3d) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined1 *)((long)param_1 + 0x7a) = 0;
  *(undefined4 *)((long)param_1 + 0x7c) = 1;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined4 *)((long)param_1 + 0x84) = 2;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined4 *)((long)param_1 + 0x8c) = 1;
  *(undefined2 *)(param_1 + 0x14) = 0;
  param_1[0x13] = 0;
  *(undefined1 *)((long)param_1 + 0xac) = 0;
  *(undefined8 *)((long)param_1 + 0xa4) = 0;
  *(undefined8 *)((long)param_1 + 0xbd) = 0;
  *(undefined1 *)((long)param_1 + 0xfa) = 0;
  *(undefined4 *)((long)param_1 + 0xfc) = 1;
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined4 *)((long)param_1 + 0x104) = 2;
  *(undefined1 *)(param_1 + 0x21) = 0;
  *(undefined4 *)((long)param_1 + 0x10c) = 1;
  *(undefined2 *)(param_1 + 0x24) = 0;
  param_1[0x23] = 0;
  *(undefined1 *)((long)param_1 + 300) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined8 *)((long)param_1 + 0x124) = 0;
  *(undefined4 *)((long)param_1 + 0x23c) = 0x3f000000;
  *(undefined4 *)((long)param_1 + 0x25c) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x4c) = 6;
  *(undefined4 *)(param_1 + 0x2b) = 0x3ed413cd;
  __x = DAT_01d4bc70;
  param_1[0x5d] = 0;
  param_1[0x5c] = 0;
  *(undefined4 *)((long)param_1 + 0x224) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x45) = 0x3f800000;
  *(undefined4 *)((long)param_1 + 0x22c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x46) = 0x3f800000;
  *(undefined4 *)((long)param_1 + 0x234) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x47) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x48) = 0x3f800000;
  *(undefined4 *)((long)param_1 + 0x244) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  param_1[0x43] = 0;
  *(undefined4 *)(param_1 + 0x42) = 2;
  param_1[0x4a] = 0;
  param_1[0x49] = 0;
  *(undefined4 *)(param_1 + 0x4b) = 0;
  *(undefined4 *)((long)param_1 + 0x264) = 0;
  *(undefined4 *)(param_1 + 0x4d) = 0;
  param_1[0x3f] = 0;
  param_1[0x41] = 0;
  param_1[0x84] = 0;
  *(undefined4 *)(param_1 + 0x61) = 0;
  param_1[0x60] = 0;
  param_1[0x5f] = 0;
  param_1[0x5e] = 0;
  param_1[0x68] = 0;
  param_1[0x67] = 0;
  param_1[0x66] = 0;
  param_1[0x65] = 0;
  param_1[100] = 0;
  param_1[99] = 0;
  param_1[0x62] = 0;
  param_1[0x6b] = 0;
  param_1[0x6a] = 0;
  param_1[0x7a] = 0;
  param_1[0x79] = 0;
  param_1[0x78] = 0;
  param_1[0x77] = 0;
  param_1[0x76] = 0;
  param_1[0x75] = 0;
  param_1[0x74] = 0;
  param_1[0x73] = 0;
  *(undefined4 *)((long)param_1 + 0x15c) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  atanf(__x);
  *(undefined4 *)((long)param_1 + 0x154) = 0x3f490fdb;
  *(undefined8 *)((long)param_1 + 0x164) = 0x3f8000003f800000;
  *(undefined4 *)((long)param_1 + 0x134) = 0x42800000;
  *(undefined4 *)((long)param_1 + 0x13c) = 0x3f800000;
  param_1[0x6c] = 0;
  *(undefined1 *)(param_1 + 0x6d) = 0;
  *(undefined8 *)((long)param_1 + 0x36c) = 0x3f8000003f800000;
  *(undefined8 *)((long)param_1 + 0x374) = 0x3f8000003f800000;
  *(undefined8 *)((long)param_1 + 0x37c) = 0x3f8000003f800000;
  *(undefined8 *)((long)param_1 + 900) = 0;
  param_1[0x72] = 0;
  param_1[0x69] = 0;
  return 0;
}


