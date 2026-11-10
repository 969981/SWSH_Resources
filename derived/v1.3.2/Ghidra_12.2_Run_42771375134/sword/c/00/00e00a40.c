/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e00a40; name: FUN_00e00a40
 */


void FUN_00e00a40(long param_1,int *param_2)

{
  ushort uVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  float fVar5;
  
  if ((*(ushort *)((long)param_2 - (long)*param_2) < 9) ||
     (uVar4 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[4], uVar4 == 0)) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (int)*(char *)((long)param_2 + uVar4) - 1;
    if (0x1e < uVar3) {
      uVar3 = 0xffffffff;
    }
  }
  *(uint *)(param_1 + 4) = uVar3;
  fVar5 = 0.0;
  if (((10 < *(ushort *)((long)param_2 - (long)*param_2)) &&
      (uVar4 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[5], uVar4 != 0)) &&
     (uVar1 = *(ushort *)((long)param_2 + uVar4), uVar1 != 0)) {
    fVar5 = 1.0 / (float)uVar1;
  }
  *(float *)(param_1 + 8) = fVar5;
  if (*(ushort *)((long)param_2 - (long)*param_2) < 7) {
    uVar3 = 0;
  }
  else {
    uVar4 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[3];
    uVar3 = 0;
    if (uVar4 != 0) {
      uVar3 = (uint)*(byte *)((long)param_2 + uVar4);
    }
  }
  *(uint *)(param_1 + 0xc) = uVar3;
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0xd) {
    *(undefined1 *)(param_1 + 0x92) = 0;
    return;
  }
  uVar4 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[6];
  bVar2 = false;
  if (uVar4 != 0) {
    bVar2 = *(char *)((long)param_2 + uVar4) != '\0';
  }
  *(bool *)(param_1 + 0x92) = bVar2;
  return;
}


