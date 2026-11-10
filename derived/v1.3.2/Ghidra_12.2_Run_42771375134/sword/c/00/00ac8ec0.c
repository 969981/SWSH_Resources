/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ac8ec0; name: FUN_00ac8ec0
 */


/* WARNING: Removing unreachable block (ram,0x00ac9000) */

void FUN_00ac8ec0(float param_1,float param_2,long param_3,long *param_4,long *param_5,byte param_6,
                 byte param_7,byte param_8)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  long local_78;
  long local_70;
  long local_68;
  
  puVar1 = (undefined8 *)(**(code **)(*param_4 + 0x10))(param_4,0x18,8);
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = param_4;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  *(undefined8 *)((long)puVar1 + 0xd) = 0;
  *puVar1 = 0;
  puVar1[1] = 0;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  plVar3 = *(long **)(param_3 + 0x478);
  *(undefined8 **)(param_3 + 0x478) = puVar1;
  if (plVar3 != (long *)0x0) {
    if (*plVar3 != 0) {
      (**(code **)(*(long *)(*plVar3 + 0x48) + 0x18))();
      *plVar3 = 0;
    }
    (**(code **)(**(long **)(param_3 + 0x480) + 0x18))
              (*(long **)(param_3 + 0x480),plVar3,*(undefined8 *)(param_3 + 0x488),
               *(undefined8 *)(param_3 + 0x490));
  }
  *(undefined8 *)(param_3 + 0x488) = 0x18;
  *(long **)(param_3 + 0x480) = param_4;
  *(undefined8 *)(param_3 + 0x490) = 8;
  (**(code **)(*(long *)*param_5 + 0x10))(&local_68);
  plVar3 = *(long **)(param_3 + 0x478);
  if (*plVar3 != 0) {
    (**(code **)(*(long *)(*plVar3 + 0x48) + 0x18))();
    *plVar3 = 0;
  }
  *plVar3 = local_68;
  local_68 = 0;
  *(undefined8 *)(*(long *)(param_3 + 0x478) + 8) = 0;
  *(byte *)(*(long *)(param_3 + 0x478) + 0x10) = param_6 & 1;
  *(byte *)(*(long *)(param_3 + 0x478) + 0x11) = param_7 & 1;
  *(byte *)(*(long *)(param_3 + 0x478) + 0x12) = param_8 & 1;
  *(bool *)(*(long *)(param_3 + 0x478) + 0x13) = param_1 != 0.0;
  *(bool *)(*(long *)(param_3 + 0x478) + 0x14) = param_2 != 0.0;
  local_70 = *param_5;
  if (local_70 != 0) {
    (**(code **)(*(long *)(local_70 + 0x48) + 0x10))();
  }
  local_78 = param_3;
  (**(code **)(*(long *)(param_3 + 0x48) + 0x10))((long *)(param_3 + 0x48));
  FUN_00a90a30(&local_70,&local_78);
  if (local_78 != 0) {
    (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
    local_78 = 0;
  }
  if (local_70 != 0) {
    (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
  }
  return;
}


