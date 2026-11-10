/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012f8d80; name: FUN_012f8d80
 */


void FUN_012f8d80(void)

{
  undefined8 uVar1;
  long lVar2;
  byte local_60;
  undefined7 uStack_5f;
  char cStack_58;
  undefined7 uStack_57;
  char local_50;
  undefined2 uStack_4f;
  undefined1 uStack_4d;
  undefined4 uStack_4c;
  undefined1 auStack_28 [8];
  
  FUN_012f90b0();
  uVar1 = FUN_007e2680();
  uStack_4c = 0;
  local_60 = 0x24;
  uStack_57 = s_kw_sync_data_proto_01cfa4aa._8_7_;
  local_50 = s_kw_sync_data_proto_01cfa4aa[0xf];
  uStack_5f = s_kw_sync_data_proto_01cfa4aa._0_7_;
  cStack_58 = s_kw_sync_data_proto_01cfa4aa[7];
  uStack_4f = 0x6f74;
  uStack_4d = 0;
  lVar2 = FUN_007e27c0(uVar1,&local_60);
  if ((local_60 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_4c,CONCAT13(uStack_4d,CONCAT21(uStack_4f,local_50))));
  }
  if (lVar2 == 0) {
    FUN_00801270(&local_60,3,
                 "C:/jenkins/workspace/rigel/rom/RomBuild/program/prog/contents/pokecamp/include/protocol_buffers/out/data/kw_sync_data.pb.cc"
                 ,0x43);
    uVar1 = FUN_00800f30(&local_60,"CHECK failed: file != NULL: ");
    FUN_00800fa0(auStack_28,uVar1);
    FUN_00801290(&local_60);
  }
  DAT_02a6cb30 = *(long *)(lVar2 + 0x50);
  DAT_02a6cb38 = FUN_0083da60(DAT_02a6cb30,*(undefined8 *)PTR_DAT_02727c68,&DAT_0216b068,0xffffffff,
                              0xffffffff,0xffffffff,200,8,0x10);
  DAT_02a6cb40 = *(long *)(DAT_02a6cb30 + 0x50);
  DAT_02a6cb48 = FUN_0083da60(DAT_02a6cb40,*(undefined8 *)PTR_DAT_02727c70,&DAT_0216b088,0xffffffff,
                              0xffffffff,0xffffffff,0x20,8,0x10);
  DAT_02a6cb50 = *(undefined8 *)(DAT_02a6cb40 + 0x60);
  DAT_02a6cb58 = *(long *)(DAT_02a6cb30 + 0x50) + 0xa8;
  DAT_02a6cb60 = FUN_0083da60(DAT_02a6cb58,*(undefined8 *)PTR_DAT_02727c78,&DAT_0216b090,0xffffffff,
                              0xffffffff,0xffffffff,0x20,8,0x10);
  DAT_02a6cb68 = *(long *)(DAT_02a6cb30 + 0x50) + 0x150;
  DAT_02a6cb70 = FUN_0083da60(DAT_02a6cb68,*(undefined8 *)PTR_DAT_02727c80,&DAT_0216b098,0xffffffff,
                              0xffffffff,0xffffffff,0x30,8,0x10);
  DAT_02a6cb78 = *(long *)(DAT_02a6cb30 + 0x50) + 0x1f8;
  DAT_02a6cb80 = FUN_0083da60(DAT_02a6cb78,*(undefined8 *)PTR_DAT_02727c88,&DAT_0216b0b0,0xffffffff,
                              0xffffffff,0xffffffff,0x30,8,0x10);
  DAT_02a6cb88 = *(undefined8 *)(DAT_02a6cb78 + 0x60);
  DAT_02a6cb90 = *(long *)(DAT_02a6cb30 + 0x50) + 0x2a0;
  DAT_02a6cb98 = FUN_0083da60(DAT_02a6cb90,*(undefined8 *)PTR_DAT_02727c90,&DAT_0216b0c0,0xffffffff,
                              0xffffffff,0xffffffff,0x20,8,0x10);
  DAT_02a6cba0 = *(long *)(DAT_02a6cb30 + 0x50) + 0x348;
  DAT_02a6cba8 = FUN_0083da60(DAT_02a6cba0,*(undefined8 *)PTR_DAT_02727c98,&DAT_0216b0c8,0xffffffff,
                              0xffffffff,0xffffffff,0x38,8,0x10);
  DAT_02a6cbb0 = *(undefined8 *)(DAT_02a6cba0 + 0x60);
  DAT_02a6cbb8 = *(long *)(DAT_02a6cb30 + 0x50) + 0x3f0;
  DAT_02a6cbc0 = FUN_0083da60(DAT_02a6cbb8,*(undefined8 *)PTR_DAT_02727ca0,&DAT_0216b0e4,0xffffffff,
                              0xffffffff,0xffffffff,0x30,8,0x10);
  DAT_02a6cbc8 = *(long *)(DAT_02a6cbb8 + 0x60);
  DAT_02a6cbd0 = DAT_02a6cbc8 + 0x38;
  DAT_02a6cbd8 = DAT_02a6cbc8 + 0x70;
  DAT_02a6cbe0 = *(undefined8 *)(DAT_02a6cb30 + 0x60);
  return;
}


