/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a3e480; name: FUN_00a3e480
 */


void FUN_00a3e480(long param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  byte *pbVar4;
  char acStack_100 [5];
  char local_fb [3];
  char acStack_f8 [5];
  undefined8 local_f3;
  undefined8 local_eb;
  undefined8 local_e3;
  undefined8 local_db;
  undefined8 local_d3;
  undefined8 local_cb;
  undefined8 local_c3;
  undefined8 local_bb;
  undefined8 local_b3;
  undefined7 uStack_ab;
  undefined1 local_a4;
  undefined7 uStack_a3;
  ulong local_98 [12];
  undefined4 local_38;
  
  if ((*(long *)(param_1 + 0x5f0) == 0) ||
     (uVar3 = *(ulong *)(*(long *)(param_1 + 0x5f0) + 0x48), uVar3 == 0)) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  uVar1 = ((int)uVar3 + *(int *)(param_1 + 0x600)) - 1;
  iVar2 = 0;
  if (uVar3 != 0) {
    iVar2 = (int)(uVar1 / uVar3);
  }
  *(uint *)(param_1 + 0x600) = uVar1 - iVar2 * (int)uVar3;
  FUN_00a3e0a0();
  if (*(long *)(param_1 + 0x4c0) != 0) {
    FUN_016d2080();
  }
  uStack_a3 = 0;
  uStack_ab = 0;
  local_a4 = 0;
  uVar3 = 0xcbf29ce484222645;
  local_b3 = 0;
  local_bb = 0;
  local_c3 = 0;
  local_cb = 0;
  local_d3 = 0;
  local_db = 0;
  local_e3 = 0;
  local_eb = 0;
  local_f3 = 0;
  acStack_f8[0] = s_L_cursorL_00_01ce17f9[8];
  acStack_f8[1] = s_L_cursorL_00_01ce17f9[9];
  acStack_f8[2] = s_L_cursorL_00_01ce17f9[10];
  acStack_f8[3] = s_L_cursorL_00_01ce17f9[0xb];
  acStack_f8[4] = s_L_cursorL_00_01ce17f9[0xc];
  acStack_100[0] = s_L_cursorL_00_01ce17f9[0];
  acStack_100[1] = s_L_cursorL_00_01ce17f9[1];
  acStack_100[2] = s_L_cursorL_00_01ce17f9[2];
  acStack_100[3] = s_L_cursorL_00_01ce17f9[3];
  acStack_100[4] = s_L_cursorL_00_01ce17f9[4];
  local_fb[0] = s_L_cursorL_00_01ce17f9[5];
  local_fb[1] = s_L_cursorL_00_01ce17f9[6];
  local_fb[2] = s_L_cursorL_00_01ce17f9[7];
  local_38 = 0;
  local_98[10] = 0;
  local_98[0xb] = 0;
  local_98[8] = 0;
  local_98[9] = 0;
  local_98[6] = 0;
  local_98[7] = 0;
  local_98[4] = 0;
  local_98[5] = 0;
  local_98[2] = 0;
  local_98[3] = 0;
  local_98[0] = 0;
  local_98[1] = 0;
  snprintf((char *)local_98,100,"anime_%s_%s",acStack_100,"select");
  if ((byte)local_98[0] != 0) {
    pbVar4 = (byte *)((ulong)local_98 | 1);
    do {
      uVar3 = (uVar3 ^ (byte)local_98[0]) * 0x100000001b3;
      local_98[0]._0_1_ = *pbVar4;
      pbVar4 = pbVar4 + 1;
    } while ((byte)local_98[0] != 0);
  }
  local_98[0] = uVar3;
  FUN_00ffd010(param_1 + 0x100,local_98);
  return;
}


