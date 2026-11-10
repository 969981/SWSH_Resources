/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a50160; name: FUN_00a50160
 */


void FUN_00a50160(long param_1)

{
  ulong uVar1;
  byte bVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  if ((*(long *)(param_1 + 0x68) == 0) ||
     (puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar6 == (undefined8 *)0x0)) {
    puVar7 = (undefined8 *)0x0;
    bVar2 = bRam0000000000000680;
  }
  else {
    plVar4 = (long *)(**(code **)*puVar6)(puVar6);
    lVar5 = FUN_00a871c0();
    for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
      if (plVar4 == (long *)lVar5) {
        puVar7 = puVar6 + -10;
        bVar2 = *(byte *)(puVar6 + 0xc6);
        goto joined_r0x00a501bc;
      }
    }
    puVar7 = (undefined8 *)0x0;
    bVar2 = bRam0000000000000680;
  }
joined_r0x00a501bc:
  uVar1 = (ulong)bVar2;
  if (1 < uVar1) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  uVar3 = FUN_008e0a00(puVar7[0xcf]);
  if (*(uint *)(puVar7 + uVar1 * 2 + 0x89) == (uVar3 & 0xff)) {
    FUN_00a3b370(*(undefined8 *)(param_1 + 0x88),puVar7 + uVar1 * 2 + 0x8a);
    return;
  }
  FUN_00a3b3f0(*(undefined8 *)(param_1 + 0x88));
  return;
}


