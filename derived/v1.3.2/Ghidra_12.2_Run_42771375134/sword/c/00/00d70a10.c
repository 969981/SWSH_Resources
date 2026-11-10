/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d70a10; name: FUN_00d70a10
 */


void FUN_00d70a10(undefined8 param_1,char *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long local_40;
  long local_38;
  
  lVar2 = *(long *)(*(long *)PTR_DAT_02710848 + 0x78);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  FUN_00c58c20(&local_40,lVar2);
  FUN_00c62ba0(&local_38,local_40);
  uVar1 = FUN_00cbf660(*(undefined8 *)(&DAT_00001588 + local_38));
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
    local_40 = 0;
  }
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  }
  FUN_00c979d0(uVar1,param_1,*param_2 != '\0');
  return;
}


