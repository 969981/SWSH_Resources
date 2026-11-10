/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0122ae00; name: FUN_0122ae00
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0122ae00(undefined4 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined1 auStack_78 [12];
  undefined4 local_6c;
  long local_58;
  
  lVar1 = *(long *)(*(long *)(*(long *)PTR_DAT_02710880 + 0xb8) + 0x58);
  local_6c = param_1;
  if (lVar1 == 0) {
    if (_DAT_00000060 == 0) goto LAB_0122aea0;
  }
  else {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
    FUN_01127680(&local_58,lVar1);
    lVar2 = *(long *)(local_58 + 0x60);
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    }
    if (lVar2 == 0) {
LAB_0122aea0:
      plVar3 = *(long **)(*(long *)PTR_DAT_02710540 + 200);
      FUN_0122b4d0(auStack_78,plVar3,param_2);
      lVar1 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (0xf < *(ulong *)(lVar1 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar1 + *(ulong *)(lVar1 + 0x80) * 8) = plVar3;
      *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + 1;
      lVar1 = (**(code **)(*plVar3 + 0x10))(plVar3,0xe0,0x10);
      if (lVar1 == 0) {
        (**(code **)(*plVar3 + 0xb8))(plVar3);
      }
                    /* WARNING: Subroutine does not return */
      FUN_006e1890(lVar1);
    }
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  }
  return 0;
}


