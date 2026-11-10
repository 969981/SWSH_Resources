/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dc1400; name: FUN_00dc1400
 */


void FUN_00dc1400(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long local_38;
  
  if (param_2 != 0) {
    plVar3 = *(long **)(param_1 + 0x418);
    if (plVar3 == *(long **)(param_1 + 0x420)) {
      lVar1 = *(long *)(param_2 + 0x58);
      if (lVar1 != 0) {
        (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
        plVar3 = *(long **)(param_1 + 0x420);
      }
      local_38 = lVar1;
      if (plVar3 < *(long **)(param_1 + 0x428)) {
        uVar2 = *(undefined8 *)(param_1 + 0x430);
        lVar1 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
        if (0xf < *(ulong *)(lVar1 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar1 + *(ulong *)(lVar1 + 0x80) * 8) = uVar2;
        *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + 1;
        *plVar3 = local_38;
        *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + -1;
        *(long *)(param_1 + 0x420) = *(long *)(param_1 + 0x420) + 8;
      }
      else {
        FUN_00dc1ff0((undefined8 *)(param_1 + 0x418),&local_38);
        if (local_38 != 0) {
          (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
        }
      }
    }
    else {
      lVar1 = *(long *)(param_2 + 0x58);
      if (lVar1 != 0) {
        (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
        plVar3 = *(long **)(param_1 + 0x418);
      }
      if (*plVar3 != 0) {
        (**(code **)(*(long *)(*plVar3 + 0x48) + 0x18))();
        *plVar3 = 0;
      }
      *plVar3 = lVar1;
    }
  }
  return;
}


