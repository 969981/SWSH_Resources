/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01006f50; name: FUN_01006f50
 */


void FUN_01006f50(undefined8 param_1)

{
  undefined *puVar1;
  void *__src;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined4 local_208 [7];
  undefined4 local_1ec;
  undefined4 local_140;
  undefined2 local_13c;
  undefined4 local_138;
  undefined1 local_134;
  undefined1 local_133;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined2 local_120;
  undefined4 local_11c;
  undefined1 local_118;
  undefined1 local_117;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined2 local_104;
  undefined4 local_100;
  undefined1 local_fc;
  undefined1 local_fb;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined2 local_e8;
  undefined4 local_e4;
  undefined1 local_e0;
  undefined1 local_df;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined2 local_cc;
  undefined4 local_c8;
  undefined1 local_c4;
  undefined1 local_c3;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined2 local_b0;
  undefined4 local_ac;
  undefined1 local_a8;
  undefined1 local_a7;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  
  puVar1 = PTR_DAT_02710798;
  lVar2 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1e8);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  nn::crypto::GenerateCryptographicallyRandomBytes(local_208,4);
  FUN_01524cf0(lVar2,local_208[0]);
  lVar3 = *(long *)(*(long *)puVar1 + 0x1f0);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  FUN_0150dec0(lVar3);
  FUN_014be100();
  FUN_0100a950(param_1,0,1);
  FUN_0100a950(param_1,1,1);
  FUN_0100a950(param_1,2,1);
  lVar4 = *(long *)(*(long *)puVar1 + 0x288);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  __src = (void *)FUN_014fba00(lVar4);
  memcpy(local_208,__src,200);
  local_140 = *(undefined4 *)((long)__src + 200);
  local_13c = *(undefined2 *)((long)__src + 0xcc);
  local_138 = *(undefined4 *)((long)__src + 0xd0);
  local_134 = *(undefined1 *)((long)__src + 0xd4);
  local_133 = *(undefined1 *)((long)__src + 0xd5);
  local_130 = *(undefined4 *)((long)__src + 0xd8);
  local_12c = *(undefined4 *)((long)__src + 0xdc);
  local_128 = *(undefined4 *)((long)__src + 0xe0);
  local_124 = *(undefined4 *)((long)__src + 0xe4);
  local_120 = *(undefined2 *)((long)__src + 0xe8);
  local_11c = *(undefined4 *)((long)__src + 0xec);
  local_118 = *(undefined1 *)((long)__src + 0xf0);
  local_117 = *(undefined1 *)((long)__src + 0xf1);
  local_114 = *(undefined4 *)((long)__src + 0xf4);
  local_110 = *(undefined4 *)((long)__src + 0xf8);
  local_10c = *(undefined4 *)((long)__src + 0xfc);
  local_108 = *(undefined4 *)((long)__src + 0x100);
  local_104 = *(undefined2 *)((long)__src + 0x104);
  local_100 = *(undefined4 *)((long)__src + 0x108);
  local_fc = *(undefined1 *)((long)__src + 0x10c);
  local_fb = *(undefined1 *)((long)__src + 0x10d);
  local_f8 = *(undefined4 *)((long)__src + 0x110);
  local_f4 = *(undefined4 *)((long)__src + 0x114);
  local_f0 = *(undefined4 *)((long)__src + 0x118);
  local_ec = *(undefined4 *)((long)__src + 0x11c);
  local_e8 = *(undefined2 *)((long)__src + 0x120);
  local_e4 = *(undefined4 *)((long)__src + 0x124);
  local_e0 = *(undefined1 *)((long)__src + 0x128);
  local_df = *(undefined1 *)((long)__src + 0x129);
  local_dc = *(undefined4 *)((long)__src + 300);
  local_d8 = *(undefined4 *)((long)__src + 0x130);
  local_d4 = *(undefined4 *)((long)__src + 0x134);
  local_d0 = *(undefined4 *)((long)__src + 0x138);
  local_cc = *(undefined2 *)((long)__src + 0x13c);
  local_c8 = *(undefined4 *)((long)__src + 0x140);
  local_c4 = *(undefined1 *)((long)__src + 0x144);
  local_c3 = *(undefined1 *)((long)__src + 0x145);
  local_c0 = *(undefined4 *)((long)__src + 0x148);
  local_bc = *(undefined4 *)((long)__src + 0x14c);
  local_b8 = *(undefined4 *)((long)__src + 0x150);
  local_b4 = *(undefined4 *)((long)__src + 0x154);
  local_b0 = *(undefined2 *)((long)__src + 0x158);
  local_ac = *(undefined4 *)((long)__src + 0x15c);
  local_a8 = *(undefined1 *)((long)__src + 0x160);
  local_a7 = *(undefined1 *)((long)__src + 0x161);
  local_a4 = *(undefined4 *)((long)__src + 0x164);
  local_a0 = *(undefined4 *)((long)__src + 0x168);
  local_9c = *(undefined4 *)((long)__src + 0x16c);
  local_98 = *(undefined8 *)((long)__src + 0x170);
  local_90 = *(undefined8 *)((long)__src + 0x178);
  uStack_88 = *(undefined8 *)((long)__src + 0x180);
  local_80 = *(undefined8 *)((long)__src + 0x188);
  uStack_78 = *(undefined8 *)((long)__src + 400);
  local_70 = *(undefined8 *)((long)__src + 0x198);
  uStack_68 = *(undefined8 *)((long)__src + 0x1a0);
  uStack_50 = *(undefined8 *)((long)__src + 0x1b8);
  local_60 = *(undefined8 *)((long)__src + 0x1a8);
  local_58 = *(undefined8 *)((long)__src + 0x1b0);
  local_48 = *(undefined4 *)((long)__src + 0x1c0);
  local_1ec = FUN_01524d10(lVar2);
  FUN_014fba10(lVar4,local_208,0);
  FUN_0168e710(*(undefined8 *)(*(long *)PTR_DAT_02710540 + 0x288));
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  }
  return;
}


