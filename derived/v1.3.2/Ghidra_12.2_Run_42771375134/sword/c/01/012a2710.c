/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012a2710; name: FUN_012a2710
 */


void FUN_012a2710(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  long local_38;
  
  FUN_012a3260(&local_38,*(undefined8 *)(param_1 + 0x98));
  plVar3 = *(long **)(local_38 + 0x60);
  *(long **)(param_1 + 0x60) = plVar3;
  if (*(long *)(param_1 + 0x78) == 0) {
    uVar1 = (**(code **)(*plVar3 + 0x10))(plVar3,0xc0,8);
    lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = plVar3;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
    FUN_007df0f0(uVar1,plVar3);
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
    lVar2 = *(long *)(param_1 + 0x78);
    *(undefined8 *)(param_1 + 0x78) = uVar1;
    if (lVar2 != 0) {
      FUN_007df2d0(lVar2);
      (**(code **)(**(long **)(param_1 + 0x80) + 0x18))
                (*(long **)(param_1 + 0x80),lVar2,*(undefined8 *)(param_1 + 0x88),
                 *(undefined8 *)(param_1 + 0x90));
    }
    *(long **)(param_1 + 0x80) = plVar3;
    *(undefined8 *)(param_1 + 0x88) = 0xc0;
    *(undefined8 *)(param_1 + 0x90) = 8;
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  return;
}


