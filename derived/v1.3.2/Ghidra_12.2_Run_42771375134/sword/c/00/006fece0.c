/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006fece0; name: FUN_006fece0
 */


void FUN_006fece0(long *param_1,long *param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  FUN_00700120(param_1,0,0);
  puVar1 = PTR_DAT_02715880;
  param_1[0x16] = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  param_1[0x18] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[9] = (long)(puVar1 + 0xa8);
  param_1[10] = (long)(puVar1 + 0xe8);
  *(undefined1 *)(param_1 + 0x19) = 0;
  param_1[0x1a] = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  param_1[0x1c] = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  param_1[0x1e] = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  param_1[0x20] = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  param_1[0x22] = 0;
  *(undefined1 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  *(undefined1 *)(param_1 + 0x25) = 0;
  param_1[0x26] = 0;
  param_1[0x27] = *param_2;
  param_1[0x28] = param_2[1];
  param_1[0x29] = param_2[2];
  lVar2 = param_2[3];
  param_1[0x2a] = lVar2;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  *(undefined8 *)((long)param_1 + 0x1a5) = 0;
  plVar4 = (long *)param_1[1];
  param_1[0x3c] = 0;
  *(undefined1 *)(param_1 + 0x41) = 0;
  param_1[0x36] = 0;
  param_1[0x37] = -0x407fffff40800000;
  param_1[0x38] = 0;
  param_1[0x39] = -0x407fffff40800000;
  param_1[0x3a] = 0;
  param_1[0x3b] = -0x407fffff40800000;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  puVar1 = PTR_DAT_02710860;
  param_1[0x3f] = 0x100000001;
  param_1[0x40] = 0;
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = plVar4;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  lVar3 = (**(code **)(*plVar4 + 0x10))(plVar4,0x2a0,8);
  if (lVar3 == 0) {
    (**(code **)(*plVar4 + 0xb8))(plVar4);
  }
  FUN_006ff3d0(lVar3,param_1);
  *(long **)(lVar3 + 8) = plVar4;
  *(long *)(lVar3 + 0x10) = lVar3;
  *(undefined8 *)(lVar3 + 0x18) = 0x2a0;
  *(undefined8 *)(lVar3 + 0x20) = 8;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  FUN_006d1120(lVar3);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  *(undefined4 *)(lVar3 + 0x298) = 0;
  if (param_1[0xe] != 0) {
    (**(code **)(*(long *)(param_1[0xe] + 0x48) + 0x18))();
    param_1[0xe] = 0;
  }
  param_1[0xe] = lVar3;
  puVar1 = PTR_DAT_02710910;
  *(ulong *)(lVar3 + 0x138) = *(ulong *)(lVar3 + 0x138) | 1;
  lVar2 = *(long *)(*(long *)puVar1 + 0x168);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  if (param_1[0x16] != 0) {
    (**(code **)(*(long *)(param_1[0x16] + 0x48) + 0x18))();
    param_1[0x16] = 0;
  }
  param_1[0x16] = lVar2;
  lVar2 = *(long *)(*(long *)(*(long *)puVar1 + 0x168) + 0xa8);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  if (param_1[0x26] != 0) {
    (**(code **)(*(long *)(param_1[0x26] + 0x48) + 0x18))();
    param_1[0x26] = 0;
  }
  param_1[0x26] = lVar2;
  FUN_0199c170(param_1 + 0x2b);
  FUN_0199c180(param_1 + 0x31);
  return;
}


