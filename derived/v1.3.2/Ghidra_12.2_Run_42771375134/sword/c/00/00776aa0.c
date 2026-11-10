/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00776aa0; name: FUN_00776aa0
 */


bool FUN_00776aa0(undefined4 param_1,long param_2,long param_3,long param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 local_50;
  int local_48;
  undefined4 local_44;
  long local_38;
  
  puVar2 = PTR_DAT_027161a8;
  iVar3 = 2;
  if ((param_3 != -1) && (*(long *)PTR_DAT_027161a8 != -1)) {
    if (**(char **)(param_4 + 8) == '\0') {
      iVar3 = (**(code **)(**(long **)(param_2 + 0x80) + 0x138))
                        (*(long **)(param_2 + 0x80),param_3,0,0);
    }
    else {
      FUN_0010d170(&local_38);
      puVar1 = (undefined8 *)PTR_PTR_02710928;
      if (local_38 != 0) {
        puVar1 = (undefined8 *)(local_38 + 0x60);
      }
      iVar3 = (**(code **)(**(long **)(param_2 + 0x80) + 0x10))(*(long **)(param_2 + 0x80),*puVar1);
      if (iVar3 == 0) {
        iVar3 = 2;
      }
      else {
        local_50 = *(undefined8 *)puVar2;
        local_48 = iVar3;
        local_44 = param_1;
        iVar3 = (**(code **)(**(long **)(param_2 + 0xa0) + 0x40))
                          (*(long **)(param_2 + 0xa0),param_3,&local_50,1);
      }
      if (local_38 != 0) {
        (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      }
    }
  }
  return iVar3 == 1;
}


