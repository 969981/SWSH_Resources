/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01425c00; name: FUN_01425c00
 */


void FUN_01425c00(long param_1)

{
  void *__s;
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  
  puVar2 = *(undefined8 **)(param_1 + 0x670);
  *(undefined8 *)(param_1 + 0x670) = 0;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2);
    (**(code **)(**(long **)(param_1 + 0x678) + 0x18))
              (*(long **)(param_1 + 0x678),puVar2,*(undefined8 *)(param_1 + 0x680),
               *(undefined8 *)(param_1 + 0x688));
  }
  plVar3 = *(long **)(param_1 + 8);
  __s = (void *)(**(code **)(*plVar3 + 0x10))(plVar3,0x3d0,0x10);
  lVar1 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar1 + 0x80) < 0x10) {
    *(long **)(lVar1 + *(ulong *)(lVar1 + 0x80) * 8) = plVar3;
    *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + 1;
                    /* WARNING: Subroutine does not return */
    memset(__s,0,0x3d0);
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


