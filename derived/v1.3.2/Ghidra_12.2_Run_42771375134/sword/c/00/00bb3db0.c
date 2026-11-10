/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bb3db0; name: FUN_00bb3db0
 */


void FUN_00bb3db0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  
  puVar1 = PTR_DAT_02710860;
  plVar4 = *(long **)(param_1 + 8);
  uVar5 = 0;
  plVar6 = (long *)(param_1 + 0x638);
  do {
    lVar2 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
    if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = plVar4;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
    lVar3 = (**(code **)(*plVar4 + 0x10))(plVar4,0x80,8);
    if (lVar3 == 0) {
      (**(code **)(*plVar4 + 0xb8))(plVar4);
    }
    FUN_0077d050(lVar3,0x40);
    *(long **)(lVar3 + 8) = plVar4;
    *(long *)(lVar3 + 0x10) = lVar3;
    *(undefined8 *)(lVar3 + 0x18) = 0x80;
    *(undefined8 *)(lVar3 + 0x20) = 8;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    if (*plVar6 != 0) {
      (**(code **)(*(long *)(*plVar6 + 0x48) + 0x18))();
      *plVar6 = 0;
    }
    *plVar6 = lVar3;
    *(undefined4 *)(param_1 + 0x668 + uVar5 * 4) = 0;
    uVar5 = uVar5 + 1;
    plVar6 = plVar6 + 1;
  } while (uVar5 < 6);
  return;
}


