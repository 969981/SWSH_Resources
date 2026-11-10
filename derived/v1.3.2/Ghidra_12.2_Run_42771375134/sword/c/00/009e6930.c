/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009e6930; name: FUN_009e6930
 */


void FUN_009e6930(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_2;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  lVar1 = *(long *)(param_1 + 0x58);
  *(long *)(param_1 + 0x58) = lVar3;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  *(int *)(param_1 + 0x60) = (int)param_2[1];
  lVar3 = param_2[2];
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  lVar1 = *(long *)(param_1 + 0x68);
  *(long *)(param_1 + 0x68) = lVar3;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  lVar3 = param_2[3];
  lVar1 = param_2[5];
  *(long *)(param_1 + 0x78) = param_2[4];
  *(long *)(param_1 + 0x80) = lVar1;
  *(long *)(param_1 + 0x70) = lVar3;
  lVar3 = param_2[6];
  lVar1 = param_2[7];
  lVar2 = param_2[8];
  *(char *)(param_1 + 0xa0) = (char)param_2[9];
  *(long *)(param_1 + 0x88) = lVar3;
  *(long *)(param_1 + 0x90) = lVar1;
  *(long *)(param_1 + 0x98) = lVar2;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  return;
}


