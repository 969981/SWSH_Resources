/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008b3230; name: FUN_008b3230
 */


void FUN_008b3230(long param_1)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  
  uVar1 = FUN_010384a0(*(undefined8 *)(param_1 + 0x90));
  if ((uVar1 & 1) != 0) {
    puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
    plVar2 = (long *)(**(code **)*puVar4)(puVar4);
    lVar3 = FUN_00897d00();
    for (; plVar2 != (long *)lVar3; plVar2 = (long *)*plVar2) {
    }
    lVar3 = puVar4[0xb];
    if (*(char *)(lVar3 + 0x2b) == '\0') {
      *(undefined4 *)(param_1 + 0x7c) = 0;
      FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x88),0);
      FUN_00ffa160(*(undefined8 *)(param_1 + 0x88),1,1);
      *(undefined4 *)(*(long *)(param_1 + 0x88) + 0x5cc) = 0;
      FUN_008c8230(*(undefined8 *)(param_1 + 0x88),(ulong)*(uint *)(lVar3 + 0x1c) << 0x20);
      if ((*(long *)(param_1 + 0x68) != 0) &&
         (puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar4 != (undefined8 *)0x0))
      {
        plVar2 = (long *)(**(code **)*puVar4)(puVar4);
        lVar3 = FUN_00897d00();
        for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
          if (plVar2 == (long *)lVar3) {
            puVar4 = puVar4 + -10;
            goto LAB_008b3324;
          }
        }
      }
      puVar4 = (undefined8 *)0x0;
LAB_008b3324:
      FUN_008a6b70(puVar4,0xcf3667ca234586f3,*(char *)(param_1 + 0x99) == '\0',0);
      *(undefined1 *)(param_1 + 0x99) = 1;
      FUN_008c4b10(*(undefined8 *)(param_1 + 0x88),1);
      return;
    }
    *(undefined8 *)(param_1 + 0x7c) = 4;
  }
  return;
}


