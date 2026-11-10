/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004a4f60; name: FUN_004a4f60
 */


void FUN_004a4f60(undefined8 param_1,undefined8 param_2,long param_3,uint param_4,long *param_5)

{
  long *plVar1;
  bool bVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar5 = 1L << ((ulong)param_4 & 0x3f);
  uVar4 = *(ulong *)(*(long *)(param_3 + 8) + 8);
  plVar3 = (long *)FUN_004a41f0(*(long *)(param_3 + 8) + 0x10,param_5);
  plVar1 = (long *)(*(long *)(*(long *)(param_3 + 8) + 0x10) +
                   (ulong)*(uint *)(*(long *)(param_3 + 8) + 0x18) * 0x40);
  bVar2 = plVar1 != plVar3;
  if ((uVar4 & uVar5) == 0) {
    while (((((bVar2 && ((*param_5 == 0 || (*plVar3 == *param_5)))) &&
             (((int)param_5[1] == 0 || ((int)plVar3[1] == (int)param_5[1])))) &&
            (((((int)param_5[2] == 0 || ((int)plVar3[2] == (int)param_5[2])) &&
              (((char)param_5[3] == -1 || ((char)plVar3[3] == (char)param_5[3])))) &&
             (((char)param_5[4] == -1 || ((char)plVar3[4] == (char)param_5[4])))))) &&
           ((param_5[5] == 0 || (plVar3[5] == param_5[5]))))) {
      if ((plVar3[6] & uVar5) != 0) {
        (**(code **)(*(long *)plVar3[7] + 0x10))(param_1,param_2,(long *)plVar3[7],param_4);
      }
      plVar3 = plVar3 + 8;
      bVar2 = plVar1 != plVar3;
    }
  }
  else {
    while (((((bVar2 && ((*param_5 == 0 || (*plVar3 == *param_5)))) &&
             (((int)param_5[1] == 0 || ((int)plVar3[1] == (int)param_5[1])))) &&
            (((((int)param_5[2] == 0 || ((int)plVar3[2] == (int)param_5[2])) &&
              (((char)param_5[3] == -1 || ((char)plVar3[3] == (char)param_5[3])))) &&
             (((char)param_5[4] == -1 || ((char)plVar3[4] == (char)param_5[4])))))) &&
           ((param_5[5] == 0 || (plVar3[5] == param_5[5]))))) {
      (**(code **)(*(long *)plVar3[7] + 0x10))(param_1,param_2,(long *)plVar3[7],param_4);
      plVar3 = plVar3 + 8;
      bVar2 = plVar1 != plVar3;
    }
  }
  return;
}


