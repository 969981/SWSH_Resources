/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d0e310; name: FUN_00d0e310
 */


void FUN_00d0e310(long param_1)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  undefined4 uVar4;
  undefined1 *local_140;
  code *local_138;
  undefined1 *local_130;
  undefined1 *local_128;
  long alStack_120 [12];
  undefined1 *local_c0;
  code *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  long local_a0;
  undefined8 uStack_98;
  undefined8 local_38;
  undefined1 auStack_28 [8];
  
  FUN_010364c0(*(undefined8 *)(param_1 + 0x198),1);
  FUN_00cf6a00(*(undefined8 *)(param_1 + 0x198),0);
  FUN_00ffa160(*(undefined8 *)(param_1 + 0x198),0,1);
  FUN_010364c0(*(undefined8 *)(param_1 + 0x1a0),0);
  FUN_00ffa290(*(undefined8 *)(param_1 + 0x1a0),1,1);
  FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x1a0),0);
  if (*(long *)PTR_DAT_02716748 == 0) {
    *(undefined4 *)(param_1 + 400) = 1;
    return;
  }
  lVar2 = FUN_007ad1e0();
  if (lVar2 != 0) {
    FUN_017cbe80(auStack_28);
    uVar3 = FUN_0185c210(lVar2,auStack_28);
    if ((uVar3 & 1) != 0) {
      uStack_98 = FUN_017cc6a0(auStack_28);
      local_c0 = &LAB_00d0f4a0;
      local_b8 = FUN_00d0f5d0;
      local_b0 = &LAB_00d0f5e0;
      local_a8 = &LAB_00d0f5f0;
      local_140 = &LAB_00d0f600;
      local_138 = FUN_00d0f680;
      local_130 = &LAB_00d0f690;
      local_128 = &LAB_00d0f6a0;
      alStack_120[0] = param_1;
      local_a0 = param_1;
      local_38 = uStack_98;
      FUN_00cfce70(*(undefined8 *)(param_1 + 0x1a0),&local_38,&local_c0,&local_140);
      pcVar1 = local_138;
      if (local_138 != (code *)0x0) {
        local_130 = (undefined1 *)0x0;
        local_128 = (undefined1 *)0x0;
        local_140 = (undefined1 *)0x0;
        local_138 = (code *)0x0;
        (*pcVar1)(alStack_120);
      }
      pcVar1 = local_b8;
      if (local_b8 != (code *)0x0) {
        local_b0 = (undefined1 *)0x0;
        local_a8 = (undefined1 *)0x0;
        local_c0 = (undefined1 *)0x0;
        local_b8 = (code *)0x0;
        (*pcVar1)(&local_a0);
      }
      uVar4 = 3;
      goto LAB_00d0e47c;
    }
  }
  uVar4 = 1;
LAB_00d0e47c:
  *(undefined4 *)(param_1 + 400) = uVar4;
  return;
}


