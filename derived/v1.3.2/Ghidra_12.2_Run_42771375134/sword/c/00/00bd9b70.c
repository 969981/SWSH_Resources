/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bd9b70; name: FUN_00bd9b70
 */


undefined8 FUN_00bd9b70(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  
  plVar4 = *(long **)(param_1 + 0x68);
  lVar1 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar1 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar1 + *(ulong *)(lVar1 + 0x80) * 8) = plVar4;
  *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + 1;
  lVar2 = (**(code **)(*plVar4 + 0x10))(plVar4,400,0x10);
  if (lVar2 == 0) {
    (**(code **)(*plVar4 + 0xb8))(plVar4);
  }
  FUN_009fe380(lVar2,*(undefined8 *)(param_1 + 0x68));
  *(long **)(lVar2 + 8) = plVar4;
  *(long *)(lVar2 + 0x10) = lVar2;
  *(undefined8 *)(lVar2 + 0x18) = 400;
  *(undefined8 *)(lVar2 + 0x20) = 0x10;
  *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + -1;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x1d0) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x1d0) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x1d0) = 0;
  }
  *(long *)(param_1 + 0x1d0) = lVar2;
  if (param_3 == 0x644) {
    uVar3 = FUN_009fe850(lVar2,param_2);
    return uVar3;
  }
  if (param_3 == 0x2300) {
    uVar3 = FUN_009fe790(lVar2,param_2);
    return uVar3;
  }
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  }
  return 0;
}


