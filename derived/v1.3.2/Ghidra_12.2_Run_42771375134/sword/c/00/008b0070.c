/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008b0070; name: FUN_008b0070
 */


void FUN_008b0070(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  
  if ((*(long *)(param_1 + 0x68) != 0) &&
     (puVar3 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar3 != (undefined8 *)0x0)) {
    plVar1 = (long *)(**(code **)*puVar3)(puVar3);
    lVar2 = FUN_00897d00();
    for (; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
      if (plVar1 == (long *)lVar2) {
        puVar3 = puVar3 + -10;
        goto LAB_008b00c4;
      }
    }
  }
  puVar3 = (undefined8 *)0x0;
LAB_008b00c4:
  FUN_008a6b70(puVar3,0xcf3668ca234588a6,1,0);
  FUN_00ffa3d0(*(undefined8 *)(param_1 + 0xa8),0);
  FUN_008c82b0(*(undefined8 *)(param_1 + 0xa0),0);
  lVar2 = *(long *)(param_1 + 0xa0);
  FUN_016b2d70(*(undefined8 *)(lVar2 + 0x688),0);
  FUN_016b2d70(*(undefined8 *)(lVar2 + 0x690),0);
  *(undefined4 *)(*(long *)(param_1 + 0xa0) + 0x810) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x7c) = 4;
  return;
}


