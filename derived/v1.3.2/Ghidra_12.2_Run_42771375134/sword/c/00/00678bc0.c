/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00678bc0; name: FUN_00678bc0
 */


void FUN_00678bc0(long *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long *local_50;
  undefined *local_48;
  byte local_28;
  
  uVar2 = (**(code **)(*param_1 + 0x40))();
  FUN_005c4670(&local_50,uVar2,0);
  FUN_00676830(param_1);
  puVar1 = PTR_DAT_02713e78;
  if (local_48 != (undefined *)0x0) {
    puVar1 = local_48;
  }
  (**(code **)(*param_1 + 0x38))(param_1,puVar1);
  if ((((local_28 & 1) == 0) && (local_48 != (undefined *)0x0)) && (local_50 != (long *)0x0)) {
    (**(code **)(*local_50 + 0x48))
              (local_50,local_48,"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
  }
  return;
}


