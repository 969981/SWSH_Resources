/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006e2db0; name: FUN_006e2db0
 */


void FUN_006e2db0(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long local_28;
  
  *param_1 = 0;
  param_1[1] = 0;
  (**(code **)(*param_2 + 0x10))(&local_28,param_2);
  if (param_1[1] != 0) {
    (**(code **)(*(long *)(param_1[1] + 0x48) + 0x18))();
    param_1[1] = 0;
  }
  *param_1 = param_3;
  param_1[1] = local_28;
  if ((param_3 != 0) && ((*(byte *)(param_3 + 0xc) & 1) == 0)) {
    *(ulong *)(param_3 + 0x18) = param_3 + (ulong)*(uint *)(param_3 + 0x18);
    lVar1 = *param_1;
    if (*(int *)(lVar1 + 0x10) != 0) {
      uVar2 = 0;
      lVar3 = 0x10;
      do {
        *(ulong *)(*(long *)(lVar1 + 0x18) + lVar3) =
             param_3 + (ulong)*(uint *)(*(long *)(lVar1 + 0x18) + lVar3);
        lVar1 = *param_1;
        uVar2 = uVar2 + 1;
        lVar3 = lVar3 + 0x18;
      } while (uVar2 < *(uint *)(lVar1 + 0x10));
    }
    *(ulong *)(lVar1 + 0x20) = param_3 + (ulong)*(uint *)(lVar1 + 0x20);
    lVar1 = *param_1;
    if (*(int *)(lVar1 + 0x14) != 0) {
      uVar2 = 0;
      lVar3 = 0x28;
      do {
        *(ulong *)(lVar1 + lVar3) = param_3 + (ulong)*(uint *)(lVar1 + lVar3);
        lVar1 = *param_1;
        uVar2 = uVar2 + 1;
        lVar3 = lVar3 + 8;
      } while (uVar2 < *(uint *)(lVar1 + 0x14));
    }
    *(uint *)(lVar1 + 0xc) = *(uint *)(lVar1 + 0xc) | 1;
  }
  return;
}


