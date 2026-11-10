/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fc4c50; name: FUN_00fc4c50
 */


void FUN_00fc4c50(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 local_68;
  char *local_60;
  undefined8 local_58;
  long local_50;
  undefined8 uStack_48;
  
  puVar1 = PTR_DAT_02710a18;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[2] = 0;
  param_1[3] = 0;
  puVar1 = PTR_DAT_02710860;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (lVar3 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = 0;
    if (*(long *)(lVar3 + 0x80) != 0) {
      lVar4 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  puVar2 = PTR_DAT_02722ef0;
  param_1[9] = -0x340d631b7bddd9bb;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[1] = lVar4;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  puVar2 = PTR_DAT_0271e860;
  param_1[0x2f] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  plVar5 = *(long **)(*(long *)puVar2 + 8);
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar5;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  lVar4 = (**(code **)(*plVar5 + 0x10))(plVar5,0x98,8);
  if (lVar4 == 0) {
    (**(code **)(*plVar5 + 0xb8))(plVar5);
  }
  FUN_00e870e0(lVar4,plVar5);
  *(long **)(lVar4 + 8) = plVar5;
  *(long *)(lVar4 + 0x10) = lVar4;
  *(undefined8 *)(lVar4 + 0x18) = 0x98;
  *(undefined8 *)(lVar4 + 0x20) = 8;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  lVar3 = param_1[0x31];
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
    param_1[0x31] = 0;
  }
  param_1[0x31] = lVar4;
  local_68 = 0x51f0e8b9d017ce84;
  local_60 = "bin/field/effect/particle/ef_env_wr0101/ef_env_wr0101_nesuto_nml.ptcl";
  local_50 = 0;
  uStack_48 = 0xcbf29ce484222645;
  local_58 = 0x45;
  lVar3 = FUN_00fc4f10(lVar4,&local_68);
  param_1[0x2f] = lVar3;
  local_68 = 0xef85a7d037a499e9;
  local_60 = "bin/field/effect/particle/ef_env_wr0101/ef_env_wr0101_nesuto_rare.ptcl";
  local_58 = 0x46;
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
  }
  local_50 = 0;
  lVar3 = FUN_00fc4f10(param_1[0x31],&local_68);
  param_1[0x30] = lVar3;
  param_1[0xb] = -0x340d631b7bddd9bb;
  param_1[0xc] = -0x340d631b7bddd9bb;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  *(undefined1 *)(param_1 + 0x22) = 0;
  *(undefined1 *)(param_1 + 0x25) = 0;
  *(undefined1 *)(param_1 + 0x28) = 0;
  *(undefined1 *)(param_1 + 0x2b) = 0;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  param_1[0xe] = -0x340d631b7bddd9bb;
  param_1[0xf] = -0x340d631b7bddd9bb;
  param_1[0x11] = -0x340d631b7bddd9bb;
  param_1[0x12] = -0x340d631b7bddd9bb;
  param_1[0x14] = -0x340d631b7bddd9bb;
  param_1[0x15] = -0x340d631b7bddd9bb;
  param_1[0x17] = -0x340d631b7bddd9bb;
  param_1[0x18] = -0x340d631b7bddd9bb;
  param_1[0x1a] = -0x340d631b7bddd9bb;
  param_1[0x1b] = -0x340d631b7bddd9bb;
  param_1[0x1d] = -0x340d631b7bddd9bb;
  param_1[0x1e] = -0x340d631b7bddd9bb;
  param_1[0x20] = -0x340d631b7bddd9bb;
  param_1[0x21] = -0x340d631b7bddd9bb;
  param_1[0x23] = -0x340d631b7bddd9bb;
  param_1[0x24] = -0x340d631b7bddd9bb;
  param_1[0x26] = -0x340d631b7bddd9bb;
  param_1[0x27] = -0x340d631b7bddd9bb;
  param_1[0x29] = -0x340d631b7bddd9bb;
  param_1[0x2a] = -0x340d631b7bddd9bb;
  param_1[0x2c] = -0x340d631b7bddd9bb;
  param_1[0x2d] = -0x340d631b7bddd9bb;
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
  }
  return;
}


