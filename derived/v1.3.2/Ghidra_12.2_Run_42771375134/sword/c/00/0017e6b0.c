/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0017e6b0; name: FUN_0017e6b0
 */


void FUN_0017e6b0(undefined8 *param_1,long *param_2)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  
  if ((ulong)*(ushort *)(param_2 + 2) == 0xffff) {
    puVar3 = (undefined4 *)param_2[1];
    *(undefined4 *)param_1 = *puVar3;
    uVar2 = puVar3[2];
    *(undefined4 *)((long)param_1 + 4) = puVar3[1];
    *(undefined4 *)(param_1 + 1) = uVar2;
    return;
  }
  lVar1 = *param_2 + (ulong)*(ushort *)(param_2 + 2) * 0x20;
  uVar4 = *(undefined8 *)(lVar1 + 0x88);
  *param_1 = *(undefined8 *)(lVar1 + 0x80);
  *(int *)(param_1 + 1) = (int)uVar4;
  return;
}


