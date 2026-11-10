/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0070b790; name: FUN_0070b790
 */


void FUN_0070b790(long param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long local_28;
  
  (**(code **)(*param_2 + 0x10))(&local_28,param_2);
  plVar2 = *(long **)(param_1 + 0x2c0);
  if (plVar2 < *(long **)(param_1 + 0x2c8)) {
    uVar3 = *(undefined8 *)(param_1 + 0x2d0);
    lVar1 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar1 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar1 + *(ulong *)(lVar1 + 0x80) * 8) = uVar3;
    *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + 1;
    *plVar2 = local_28;
    *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + -1;
    *(long *)(param_1 + 0x2c0) = *(long *)(param_1 + 0x2c0) + 8;
  }
  else {
    FUN_0070bb30(param_1 + 0x2b8,&local_28);
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    }
  }
  return;
}


