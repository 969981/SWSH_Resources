/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005ff7b0; name: FUN_005ff7b0
 */


undefined8 FUN_005ff7b0(long param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  long lVar3;
  long *local_460;
  undefined1 *local_458;
  undefined8 local_450;
  undefined8 uStack_448;
  undefined8 local_440;
  ulong local_438;
  undefined1 local_430 [1024];
  
  FUN_005c47b0(param_1 + 0x30);
  uVar2 = FUN_005c35c0(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x60) = uVar2;
  if ((*(long *)(param_1 + 0x268) != 0) && (*(long *)(param_1 + 0x40) != 0)) {
    local_460 = *(long **)(param_1 + 0x10);
    local_458 = local_430;
    local_440 = 0x400;
    local_438 = 1;
    local_450 = 0;
    uStack_448 = 0;
    if (local_460 == (long *)0x0) {
      lVar3 = FUN_005bc740();
      if (lVar3 == 0) {
        local_460 = (long *)FUN_005bc6f0();
      }
      else {
        local_460 = (long *)FUN_005bc740();
      }
    }
    *local_458 = 0;
    FUN_005c9140(&local_460,"%s_FontCache",*(undefined8 *)(param_1 + 0x38));
    puVar1 = PTR_DAT_02713e78;
    if (local_458 != (undefined1 *)0x0) {
      puVar1 = local_458;
    }
    FUN_006317a0(*(undefined8 *)(param_1 + 0x268),puVar1);
    if ((((local_438 & 1) == 0) && (local_458 != (undefined1 *)0x0)) && (local_460 != (long *)0x0))
    {
      (**(code **)(*local_460 + 0x48))
                (local_460,local_458,"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
    }
  }
  return 1;
}


