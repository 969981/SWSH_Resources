/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0023c060; name: FUN_0023c060
 */


void FUN_0023c060(float param_1,float *param_2,undefined8 *param_3,byte param_4,long param_5,
                 undefined8 *param_6,float *param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  float local_170;
  float fStack_16c;
  float local_168;
  float local_160;
  float fStack_15c;
  float local_158;
  undefined *local_150;
  undefined *puStack_148;
  undefined8 *local_140;
  uint local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  float *local_120;
  float local_118;
  float fStack_114;
  float local_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  uint uStack_104;
  byte local_100;
  undefined4 local_fc;
  float local_f8 [2];
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined4 local_e0;
  undefined2 local_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined1 auStack_b0 [12];
  undefined1 auStack_a4 [12];
  undefined1 auStack_98 [12];
  undefined1 auStack_8c [12];
  char local_80;
  undefined1 local_7f;
  undefined8 local_70;
  ulong uStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  undefined8 local_50;
  ulong uStack_48;
  undefined1 auStack_40 [16];
  
  local_140 = param_6;
  local_120 = param_7;
  local_f8[0] = param_1;
  if (param_1 == 0.0) {
    uStack_128 = *(undefined8 *)(param_5 + 0x28);
    local_130 = *(undefined8 *)(param_5 + 0x30);
    local_138 = *(byte *)(param_5 + 0x5c) >> 1 & 1;
    puVar1 = PTR_DAT_02711e28 + 0x10;
    puVar2 = PTR_DAT_02711e28 + 0x40;
    local_fc = *(undefined4 *)(param_5 + 0x58);
    local_118 = *param_2;
    fStack_114 = param_2[1];
    uStack_60 = *(undefined8 *)param_2;
    local_110 = param_2[2];
    uStack_10c = *(undefined4 *)param_3;
    local_108 = *(undefined4 *)((long)param_3 + 4);
    local_50 = *param_3;
    uStack_104 = *(uint *)(param_3 + 1);
    local_f0 = 0;
    uStack_e8 = 0;
    local_100 = param_4 & 1;
    local_e0 = 0xffffffff;
    local_dc = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_b8 = 0;
    local_c8 = 0;
    uStack_c0 = 0x7f7fffff;
    local_80 = '\0';
    local_7f = *(int *)(param_6 + 1) == 1;
    local_70 = *(undefined8 *)param_7;
    local_168 = param_7[2];
    uStack_58 = (ulong)(uint)local_110;
    local_158 = local_110 - local_168;
    uStack_68 = (ulong)(uint)local_168;
    local_168 = local_168 + local_110;
    uStack_48 = (ulong)uStack_104;
    fStack_15c = param_2[1] - param_7[1];
    fStack_16c = param_7[1] + param_2[1];
    local_160 = *param_2 - *param_7;
    local_170 = *param_7 + *param_2;
                    /* try { // try from 0023c1b0 to 0023c1c3 has its CatchHandler @ 0023c3b0 */
    local_150 = puVar1;
    puStack_148 = puVar2;
    FUN_00243e40(param_5 + 0xa0,&local_160,&local_170,4,auStack_40,(ulong)&local_150 | 8);
    if (local_80 != '\0') {
      local_150 = puVar1;
      puStack_148 = puVar2;
                    /* try { // try from 0023c1f4 to 0023c1fb has its CatchHandler @ 0023c3ac */
      (**(code **)*local_140)
                (local_140,&local_f0,auStack_b0,auStack_a4,auStack_98,local_f8,auStack_8c);
    }
  }
  else {
    uStack_128 = *(undefined8 *)(param_5 + 0x28);
    local_130 = *(undefined8 *)(param_5 + 0x30);
    local_138 = *(byte *)(param_5 + 0x5c) >> 1 & 1;
    puVar1 = PTR_DAT_02711e28 + 0x10;
    puVar2 = PTR_DAT_02711e28 + 0x40;
    local_fc = *(undefined4 *)(param_5 + 0x58);
    local_118 = *param_2;
    fStack_114 = param_2[1];
    uStack_60 = *(undefined8 *)param_2;
    local_110 = param_2[2];
    uStack_10c = *(undefined4 *)param_3;
    local_100 = param_4 & 1;
    local_108 = *(undefined4 *)((long)param_3 + 4);
    local_50 = *param_3;
    uStack_104 = *(uint *)(param_3 + 1);
    local_f0 = 0;
    uStack_e8 = 0;
    local_e0 = 0xffffffff;
    local_dc = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_b8 = 0;
    local_c8 = 0;
    uStack_c0 = 0x7f7fffff;
    local_7f = *(int *)(param_6 + 1) == 1;
    local_80 = '\0';
    uStack_58 = (ulong)(uint)local_110;
    local_70 = *(undefined8 *)param_7;
    uStack_48 = (ulong)uStack_104;
    uStack_68 = (ulong)(uint)param_7[2];
                    /* try { // try from 0023c2f8 to 0023c313 has its CatchHandler @ 0023c364 */
    local_150 = puVar1;
    puStack_148 = puVar2;
    FUN_00243b10(param_5 + 0xa0,param_2,param_3,4,auStack_40,&local_150,param_7);
    if (local_80 != '\0') {
      local_150 = puVar1;
      puStack_148 = puVar2;
                    /* try { // try from 0023c344 to 0023c34b has its CatchHandler @ 0023c360 */
      (**(code **)*local_140)
                (local_140,&local_f0,auStack_b0,auStack_a4,auStack_98,local_f8,auStack_8c);
    }
  }
  return;
}


