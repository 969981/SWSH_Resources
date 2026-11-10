/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00917e70; name: FUN_00917e70
 */


void FUN_00917e70(undefined8 param_1,ulong param_2)

{
  undefined1 uVar1;
  ulong uVar2;
  int iVar3;
  int *piVar4;
  int aiStack_280 [128];
  int *piVar5;
  int local_68;
  int local_60 [16];
  
  uVar1 = (&DAT_0214a848)[param_2 & 0xffff];
  local_68 = -0x30;
  uVar2 = 0;
  local_60[0xc] = 0;
  local_60[0xd] = 0;
  local_60[0xe] = 0;
  local_60[0xf] = 0;
  local_60[8] = 0;
  local_60[9] = 0;
  local_60[10] = 0;
  local_60[0xb] = 0;
  local_60[4] = 0;
  local_60[5] = 0;
  local_60[6] = 0;
  local_60[7] = 0;
  local_60[0] = 0;
  local_60[1] = 0;
  local_60[2] = 0;
  local_60[3] = 0;
  piVar5 = (int *)register0x00000008;
  do {
    if (local_68 < 0) {
      iVar3 = local_68 + 8;
      if (0 < iVar3) goto LAB_00917f2c;
      piVar4 = (int *)((long)aiStack_280 + (long)local_68 + 0x200);
      local_68 = iVar3;
    }
    else {
      iVar3 = local_68;
LAB_00917f2c:
      piVar4 = piVar5;
      local_68 = iVar3;
      piVar5 = piVar5 + 2;
    }
    iVar3 = *piVar4;
    local_60[uVar2] = iVar3;
    uVar2 = (ulong)((int)uVar2 + 1);
    if (iVar3 == -0x10000) {
      FUN_00916c20(param_1,param_2,uVar1,local_60);
      return;
    }
  } while( true );
}


