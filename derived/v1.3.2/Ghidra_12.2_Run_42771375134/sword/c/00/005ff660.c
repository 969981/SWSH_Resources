/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005ff660; name: FUN_005ff660
 */


void FUN_005ff660(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined *puVar3;
  
  puVar3 = PTR_DAT_027144d8 + 0x10;
  puVar1 = PTR_DAT_027144d8 + 0x100;
  *param_1 = (long)puVar3;
  param_1[1] = (long)puVar1;
  if (param_1[5] != 0) {
    FUN_005f96f0(param_1[4],param_1);
    puVar3 = (undefined *)*param_1;
    param_1[5] = 0;
  }
  (**(code **)(puVar3 + 0x98))(param_1);
  FUN_00696510(param_1 + 0x4e);
  FUN_006000c0(param_1 + 0xf);
  if ((*(byte *)(param_1 + 0xb) & 1) == 0) {
    if (param_1[7] != 0) {
      plVar2 = (long *)param_1[6];
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x48))
                  (plVar2,param_1[7],"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
      }
      param_1[7] = 0;
    }
    param_1[7] = 0;
  }
  FUN_005bf750(param_1 + 2);
  return;
}


