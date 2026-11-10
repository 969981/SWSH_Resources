/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014fde70; name: FUN_014fde70
 */


void FUN_014fde70(long *param_1,long param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long local_48;
  undefined8 local_38;
  
  local_38 = param_4;
  local_48 = (**(code **)(**(long **)(param_2 + 0x38) + 0x10))(*(long **)(param_2 + 0x38),param_4);
  if (local_48 == 0) {
    lVar2 = 0;
  }
  else {
    if ((*(long **)(param_2 + 0x58) != (long *)0x0) &&
       (*(long *)(param_2 + 0x10) == *(long *)(param_2 + 0x18))) {
      (**(code **)(**(long **)(param_2 + 0x58) + 0x10))();
    }
    puVar1 = *(undefined4 **)(param_2 + 0x10);
    if (puVar1 < *(undefined4 **)(param_2 + 0x18)) {
      uVar3 = *(undefined8 *)(param_2 + 0x20);
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = uVar3;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
      *puVar1 = *param_3;
      *(long *)(puVar1 + 2) = local_48;
      *(undefined8 *)(puVar1 + 4) = local_38;
      *(undefined8 *)(puVar1 + 6) = local_38;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
      lVar2 = *(long *)(param_2 + 0x10) + 0x20;
      *(long *)(param_2 + 0x10) = lVar2;
    }
    else {
      FUN_014fdf90(param_2 + 8,param_3,&local_48,&local_38);
      lVar2 = *(long *)(param_2 + 0x10);
    }
    lVar2 = lVar2 + -0x20;
  }
  *param_1 = lVar2;
  return;
}


