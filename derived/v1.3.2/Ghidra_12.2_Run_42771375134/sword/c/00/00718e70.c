/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00718e70; name: FUN_00718e70
 */


void FUN_00718e70(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR_DAT_02715a90 + 0x68;
  puVar2 = PTR_DAT_02715a90 + 0xa8;
  *param_1 = (long)(PTR_DAT_02715a90 + 0x10);
  param_1[9] = (long)puVar1;
  param_1[10] = (long)puVar2;
  if (param_1[0x81] != 0) {
    (**(code **)(*(long *)(param_1[0x81] + 0x48) + 0x18))();
    param_1[0x81] = 0;
  }
  FUN_007193a0(param_1 + 0x78);
  FUN_007193a0(param_1 + 0x72);
  FUN_007193a0(param_1 + 0x6c);
  lVar4 = param_1[0x66];
  if (lVar4 != 0) {
    lVar3 = param_1[0x67];
    if (param_1[0x67] == lVar4) {
      lVar3 = lVar4;
    }
    else {
      do {
        lVar5 = lVar3 + -0x20;
        if (*(long *)(lVar3 + -8) != 0) {
          (**(code **)(*(long *)(*(long *)(lVar3 + -8) + 0x48) + 0x18))();
          *(undefined8 *)(lVar3 + -8) = 0;
        }
        lVar3 = lVar5;
      } while (lVar4 != lVar5);
      lVar3 = param_1[0x66];
    }
    param_1[0x67] = lVar4;
    (**(code **)(*(long *)param_1[0x69] + 0x18))
              ((long *)param_1[0x69],lVar3,param_1[0x68] - lVar3,8);
  }
  FUN_007194c0(param_1 + 0x60);
  FUN_007195e0(param_1 + 0x36);
  puVar1 = PTR_DAT_02715aa8;
  lVar4 = param_1[0x32];
  param_1[0x32] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[9] = (long)(puVar1 + 0x68);
  param_1[10] = (long)(puVar1 + 0xa8);
  if (lVar4 != 0) {
    (**(code **)(*(long *)param_1[0x33] + 0x18))
              ((long *)param_1[0x33],lVar4,param_1[0x34],param_1[0x35]);
  }
  FUN_006e2420(param_1);
  return;
}


