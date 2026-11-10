/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006d37c0; name: FUN_006d37c0
 */


undefined8 FUN_006d37c0(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = *(long **)(*(long *)PTR_DAT_02715188 + 0x28);
  uVar2 = (**(code **)(*plVar4 + 0x10))(plVar4,0x168,8);
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar4;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  FUN_006d2e60(uVar2,param_1);
  puVar1 = PTR_DAT_02715350;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  lVar3 = *(long *)puVar1;
  *(undefined8 *)puVar1 = uVar2;
  if (lVar3 != 0) {
    FUN_006d3520(lVar3);
    (**(code **)(**(long **)(puVar1 + 8) + 0x18))
              (*(long **)(puVar1 + 8),lVar3,*(undefined8 *)(puVar1 + 0x10),
               *(undefined8 *)(puVar1 + 0x18));
    uVar2 = *(undefined8 *)puVar1;
  }
  *(long **)(puVar1 + 8) = plVar4;
  *(undefined8 *)(puVar1 + 0x10) = 0x168;
  *(undefined8 *)(puVar1 + 0x18) = 8;
  return uVar2;
}


