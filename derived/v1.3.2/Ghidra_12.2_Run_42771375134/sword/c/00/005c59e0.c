/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005c59e0; name: FUN_005c59e0
 */


undefined8 FUN_005c59e0(long param_1,long param_2,ulong param_3)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  char *pcVar5;
  int iVar6;
  ulong uVar7;
  char acStack_414 [4];
  int local_410 [256];
  
  if ((long)param_3 < 1) {
    uVar2 = 1;
    local_410[0] = 0;
  }
  else {
    uVar2 = 0;
    do {
      local_410[uVar2] = (int)param_3 + (int)(param_3 / 10) * -10;
      uVar2 = uVar2 + 1;
      if (param_3 < 10) break;
      param_3 = param_3 / 10;
    } while (uVar2 < 0x100);
    if (0xff < (uint)uVar2) {
      return 0;
    }
  }
  uVar3 = 0;
  iVar6 = 0;
  uVar4 = uVar2 & 0xffffffff;
  pcVar5 = acStack_414 + (long)(int)uVar2 * 4;
  do {
    *(char *)(param_1 + iVar6) = *pcVar5 + '0';
    uVar7 = (long)iVar6 + 1;
    if (param_2 <= (long)uVar7) break;
    uVar1 = (int)uVar2 - 1;
    if ((1 < (int)uVar2) && ((int)uVar1 % 3 == 0)) {
      *(undefined1 *)(param_1 + uVar7) = 0x2c;
      uVar7 = (ulong)(iVar6 + 2);
    }
    uVar3 = uVar3 + 1;
    pcVar5 = pcVar5 + -4;
    uVar2 = (ulong)uVar1;
    iVar6 = (int)uVar7;
  } while (uVar3 < uVar4);
  *(undefined1 *)(param_1 + (int)uVar7) = 0;
  return 1;
}


