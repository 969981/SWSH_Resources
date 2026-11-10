/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0017e700; name: FUN_0017e700
 */


void FUN_0017e700(undefined8 *param_1,long *param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((ulong)*(ushort *)(param_2 + 2) == 0xffff) {
    lVar2 = param_2[1];
    *(undefined4 *)param_1 = *(undefined4 *)(lVar2 + 0x10);
    uVar1 = *(undefined4 *)(lVar2 + 0x18);
    *(undefined4 *)((long)param_1 + 4) = *(undefined4 *)(lVar2 + 0x14);
    *(undefined4 *)(param_1 + 1) = uVar1;
    return;
  }
  lVar2 = *param_2 + (ulong)*(ushort *)(param_2 + 2) * 0x20;
  uVar3 = *(undefined8 *)(lVar2 + 0x98);
  *param_1 = *(undefined8 *)(lVar2 + 0x90);
  *(int *)(param_1 + 1) = (int)uVar3;
  return;
}


