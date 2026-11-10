/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ac9550; name: FUN_00ac9550
 */


/* WARNING: Removing unreachable block (ram,0x00ac9694) */

void FUN_00ac9550(long param_1,long *param_2,long *param_3,undefined4 param_4,byte param_5,
                 byte param_6,byte param_7)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  long local_70;
  long local_68;
  long local_58;
  
  puVar1 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x20,8);
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = param_2;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  *puVar1 = 0;
  *(undefined4 *)(puVar1 + 1) = 0;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[2] = 0;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  plVar3 = *(long **)(param_1 + 0x498);
  *(undefined8 **)(param_1 + 0x498) = puVar1;
  if (plVar3 != (long *)0x0) {
    if (*plVar3 != 0) {
      (**(code **)(*(long *)(*plVar3 + 0x48) + 0x18))();
      *plVar3 = 0;
    }
    (**(code **)(**(long **)(param_1 + 0x4a0) + 0x18))
              (*(long **)(param_1 + 0x4a0),plVar3,*(undefined8 *)(param_1 + 0x4a8),
               *(undefined8 *)(param_1 + 0x4b0));
  }
  *(undefined8 *)(param_1 + 0x4a8) = 0x20;
  *(long **)(param_1 + 0x4a0) = param_2;
  *(undefined8 *)(param_1 + 0x4b0) = 8;
  (**(code **)(*(long *)*param_3 + 0x10))(&local_58);
  plVar3 = *(long **)(param_1 + 0x498);
  if (*plVar3 != 0) {
    (**(code **)(*(long *)(*plVar3 + 0x48) + 0x18))();
    *plVar3 = 0;
  }
  *plVar3 = local_58;
  local_58 = 0;
  *(undefined4 *)(*(long *)(param_1 + 0x498) + 8) = param_4;
  *(undefined1 *)(*(long *)(param_1 + 0x498) + 0x18) = 1;
  *(byte *)(*(long *)(param_1 + 0x498) + 0x19) = param_5 & 1;
  *(byte *)(*(long *)(param_1 + 0x498) + 0x1a) = param_6 & 1;
  *(byte *)(*(long *)(param_1 + 0x498) + 0x1b) = param_7 & 1;
  local_68 = *param_3;
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x10))();
  }
  local_70 = param_1;
  (**(code **)(*(long *)(param_1 + 0x48) + 0x10))((long *)(param_1 + 0x48));
  FUN_00a90a30(&local_68,&local_70);
  if (local_70 != 0) {
    (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
    local_70 = 0;
  }
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
  }
  return;
}


