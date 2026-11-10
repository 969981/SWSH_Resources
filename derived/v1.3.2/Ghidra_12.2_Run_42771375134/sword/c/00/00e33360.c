/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e33360; name: FUN_00e33360
 */


long FUN_00e33360(long param_1,int *param_2,uint param_3)

{
  short *psVar1;
  int *piVar2;
  ushort uVar3;
  ulong uVar4;
  uint *puVar5;
  
  if ((param_3 < 0xb) && ((1 << (ulong)(param_3 & 0x1f) & 0x40cU) != 0)) {
    if (*(ushort *)((long)param_2 - (long)*param_2) < 0xf) {
LAB_00e333c8:
      uVar4 = 0;
      goto LAB_00e333cc;
    }
    uVar3 = ((ushort *)((long)param_2 - (long)*param_2))[7];
    uVar4 = (ulong)uVar3;
    if (uVar3 == 0) goto LAB_00e333cc;
  }
  else {
    if (*(ushort *)((long)param_2 - (long)*param_2) < 0xd) goto LAB_00e333c8;
    uVar3 = ((ushort *)((long)param_2 - (long)*param_2))[6];
    uVar4 = (ulong)uVar3;
    if (uVar3 == 0) {
      uVar4 = 0;
      goto LAB_00e333cc;
    }
  }
  psVar1 = (short *)((long)param_2 + uVar4);
  uVar4 = (ulong)*psVar1;
  if (*psVar1 < 0) {
    return 0;
  }
LAB_00e333cc:
  puVar5 = *(uint **)(*(long *)(param_1 + 0x68) + 400);
  piVar2 = (int *)((long)puVar5 + (ulong)*puVar5);
  puVar5 = (uint *)((long)piVar2 + (ulong)*(ushort *)((long)piVar2 + (4 - (long)*piVar2)));
  puVar5 = (uint *)((long)puVar5 + (uVar4 & 0xffffffff) * 4 + (ulong)*puVar5 + 4);
  return (long)puVar5 + (ulong)*puVar5 + 4;
}


