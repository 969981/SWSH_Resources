/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e8d4e0; name: FUN_00e8d4e0
 */


void FUN_00e8d4e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long local_48;
  long local_38;
  
  lVar2 = *(long *)(*(long *)PTR_DAT_02710848 + 0x78);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  FUN_00c58c20(&local_48,lVar2);
  FUN_00c62ba0(&local_38,local_48);
  uVar1 = FUN_00cbf6a0(*(undefined8 *)(&DAT_00001588 + local_38));
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  }
  FUN_00cc0260(param_1,uVar1,param_2,param_3);
  return;
}


