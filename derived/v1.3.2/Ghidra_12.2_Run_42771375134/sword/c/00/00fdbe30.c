/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fdbe30; name: FUN_00fdbe30
 */


void FUN_00fdbe30(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  long local_28;
  
  (**(code **)(**(long **)(param_1 + 0x2c8) + 0x10))(&local_28);
  if (local_28 != 0) {
    puVar3 = *(undefined8 **)(local_28 + 0x60);
    if (puVar3 != (undefined8 *)0x0) {
      plVar1 = (long *)(**(code **)*puVar3)(puVar3);
      lVar2 = FUN_016b1f00();
      for (; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
        if (plVar1 == (long *)lVar2) {
          puVar3 = puVar3 + -10;
          goto LAB_00fdbe9c;
        }
      }
      puVar3 = (undefined8 *)0x0;
    }
LAB_00fdbe9c:
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))((long *)(local_28 + 0x48));
    if (puVar3 != (undefined8 *)0x0) {
      lVar2 = puVar3[0x3a];
      *(undefined1 *)(lVar2 + 0x28) = 0;
      *(undefined8 *)(lVar2 + 0x2c) = 0xffffffffffffffff;
      *(undefined1 *)(lVar2 + 0x6c) = 0;
      *(undefined1 *)(lVar2 + 0x70) = 0;
      *(undefined8 *)(lVar2 + 0x74) = 0xffffffffffffffff;
      *(undefined1 *)(lVar2 + 0xb4) = 0;
      *(undefined1 *)(lVar2 + 0xb8) = 0;
      *(undefined8 *)(lVar2 + 0xbc) = 0xffffffffffffffff;
      *(undefined1 *)(lVar2 + 0xfc) = 0;
      *(undefined1 *)(lVar2 + 0x100) = 0;
      *(undefined8 *)(lVar2 + 0x104) = 0xffffffffffffffff;
      *(undefined1 *)(lVar2 + 0x144) = 0;
      FUN_00fe0c10(*(undefined8 *)(*(long *)(lVar2 + 0x20) + 0x5d0));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


