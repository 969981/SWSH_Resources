/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003cec20; name: FUN_003cec20
 */


void FUN_003cec20(long *param_1,long param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong *puVar3;
  char local_44 [4];
  ulong local_40;
  ulong local_38;
  
  FUN_003c6e00(param_1,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_3 + 0x10),2,0xb);
  param_1[5] = param_2;
  param_1[6] = param_3;
  puVar2 = PTR_DAT_02712798;
  *(undefined4 *)(param_1 + 7) = 0xffffffff;
  *param_1 = (long)(puVar2 + 0x10);
  if ((param_4 & 1) == 0) {
                    /* try { // try from 003cec78 to 003cece3 has its CatchHandler @ 003ced10 */
    FUN_003d9150(param_1,0);
    FUN_003ba4b0(param_1[1],param_1);
    FUN_003ba4b0(param_1[2],param_1);
    FUN_003dd8f0(*(undefined8 *)(param_1[1] + 0x48),param_1,0);
    local_38 = param_1[5];
    uVar1 = param_1[6];
    local_40 = local_38;
    if (uVar1 <= local_38) {
      local_40 = uVar1;
    }
    if (local_38 <= uVar1) {
      local_38 = uVar1;
    }
    puVar3 = (ulong *)FUN_003d7090(*(long *)(*(long *)(param_1[1] + 0x48) + 0x1048) + 0x1558,
                                   &local_40,local_44);
    if (local_44[0] == '\0') {
      puVar3[1] = local_38;
      puVar3[2] = (ulong)param_1;
      *puVar3 = local_40;
    }
  }
  return;
}


