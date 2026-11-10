/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00aaf860; name: FUN_00aaf860
 */


void FUN_00aaf860(long param_1,long *param_2,undefined8 param_3)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
  FUN_00ac8d10(param_1,0);
  plVar2 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x10,8);
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_2;
  puVar1 = PTR_DAT_027175d0;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  *plVar2 = (long)(puVar1 + 0x10);
  plVar2[1] = 0;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  plVar4 = *(long **)(param_1 + 0x4b8);
  *(long **)(param_1 + 0x4b8) = plVar2;
  if (plVar4 != (long *)0x0) {
    *plVar4 = (long)(puVar1 + 0x10);
    if (plVar4[1] != 0) {
      (**(code **)(*(long *)(plVar4[1] + 0x48) + 0x18))();
      plVar4[1] = 0;
    }
    (**(code **)(**(long **)(param_1 + 0x4c0) + 0x18))
              (*(long **)(param_1 + 0x4c0),plVar4,*(undefined8 *)(param_1 + 0x4c8),
               *(undefined8 *)(param_1 + 0x4d0));
    plVar2 = *(long **)(param_1 + 0x4b8);
  }
  *(long **)(param_1 + 0x4c0) = param_2;
  *(undefined8 *)(param_1 + 0x4c8) = 0x10;
  *(undefined8 *)(param_1 + 0x4d0) = 8;
  FUN_00895ca0(plVar2,param_3);
  return;
}


