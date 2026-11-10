/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006e5870; name: FUN_006e5870
 */


void FUN_006e5870(long *param_1,long *param_2,undefined4 param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar3 = *param_2;
  *param_1 = lVar3;
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    lVar3 = *param_1;
  }
  plVar1 = (long *)PTR_DAT_02710920;
  if (lVar3 != 0) {
    plVar1 = (long *)(lVar3 + 0x58);
  }
  plVar2 = (long *)PTR_PTR_02710928;
  if (lVar3 != 0) {
    plVar2 = (long *)(lVar3 + 0x60);
  }
  lVar4 = *plVar2;
  if (lVar3 == 0) {
    param_1[1] = *plVar1;
    param_1[2] = lVar4;
    param_1[3] = 0;
    param_1[4] = 0;
  }
  else {
    lVar5 = *(long *)(lVar3 + 0x68);
    param_1[1] = *plVar1;
    param_1[2] = lVar4;
    param_1[3] = lVar5;
    param_1[4] = 0;
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
      lVar4 = param_1[4];
      param_1[4] = lVar3;
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
      }
      goto LAB_006e592c;
    }
  }
  param_1[4] = lVar3;
LAB_006e592c:
  *(undefined4 *)(param_1 + 5) = param_3;
  FUN_00110660(param_1);
  return;
}


