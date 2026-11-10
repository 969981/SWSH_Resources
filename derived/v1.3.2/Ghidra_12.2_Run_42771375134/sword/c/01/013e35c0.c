/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013e35c0; name: FUN_013e35c0
 */


void FUN_013e35c0(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  lVar2 = *(long *)(param_1 + 8);
  lVar3 = *(long *)(param_1 + 0x10);
  uVar1 = 0;
  if (lVar3 - lVar2 != 0) {
    uVar1 = (lVar3 - lVar2) * 0x40 - 1;
  }
  uVar4 = *(long *)(param_1 + 0x40) + *(long *)(param_1 + 0x38);
  if (uVar1 == uVar4) {
    FUN_013e5f00(param_1);
    uVar4 = *(long *)(param_1 + 0x38) + *(long *)(param_1 + 0x40);
    lVar2 = *(long *)(param_1 + 8);
    lVar3 = *(long *)(param_1 + 0x10);
  }
  if (lVar3 == lVar2) {
    puVar5 = (undefined8 *)0x0;
  }
  else {
    puVar5 = (undefined8 *)
             (*(long *)(lVar2 + (uVar4 >> 6 & 0x3fffffffffffff8)) + (uVar4 & 0x1ff) * 8);
  }
  uVar6 = *(undefined8 *)(param_1 + 0x48);
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined8 *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = uVar6;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  *puVar5 = *param_2;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + 1;
  return;
}


