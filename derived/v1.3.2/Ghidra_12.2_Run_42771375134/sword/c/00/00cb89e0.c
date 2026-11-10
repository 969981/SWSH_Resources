/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cb89e0; name: FUN_00cb89e0
 */


void FUN_00cb89e0(long param_1,long param_2)

{
  long lVar1;
  void *__s;
  long *plVar2;
  long lVar3;
  
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x18);
  lVar3 = *(long *)(param_2 + 0x20);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  lVar1 = *(long *)(param_1 + 0x80);
  *(long *)(param_1 + 0x80) = lVar3;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x28);
  plVar2 = *(long **)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x30);
  __s = (void *)(**(code **)(*plVar2 + 0x10))(plVar2,0x110,0x10);
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar3 + 0x80) < 0x10) {
    *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar2;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
                    /* WARNING: Subroutine does not return */
    memset(__s,0,0x110);
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


