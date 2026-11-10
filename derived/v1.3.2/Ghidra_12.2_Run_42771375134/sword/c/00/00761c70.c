/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00761c70; name: FUN_00761c70
 */


void FUN_00761c70(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  
  puVar1 = PTR_DAT_02716048 + 0x58;
  puVar2 = PTR_DAT_02716048 + 0x98;
  *param_1 = (long)(PTR_DAT_02716048 + 0x10);
  param_1[9] = (long)puVar1;
  param_1[10] = (long)puVar2;
  FUN_00761d60();
  lVar3 = param_1[0x14];
  param_1[0x14] = 0;
  if (lVar3 != 0) {
    (**(code **)(*(long *)param_1[0x15] + 0x18))
              ((long *)param_1[0x15],lVar3,param_1[0x16],param_1[0x17]);
  }
  puVar4 = (undefined8 *)param_1[0x10];
  param_1[0x10] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4);
    (**(code **)(*(long *)param_1[0x11] + 0x18))
              ((long *)param_1[0x11],puVar4,param_1[0x12],param_1[0x13]);
  }
  lVar3 = param_1[0xc];
  param_1[0xc] = 0;
  if (lVar3 != 0) {
    FUN_00762270(lVar3);
    (**(code **)(*(long *)param_1[0xd] + 0x18))
              ((long *)param_1[0xd],lVar3,param_1[0xe],param_1[0xf]);
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


