/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01473b00; name: FUN_01473b00
 */


void FUN_01473b00(long param_1,uint param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 *local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  if (param_2 != 0xffffffff) {
    FUN_01473c10();
    if (6 < param_2) {
      param_2 = 7;
    }
    if ((*(long *)(param_1 + 0x4c0) == 0) ||
       (lVar1 = *(long *)(*(long *)(param_1 + 0x4c0) + 0x58), lVar1 == 0)) {
      uVar3 = 0;
    }
    else {
      plVar2 = (long *)(lVar1 + 0x48);
      (**(code **)(*plVar2 + 0x10))(plVar2);
      (**(code **)(*plVar2 + 0x18))(plVar2);
      lVar1 = *(long *)(*(long *)(param_1 + 0x4c0) + 0x58);
      if (lVar1 != 0) {
        (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
      }
      local_48 = &local_38;
      local_40 = 0x18cd1891cbc1757a;
      local_38 = 0;
      FUN_008a0cd0(lVar1,&local_48,0);
      uVar3 = local_38;
      if (lVar1 != 0) {
        (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
      }
    }
    FUN_016b4e20(uVar3,*(undefined8 *)
                        (&DAT_0216df88 + (ulong)*(uint *)(*(long *)(param_1 + 0x5d0) + 0x10) * 0x28)
                 ,param_2);
  }
  return;
}


