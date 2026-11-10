/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0127c080; name: FUN_0127c080
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0127c080(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long local_90 [2];
  undefined1 auStack_80 [32];
  
  lVar1 = *(long *)(*(long *)(*(long *)PTR_DAT_02710880 + 0xb8) + 0x58);
  if (lVar1 == 0) {
    if (_DAT_00000060 == 0) goto LAB_0127c11c;
  }
  else {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
    FUN_01127680(local_90,lVar1);
    lVar2 = *(long *)(local_90[0] + 0x60);
    if (local_90[0] != 0) {
      (**(code **)(*(long *)(local_90[0] + 0x48) + 0x18))();
    }
    if (lVar2 == 0) {
LAB_0127c11c:
      plVar3 = *(long **)(*(long *)PTR_DAT_02710540 + 200);
      FUN_0122b4d0(auStack_80,plVar3,param_1);
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


