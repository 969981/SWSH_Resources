/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009181d0; name: FUN_009181d0
 */


void FUN_009181d0(uint *param_1,ushort param_2,ulong param_3)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  int *piVar4;
  int local_90 [16];
  int *piVar5;
  int local_38;
  
  uVar2 = 0;
  local_38 = -0x28;
  local_90[0xe] = 0;
  local_90[0xf] = 0;
  local_90[0] = 0;
  local_90[1] = 0;
  local_90[10] = 0;
  local_90[0xb] = 0;
  local_90[0xc] = 0;
  local_90[0xd] = 0;
  local_90[6] = 0;
  local_90[7] = 0;
  local_90[8] = 0;
  local_90[9] = 0;
  local_90[2] = 0;
  local_90[3] = 0;
  local_90[4] = 0;
  local_90[5] = 0;
  piVar5 = (int *)register0x00000008;
  do {
    if (local_38 < 0) {
      iVar3 = local_38 + 8;
      if (0 < iVar3) goto LAB_00918280;
      piVar4 = (int *)((long)local_90 + (long)local_38);
      local_38 = iVar3;
    }
    else {
      iVar3 = local_38;
LAB_00918280:
      piVar4 = piVar5;
      local_38 = iVar3;
      piVar5 = piVar5 + 2;
    }
    iVar3 = *piVar4;
    local_90[uVar2] = iVar3;
    uVar2 = (ulong)((int)uVar2 + 1);
    if (iVar3 == -0x10000) {
      if ((param_2 != 0xffff) && (((uint)param_3 & 0xffff) < 0xbe)) {
        uVar1 = *param_1;
        *param_1 = (uint)param_2;
        param_1[1] = (uint)(ushort)param_1[1];
        FUN_00916c20(param_1,param_3 & 0xffffffff,(&DAT_0214a848)[param_3 & 0xffff],local_90);
        *param_1 = (uint)(ushort)uVar1;
      }
      return;
    }
  } while( true );
}


