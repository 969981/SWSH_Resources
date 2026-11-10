/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00eafbd0; name: FUN_00eafbd0
 */


uint FUN_00eafbd0(long param_1,long param_2)

{
  float fVar1;
  uint uVar2;
  ulong uVar3;
  undefined1 (*pauVar4) [16];
  undefined1 auVar5 [16];
  undefined8 local_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined4 local_198;
  undefined8 local_194;
  undefined8 local_18c;
  undefined8 local_184;
  undefined8 local_17c;
  undefined8 local_174;
  undefined1 local_16c;
  undefined3 uStack_160;
  undefined4 uStack_15d;
  undefined4 local_159;
  undefined4 uStack_155;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined6 local_118;
  undefined2 uStack_112;
  undefined6 uStack_110;
  undefined2 uStack_10a;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 auStack_f0 [160];
  
  memcpy(&local_230,(void *)(param_1 + 0x3a0),0xa0);
  auVar5 = FUN_00de00d0(0,&local_230,3);
  pauVar4 = (undefined1 (*) [16])(param_2 + 0x10);
  *pauVar4 = auVar5;
  *(undefined8 *)(param_2 + 0x40) = 0xcbf29ce484222645;
  uVar3 = FUN_00eaf260(param_1,pauVar4,*(undefined4 *)(param_1 + 0x3b0));
  if ((uVar3 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    local_150 = 0;
    local_118 = 0;
    uStack_10a = 0;
    local_108 = 0;
    uStack_100 = 0;
    uStack_160 = 0;
    local_194 = 0;
    uStack_155 = 0;
    uStack_15d = 0;
    local_159 = 0;
    local_198 = 0;
    local_230 = 0;
    local_16c = 0;
    local_128 = 0;
    uStack_120 = 0;
    local_138 = 0;
    uStack_130 = 0;
    local_148 = 0;
    local_140 = 0;
    uStack_112 = 0;
    uStack_110 = 0;
    local_1a8 = 0;
    uStack_1a0 = 0;
    local_1b8 = 0;
    uStack_1b0 = 0;
    local_1c8 = 0;
    uStack_1c0 = 0;
    local_1d8 = 0;
    uStack_1d0 = 0;
    local_1e8 = 0;
    uStack_1e0 = 0;
    local_1f8 = 0;
    uStack_1f0 = 0;
    local_208 = 0;
    uStack_200 = 0;
    local_218 = 0;
    uStack_210 = 0;
    local_228 = 0;
    uStack_220 = 0;
    local_174 = 0;
    local_17c = 0;
    local_184 = 0;
    local_18c = 0;
    fVar1 = *(float *)PTR_DAT_027201c0;
    *(undefined8 *)(param_2 + 0xf8) = 0;
    *(undefined8 *)(param_2 + 0x100) = 0;
    *(undefined8 *)(param_2 + 0xf0) = 0;
    *(undefined8 *)(param_2 + 0x118) = 0;
    *(undefined8 *)(param_2 + 0x120) = 0;
    *(undefined8 *)(param_2 + 0x108) = 0;
    *(undefined8 *)(param_2 + 0x110) = 0;
    *(undefined4 *)(param_2 + 0x164) = 0;
    *(undefined8 *)(param_2 + 0x128) = 0;
    *(undefined8 *)(param_2 + 0x130) = 0;
    *(undefined4 *)(param_2 + 0x148) = 0x41700000;
    *(undefined8 *)(param_2 + 0x138) = 0;
    *(undefined8 *)(param_2 + 0x140) = 0;
    *(undefined8 *)(param_2 + 0x15c) = 0;
    *(undefined8 *)(param_2 + 0x14c) = 0;
    *(undefined8 *)(param_2 + 0x154) = 0;
    *(undefined8 *)(param_2 + 0x168) = 0xcbf29ce484222645;
    *(undefined8 *)(param_2 + 0x170) = 0xcbf29ce484222645;
    *(undefined8 *)(param_2 + 0x17d) = 0;
    *(undefined8 *)(param_2 + 0x178) = 0;
    *(undefined8 *)(param_2 + 0x18c) = 0;
    *(undefined8 *)(param_2 + 0x185) = 0;
    *(float *)(param_2 + 0x194) = fVar1;
    *(float *)(param_2 + 0x198) = fVar1;
    memcpy((void *)(param_2 + 0x19c),&local_230,0xc5);
    memcpy(auStack_f0,(void *)(param_1 + 0x3a0),0xa0);
    uVar2 = FUN_00ddfc80(fVar1 + 10.0,auStack_f0,pauVar4,3);
  }
  return uVar2 & 1;
}


