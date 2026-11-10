/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a503f0; name: FUN_00a503f0
 */


void FUN_00a503f0(long param_1)

{
  ulong uVar1;
  byte bVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  if ((*(long *)(param_1 + 0x68) != 0) &&
     (puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar7 != (undefined8 *)0x0)) {
    plVar4 = (long *)(**(code **)*puVar7)(puVar7);
    lVar5 = FUN_00a871c0();
    for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
      if (plVar4 == (long *)lVar5) {
        puVar8 = puVar7 + -10;
        bVar2 = *(byte *)(puVar7 + 0xc6);
        goto joined_r0x00a5051c;
      }
    }
  }
  puVar8 = (undefined8 *)0x0;
  bVar2 = bRam0000000000000680;
joined_r0x00a5051c:
  uVar1 = (ulong)bVar2;
  if (uVar1 < 2) {
    if ((*(char *)((long)puVar8 + 0x681) == '\0') ||
       (*(int *)(*(long *)(param_1 + 0x88) + 0x5d4) != 4)) {
      uVar3 = FUN_008e0a00(puVar8[0xcf]);
      uVar6 = FUN_00a3b4a0(*(undefined8 *)(param_1 + 0x88));
      *(uint *)(puVar8 + uVar1 * 2 + 0x89) = uVar3 & 0xff;
      puVar8[uVar1 * 2 + 0x8a] = uVar6;
      return;
    }
    if ((*(long *)(param_1 + 0x68) != 0) &&
       (puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar7 != (undefined8 *)0x0)) {
      plVar4 = (long *)(**(code **)*puVar7)(puVar7);
      lVar5 = FUN_00a871c0();
      for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
        if (plVar4 == (long *)lVar5) {
          puVar8 = puVar7 + -10;
          bVar2 = *(byte *)(puVar7 + 0xc6);
          goto joined_r0x00a5055c;
        }
      }
    }
    puVar8 = (undefined8 *)0x0;
    bVar2 = bRam0000000000000680;
joined_r0x00a5055c:
    if ((ulong)bVar2 < 2) {
      *(undefined4 *)(puVar8 + (ulong)bVar2 * 2 + 0x89) = 0x1f;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


