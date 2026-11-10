/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008b6520; name: FUN_008b6520
 */


void FUN_008b6520(long param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  
  lVar2 = *(long *)(param_1 + 0x90);
  iVar1 = *(int *)(lVar2 + 0x630);
  if (iVar1 != 2) {
    if (iVar1 == 1) {
      FUN_008c12f0();
      *(undefined4 *)(param_1 + 0x7c) = 8;
      FUN_008b69d0(param_1,0);
      FUN_01038270(*(undefined8 *)(param_1 + 0x98),1);
    }
    else if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x7c) = 7;
      FUN_014ca220(*(undefined8 *)(*(long *)(param_1 + 0x98) + 0x5d8),0,
                   *(int *)(lVar2 + 0x640) * *(int *)(lVar2 + 0x648),8,0,1);
      if ((*(long *)(param_1 + 0x68) != 0) &&
         (puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar4 != (undefined8 *)0x0))
      {
        plVar3 = (long *)(**(code **)*puVar4)(puVar4);
        lVar2 = FUN_00897d00();
        for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
          if (plVar3 == (long *)lVar2) {
            puVar4 = puVar4 + -10;
            goto LAB_008b65c4;
          }
        }
      }
      puVar4 = (undefined8 *)0x0;
LAB_008b65c4:
      FUN_008a6b70(puVar4,0x5da576220eafa101,0,0);
      FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x98),0);
    }
    *(undefined4 *)(*(long *)(param_1 + 0x90) + 0x630) = 2;
  }
  return;
}


