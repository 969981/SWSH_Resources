/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ebc110; name: FUN_00ebc110
 */


uint FUN_00ebc110(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long local_38;
  long local_28;
  
  FUN_016ad050(*(undefined8 *)(param_1 + 0x630));
  uVar2 = FUN_016b00a0(*(undefined8 *)(param_1 + 0x630));
  if ((uVar2 & 1) == 0) {
    uVar1 = 0;
  }
  else {
    lVar3 = *(long *)(*(long *)(param_1 + 0x610) + 0x120);
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    uVar2 = FUN_00fa9f30(lVar3);
    if ((uVar2 & 1) == 0) {
      uVar1 = 0;
    }
    else {
      lVar4 = *(long *)(*(long *)PTR_DAT_02710848 + 0x78);
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
      }
      FUN_00c58c20(&local_38,lVar4);
      if (local_38 == 0) {
        local_28 = 0;
        uVar1 = FUN_00cb4210();
      }
      else {
        FUN_00c62ba0(&local_28);
        uVar1 = FUN_00cb4210(local_28);
      }
      if (local_28 != 0) {
        (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
        local_28 = 0;
      }
      if (local_38 != 0) {
        (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
        local_38 = 0;
      }
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
      }
    }
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
    }
  }
  return uVar1 & 1;
}


