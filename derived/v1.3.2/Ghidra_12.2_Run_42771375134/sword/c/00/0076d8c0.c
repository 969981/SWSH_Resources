/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0076d8c0; name: FUN_0076d8c0
 */


undefined8 FUN_0076d8c0(long *param_1,byte *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  short sVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  uint in_w16;
  
  uVar5 = (uint)*param_2;
  if (*param_2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
    do {
      param_2 = param_2 + 1;
      uVar4 = uVar4 * 0x83 ^ uVar5;
      uVar5 = (uint)*param_2;
    } while (uVar5 != 0);
  }
  lVar6 = *param_1;
  sVar3 = *(short *)(lVar6 + 10);
  uVar5 = 0;
  if (sVar3 != 0) {
    uVar5 = (int)(*(int *)(lVar6 + 0x30) - *(uint *)(lVar6 + 0x2c)) / (int)sVar3;
  }
  if ((int)uVar5 < 1) {
    *param_3 = 0;
    return 0x13;
  }
  uVar7 = 0;
  uVar8 = 0;
  lVar2 = lVar6 + (ulong)*(uint *)(lVar6 + 0x2c);
  while( true ) {
    if (uVar8 < uVar5) {
      plVar1 = (long *)(lVar2 + uVar7);
      in_w16 = *(uint *)(plVar1 + 1);
      lVar6 = *plVar1;
    }
    if (uVar4 == in_w16) break;
    uVar8 = uVar8 + 1;
    uVar7 = (ulong)(uint)((int)uVar7 + (int)sVar3);
    if ((long)(int)uVar5 <= (long)uVar8) {
      *param_3 = 0;
      return 0x13;
    }
  }
  *param_3 = lVar6;
  return 0;
}


