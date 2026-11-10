/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009caa00; name: FUN_009caa00
 */


void FUN_009caa00(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = *(long **)(param_1 + 0x58);
  uVar1 = (**(code **)(*plVar3 + 0x10))(plVar3,0x3500,0x10);
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = plVar3;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  FUN_009cafb0(uVar1,*(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x60));
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  plVar4 = *(long **)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = uVar1;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x40))(plVar4);
    (**(code **)(**(long **)(param_1 + 0x88) + 0x18))
              (*(long **)(param_1 + 0x88),plVar4,*(undefined8 *)(param_1 + 0x90),
               *(undefined8 *)(param_1 + 0x98));
  }
  *(long **)(param_1 + 0x88) = plVar3;
  *(undefined8 *)(param_1 + 0x90) = 0x3500;
  *(undefined8 *)(param_1 + 0x98) = 0x10;
  return;
}


