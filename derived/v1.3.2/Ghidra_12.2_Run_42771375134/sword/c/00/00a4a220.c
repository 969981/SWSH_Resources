/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a4a220; name: FUN_00a4a220
 */


void FUN_00a4a220(long param_1)

{
  ulong uVar1;
  byte bVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 local_28;
  
  if ((*(long *)(param_1 + 0x68) == 0) ||
     (puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar6 == (undefined8 *)0x0)) {
    puVar7 = (undefined8 *)0x0;
    bVar2 = bRam00000000000006d0;
  }
  else {
    plVar4 = (long *)(**(code **)*puVar6)(puVar6);
    lVar5 = FUN_00a871c0();
    for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
      if (plVar4 == (long *)lVar5) {
        puVar7 = puVar6 + -10;
        bVar2 = *(byte *)(puVar6 + 0xd0);
        goto joined_r0x00a4a27c;
      }
    }
    puVar7 = (undefined8 *)0x0;
    bVar2 = bRam00000000000006d0;
  }
joined_r0x00a4a27c:
  uVar1 = (ulong)bVar2;
  if (1 < uVar1) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  uVar3 = FUN_008e0a00(puVar7[0xd9]);
  lVar5 = *(long *)(param_1 + 0x80);
  if (*(uint *)(puVar7 + uVar1 * 2 + 0x8d) == (uVar3 & 0xff) &&
      *(char *)((long)puVar7 + uVar1 * 0x10 + 0x46c) == *(char *)(lVar5 + 0x61d)) {
    FUN_00a37bc0(lVar5,puVar7 + uVar1 * 2 + 0x8e,0);
    return;
  }
  local_28 = FUN_00a364e0();
  FUN_00a37bc0(lVar5,&local_28,1);
  return;
}


