/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009b03d0; name: FUN_009b03d0
 */


void FUN_009b03d0(long *param_1)

{
  long lVar1;
  undefined4 *puVar2;
  long *plVar3;
  ulong *puVar4;
  long local_78;
  long *local_70;
  long local_68;
  
  lVar1 = FUN_009b7830(&local_68,param_1[0x10]);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x58) + 0x10))();
  }
  if (param_1[0x77] != 0) {
    (**(code **)(*(long *)(param_1[0x77] + 0x58) + 0x18))();
    param_1[0x77] = 0;
  }
  param_1[0x77] = lVar1;
  (**(code **)(*param_1 + 0x10))(&local_68,param_1);
  local_70 = param_1 + 0xc;
  local_78 = local_68;
  if ((local_68 != 0) && ((**(code **)(*(long *)(local_68 + 0x48) + 0x10))(), local_68 != 0)) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    local_68 = 0;
  }
  FUN_009c41f0(lVar1,&local_78);
  if (local_78 != 0) {
    (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
    local_78 = 0;
  }
  if ((char)param_1[0x28] != '\0') {
    FUN_009c41e0(param_1[0x77]);
  }
  plVar3 = (long *)param_1[0x10];
  puVar2 = (undefined4 *)(**(code **)(*plVar3 + 0x10))(plVar3,0x2730,8);
  lVar1 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  puVar4 = (ulong *)(lVar1 + 0x80);
  if (*puVar4 < 0x10) {
    *(long **)(lVar1 + *puVar4 * 8) = plVar3;
    *puVar4 = *puVar4 + 1;
    *puVar2 = 0;
    *(undefined1 *)(puVar2 + 1) = 5;
                    /* WARNING: Subroutine does not return */
    memset(puVar2 + 2,0,0x2721);
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


