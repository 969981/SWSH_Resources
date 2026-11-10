/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00739320; name: FUN_00739320
 */


void FUN_00739320(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  long *plVar7;
  long local_48;
  
  plVar7 = *(long **)(param_1 + 8);
  lVar1 = *(long *)(param_1 + 0xb0);
  lVar2 = *(long *)(param_1 + 0xb8);
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = plVar7;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  lVar5 = (**(code **)(*plVar7 + 0x10))(plVar7,0x118,8);
  if (lVar5 == 0) {
    (**(code **)(*plVar7 + 0xb8))(plVar7);
  }
  FUN_007340f0(lVar5,lVar2 - lVar1 >> 3);
  *(long **)(lVar5 + 8) = plVar7;
  *(long *)(lVar5 + 0x10) = lVar5;
  *(undefined8 *)(lVar5 + 0x18) = 0x118;
  *(undefined8 *)(lVar5 + 0x20) = 8;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0xe0) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0xe0) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0xe0) = 0;
  }
  plVar7 = *(long **)(param_1 + 0xb0);
  plVar3 = *(long **)(param_1 + 0xb8);
  *(long *)(param_1 + 0xe0) = lVar5;
  if (plVar7 != plVar3) {
    iVar6 = 0;
    do {
      local_48 = *plVar7;
      if (local_48 != 0) {
        (**(code **)(*(long *)(local_48 + 0x48) + 0x10))();
      }
      FUN_00734610(lVar5,iVar6,&local_48);
      if (local_48 != 0) {
        (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
        local_48 = 0;
      }
      lVar5 = *(long *)(param_1 + 0xe0);
      plVar7 = plVar7 + 1;
      iVar6 = iVar6 + 1;
    } while (plVar3 != plVar7);
  }
  FUN_00734980(lVar5,param_2);
  return;
}


