/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a4f470; name: FUN_00a4f470
 */


void FUN_00a4f470(long param_1)

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
    bVar2 = DAT_00000710;
  }
  else {
    plVar4 = (long *)(**(code **)*puVar6)(puVar6);
    lVar5 = FUN_00a871c0();
    for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
      if (plVar4 == (long *)lVar5) {
        puVar7 = puVar6 + -10;
        bVar2 = *(byte *)(puVar6 + 0xd8);
        goto joined_r0x00a4f4cc;
      }
    }
    puVar7 = (undefined8 *)0x0;
    bVar2 = DAT_00000710;
  }
joined_r0x00a4f4cc:
  uVar1 = (ulong)bVar2;
  if (1 < uVar1) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  uVar3 = FUN_008e0a00(puVar7[0xe1]);
  if ((*(uint *)(puVar7 + uVar1 * 2 + 0x91) == (uVar3 & 0xff)) &&
     ((uint)*(ushort *)((long)puVar7 + uVar1 * 0x10 + 0x48c) ==
      ((uint)(*(ulong *)puVar7[0xe3] >> 0xd) & 0xffff))) {
    FUN_00a4cdc0(*(undefined8 *)(param_1 + 0x80),puVar7 + uVar1 * 2 + 0x92,1);
    return;
  }
  return;
}


