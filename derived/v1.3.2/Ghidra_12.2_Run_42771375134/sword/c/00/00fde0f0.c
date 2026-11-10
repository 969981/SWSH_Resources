/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fde0f0; name: FUN_00fde0f0
 */


void FUN_00fde0f0(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)(param_1 + 0x18);
  lVar4 = *param_2;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  lVar2 = *(long *)(lVar3 + 0x5d0);
  *(long *)(lVar3 + 0x5d0) = lVar4;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
  }
  lVar4 = param_2[1];
  lVar1 = param_2[2];
  lVar2 = param_2[3];
  *(long *)(lVar3 + 0x5f0) = param_2[4];
  *(long *)(lVar3 + 0x5e8) = lVar2;
  *(long *)(lVar3 + 0x5e0) = lVar1;
  *(long *)(lVar3 + 0x5d8) = lVar4;
  return;
}


