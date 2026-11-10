/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e38a70; name: FUN_00e38a70
 */


void FUN_00e38a70(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long local_38;
  
  lVar2 = *(long *)(param_1 + 0x448);
  for (lVar1 = *(long *)(param_1 + 0x440); lVar1 != lVar2; lVar1 = lVar1 + 0x210) {
    if ((*(long *)(lVar1 + 0x108) != 0) && (*(char *)(*(long *)(lVar1 + 0x108) + 0x170) != '\0')) {
      FUN_0074c320(*(undefined8 *)(param_1 + 0x3b8),lVar1 + 0x100,param_2);
    }
  }
  lVar1 = *(long *)(*(long *)PTR_DAT_02710848 + 0x88);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  local_38 = *(long *)(param_1 + 0x3b8);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x10))();
  }
  FUN_01067490(lVar1,&local_38);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  }
  return;
}


