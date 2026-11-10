/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a4a4a0; name: FUN_00a4a4a0
 */


void FUN_00a4a4a0(long param_1)

{
  undefined1 uVar1;
  ulong uVar2;
  byte bVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  if ((*(long *)(param_1 + 0x68) == 0) ||
     (puVar8 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar8 == (undefined8 *)0x0)) {
    puVar9 = (undefined8 *)0x0;
    bVar3 = bRam00000000000006d0;
  }
  else {
    plVar5 = (long *)(**(code **)*puVar8)(puVar8);
    lVar6 = FUN_00a871c0();
    for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
      if (plVar5 == (long *)lVar6) {
        puVar9 = puVar8 + -10;
        bVar3 = *(byte *)(puVar8 + 0xd0);
        goto joined_r0x00a4a4fc;
      }
    }
    puVar9 = (undefined8 *)0x0;
    bVar3 = bRam00000000000006d0;
  }
joined_r0x00a4a4fc:
  uVar2 = (ulong)bVar3;
  if (1 < uVar2) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  uVar4 = FUN_008e0a00(puVar9[0xd9]);
  uVar1 = *(undefined1 *)(*(long *)(param_1 + 0x80) + 0x61d);
  uVar7 = FUN_00a37c00();
  *(uint *)(puVar9 + uVar2 * 2 + 0x8d) = uVar4 & 0xff;
  *(undefined1 *)((long)puVar9 + uVar2 * 0x10 + 0x46c) = uVar1;
  puVar9[uVar2 * 2 + 0x8e] = uVar7;
  return;
}


