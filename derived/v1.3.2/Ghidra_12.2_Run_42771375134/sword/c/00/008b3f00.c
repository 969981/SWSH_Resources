/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008b3f00; name: FUN_008b3f00
 */


void FUN_008b3f00(long param_1)

{
  short sVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  
  uVar3 = FUN_010384a0(*(undefined8 *)(param_1 + 0xb0));
  if ((uVar3 & 1) == 0) {
    return;
  }
  puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  plVar4 = (long *)(**(code **)*puVar6)(puVar6);
  lVar5 = FUN_00897d00();
  for (; plVar4 != (long *)lVar5; plVar4 = (long *)*plVar4) {
  }
  plVar4 = *(long **)(puVar6[0xb] + 0x10);
  (**(code **)(*plVar4 + 0x50))(plVar4,*(undefined4 *)(puVar6[0xb] + 0x1c));
  if (*(char *)(param_1 + 0xb8) != '\0') {
    sVar1 = FUN_008787f0();
    if (sVar1 != 0) {
      iVar2 = FUN_010386e0(*(undefined8 *)(param_1 + 0xb0));
      if (iVar2 == 0) {
        FUN_008b4300(param_1);
        if (*(char *)(param_1 + 0x80) == '\0') {
          FUN_008c9530(*(undefined8 *)(param_1 + 0xa8));
        }
        if ((*(long *)(param_1 + 0x68) != 0) &&
           (puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar6 != (undefined8 *)0x0
           )) {
          plVar4 = (long *)(**(code **)*puVar6)(puVar6);
          lVar5 = FUN_00897d00();
          for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
            if (plVar4 == (long *)lVar5) {
              puVar6 = puVar6 + -10;
              goto LAB_008b3fe4;
            }
          }
        }
        puVar6 = (undefined8 *)0x0;
LAB_008b3fe4:
        FUN_008a6b70(puVar6,0xcf39eaca23489b63,0,0);
        *(undefined1 *)(param_1 + 0xb8) = 0;
        return;
      }
      goto LAB_008b402c;
    }
    FUN_008b4300(param_1);
  }
  if (*(char *)(param_1 + 0x80) == '\0') {
    FUN_008c9530(*(undefined8 *)(param_1 + 0xa8));
  }
LAB_008b402c:
  FUN_01038270(*(undefined8 *)(param_1 + 0xb0),1);
  *(undefined4 *)(param_1 + 0x7c) = 2;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  return;
}


