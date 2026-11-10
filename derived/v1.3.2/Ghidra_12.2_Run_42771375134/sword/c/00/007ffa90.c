/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007ffa90; name: FUN_007ffa90
 */


void FUN_007ffa90(ulong param_1)

{
  undefined2 uVar1;
  uint uVar2;
  uint uVar3;
  undefined2 *puVar4;
  
  if (param_1 >> 0x20 == 0) {
    FUN_007ff8b0(param_1 & 0xffffffff);
    return;
  }
  puVar4 = (undefined2 *)FUN_007ffa90(param_1 / 1000000000);
  param_1 = param_1 % 1000000000;
  uVar3 = (int)param_1 + (int)(param_1 / 10000000) * -10000000;
  uVar2 = uVar3 >> 5;
  *puVar4 = *(undefined2 *)(&DAT_02140508 + (param_1 / 10000000) * 2);
  uVar3 = uVar3 + (uVar2 / 0xc35) * -100000;
  puVar4[1] = *(undefined2 *)(&DAT_02140508 + ((ulong)uVar2 / 0xc35) * 2);
  uVar2 = uVar3 % 1000;
  puVar4[2] = *(undefined2 *)(&DAT_02140508 + ((ulong)uVar3 / 1000) * 2);
  uVar1 = *(undefined2 *)(&DAT_02140508 + ((ulong)uVar2 / 10) * 2);
  *(char *)(puVar4 + 4) = (char)(uVar2 % 10) + '0';
  puVar4[3] = uVar1;
  *(undefined1 *)((long)puVar4 + 9) = 0;
  return;
}


