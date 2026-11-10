/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010175b0; name: FUN_010175b0
 */


void FUN_010175b0(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  *param_1 = 0;
  param_1[1] = -0x340d631b7bddd9bb;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = (long)&DAT_01d38550;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  lVar3 = param_2[4];
  if (lVar3 == 0) {
    param_1[4] = 0;
    *(int *)(param_1 + 5) = (int)param_2[5];
    lVar3 = param_2[3];
  }
  else {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    lVar2 = param_1[4];
    param_1[4] = lVar3;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
    *(int *)(param_1 + 5) = (int)param_2[5];
    lVar3 = param_2[3];
  }
  if (lVar3 == 0) {
    *param_1 = *param_2;
  }
  else {
    lVar3 = *param_2;
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    lVar2 = *param_1;
    *param_1 = lVar3;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
  }
  param_1[6] = (long)(PTR_DAT_027164e0 + 0x10);
  lVar3 = param_2[7];
  param_1[7] = lVar3;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[9] = 0;
  if ((code *)param_2[10] != (code *)0x0) {
    (*(code *)param_2[10])(param_2 + 0xc,param_1 + 0xc);
    lVar3 = param_2[8];
    lVar2 = param_2[9];
    lVar1 = param_2[0xb];
    param_1[10] = param_2[10];
    param_1[0xb] = lVar1;
    param_1[8] = lVar3;
    param_1[9] = lVar2;
  }
  param_1[0x18] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x19] = 0;
  if ((code *)param_2[0x1a] != (code *)0x0) {
    (*(code *)param_2[0x1a])(param_2 + 0x1c,param_1 + 0x1c);
    lVar3 = param_2[0x18];
    lVar2 = param_2[0x19];
    lVar1 = param_2[0x1b];
    param_1[0x1a] = param_2[0x1a];
    param_1[0x1b] = lVar1;
    param_1[0x18] = lVar3;
    param_1[0x19] = lVar2;
  }
  param_1[6] = (long)(PTR_DAT_027164d8 + 0x10);
  *(char *)(param_1 + 0x28) = (char)param_2[0x28];
  return;
}


