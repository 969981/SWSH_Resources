/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0076d800; name: FUN_0076d800
 */


undefined8 FUN_0076d800(long *param_1,byte *param_2,undefined4 *param_3)

{
  short sVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  uint in_w15;
  
  uVar4 = (uint)*param_2;
  if (*param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    do {
      param_2 = param_2 + 1;
      uVar2 = uVar2 * 0x83 ^ uVar4;
      uVar4 = (uint)*param_2;
    } while (uVar4 != 0);
  }
  lVar6 = *param_1;
  sVar1 = *(short *)(lVar6 + 10);
  uVar4 = 0;
  if (sVar1 != 0) {
    uVar4 = (int)(*(int *)(lVar6 + 0x24) - *(uint *)(lVar6 + 0x20)) / (int)sVar1;
  }
  if ((int)uVar4 < 1) {
    *param_3 = 0x7fffffff;
    return 0x13;
  }
  uVar5 = 0;
  uVar3 = 0;
  while( true ) {
    if (uVar3 < uVar4) {
      in_w15 = *(uint *)(lVar6 + (ulong)*(uint *)(lVar6 + 0x20) + 8 + uVar5);
    }
    if (uVar2 == in_w15) break;
    uVar3 = uVar3 + 1;
    uVar5 = (ulong)(uint)((int)uVar5 + (int)sVar1);
    if ((long)(int)uVar4 <= (long)uVar3) {
      *param_3 = 0x7fffffff;
      return 0x13;
    }
  }
  *param_3 = (int)uVar3;
  return 0;
}


