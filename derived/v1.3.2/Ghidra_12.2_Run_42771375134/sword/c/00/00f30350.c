/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f30350; name: FUN_00f30350
 */


long FUN_00f30350(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long local_40;
  long local_38;
  
  if (param_2 == 0) {
    lVar2 = 0;
  }
  else {
    local_38 = param_2;
    lVar2 = FUN_00f305f0(&local_40,*(undefined8 *)(param_1 + 0x48),(undefined8 *)(param_1 + 0x48),
                         param_1 + 0x78,&local_38);
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
      plVar1 = *(long **)(param_1 + 0xb8);
      local_40 = lVar2;
      if (plVar1 < *(long **)(param_1 + 0xc0)) {
        uVar4 = *(undefined8 *)(param_1 + 200);
        lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
        if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = uVar4;
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
        *plVar1 = local_40;
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
        *(long *)(param_1 + 0xb8) = *(long *)(param_1 + 0xb8) + 8;
      }
      else {
        FUN_00e1d2d0(param_1 + 0xb0,&local_40);
        if (local_40 != 0) {
          (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
        }
      }
    }
  }
  return lVar2;
}


