/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01360410; name: FUN_01360410
 */


void FUN_01360410(long param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  
  lVar2 = *(long *)(param_1 + 8);
  lVar3 = *(long *)(param_1 + 0x10);
  lVar6 = 0;
  if (lVar3 - lVar2 != 0) {
    lVar6 = (lVar3 - lVar2) * 0x20 + -1;
  }
  uVar4 = *(long *)(param_1 + 0x40) + *(long *)(param_1 + 0x38);
  if (lVar6 - uVar4 < param_2) {
    FUN_01360500(param_1,param_2 - (lVar6 - uVar4));
    uVar4 = *(long *)(param_1 + 0x38) + *(long *)(param_1 + 0x40);
    lVar2 = *(long *)(param_1 + 8);
    lVar3 = *(long *)(param_1 + 0x10);
  }
  puVar1 = PTR_DAT_02710860;
  plVar5 = (long *)(lVar2 + (uVar4 >> 5 & 0x7fffffffffffff8));
  if (lVar3 == lVar2) {
    lVar6 = 0;
  }
  else {
    lVar6 = *plVar5 + (uVar4 & 0xff) * 0x10;
  }
  while( true ) {
    if (param_2 == 0) {
      return;
    }
    uVar7 = *(undefined8 *)(param_1 + 0x48);
    lVar2 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
    if (0xf < *(ulong *)(lVar2 + 0x80)) break;
    *(undefined8 *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = uVar7;
    lVar6 = lVar6 + 0x10;
    param_2 = param_2 - 1;
    if (lVar6 - *plVar5 == 0x1000) {
      plVar5 = plVar5 + 1;
      lVar6 = *plVar5;
    }
    *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + 1;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


