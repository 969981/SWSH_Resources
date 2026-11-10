/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005ed830; name: FUN_005ed830
 */


void FUN_005ed830(undefined4 param_1,uint param_2,long param_3,uint param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7)

{
  long lVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined2 *puVar4;
  undefined2 uVar6;
  undefined2 uVar5;
  
  uVar5 = (undefined2)param_5;
  uVar6 = (undefined2)param_6;
  switch(param_1) {
  case 2:
    break;
  case 3:
    if ((param_2 & 1) == 0) {
      puVar4 = (undefined2 *)(param_3 + (long)(int)param_4 * 2);
      *puVar4 = uVar5;
      puVar4[1] = uVar6;
      return;
    }
    puVar3 = (undefined4 *)(param_3 + (long)(int)param_4 * 4);
    *puVar3 = param_5;
    puVar3[1] = param_6;
    return;
  case 4:
    lVar1 = (long)(int)param_4 + (long)(int)param_4 * 2;
    if ((param_2 & 1) == 0) {
      lVar2 = param_3 + (long)(int)lVar1 * 2;
      *(undefined2 *)(param_3 + lVar1 * 2) = uVar5;
      *(undefined2 *)(lVar2 + 2) = uVar6;
      *(short *)(lVar2 + 4) = (short)param_7;
      return;
    }
    lVar2 = param_3 + (long)(int)lVar1 * 4;
    *(undefined4 *)(param_3 + lVar1 * 4) = param_5;
    *(undefined4 *)(lVar2 + 4) = param_6;
    *(undefined4 *)(lVar2 + 8) = param_7;
    return;
  case 5:
    if ((param_2 & 1) != 0) {
      puVar3 = (undefined4 *)(param_3 + (long)(int)param_4 * 4);
      *puVar3 = param_5;
      puVar3[1] = param_6;
      puVar3[2] = param_7;
      return;
    }
    puVar4 = (undefined2 *)(param_3 + (long)(int)param_4 * 2);
    *puVar4 = uVar5;
    puVar4[1] = uVar6;
    puVar4[2] = (short)param_7;
  default:
    return;
  }
  if ((param_2 & 1) == 0) {
    *(undefined2 *)
     (param_3 + (-(ulong)(param_4 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_4 << 2)) = uVar5;
    *(undefined2 *)(param_3 + (long)(int)(param_4 << 1 | 1) * 2) = uVar6;
    return;
  }
  *(undefined4 *)(param_3 + (long)(int)(param_4 << 1) * 4) = param_5;
  *(undefined4 *)(param_3 + ((long)(int)param_4 << 3 | 4U)) = param_6;
  return;
}


