/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008b79c0; name: FUN_008b79c0
 */


void FUN_008b79c0(long param_1)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  uint uVar4;
  undefined8 *puVar5;
  
  uVar1 = FUN_010384a0(*(undefined8 *)(param_1 + 0x90));
  if ((uVar1 & 1) != 0) {
    if (*(char *)(param_1 + 0x99) == '\0') {
      uVar4 = (uint)*(byte *)(param_1 + 0x9a);
      if (*(byte *)(param_1 + 0x9a) != 0) {
        FUN_014c9660(*(undefined8 *)(*(long *)(param_1 + 0x90) + 0x5d8),0,
                     *(undefined4 *)(param_1 + 0x9c));
        if ((*(long *)(param_1 + 0x68) != 0) &&
           (puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar5 != (undefined8 *)0x0
           )) {
          plVar2 = (long *)(**(code **)*puVar5)(puVar5);
          lVar3 = FUN_00897d00();
          for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
            if (plVar2 == (long *)lVar3) {
              puVar5 = puVar5 + -10;
              goto LAB_008b7a78;
            }
          }
        }
        puVar5 = (undefined8 *)0x0;
LAB_008b7a78:
        FUN_008a6b70(puVar5,0x2f9455e06cb9b5b0,0,0);
        *(undefined4 *)(param_1 + 0x7c) = 8;
        return;
      }
    }
    else {
      uVar4 = 7;
    }
    *(undefined4 *)(param_1 + 0x7c) = 0xb;
    *(uint *)(param_1 + 0x80) = uVar4;
    FUN_01038270(*(undefined8 *)(param_1 + 0x90),1);
    *(undefined4 *)(*(long *)(param_1 + 0x88) + 0x810) = 0xffffffff;
  }
  return;
}


