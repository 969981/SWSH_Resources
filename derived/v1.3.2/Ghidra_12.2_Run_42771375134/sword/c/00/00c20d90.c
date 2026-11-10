/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c20d90; name: FUN_00c20d90
 */


ulong FUN_00c20d90(long param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long local_28;
  
  if (*(char *)(param_1 + 0xc4) == '\0') {
    if ((*(long *)(param_1 + 0x68) != 0) &&
       (puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar5 != (undefined8 *)0x0)) {
      plVar1 = (long *)(**(code **)*puVar5)(puVar5);
      lVar2 = FUN_00be66c0();
      for (; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
        if (plVar1 == (long *)lVar2) {
          FUN_00c1ce80(&local_28,puVar5 + -10);
          goto joined_r0x00c20ebc;
        }
      }
    }
    FUN_00c1ce80(&local_28,0);
joined_r0x00c20ebc:
    if (local_28 != 0) {
      puVar5 = *(undefined8 **)(local_28 + 0x60);
      if (puVar5 != (undefined8 *)0x0) {
        plVar1 = (long *)(**(code **)*puVar5)(puVar5);
        lVar2 = FUN_00c22170();
        for (; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
          if (plVar1 == (long *)lVar2) {
            puVar5 = puVar5 + -10;
            goto joined_r0x00c20ecc;
          }
        }
      }
      puVar5 = (undefined8 *)0x0;
joined_r0x00c20ecc:
      if (local_28 != 0) {
        (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
        local_28 = 0;
      }
      if (((puVar5 != (undefined8 *)0x0) && (lVar2 = FUN_00bda9a0(puVar5), lVar2 != 0)) &&
         (*(uint *)(lVar2 + 0xae8) < 5)) {
        uVar4 = *(ulong *)(&DAT_0215ca20 + (long)(int)*(uint *)(lVar2 + 0xae8) * 8);
        goto LAB_00c20dac;
      }
    }
    uVar3 = 0;
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
LAB_00c20dac:
    uVar3 = 1;
  }
  return uVar4 | uVar3;
}


