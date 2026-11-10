/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e8d400; name: FUN_00e8d400
 */


uint FUN_00e8d400(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long local_40;
  long local_38;
  
  lVar3 = *(long *)(*(long *)PTR_DAT_02710848 + 0x78);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  FUN_00c58c20(&local_40,lVar3);
  FUN_00c62ba0(&local_38,local_40);
  uVar2 = FUN_00cbf6a0(*(undefined8 *)(&DAT_00001588 + local_38));
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
    local_40 = 0;
  }
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  uVar1 = FUN_00cc00e0(uVar2,param_1,param_2);
  return uVar1 & 1;
}


