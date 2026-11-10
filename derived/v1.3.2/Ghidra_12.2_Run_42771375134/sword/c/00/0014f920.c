/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0014f920; name: FUN_0014f920
 */


/* WARNING: Removing unreachable block (ram,0x0014f97c) */

void FUN_0014f920(float param_1,undefined4 param_2,long param_3,long param_4,uint param_5,
                 undefined4 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  
  *(undefined8 *)(param_3 + 0x70) = 0;
  *(undefined8 *)(param_3 + 0x78) = 0;
  *(long *)(param_3 + 0x60) = param_4;
  *(undefined8 *)(param_3 + 0x98) = param_7;
  *(undefined8 *)(param_3 + 0xa0) = param_8;
  *(uint *)(param_3 + 0x68) = param_5;
  *(undefined4 *)(param_3 + 0x80) = 0;
  *(undefined4 *)(param_3 + 0x90) = 0;
  *(ulong *)(param_3 + 0x28) = (ulong)(uint)param_1;
  *(ulong *)(param_3 + 0x20) = CONCAT44(param_1,param_1);
  *(ulong *)(param_3 + 0x38) = (ulong)(uint)(param_1 * param_1);
  *(ulong *)(param_3 + 0x30) = CONCAT44(param_1 * param_1,param_1 * param_1);
  *(ulong *)(param_3 + 0x48) = CONCAT44(param_2,param_2);
  *(ulong *)(param_3 + 0x40) = CONCAT44(param_2,param_2);
  *(undefined4 *)(param_3 + 0x5c) = param_6;
  if (param_5 == 0) {
    return;
  }
  if (param_5 == 1) {
    lVar2 = 0;
    iVar1 = 0;
  }
  else {
    lVar2 = 0;
    iVar1 = 0;
    piVar3 = (int *)(param_4 + 0x70);
    do {
      lVar2 = lVar2 + 2;
      iVar1 = iVar1 + piVar3[-0x18] + *piVar3;
      piVar3 = piVar3 + 0x30;
    } while ((ulong)param_5 - ((ulong)param_5 & 1) != lVar2);
    if ((param_5 & 1) == 0) goto LAB_0014f9c0;
  }
  iVar1 = iVar1 + *(int *)(param_4 + lVar2 * 0x60 + 0x10);
LAB_0014f9c0:
  *(int *)(param_3 + 0x90) = iVar1;
  return;
}


