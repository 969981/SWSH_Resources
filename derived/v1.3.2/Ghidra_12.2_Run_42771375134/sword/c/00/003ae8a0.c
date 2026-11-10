/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003ae8a0; name: FUN_003ae8a0
 */


void FUN_003ae8a0(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 *puVar13;
  float fVar14;
  undefined8 local_b0;
  ulong local_a8;
  void *local_88;
  int local_80;
  long local_78;
  code *local_60;
  ulong uStack_58;
  
  puVar13 = (undefined8 *)(param_1 + 0x20);
  (**(code **)(*(long *)*puVar13 + 0x48))(&local_88);
                    /* try { // try from 003ae8e8 to 003ae8ef has its CatchHandler @ 003af144 */
  uVar3 = (**(code **)(*(long *)*puVar13 + 0x28))();
  local_b0 = 0;
  local_a8 = 0;
                    /* try { // try from 003ae8f4 to 003ae8ff has its CatchHandler @ 003af13c */
  FUN_003af170(param_2,uVar3,&local_b0);
                    /* try { // try from 003ae914 to 003ae93b has its CatchHandler @ 003af144 */
  memcpy((void *)*param_2,local_88,(ulong)(uint)(local_80 - (int)local_88) & 0xfffffff0);
  iVar4 = (**(code **)(*(long *)*puVar13 + 0x1d8))();
  if (iVar4 != 0) {
    iVar4 = (**(code **)(*(long *)*puVar13 + 0x1d8))();
    local_b0 = local_b0 & 0xffffffff00000000;
                    /* try { // try from 003ae948 to 003ae953 has its CatchHandler @ 003af104 */
    FUN_001ed3f0(param_2 + 2,iVar4 << 2,&local_b0);
                    /* try { // try from 003ae960 to 003ae967 has its CatchHandler @ 003af144 */
    uVar3 = (**(code **)(*(long *)*puVar13 + 0x1e0))();
    local_b0 = 0;
    local_a8 = local_a8 & 0xffffffff00000000;
                    /* try { // try from 003ae974 to 003ae97f has its CatchHandler @ 003af100 */
    FUN_001ed870(param_2 + 4,uVar3,&local_b0);
    lVar12 = param_2[2];
                    /* try { // try from 003ae990 to 003aea63 has its CatchHandler @ 003af144 */
    uVar7 = (**(code **)(*(long *)*puVar13 + 0x1d8))();
    plVar8 = (long *)(**(code **)(*(long *)*puVar13 + 0x20))();
    (**(code **)(*plVar8 + 0x58))(plVar8,*puVar13,lVar12,lVar12 + (uVar7 & 0xffffffff) * 0x10,0,0);
    lVar12 = param_2[4];
    uVar7 = (**(code **)(*(long *)*puVar13 + 0x1e0))();
    plVar8 = (long *)(**(code **)(*(long *)*puVar13 + 0x20))();
    (**(code **)(*plVar8 + 0x58))(plVar8,*puVar13,0,0,lVar12,lVar12 + (uVar7 & 0xffffffff) * 0xc);
  }
  iVar4 = (**(code **)(*(long *)*puVar13 + 0x150))();
  if (((iVar4 != 0) || (iVar4 = (**(code **)(*(long *)*puVar13 + 0x180))(), iVar4 != 0)) ||
     (iVar4 = (**(code **)(*(long *)*puVar13 + 0x198))(), iVar4 != 0)) {
    uVar3 = (**(code **)(*(long *)*puVar13 + 0x150))();
                    /* try { // try from 003aea68 to 003aea73 has its CatchHandler @ 003af118 */
    FUN_003af340(param_2 + 6,uVar3,&local_b0);
                    /* try { // try from 003aea80 to 003aea83 has its CatchHandler @ 003af144 */
    iVar4 = (**(code **)(*(long *)*puVar13 + 0x160))();
    local_b0 = local_b0 & 0xffffffff00000000;
                    /* try { // try from 003aea90 to 003aea9b has its CatchHandler @ 003af114 */
    FUN_001ed3f0(param_2 + 8,iVar4 << 1,&local_b0);
                    /* try { // try from 003aeaa8 to 003aeaaf has its CatchHandler @ 003af144 */
    uVar3 = (**(code **)(*(long *)*puVar13 + 0x170))();
                    /* try { // try from 003aeab4 to 003aeabf has its CatchHandler @ 003af110 */
    FUN_003af3e0(param_2 + 10,uVar3,&local_b0);
                    /* try { // try from 003aeacc to 003aead3 has its CatchHandler @ 003af144 */
    uVar3 = (**(code **)(*(long *)*puVar13 + 0x180))();
    local_b0 = local_b0 & 0xffffffff00000000;
                    /* try { // try from 003aeadc to 003aeae7 has its CatchHandler @ 003af10c */
    FUN_001ed3f0(param_2 + 0xc,uVar3,&local_b0);
                    /* try { // try from 003aeaf4 to 003aeafb has its CatchHandler @ 003af144 */
    uVar3 = (**(code **)(*(long *)*puVar13 + 0x198))();
                    /* try { // try from 003aeb00 to 003aeb0b has its CatchHandler @ 003af108 */
    FUN_003af480(param_2 + 0xe,uVar3,&local_b0);
                    /* try { // try from 003aeb20 to 003aeb4f has its CatchHandler @ 003af144 */
    FUN_003af540(param_1,param_2[6],param_2[8],param_2[10],param_2[0xc],param_2[0xe]);
  }
  iVar4 = (**(code **)(*(long *)*puVar13 + 0x218))();
  if (iVar4 != 0) {
    uVar3 = (**(code **)(*(long *)*puVar13 + 0x218))();
    local_b0 = 0;
    local_a8 = 0;
                    /* try { // try from 003aeb58 to 003aeb63 has its CatchHandler @ 003af0fc */
    FUN_003af690(param_2 + 0x10,uVar3,&local_b0);
    lVar12 = param_2[0x10];
                    /* try { // try from 003aeb74 to 003aebcf has its CatchHandler @ 003af144 */
    uVar5 = (**(code **)(*(long *)*puVar13 + 0x218))();
    if (uVar5 != 0) {
      plVar8 = (long *)(**(code **)(*(long *)*puVar13 + 0x20))();
      (**(code **)(*plVar8 + 0x40))(plVar8,*puVar13,lVar12,lVar12 + (ulong)uVar5 * 0x10);
    }
  }
  iVar4 = (**(code **)(*(long *)*puVar13 + 600))();
  if (iVar4 != 0) {
    uVar3 = (**(code **)(*(long *)*puVar13 + 600))();
    local_b0 = 0;
    local_a8 = 0;
                    /* try { // try from 003aebd8 to 003aebe3 has its CatchHandler @ 003af0f8 */
    FUN_003af790(param_2 + 0x12,uVar3,&local_b0);
    lVar12 = param_2[0x12];
                    /* try { // try from 003aebf4 to 003aec4f has its CatchHandler @ 003af144 */
    uVar5 = (**(code **)(*(long *)*puVar13 + 600))();
    if (uVar5 != 0) {
      plVar8 = (long *)(**(code **)(*(long *)*puVar13 + 0x20))();
      (**(code **)(*plVar8 + 0x48))(plVar8,*puVar13,lVar12,lVar12 + (ulong)uVar5 * 0x10);
    }
  }
  iVar4 = (**(code **)(*(long *)*puVar13 + 0x278))();
  if (iVar4 != 0) {
    uVar3 = (**(code **)(*(long *)*puVar13 + 0x278))();
                    /* try { // try from 003aec54 to 003aec5f has its CatchHandler @ 003af0f4 */
    FUN_003af890(param_2 + 0x14,uVar3,&local_b0);
    lVar12 = param_2[0x14];
                    /* try { // try from 003aec70 to 003aeccb has its CatchHandler @ 003af144 */
    uVar5 = (**(code **)(*(long *)*puVar13 + 0x278))();
    if (uVar5 != 0) {
      plVar8 = (long *)(**(code **)(*(long *)*puVar13 + 0x20))();
      (**(code **)(*plVar8 + 0x50))(plVar8,*puVar13,lVar12,lVar12 + (ulong)uVar5 * 0x10);
    }
  }
  iVar4 = (**(code **)(*(long *)*puVar13 + 0x2d8))();
  if (iVar4 != 0) {
    uVar3 = (**(code **)(*(long *)*puVar13 + 0x2d8))();
    local_b0 = local_b0 & 0xffffffff00000000;
                    /* try { // try from 003aecd4 to 003aecdf has its CatchHandler @ 003af0f0 */
    FUN_001ed3f0(param_2 + 0x16,uVar3,&local_b0);
    lVar12 = param_2[0x16];
                    /* try { // try from 003aecf0 to 003aed47 has its CatchHandler @ 003af144 */
    uVar7 = (**(code **)(*(long *)*puVar13 + 0x2d8))();
    plVar8 = (long *)(**(code **)(*(long *)*puVar13 + 0x20))();
    (**(code **)(*plVar8 + 0x60))(plVar8,*puVar13,lVar12,lVar12 + (uVar7 & 0xffffffff) * 4);
  }
  iVar4 = (**(code **)(*(long *)*puVar13 + 0x2e8))();
  if (iVar4 != 0) {
    uVar3 = (**(code **)(*(long *)*puVar13 + 0x2e8))();
    local_b0 = 0;
    local_a8 = 0;
                    /* try { // try from 003aed50 to 003aed5b has its CatchHandler @ 003af0ec */
    FUN_003af890(param_2 + 0x18,uVar3,&local_b0);
    lVar12 = param_2[0x18];
                    /* try { // try from 003aed6c to 003aedfb has its CatchHandler @ 003af144 */
    uVar7 = (**(code **)(*(long *)*puVar13 + 0x2e8))();
    plVar8 = (long *)(**(code **)(*(long *)*puVar13 + 0x20))();
    (**(code **)(*plVar8 + 0x68))(plVar8,*puVar13,lVar12,lVar12 + (uVar7 & 0xffffffff) * 0x10);
  }
  uVar3 = (**(code **)(*(long *)*puVar13 + 0x1f0))();
  *(undefined4 *)(param_2 + 0x1a) = uVar3;
  uVar3 = (**(code **)(*(long *)*puVar13 + 0x200))();
  *(undefined4 *)((long)param_2 + 0xd4) = uVar3;
  uVar3 = (**(code **)(*(long *)*puVar13 + 0x228))();
  *(undefined4 *)(param_2 + 0x1b) = uVar3;
  uVar3 = (**(code **)(*(long *)*puVar13 + 0x230))();
  *(undefined4 *)((long)param_2 + 0xdc) = uVar3;
  uVar3 = (**(code **)(*(long *)*puVar13 + 0x240))();
  *(undefined4 *)(param_2 + 0x1c) = uVar3;
  uVar3 = *(undefined4 *)(param_1 + 0x18);
  *(undefined8 *)((long)param_2 + 0xe4) = *(undefined8 *)(param_1 + 0x10);
  *(undefined4 *)((long)param_2 + 0xec) = uVar3;
                    /* try { // try from 003aee1c to 003aee23 has its CatchHandler @ 003af138 */
  (**(code **)(**(long **)(param_1 + 0x20) + 0xb8))(&local_b0);
  *(undefined4 *)(param_2 + 0x1e) = (undefined4)local_b0;
  *(undefined4 *)((long)param_2 + 0xf4) = local_b0._4_4_;
  *(undefined4 *)(param_2 + 0x1f) = (undefined4)local_a8;
                    /* try { // try from 003aee48 to 003aee5f has its CatchHandler @ 003af144 */
  uVar3 = (**(code **)(*(long *)*puVar13 + 0x1c8))();
  *(undefined4 *)((long)param_2 + 0xfc) = uVar3;
  uVar3 = (**(code **)(*(long *)*puVar13 + 0x1b0))();
  *(undefined4 *)(param_2 + 0x20) = uVar3;
                    /* try { // try from 003aee70 to 003aee77 has its CatchHandler @ 003af134 */
  (**(code **)(*(long *)*puVar13 + 200))(&local_b0);
  *(undefined4 *)((long)param_2 + 0x104) = (undefined4)local_b0;
  *(undefined4 *)(param_2 + 0x21) = local_b0._4_4_;
  *(undefined4 *)((long)param_2 + 0x10c) = (undefined4)local_a8;
                    /* try { // try from 003aee9c to 003aeea3 has its CatchHandler @ 003af130 */
  (**(code **)(*(long *)*puVar13 + 0xd8))(&local_b0);
  *(undefined4 *)(param_2 + 0x22) = (undefined4)local_b0;
  *(undefined4 *)((long)param_2 + 0x114) = local_b0._4_4_;
  *(undefined4 *)(param_2 + 0x23) = (undefined4)local_a8;
                    /* try { // try from 003aeec8 to 003aeecf has its CatchHandler @ 003af12c */
  (**(code **)(*(long *)*puVar13 + 0xe8))(&local_b0);
  *(undefined4 *)((long)param_2 + 0x11c) = (undefined4)local_b0;
  *(undefined4 *)(param_2 + 0x24) = local_b0._4_4_;
  *(undefined4 *)((long)param_2 + 0x124) = (undefined4)local_a8;
                    /* try { // try from 003aeef4 to 003aeefb has its CatchHandler @ 003af128 */
  (**(code **)(*(long *)*puVar13 + 0xf8))(&local_b0);
  *(undefined4 *)(param_2 + 0x25) = (undefined4)local_b0;
  *(undefined4 *)((long)param_2 + 300) = local_b0._4_4_;
  *(undefined4 *)(param_2 + 0x26) = (undefined4)local_a8;
                    /* try { // try from 003aef20 to 003aef27 has its CatchHandler @ 003af124 */
  (**(code **)(*(long *)*puVar13 + 0x108))(&local_b0);
  *(undefined4 *)((long)param_2 + 0x134) = (undefined4)local_b0;
  *(undefined4 *)(param_2 + 0x27) = local_b0._4_4_;
  *(undefined4 *)((long)param_2 + 0x13c) = (undefined4)local_a8;
                    /* try { // try from 003aef4c to 003aef8b has its CatchHandler @ 003af144 */
  uVar3 = (**(code **)(*(long *)*puVar13 + 0x118))();
  *(undefined4 *)(param_2 + 0x28) = uVar3;
  uVar3 = (**(code **)(*(long *)*puVar13 + 0x128))();
  *(undefined4 *)((long)param_2 + 0x144) = uVar3;
  uVar3 = (**(code **)(*(long *)*puVar13 + 0x2b8))();
  *(undefined4 *)(param_2 + 0x29) = uVar3;
  uVar3 = (**(code **)(*(long *)*puVar13 + 0x2c8))();
  *(undefined4 *)((long)param_2 + 0x14c) = uVar3;
                    /* try { // try from 003aef9c to 003aefb3 has its CatchHandler @ 003af140 */
  puVar9 = (undefined8 *)(**(code **)(*(long *)*puVar13 + 0x78))();
  puVar10 = (undefined8 *)(**(code **)(*(long *)*puVar13 + 0x80))();
  uVar3 = *(undefined4 *)(puVar10 + 1);
  uVar1 = *(undefined4 *)((long)puVar10 + 0xc);
  uVar11 = *puVar9;
  uVar2 = *(undefined4 *)(puVar9 + 1);
  param_2[0x2a] = *puVar10;
  *(undefined4 *)(param_2 + 0x2b) = uVar3;
  *(undefined4 *)((long)param_2 + 0x15c) = uVar1;
  param_2[0x2c] = uVar11;
  *(undefined4 *)(param_2 + 0x2d) = uVar2;
                    /* try { // try from 003aefe4 to 003af02b has its CatchHandler @ 003af144 */
  uVar3 = (**(code **)(*(long *)*puVar13 + 0x308))();
  *(undefined4 *)((long)param_2 + 0x16c) = uVar3;
  iVar4 = (**(code **)(*(long *)*puVar13 + 0x318))();
  if (iVar4 == -1) {
    fVar14 = DAT_01d4c18c;
  }
  else {
    uVar5 = (**(code **)(*(long *)*puVar13 + 0x328))();
    uVar6 = (**(code **)(*(long *)*puVar13 + 0x330))();
    if (uVar5 < uVar6 || uVar5 - uVar6 == 0) {
      fVar14 = 0.0;
    }
    else {
      fVar14 = (float)((uVar5 - uVar6) * iVar4) / DAT_01d4bec0;
    }
  }
  *(float *)(param_2 + 0x2e) = fVar14;
                    /* try { // try from 003af06c to 003af073 has its CatchHandler @ 003af120 */
  (**(code **)(*(long *)*puVar13 + 0x288))(&local_b0);
  *(undefined4 *)((long)param_2 + 0x174) = (undefined4)local_b0;
  *(undefined4 *)(param_2 + 0x2f) = local_b0._4_4_;
  *(undefined4 *)((long)param_2 + 0x17c) = (undefined4)local_a8;
                    /* try { // try from 003af098 to 003af0af has its CatchHandler @ 003af144 */
  uVar3 = (**(code **)(*(long *)*puVar13 + 0x298))();
  *(undefined4 *)(param_2 + 0x30) = uVar3;
  uVar3 = (**(code **)(*(long *)*puVar13 + 0x2a8))();
  *(undefined4 *)((long)param_2 + 0x184) = uVar3;
  if ((uStack_58 & 1) != 0) {
    local_60 = *(code **)(local_60 + *(long *)(local_78 + ((long)uStack_58 >> 1)));
  }
                    /* try { // try from 003af0cc to 003af0cf has its CatchHandler @ 003af11c */
  (*local_60)();
  return;
}


