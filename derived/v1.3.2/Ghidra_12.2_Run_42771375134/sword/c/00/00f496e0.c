/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f496e0; name: FUN_00f496e0
 */


undefined2 FUN_00f496e0(undefined8 param_1,int *param_2,uint param_3,undefined2 *param_4)

{
  uint *puVar1;
  int iVar2;
  ushort *puVar3;
  ulong uVar4;
  long lVar5;
  
  puVar3 = (ushort *)((long)param_2 - (long)*param_2);
  puVar1 = (uint *)((long)param_2 + (ulong)puVar3[7]);
  if (*(uint *)((long)puVar1 + (ulong)*puVar1) < param_3) {
    return 0xfe;
  }
  if (0 < (int)param_3) {
    *param_4 = *(undefined2 *)((long)puVar1 + (ulong)(param_3 - 1) * 2 + (ulong)*puVar1 + 4);
    lVar5 = -(long)*param_2;
    if (param_3 != 1) {
      uVar4 = (ulong)param_3;
      do {
        param_4 = param_4 + 1;
        puVar1 = (uint *)((long)param_2 + (ulong)*(ushort *)((long)param_2 + lVar5 + 0xe));
        iVar2 = (int)uVar4;
        uVar4 = uVar4 - 1;
        *param_4 = *(undefined2 *)((long)puVar1 + (ulong)(iVar2 - 2) * 2 + (ulong)*puVar1 + 4);
        lVar5 = -(long)*param_2;
      } while (uVar4 != 1);
    }
    puVar3 = (ushort *)((long)param_2 + lVar5);
  }
  if (*puVar3 < 0xb) {
    return 0;
  }
  if ((ulong)puVar3[5] == 0) {
    return 0;
  }
  return *(undefined2 *)((long)param_2 + (ulong)puVar3[5]);
}


