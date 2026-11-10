/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e33410; name: FUN_00e33410
 */


long FUN_00e33410(long param_1,int *param_2,uint param_3,uint param_4,uint param_5)

{
  int *piVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  
  uVar2 = param_4 - 0xf;
  if (0xe < param_4 - 0xf) {
    uVar2 = param_4;
  }
  if (8 < (int)uVar2) {
    if (uVar2 - 10 < 5) {
      uVar2 = *(uint *)(&DAT_02160b70 + (long)(int)(uVar2 - 10) * 4);
    }
    else {
      uVar2 = 0;
    }
  }
  if (2 < param_3) {
    return 0;
  }
  puVar3 = (uint *)((long)param_2 +
                   (ulong)*(ushort *)((long)param_2 + ((ulong)param_3 * 2 - (long)*param_2) + 0x10))
  ;
  puVar3 = (uint *)((long)puVar3 + (ulong)uVar2 * 4 + (ulong)*puVar3 + 4);
  piVar1 = (int *)((long)puVar3 + (ulong)*puVar3);
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  puVar3 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
  puVar4 = *(uint **)(*(long *)(param_1 + 0x68) + 400);
  piVar1 = (int *)((long)puVar4 + (ulong)*puVar4);
  puVar4 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
  puVar4 = (uint *)((long)puVar4 +
                   ((long)*(short *)((long)puVar3 + (ulong)param_5 * 2 + (ulong)*puVar3 + 4) &
                   0xffffffffU) * 4 + (ulong)*puVar4 + 4);
  return (long)puVar4 + (ulong)*puVar4 + 4;
}


