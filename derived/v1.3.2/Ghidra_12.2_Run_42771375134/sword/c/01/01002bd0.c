/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01002bd0; name: FUN_01002bd0
 */


void FUN_01002bd0(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_02723458 + 0x40;
  *param_1 = (long)(PTR_DAT_02723458 + 0x10);
  param_1[9] = (long)puVar1;
  if (param_1[0x1b2] != 0) {
    (**(code **)(*(long *)(param_1[0x1b2] + 0x48) + 0x18))();
    param_1[0x1b2] = 0;
  }
  if (param_1[0x1ae] != 0) {
    (**(code **)(*(long *)(param_1[0x1ae] + 0x48) + 0x18))();
    param_1[0x1ae] = 0;
  }
  lVar2 = param_1[0x1aa];
  param_1[0x1aa] = 0;
  if (lVar2 != 0) {
    FUN_009e3c50(lVar2);
    (**(code **)(*(long *)param_1[0x1ab] + 0x18))
              ((long *)param_1[0x1ab],lVar2,param_1[0x1ac],param_1[0x1ad]);
  }
  FUN_01003170(param_1 + 10);
  return;
}


