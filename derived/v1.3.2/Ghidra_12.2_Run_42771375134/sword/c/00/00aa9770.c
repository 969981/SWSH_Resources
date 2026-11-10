/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00aa9770; name: FUN_00aa9770
 */


void FUN_00aa9770(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  *(undefined4 *)(param_2 + 7) = 0;
  *param_2 = uVar1;
  param_2[1] = uVar2;
  param_2[4] = &DAT_01d38550;
  param_2[2] = 0;
  param_2[3] = 0xcbf29ce484222645;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[3] = param_1[3];
  param_2[4] = param_1[4];
  param_2[5] = param_1[5];
  lVar4 = param_1[6];
  if (lVar4 == 0) {
    param_2[6] = 0;
    *(undefined4 *)(param_2 + 7) = *(undefined4 *)(param_1 + 7);
    lVar4 = param_1[5];
  }
  else {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    lVar3 = param_2[6];
    param_2[6] = lVar4;
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
    }
    *(undefined4 *)(param_2 + 7) = *(undefined4 *)(param_1 + 7);
    lVar4 = param_1[5];
  }
  if (lVar4 == 0) {
    param_2[2] = param_1[2];
  }
  else {
    lVar4 = param_1[2];
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    lVar3 = param_2[2];
    param_2[2] = lVar4;
    if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00aa9848. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
      return;
    }
  }
  return;
}


