/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008235a0; name: FUN_008235a0
 */


void FUN_008235a0(long *param_1,long param_2,ulong param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long local_38;
  
  lVar1 = *(long *)(*(long *)(param_2 + 0x20) + param_3 * 8);
  if (lVar1 == 0) {
    *(undefined8 *)(param_4 + 0x18) = 0;
    lVar1 = 0;
    *(long *)(*(long *)(param_2 + 0x20) + param_3 * 8) = param_4;
  }
  else {
    local_38 = param_4;
    if (lVar1 == *(long *)(*(long *)(param_2 + 0x20) + (param_3 ^ 1) * 8)) {
      *(undefined8 *)(param_4 + 0x18) = 0;
      lVar1 = FUN_00823a00(*(undefined8 *)(*(long *)(param_2 + 0x20) + param_3 * 8),&local_38,
                           &local_38);
      lVar3 = *(long *)(lVar1 + 0x20);
      param_1[2] = param_3 & 0xfffffffffffffffe;
      *param_1 = lVar3;
      param_1[1] = param_2;
      goto LAB_0082366c;
    }
    uVar2 = 0;
    lVar3 = lVar1;
    do {
      lVar3 = *(long *)(lVar3 + 0x18);
      uVar2 = uVar2 + 1;
    } while (lVar3 != 0);
    if (uVar2 < 8) {
      *(long *)(param_4 + 0x18) = lVar1;
      *(long *)(*(long *)(param_2 + 0x20) + param_3 * 8) = param_4;
      *param_1 = param_4;
      param_1[1] = param_2;
      param_1[2] = param_3;
      param_1[3] = 0;
      return;
    }
    FUN_008238c0(param_2,param_3);
    *(undefined8 *)(param_4 + 0x18) = 0;
    lVar1 = FUN_00823a00(*(undefined8 *)(*(long *)(param_2 + 0x20) + param_3 * 8),&local_38,
                         &local_38);
    param_4 = *(long *)(lVar1 + 0x20);
    param_3 = param_3 & 0xfffffffffffffffe;
  }
  uVar2 = param_3;
  if (*(ulong *)(param_2 + 0x18) <= param_3) {
    uVar2 = *(ulong *)(param_2 + 0x18);
  }
  *(ulong *)(param_2 + 0x18) = uVar2;
  *param_1 = param_4;
  param_1[1] = param_2;
  param_1[2] = param_3;
LAB_0082366c:
  param_1[3] = lVar1;
  return;
}


