/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0101f660; name: FUN_0101f660
 */


void FUN_0101f660(long param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  
  plVar3 = *(long **)(param_1 + 0x47f0);
  plVar1 = (long *)(**(code **)(*plVar3 + 0x10))(plVar3,8,8);
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = plVar3;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  *plVar1 = (long)(PTR_DAT_02723710 + 0x10);
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  puVar4 = *(undefined8 **)(param_1 + 0xd0);
  *(long **)(param_1 + 0xd0) = plVar1;
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4);
    (**(code **)(**(long **)(param_1 + 0xd8) + 0x18))
              (*(long **)(param_1 + 0xd8),puVar4,*(undefined8 *)(param_1 + 0xe0),
               *(undefined8 *)(param_1 + 0xe8));
  }
  *(long **)(param_1 + 0xd8) = plVar3;
  *(undefined8 *)(param_1 + 0xe0) = 8;
  *(undefined8 *)(param_1 + 0xe8) = 8;
  return;
}


