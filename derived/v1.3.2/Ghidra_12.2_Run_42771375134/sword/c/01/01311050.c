/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01311050; name: FUN_01311050
 */


void FUN_01311050(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  
  puVar1 = PTR_DAT_02727e90 + 0x78;
  puVar2 = PTR_DAT_02727e90 + 0xb8;
  *param_1 = (long)(PTR_DAT_02727e90 + 0x10);
  param_1[9] = (long)puVar1;
  param_1[10] = (long)puVar2;
  if (param_1[0x13] != 0) {
    (**(code **)(*(long *)(param_1[0x13] + 0x48) + 0x18))();
    param_1[0x13] = 0;
  }
  lVar5 = param_1[0xc];
  if (lVar5 != 0) {
    lVar3 = param_1[0xd];
    if (param_1[0xd] == lVar5) {
      lVar3 = lVar5;
    }
    else {
      do {
        pcVar4 = *(code **)(lVar3 + -0x78);
        lVar6 = lVar3 + -0x90;
        if (pcVar4 != (code *)0x0) {
          *(undefined8 *)(lVar3 + -0x70) = 0;
          *(undefined8 *)(lVar3 + -0x68) = 0;
          *(undefined8 *)(lVar3 + -0x80) = 0;
          *(undefined8 *)(lVar3 + -0x78) = 0;
          (*pcVar4)(lVar3 + -0x60);
        }
        lVar3 = lVar6;
      } while (lVar5 != lVar6);
      lVar3 = param_1[0xc];
    }
    param_1[0xd] = lVar5;
    (**(code **)(*(long *)param_1[0xf] + 0x18))
              ((long *)param_1[0xf],lVar3,param_1[0xe] - lVar3,0x10);
  }
  puVar1 = PTR_DAT_027152a8 + 0x50;
  puVar2 = PTR_DAT_027152a8 + 0x90;
  *param_1 = (long)(PTR_DAT_027152a8 + 0x10);
  param_1[9] = (long)puVar1;
  param_1[10] = (long)puVar2;
  if (param_1[0xb] != 0) {
    (**(code **)(*(long *)(param_1[0xb] + 0x48) + 0x18))();
    param_1[0xb] = 0;
  }
  return;
}


