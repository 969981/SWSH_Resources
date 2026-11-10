/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0102ec90; name: FUN_0102ec90
 */


void FUN_0102ec90(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar3 = param_1[0xc];
  puVar1 = PTR_DAT_02723868 + 0x88;
  puVar2 = PTR_DAT_02723868 + 200;
  *param_1 = (long)(PTR_DAT_02723868 + 0x10);
  param_1[0xc] = 0;
  param_1[9] = (long)puVar1;
  param_1[10] = (long)puVar2;
  if (lVar3 != 0) {
    FUN_01031870(lVar3);
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


