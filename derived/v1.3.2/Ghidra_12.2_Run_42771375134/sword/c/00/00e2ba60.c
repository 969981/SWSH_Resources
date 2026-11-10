/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e2ba60; name: FUN_00e2ba60
 */


long FUN_00e2ba60(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long local_48;
  
  puVar1 = PTR_DAT_02710860;
  if (param_2 == 0) {
    lVar3 = 0;
  }
  else {
    plVar5 = *(long **)(param_1 + 0x48);
    lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar2 + 0x80)) {
LAB_00e2bbe0:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = plVar5;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
    lVar3 = (**(code **)(*plVar5 + 0x10))(plVar5,0x5e0,0x10);
    if (lVar3 == 0) {
      (**(code **)(*plVar5 + 0xb8))(plVar5);
    }
    FUN_00e6c7e0(lVar3,*(undefined8 *)(param_1 + 0x48),param_1 + 0x78,param_2);
    *(long **)(lVar3 + 8) = plVar5;
    *(long *)(lVar3 + 0x10) = lVar3;
    *(undefined8 *)(lVar3 + 0x18) = 0x5e0;
    *(undefined8 *)(lVar3 + 0x20) = 0x10;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
      plVar5 = *(long **)(param_1 + 0xb8);
      local_48 = lVar3;
      if (plVar5 < *(long **)(param_1 + 0xc0)) {
        uVar4 = *(undefined8 *)(param_1 + 200);
        lVar2 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
        if (0xf < *(ulong *)(lVar2 + 0x80)) goto LAB_00e2bbe0;
        *(undefined8 *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = uVar4;
        *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
        *plVar5 = local_48;
        *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
        *(long *)(param_1 + 0xb8) = *(long *)(param_1 + 0xb8) + 8;
      }
      else {
        FUN_00e1d2d0(param_1 + 0xb0,&local_48);
        if (local_48 != 0) {
          (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
        }
      }
    }
  }
  return lVar3;
}


