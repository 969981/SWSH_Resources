/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010d6d50; name: FUN_010d6d50
 */


undefined8 FUN_010d6d50(long param_1)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  
  uVar1 = FUN_010cca60(*(undefined8 *)(param_1 + 0x78));
  if ((((uVar1 & 1) != 0) &&
      (uVar1 = FUN_010d38e0(*(undefined8 *)(param_1 + 0x80)), (uVar1 & 1) != 0)) &&
     (uVar1 = FUN_010d2c50(*(undefined8 *)(param_1 + 0x88)), (uVar1 & 1) != 0)) {
    if ((*(long *)(param_1 + 0x68) != 0) &&
       (puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar4 != (undefined8 *)0x0)) {
      plVar2 = (long *)(**(code **)*puVar4)(puVar4);
      lVar3 = FUN_010c8950();
      for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
        if (plVar2 == (long *)lVar3) {
          uVar1 = FUN_010c6ee0(puVar4 + -10);
          if ((uVar1 & 1) == 0) {
            return 0;
          }
          goto LAB_010d6dd0;
        }
      }
    }
    uVar1 = FUN_010c6ee0(0);
    if ((uVar1 & 1) != 0) {
LAB_010d6dd0:
      FUN_010d2c70(*(undefined8 *)(param_1 + 0x88));
      *(undefined8 *)(param_1 + 0x9c) = 1;
    }
  }
  return 0;
}


